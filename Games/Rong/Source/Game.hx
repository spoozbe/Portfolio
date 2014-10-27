package ;

import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.TimerEvent;
import flash.display.Graphics;

import openfl.Lib;
//import openfl.display.Graphics;
import openfl.utils.Timer;
import openfl.Assets;
import openfl.display.Tilesheet;

/*
	TODO: 
	Animations
*/

class Game extends Sprite
{
	private var _fixedTimer : Timer;
	public var gameGraphics : Graphics;

	public var objects : List<GameObject>;
	
	//delta handling
	var delta : Int;
	var lastTime : Int;
	//var fixedDelta : Float;


	public function new()
	{
		super();
		addEventListener(Event.ENTER_FRAME, this._update);
		gameGraphics = graphics;
		objects = new List<GameObject>();
	}


	public function _update(e : Event) : Void
	{
		/*
		var temp = delta;
		delta = Lib.getTimer() - lastTime;
		temp = lastTime;
		*/
		//update game logic
		gameGraphics.clear();
		for(ob in objects)
		{
			ob.per_frame(0);
		}
	}

	/*
	private function _fixedUpdate(e : TimerEvent) : Void
	{

	}
	*/




}