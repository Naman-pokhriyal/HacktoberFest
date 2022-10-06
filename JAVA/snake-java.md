
```java
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Point;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import javax.swing.JFrame;
import javax.swing.Timer;
public class SnakeGame extends JFrame implements ActionListener, KeyListener{
	List<Point> snakePoints = new ArrayList<Point>();
	final static int width=500, height = 500, boxSize=5;
	static int direction =1;
	final static int LEFT = 1, RIGHT=2, TOP = 3, BOTTOM = 4;
	//1 - LEFT
	//2 - RIGHT
	//3 - TOP
	//4 - BOTTOM
	Timer timer;
	Point food = new Point();
	public SnakeGame(){
		addKeyListener(this);
		timer = new Timer(50, this);
		timer.setInitialDelay(20);
		timer.start();
		Point point  = new Point((width/boxSize)/2, (height/boxSize)/2);
		snakePoints.add(point);
		getNewFoodLocation();
	}
	@Override
	public void paint(Graphics g) {
		Graphics2D g2D = (Graphics2D)g;
		g.clearRect(0,  0, width, height);
		g2D.setColor(Color.BLACK);
		String intScore="0";
		g.drawString("Score: " + intScore, 10, 10);
		logic();
		drawSnake(g2D);
		drawFood(g2D);
	}
	private void drawSnake(Graphics2D g2d) {
		g2d.setColor(Color.BLUE);
		for(Point pt: snakePoints) {
			g2d.fillRect(pt.x*boxSize, pt.y*boxSize, boxSize, boxSize);
		}
		
	}
	private void drawFood(Graphics2D g2d) {
		g2d.setColor(Color.RED);
		g2d.fillRect(food.x*boxSize, food.y*boxSize, boxSize, boxSize);
	}
	private void logic() {
		Point head = snakePoints.get(0);
		if(food.x  == head.x && food.y == head.y) {
			getNewFoodLocation();
			Point lastPoint = snakePoints.get(snakePoints.size()-1);
			snakePoints.add(new Point(lastPoint.x, lastPoint.y));
		}
		moveSnake();
	}
	private void moveSnake() {
		Point head = snakePoints.get(0);
		Point pt = new Point(head.x, head.y);
		int xMovement = 1;
		int yMovement = 0;
		switch(direction) {
			case LEFT: xMovement = -1; yMovement =  0;break;
			case RIGHT: xMovement =  1; yMovement =  0;break;
			case TOP: xMovement =  0; yMovement = -1;break;
			case BOTTOM: xMovement =  0; yMovement =  1;break;
			default:
				xMovement =yMovement = 0;break;
		}
		pt.setLocation(pt.x+xMovement, pt.y+yMovement);
		snakePoints.add(0, pt);
		snakePoints.remove(snakePoints.size()-1);
		
		handleCrossBorder();		
	}
	private void handleCrossBorder() {
		
		Point head = snakePoints.get(0);
		double x = head.getX();
		double y = head.getY();
		
		if(x>width/boxSize && direction == RIGHT) {
			x = 0;
		}
		if(x<0 && direction == LEFT) {
			x = width/boxSize;
		}
		if(y>height/boxSize &&  direction == BOTTOM) {
			y = 0;
		}
		if(y<0 &&  direction == TOP) {
			y = height/boxSize;
		}
		head.setLocation(x, y);
	}
	private void getNewFoodLocation() {
		Random rand = new Random();
		int delta =boxSize*2;
		food.setLocation(rand.nextInt(width/boxSize-2*delta)+delta, rand.nextInt(height/boxSize-2*delta)+delta);
		
	}
	public static void main(String[] args) {
		SnakeGame frame = new SnakeGame();
		frame.setSize(width, height);
		frame.setVisible(true);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
 
	@Override
	public void keyTyped(KeyEvent e) {}
 
	@Override
	public void keyPressed(KeyEvent e) {
		switch(e.getKeyCode()) {
			case KeyEvent.VK_UP:
				if(direction!=4) {
					direction=3;	
				}
				break;		
			case KeyEvent.VK_DOWN:
				if(direction!=3) {
					direction=4;	
				}; break;
			case KeyEvent.VK_LEFT:
				direction=(direction!=2)?1:direction; break;
			case KeyEvent.VK_RIGHT:
				direction=(direction!=1)?2:direction; break;
			case KeyEvent.VK_P:
				direction=0; break;
				
		}
	}
 
	@Override
	public void keyReleased(KeyEvent e) {}
 
	@Override
	public void actionPerformed(ActionEvent e) {
		repaint();
	}
 
}
```
![snake](https://github.com/arkapg211002/hfj2022/blob/Issue-snake-java/JAVA/2022-10-06.png)
