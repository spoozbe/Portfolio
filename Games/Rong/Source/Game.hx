package ;

import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.TimerEvent;
import flash.display.Graphics;
import openfl.utils.Dictionary;

import openfl.Lib;
//import openfl.display.Graphics;
import openfl.utils.Timer;
import openfl.Assets;
import openfl.display.Tilesheet;

/*
	TODO: 
	Animations
	EAT CORNDOGS!
*/

class Game extends Sprite
{
	private var _fixedTimer : Timer;
	public var gameGraphics : Graphics;

	//public var objects : List<GameObject>;
	//archive of scenes, and one active one
	public var scenes : Map<String, Scene>;
	public var activeScene : Scene;
	
	//delta handling
	var delta : Int;
	var lastTime : Int;
	//var fixedDelta : Float;


	public function new()
	{
		super();
		addEventListener(Event.ENTER_FRAME, this.update);
		gameGraphics = graphics;
		//objects = new List<GameObject>();
		scenes = new Map<String, Scene>();
	}


	public function update(e : Event) : Void
	{
		/*
		var temp = delta;
		delta = Lib.getTimer() - lastTime;
		temp = lastTime;
		*/
		//update game logic
		gameGraphics.clear();
		activeScene.per_frame(0);
		/*
		for(ob in scenes)
		{
			//ob.per_frame(0);
			ob.per_frame(0);
		}
		*/
	}
	
	public function swapScene(name : String) : Void
	{
		if (scenes.exists(name))
		{
			activeScene.swapAway();
			activeScene = scenes.get(name);
			activeScene.swapTo();
		}
		else
			trace("Scene does not exist");
	}

	/*
	private function _fixedUpdate(e : TimerEvent) : Void
	{

	}
	*/




}