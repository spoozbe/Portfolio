#ifndef INCLUDED_GameScene
#define INCLUDED_GameScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Scene.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(GameScene)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  GameScene_obj : public ::Scene_obj{
	public:
		typedef ::Scene_obj super;
		typedef GameScene_obj OBJ_;
		GameScene_obj();
		Void __construct(::Game game);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameScene_obj > __new(::Game game);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameScene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameScene"); }

		::GameObject background;
		::Ball ball;
		virtual Void swapTo( );

		virtual Void swapAway( );

};


#endif /* INCLUDED_GameScene */ 
