// Select the canvas
const canvas = document.getElementById("myGame");
const context = canvas.getContext("2d");

// Draw rectangle funtion
function drawRect(x,y,w,h,color){
    context.fillStyle = color
    context.fillRect(x,y,w,h)
}

// computer paddle
const com = {
    x: canvas.width/2 - 50/2,
    y: 10,
    width: 50,
    height: 10,
    color: "white",
    score:0
}


// User Paddle
const user = {
    x: canvas.width/2 - 50/2,
    y: canvas.height - 10 - 10,
    width: 50,
    height: 10,
    color: "white",
    score:0
}


// Center line
function centerLine(){
    context.beginPath()
    context.setLineDash([10])
    context.moveTo(0,canvas.height/2)
    context.lineTo(canvas.width,canvas.height/2)
    context.strokeStyle = "white"
    context.stroke()
}


// Draw a Circle
function drawCircle(x,y,r,color){
    context.fillStyle = color
    context.beginPath()
    context.arc(x,y,r,0,Math.PI*2,false)
    context.closePath()
    context.fill()
}

// Create a ball
const ball = {
    x: canvas.width/2,
    y: canvas.height/2,
    radius: 10,
    speed:1,
    velocityX : 5,
    velocityY : 5,
    color: "white"
}


// scores
function drawText(text,x,y,color){
    context.fillStyle = color
    context.font = "32px josefin sans"
    context.fillText(text,x,y)
}



// render the Game
function render(){

    // Make canvas
    drawRect(0,0,400,600,"black");

    // computer paddle
    drawRect(com.x,com.y,com.width,com.height,com.color)
    // user paddle
    drawRect(user.x,user.y,user.width,user.height,user.color)

    // Center line
    centerLine();

    //create a ball
    drawCircle(ball.x,ball.y,ball.radius,ball.color)

    // scores of com and user
    drawText(com.score,20,canvas.height/2 - 30)
    drawText(user.score,20,canvas.height/2  + 50)
}

// control the user paddle
canvas.addEventListener("mousemove", movepaddle);
function movepaddle(e){
    let rect = canvas.getBoundingClientRect();
     user.x = e.clientX - rect.left - user.width/2;
}

// collision detection
function collision(b,p){ //b-ball , p -player
    b.top = b.y - b.radius;
    b.bottom = b.y + b.radius;
    b.left = b.x - b.radius;
    b.right = b.x + b.radius;

    p.top = p.y;
    p.bottom = p.y + p.height;
    p.left = p.x;
    p.right = p.x + p.width;

    return p.right > b.left && p.left < b.right && b.bottom > p.top && b.top < p.bottom;
}

// reset ball
function resetBall(){
    ball.x = canvas.width/2;
    ball.y = canvas.height/2;

    ball.speed = 1;
    ball.velocityY = -ball.velocityY;
}

// Game over function
function ShowGameOver(){
    // Hide canvas
    canvas.style.display = "none";
    const can = document.getElementById("canvas");
    can.style.display = "none";
    // container
    const result = document.getElementById("result");
    result.style.display = "flex";
}

// update 
function update(){
    ball.x += ball.velocityX*ball.speed;
    ball.y += ball.velocityY*ball.speed;

    // control the computer paddle
    let computerLevel = 0.1;
    com.x += (ball.x - (com.x + com.width/2)) + computerLevel;
    if(ball.speed > 2){
        com.x += ball.x + 100;
    }

    // reflect from wall
    if(ball.x + ball.radius > canvas.width || ball.x - ball.radius < 0){
        ball.velocityX = -ball.velocityX;
    }

    // if colliosion happens
    let player = (ball.y < canvas.height/2) ? com : user;
    if(collision(ball,player)){
        ball.velocityY = -ball.velocityY;
        ball.speed += 0.1;
    }

    // points
    if(ball.y - ball.radius < 0){
        user.score++
        resetBall()
    }else if(ball.y + ball.radius > canvas.height){
        com.score++;
        resetBall()
    }

    //Game over
    if(user.score > 4 || com.score > 4){
        clearInterval(loop);
        ShowGameOver();
    }
}


//  start the game
function start(){
    update();
    render()
}

// loop
const loop = setInterval(start, 1000/50);