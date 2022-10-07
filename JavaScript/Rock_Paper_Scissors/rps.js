//1:rock
//2:scissor
//3:paper

function rockclick() {

    let choicecontainer=document.querySelector('.choices');
    let choose=document.getElementById('choose');
    let winner=document.getElementById('heading');
    let a1 = 1;
    let a2 = 3;
    let r = a1 + (a2 - a1) * Math.random();
    let round = Math.round(r);
    console.log(round);

    choicecontainer.innerText="";
    choose.remove();
    choicecontainer.style.justifyContent="space-between";
    choicecontainer.innerHTML+=`<img src="rock_img.png" class="leftanimation">`;

    if(round==1)
    {
        choicecontainer.innerHTML+=`<img src="rock_img.png" class="rightanimation" id="rockimg">`;
        winner.innerHTML=`TIE !\n<div id="playagain"><button id="again" onClick="window.location.reload()">Play Again</button></div>`;
    }
        
    else if(round==2)
    {
        choicecontainer.innerHTML+=`<img src="scissor_img.png" class="rightanimation" id="paperimg">`;
        winner.innerHTML=`WIN !\n<div id="playagain" onClick="window.location.reload()"><button id="again">Play Again</button></div>`
    }
        
    else if(round==3)
    {
        choicecontainer.innerHTML+=`<img src="paper_img.png" class="rightanimation" id="scissorimg">`;
        winner.innerHTML=`LOSS !\n<div id="playagain"><button id="again" onClick="window.location.reload()">Play Again</button></div>`
    }
        
}





function paperclick() {

    let choicecontainer=document.querySelector('.choices');
    let choose=document.getElementById('choose');
    let winner=document.getElementById('heading');
    let a1 = 1;
    let a2 = 3;
    let r = a1 + (a2 - a1) * Math.random();
    let round = Math.round(r);
    console.log(round);

    choicecontainer.innerText="";
    choose.remove();
    choicecontainer.style.justifyContent="space-between";
    choicecontainer.innerHTML+=`<img src="paper_img.png" class="leftanimation">`;

    if(round==1)
    {
        winner.innerHTML=`WIN! \n<div id="playagain"><button id="again" onClick="window.location.reload()">Play Again</button></div>`;
        choicecontainer.innerHTML+=`<img src="rock_img.png" class="rightanimation" id="rockimg">`;
    }
        
    else if(round==2)
    {
        winner.innerHTML=`LOSS !\n<div id="playagain"><button id="again" onClick="window.location.reload()">Play Again</button></div>`
        choicecontainer.innerHTML+=`<img src="scissor_img.png" class="rightanimation" id="paperimg">`;
    }
        
    else if(round==3)
    {
        winner.innerHTML=`TIE ! \n<div id="playagain"><button id="again" onClick="window.location.reload()">Play Again</button></div>`
        choicecontainer.innerHTML+=`<img src="paper_img.png" class="rightanimation" id="scissorimg">`;
    }
        
}



function scissorclick() {

    let choicecontainer=document.querySelector('.choices');
    let choose=document.getElementById('choose');
    let winner=document.getElementById('heading');
    let a1 = 1;
    let a2 = 3;
    let r = a1 + (a2 - a1) * Math.random();
    let round = Math.round(r);
    console.log(round);

    choicecontainer.innerText="";
    choose.remove();
    choicecontainer.style.justifyContent="space-between";
    choicecontainer.innerHTML+=`<img src="scissor_img.png" class="leftanimation">`;

    if(round==1)
    {
        winner.innerHTML=`LOSS! \n<div id="playagain"><button id="again" onClick="window.location.reload()">Play Again</button></div>`;
        choicecontainer.innerHTML+=`<img src="rock_img.png" class="rightanimation" id="rockimg">`;
    }
        
    else if(round==2)
    {
        winner.innerHTML=`TIE !\n<div id="playagain"><button id="again" onClick="window.location.reload()">Play Again</button></div>`
        choicecontainer.innerHTML+=`<img src="scissor_img.png" class="rightanimation" id="paperimg">`;
    }
        
    else if(round==3)
    {
        winner.innerHTML=`WIN !\n<div id="playagain"><button id="again" onClick="window.location.reload()">Play Again</button></div>`
        choicecontainer.innerHTML+=`<img src="paper_img.png" class="rightanimation" id="scissorimg">`;
    }
        
}