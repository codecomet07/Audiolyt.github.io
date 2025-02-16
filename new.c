:root {
    --white-color: #fff;
    --dark-color: #252525;
    --primary-color: #3b141c;
    --secondary-color: #f3961c;
    --light-pink-color: #faf4f5;
    --medium-gray-color: #ccc;

    --font-size-s: 0.9rem;
    --font-size-n: 1rem;
    --font-size-m: 1.12rem;
    --font-size-l: 1.5rem;
    --font-size-xl: 2rem;
    --font-size-xxl: 2.3rem;

    --font-weight-normal: 400;
    --font-weight-medium: 500;
    --font-weight-semibold: 600;
    --font-weight-bold: 700;

    --border-radius-s: 8px;
    --border-radius-m: 30px;
    --border-radius-circle: 50%;

    --site-max-width: 1300px;



}
 
 ul {
    list-style: none;
 }
 a {
    text-decoration: none;
 }
 button {
    cursor: pointer;
    border: none;
    background: none;
 }
 img {
    width: 100%;

 }
 header {
    background: var(--primary-color);
 }
 header .navbar {
    display: flex;
    padding: 20px;
    align-items: center;
    justify-content: space-between;
 }
 .navbar .nav-logo .logo-text {
    color: var(--primary-color);
    font-size: var(--font-size-xl);
    font-weight: var(--font-weight-semibold);
 }
 .navbar .nav-menu {
    display: flex;
    gap: 10px;
 }
 .navbar .nav-menu .nav-link {
    padding: 10px 18px;
    color: var(--white-color);
    font-size: var(--font-size-m);
    background: var(--secondary-color);
    border-radius: var(--border-radius-m);
    transition: 0.3s ease;
 }
 .navbar .nav-menu .nav-link:hover {
    color: var(--primary-color);
    background: var(--secondary-color);
 }

 




 
