package ;

import openfl.display.Graphics;
import openfl.display.Tilesheet;
import openfl.Assets;
import openfl.geom.Rectangle;

class GameObject
{
	private var _game : Game; //reference to game, manditory
	public var pos : Vector2;
	public var texture : Tilesheet; // improve usage in future

	public function new(game : Game, img : String, imgSize : Rectangle, ?pos : Vector2)
	{
		this._game = game;
		this.texture = new Tilesheet(Assets.getBitmapData(img));
		texture.addTileRect(imgSize);
		if(pos == null)
		{
			this.pos = new Vector2(0, 0);
		}
		else
		{
			this.pos = pos;
		}
	}

	public function per_frame(delta : Int) : Void
	{
		update(delta);
		_draw();
	}

	public function update(delta :Int) : Void
	{
		//game logic goes here
	}

	public function _draw() : Void
	{
		texture.drawTiles(_game.gameGraphics, [pos.x, pos.y, 0]);
	}

	//future use, fixedUpdate
	/*
	public function fixedUpdate(fixedDelta : Float) : Void
	{

	}
	*/


	/*
	private bool _active : Bool = false;
	public function toggleActive() : Void
	{
		_active = !_active;
	}

	private bool _visible : Bool = false;
	public function toggleVisible() : Void
	{
		_visible = !_visible;
	}
	*/
}