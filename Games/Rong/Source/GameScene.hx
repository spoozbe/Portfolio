package ;
import openfl.geom.Rectangle;
/**
 * ...
 * @author Kevin Venables
 */
class GameScene extends Scene
{
	var background : GameObject;
	var ball : Ball;

	public function new(game : Game) 
	{
		super(game);
		trace("game start");
		ball = new Ball(game);
		background = new GameObject(game, "assets/background.png", new Rectangle(0, 0, 800, 400));
		objects.add(background);
		objects.add(new Paddle(game, ball)); //player
		objects.add(new Paddle(game, ball, true));  //AI
		objects.add(ball);
		
	}
	
}