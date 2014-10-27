package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/background.png", "assets/background.png");
			type.set ("assets/background.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/ball.png", "assets/ball.png");
			type.set ("assets/ball.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/blue.png", "assets/blue.png");
			type.set ("assets/blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/paddle.png", "assets/paddle.png");
			type.set ("assets/paddle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData