document.addEventListener("DOMContentLoaded", () => {
    const searchButton = document.getElementById('searchButton');
    const searchInput = document.getElementById('searchInput');

    searchButton.addEventListener('click', () => {
        const query = searchInput.value;
        if (query) {
            alert(`Searching for: ${query}`);
        } else {
            alert('Please enter a search term');
        }
    });
    const loginButton = document.getElementById('loginButton');
    const loginBox = document.getElementById('loginBox');

    loginButton.addEventListener('click', () => {
        loginBox.classList.toggle('active');
    });
    const viewAllSports = document.getElementById('viewAllSports');
    const viewAllElectronics = document.getElementById('viewAllElectronics');
    const viewAllFashion = document.getElementById('viewAllFashion');

    const scrollToSection = (sectionId) => {
        document.getElementById(sectionId).scrollIntoView({
            behavior: 'smooth'
        });
    };

    viewAllSports.addEventListener('click', () => {
        scrollToSection('sportsSection');
    });

    viewAllElectronics.addEventListener('click', () => {
        scrollToSection('electronicsSection');
    });

    viewAllFashion.addEventListener('click', () => {
        scrollToSection('fashionSection');
    });
});
