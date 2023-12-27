let srcBtn = document.querySelector(".src-btn")
let srcInput = document.querySelector(".src-input")
srcBtn.addEventListener('click', function(){
    if(srcInput.classList.contains("act")){
        srcInput.classList.remove("act")
    }
    else{
        srcInput.classList.add("act")
    }
})

let bar = document.querySelector(".bar")
let navBar = document.querySelector(".navItems")

bar.addEventListener("click", function(){
    if(navBar.classList.contains("active")){
        navBar.classList.remove("active")
    }
    else{
        navBar.classList.add("active")
    }
})