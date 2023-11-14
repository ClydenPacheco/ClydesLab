const handleOnMouseMove = e => {
    const { currentTarget: target } = e;
    const rect = target.getBoundingClientRect();
    const x = e.clientX - rect.left;
    const y = e.clientY - rect.top;

    // Set custom properties on .todo-app
    target.style.setProperty("--mouse-x", `${x}px`);
    target.style.setProperty("--mouse-y", `${y}px`);
};

for (const card of document.querySelectorAll(".todo-app")) {
    card.addEventListener("mousemove", e => handleOnMouseMove(e));
}
const inputBox=document.getElementById("input-box");
const listContainer=document.getElementById("list-container");
inputBox.addEventListener("keydown", function(event) {
    if (event.key === "Enter") {
        addTask();
    }
});
function addTask(){
    if(inputBox.value===''){
        alert("You must add a task first!");
    }
    else{
        let li = document.createElement("li");
        let str1 = inputBox.value;
        let str2="";
        if(str1.length>35){
            for(let x=0; x < str1.length; x++){
                if(x%35==0 && x!=0){
                    str2=str2+str1[x]+"<br>";
                }
                str2+=str1[x];
            }
            li.innerHTML=str2;
        }
        else{ 
           li.innerHTML=inputBox.value;
        }
        listContainer.appendChild(li);
        let span=document.createElement("span");
        span.innerHTML="\u00d7";
        li.appendChild(span);
    }
    inputBox.value="";
    saveData()
}
listContainer.addEventListener("click",function(e){
    if(e.target.tagName==="LI"){
        e.target.classList.toggle("checked");
        saveData()
    }
    else if(e.target.tagName==="SPAN"){
        e.target.parentElement.remove();
        saveData()
    }
},false);
function saveData(){
    localStorage.setItem("data",listContainer.innerHTML);
}
function showTask(){
    listContainer.innerHTML=localStorage.getItem("data");
}
showTask();