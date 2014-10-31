package ;

/**
 * ...
 * @author Kevin Venables
 */
class Scene 
{
	var game : Game;
	public var name : String;
	public var objects : List<GameObject>;
	//normal function stuff
	public function new(game : Game) 
	{
		objects = new List<GameObject>();
		this.game = game;
	}
	
	public function per_frame(delta : Int) : Void
	{
		
		for (ob in objects)
		{
			ob.update(delta);
		}
		
		for (ob in objects)
		{
			ob._draw();
		}
	}
	
	public function swapTo() : Void
	{
		
	}
	
	public function swapAway() : Void
	{
		
	}
	
	/*
	public function fixedUpdate(fixedDelta : Float) : Void
	{
		
	}
	*/
	
	
}