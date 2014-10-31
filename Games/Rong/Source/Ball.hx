package ;
import openfl.geom.Rectangle;
import cpp.Random;
import openfl.Lib;
import Date;

/**
 * ...
 * @author Kevin Venables
 */

 
class Ball extends GameObject
{
	public var velocity : Vector2;
	public function new(game : Game) 
	{
		super(game, "assets/ball.png", new Rectangle(0, 0, 10, 10), new Vector2(390, 190));
		//init velocity
		var rando : Random = new Random();
		//velocity = new Vector2(rando.float() * 2, rando.float() * 2);
		velocity = new Vector2(1, 1);
	}
	
	override public function update(delta:Int):Void 
	{
		super.update(delta);

		if (pos.y < 10 || pos.y > 385)//bouncing off da walls
		{
			velocity.y *= -1;
		}
		
		if (pos.x < 0 || pos.x > 800)
		{
			resetPos();
		}
	
		/*
		//testing, yay
		if (pos.x > 780)
		{
			velocity.x *= -1;
		}
		*/
		
		pos.x += velocity.x;
		pos.y += velocity.y;
		rect.x = pos.x;
		rect.y = pos.y;
		
	}
	
	public function resetPos() : Void
	{
		pos = new Vector2(390, 190);
	}
	
}