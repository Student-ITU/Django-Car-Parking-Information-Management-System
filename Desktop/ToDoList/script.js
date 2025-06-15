const inp = document.querySelector('.input1'); 
const button = document.querySelector('.button1');
const list = document.getElementById('list-container');


button.addEventListener("click", function () {
    if (inp.value.trim() != '') { 
        const li = document.createElement("li");
        const img1 = document.createElement("img");
        img1.className = "notChecked";
        img1.src = "/Users/sameershahzad/Desktop/ToDoList/Images/Screenshot 2025-05-05 at 7.31.35 PM.png";
        img1.style.cursor = "pointer";

        const span1 = document.createElement("span");
        span1.textContent = inp.value;
        span1.style.width = "350px";
        span1.style.display = "inline-block";


        const imgCross = document.createElement("img");
        imgCross.className = "cross";
        imgCross.src = "/Users/sameershahzad/Desktop/ToDoList/Images/Screenshot 2025-05-09 at 1.34.03 PM.png";
        imgCross.style.cursor = "pointer";

        imgCross.addEventListener("click", function() {
            // span1.removeChild(imgCross);
            // li.removeChild(span1);
            // li.removeChild(img1);
            // li.removeChild(img2);
            list.removeChild(li);
        });

        img1.addEventListener("click", function () {

            const img2 = document.createElement("img");
            img2.className = "checked";
            img2.src = "/Users/sameershahzad/Desktop/ToDoList/Images/Screenshot 2025-05-08 at 12.58.56 PM.png";

            li.removeChild(img1);
            li.appendChild(img2);

            span1.style.textDecoration = "line-through";
        });

        li.appendChild(img1);
        li.appendChild(span1);
        li.appendChild(imgCross);
        list.appendChild(li);

        inp.value = ''; // Clear input
    }

    else {
        alert ("You must write something");
    }
});
