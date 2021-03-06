package ;
import openfl.display.Tilesheet;
import openfl.display.Graphics;
import openfl.Assets;
import openfl.geom.Rectangle;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;
import openfl.Lib;

/**
 * ...
 * @author Kevin Venables
 */
class Paddle extends GameObject
{
	private var ball : Ball;
	public var keyState : Int;
	var isAI : Bool;
	var velocity : Float = 3;
	public function new(game : Game, ball : Ball, isAI : Bool = false)
	//public function new(game : Game, isAI : Bool = false) 
	{	
		this.ball = ball;
		if (isAI)
		{
			this.isAI = isAI;
			super(game, "assets/paddle.png", new Rectangle(0, 0, 10, 50),  new Vector2(790, 0));
		}
		

		else
		{
			super(game, "assets/paddle.png", new Rectangle(0, 0, 10, 50),  new Vector2(0, 0));
			keyState = 0;
			Lib.current.stage.addEventListener(KeyboardEvent.KEY_DOWN, playerControlDown);
			Lib.current.stage.addEventListener(KeyboardEvent.KEY_UP, playerControlUp);
		}
		
		
	}
	
	override public function update(delta : Int):Void 
	{
		super.update(delta);

		if (isAI)
		{
			//impossible, but w/e
			if (ball.velocity.x > 0)
			{
				if (ball.velocity.y > 0)
					pos.y += velocity;
				
				else
					pos.y -= velocity;
			}
				
		}
		else //player control
		{
			pos.y += (velocity * keyState);
		}
		
		//upper and lower bounds
		if (pos.y < 10)
		{
			pos.y = 10;
		}
		if (pos.y > 340)
		{
				pos.y = 340;
		}
		rect.y = pos.y;
		
		//ball collision
		
		if (rect.intersects(ball.rect))
		{
			ball.velocity.x *= -1;
		}
		
		
	}
	
	public function playerControlDown(e : KeyboardEvent) : Void
	{
		Lib.trace("Key down");
		if (e.keyCode == Keyboard.UP)
		{
			keyState = -1;
		}
		
		if (e.keyCode == Keyboard.DOWN)
		{
			keyState = 1;
		}
	}
	
	public function playerControlUp(e : KeyboardEvent) : Void
	{
		if (e.keyCode == Keyboard.UP || e.keyCode == Keyboard.DOWN)
			keyState = 0;
	}
	
}