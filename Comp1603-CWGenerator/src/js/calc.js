const form = document.querySelector('.sign-in-form');

form.addEventListener('submit', function (event) {
    event.preventDefault(); // prevent the form from submitting
    

    const inputs = form.querySelectorAll('input');
    const grades = [];

    for (let i = 0; i < inputs.length; i++) {
        grades.push(parseFloat(inputs[i].value));
    }

    const finalGradeElem = document.getElementById('final-grade');
    const finalGrade = calculateGrade(grades);

    finalGradeElem.textContent = `The final grade is: ${Math.floor(finalGrade)}`;
    container.classList.add("sign-up-mode");
});

function calculateGrade(grades) {
    return Math.ceil(((
        (grades[0] / 20 * 0.06) +
        (grades[1] / 25 * 0.06) +
        (grades[2] / 25 * 0.08) +
        (((grades[3] <= 26) ? grades[3] : 26) / 26 * 0.15) +
        (grades[4] / 30 * 0.15)
    ))*100);
}

