function classifyAudio() {
    const fileInput = document.getElementById("audio-upload");
    const resultText = document.getElementById("result-text");

    if (fileInput.files.length === 0) {
        resultText.textContent = "Please upload an audio file first.";
        resultText.style.color = "red";
        return;
    }

    const formData = new FormData();
    formData.append("file", fileInput.files[0]);

    resultText.textContent = "Analyzing...";
    resultText.style.color = "blue";

    fetch("/predict", {
        method: "POST",
        body: formData
    })
    .then(response => response.json())
    .then(data => {
        if (data.error) {
            resultText.textContent = "Error: " + data.error;
            resultText.style.color = "red";
        } else {
            resultText.textContent = "Prediction: " + data.prediction;
            resultText.style.color = "green";
        }
    })
    .catch(error => {
        console.error("Error:", error);
        resultText.textContent = "An error occurred. Please try again.";
        resultText.style.color = "red";
    });
}
