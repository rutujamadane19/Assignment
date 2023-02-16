import turtle
t = turtle.Pen()
colors = ["black","red","purple","pink"]
turtle.bgcolor("yellow")
for x in range(450):
    t.pencolor(colors[x%4])
    t.forward(x)
    t.left(150)
