#ifndef INCLUDED_MenuScene
#define INCLUDED_MenuScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Scene.h>
HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(MenuScene)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,MouseEvent)


class HXCPP_CLASS_ATTRIBUTES  MenuScene_obj : public ::Scene_obj{
	public:
		typedef ::Scene_obj super;
		typedef MenuScene_obj OBJ_;
		MenuScene_obj();
		Void __construct(::Game game);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MenuScene_obj > __new(::Game game);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MenuScene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MenuScene"); }

		::GameObject background;
		::GameObject title;
		::GameObject madeby;
		::GameObject difficulty;
		virtual Void onClick( ::openfl::_v2::events::MouseEvent e);
		Dynamic onClick_dyn();

		virtual Void swapTo( );

		virtual Void swapAway( );

};


#endif /* INCLUDED_MenuScene */ 
