let input = document.getElementById('inputBox');
let buttons = document.querySelectorAll('button');
let string = "";
let arr = Array.from(buttons);
arr.forEach(button => {
    button.addEventListener('click',(e) => {
        if (button.classList.contains('equalBtn')) {
            button.classList.add('equalBtnClicked');
            setTimeout(() => {
                button.classList.remove('equalBtnClicked');
            }, 100);
        }
        button.classList.add('clicked');
        setTimeout(() => {
            button.classList.remove('clicked');
        }, 100);
        if(e.target.innerHTML == '='){
            string = eval(string);
            input.value = string;
        }
        else if(e.target.innerHTML == 'AC'){
            string = "";
            input.value = string;
        }
        else if(e.target.innerHTML == 'DEL'){
            string = string.substring(0,string.length-1);
            input.value = string;
        }
        else{
            string += e.target.innerHTML;
            input.value = string;
        }
    })
})