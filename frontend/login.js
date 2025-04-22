const container = document.getElementById('container');
        const registerbtn = document.getElementById('registerbtn');
        const loginbtn = document.getElementById('loginbtn');
        registerbtn.addEventListener("click", () => {
            container.classList.add("active");
        });

        loginbtn.addEventListener("click", () => {
            container.classList.remove("active");
        });