#ifndef INCLUDED_Game
#define INCLUDED_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,Graphics)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,utils,Timer)


class HXCPP_CLASS_ATTRIBUTES  Game_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Game_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Game"); }

		::openfl::_v2::utils::Timer _fixedTimer;
		::openfl::_v2::display::Graphics gameGraphics;
		::haxe::ds::StringMap scenes;
		::Scene activeScene;
		int delta;
		int lastTime;
		virtual Void update( ::openfl::_v2::events::Event e);
		Dynamic update_dyn();

		virtual Void swapScene( ::String name);
		Dynamic swapScene_dyn();

};


#endif /* INCLUDED_Game */ 
