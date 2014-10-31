package ;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import openfl.Lib;
import openfl.events.MouseEvent;

/**
 * ...
 * @author Kevin Venables
 */
class MenuScene extends Scene
{
	var background : GameObject;
	
	
	//UI
	var title : GameObject;
	var madeby : GameObject;
	var difficulty : GameObject;
	
	
	public function new(game : Game) 
	{
		super(game);
		title = new GameObject(game, "assets/title.png", new Rectangle(0, 0, 200, 120), new Vector2(100, 40));
		background = new GameObject(game, "assets/background.png", new Rectangle(0, 0, 800, 400), new Vector2(0, 0));
		madeby = new GameObject(game, "assets/madeby.png", new Rectangle(0, 0, 73, 10), new Vector2(0, 380));
		//difficulty = new GameObject(game, "assets/difficulty.png", new Rectangle(0, 0, 100, 100), new Vector2(500, 80));
		objects.add(background);
		objects.add(title);
		objects.add(madeby);
		Lib.current.addEventListener(MouseEvent.CLICK, onClick);
		
		
		//objects.add(difficulty);
	}
	
	public function onClick(e : MouseEvent) : Void
	{
		if (title.rect.containsPoint(new Point(e.stageX, e.stageY)))
		{
			game.swapScene("game");
		}
	}
	
	override public function swapTo():Void 
	{
		super.swapTo();
	}
	
	override public function swapAway(): Void
	{
		super.swapAway();
		Lib.current.removeEventListener(MouseEvent.CLICK, onClick);
	}
	
	
	
	
	
}