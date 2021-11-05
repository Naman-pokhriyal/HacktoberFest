import turtle

a_wins = False
b_wins = False

# Set up the screen
turtle.Screen()
wn = turtle.Screen()
wn.title("Ping Pong game by Timothy")
wn.bgcolor("black")
wn.setup(width=800, height=600)
wn.tracer(0)

# Score
score_a = 0
score_b = 0
score_lim = 10
switch = True

# Paddle A
paddle_a = turtle.Turtle()
paddle_a.speed(0)
paddle_a.color("white")
paddle_a.shape("square")
paddle_a.penup()
paddle_a.goto(-350, 0)
paddle_a.shapesize(stretch_wid=5, stretch_len=1)

# Paddle B
paddle_b = turtle.Turtle()
paddle_b.speed(0)
paddle_b.color("white")
paddle_b.shape("square")
paddle_b.penup()
paddle_b.goto(350, 0)
paddle_b.shapesize(stretch_wid=5, stretch_len=1)

paddle_a_speed = 20
paddle_b_speed = 20

# Ball
ball = turtle.Turtle()
ball.speed(0)
ball.shape("circle")
ball.color("white")
ball.penup()
ball.goto(0, 0)
ball.dy = 0.4
ball.dx = 0.4

# Pen
pen = turtle.Turtle()
pen.speed(0)
pen.penup()
pen.color("white")
pen.hideturtle()
pen.goto(0, 260)
pen.write("Player A: 0  Player B: 0", align="center", font=("Courier", 24, "normal"))

# Win
win = turtle.Turtle()
win.speed(0)
win.penup()
win.color("white")
win.hideturtle()
win.goto(0, 0)


# Function
def paddle_a_up():
    y = paddle_a.ycor()
    y += paddle_a_speed
    paddle_a.sety(y)


def paddle_a_down():
    y = paddle_a.ycor()
    y -= paddle_a_speed
    paddle_a.sety(y)


def paddle_b_up():
    y = paddle_b.ycor()
    y += paddle_b_speed
    paddle_b.sety(y)


def paddle_b_down():
    y = paddle_b.ycor()
    y -= paddle_b_speed
    paddle_b.sety(y)


turtle.listen()
turtle.onkey(paddle_a_up, "w")
turtle.onkey(paddle_a_down, "s")
turtle.onkey(paddle_b_up, "Up")
turtle.onkey(paddle_b_down, "Down")

# Main game loop
while True:
    wn.update()

    # Move the ball
    ball.setx(ball.xcor() + ball.dx)
    ball.sety(ball.ycor() + ball.dy)

    # Border
    if ball.ycor() > 290:
        ball.sety(290)
        ball.dy *= -1
    elif ball.ycor() < -290:
        ball.sety(-290)
        ball.dy *= -1
    elif ball.xcor() > 390:
        ball.goto(0, 0)
        ball.dx *= -1
        score_a += 1
    elif ball.xcor() < -390:
        ball.goto(0, 0)
        ball.dx *= -1
        score_b += 1

    # Paddle
    if 340 < ball.xcor() < 350 and paddle_b.ycor() + 40 > ball.ycor() > paddle_b.ycor() - 40:
        ball.setx(340)
        ball.dx *= -1
    if -340 > ball.xcor() > -350 and paddle_a.ycor() + 40 > ball.ycor() > paddle_a.ycor() - 40:
        ball.setx(-340)
        ball.dx *= -1

    pen.clear()
    pen.write(f"Player A: {score_a}  Player B: {score_b}", align="center", font=("Courier", 24, "normal"))

    if score_a == score_lim:
        turtle.clearscreen()
        a_wins = True
        break

    elif score_b == score_lim:
        turtle.clearscreen()
        b_wins = True
        break


while True:
    if a_wins:
        wn.bgcolor("black")
        win.write("Player A wins", align="center", font=("Courier", 50, "normal"))
    elif b_wins:
        wn.bgcolor("black")
        win.write("Player B wins", align="center", font=("Courier", 50, "normal"))
