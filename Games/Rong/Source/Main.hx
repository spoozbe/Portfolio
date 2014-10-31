package ;

import openfl.Assets;
import openfl.geom.Rectangle;

class Main extends Game
{	
	/*
	var background : GameObject;
	var ball : Ball;
	*/
	
	public var gameScene : GameScene;
	public var menuScene : MenuScene;

	public function new () 
	{
		super();
		/*
		trace("game start");
		ball = new Ball(this);
		background = new GameObject(this, "assets/background.png", new Rectangle(0, 0, 800, 400));
		objects.add(background);
		objects.add(new Paddle(this, ball)); //player
		objects.add(new Paddle(this, ball, true));  //AI
		objects.add(ball);
		*/
		gameScene = new GameScene(this);
		menuScene = new MenuScene(this);
		//activeScene = menuScene;
		scenes.set("game", gameScene);
		scenes.set("menu", menuScene);
		activeScene = scenes.get("menu");
		
	}	
	
}