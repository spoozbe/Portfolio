#ifndef INCLUDED_Ball
#define INCLUDED_Ball

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <GameObject.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(Vector2)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)


class HXCPP_CLASS_ATTRIBUTES  Ball_obj : public ::GameObject_obj{
	public:
		typedef ::GameObject_obj super;
		typedef Ball_obj OBJ_;
		Ball_obj();
		Void __construct(::Game game);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Ball_obj > __new(::Game game);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ball_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ball"); }

		::Vector2 velocity;
		::openfl::_v2::geom::Rectangle rect;
		virtual Void update( int delta);

};


#endif /* INCLUDED_Ball */ 
