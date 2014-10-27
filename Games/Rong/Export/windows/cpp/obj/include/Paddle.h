#ifndef INCLUDED_Paddle
#define INCLUDED_Paddle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <GameObject.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(Paddle)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)


class HXCPP_CLASS_ATTRIBUTES  Paddle_obj : public ::GameObject_obj{
	public:
		typedef ::GameObject_obj super;
		typedef Paddle_obj OBJ_;
		Paddle_obj();
		Void __construct(::Game game,::Ball ball,hx::Null< bool >  __o_isAI);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Paddle_obj > __new(::Game game,::Ball ball,hx::Null< bool >  __o_isAI);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Paddle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Paddle"); }

		::Ball ball;
		int keyState;
		bool isAI;
		Float velocity;
		::openfl::_v2::geom::Rectangle rect;
		virtual Void update( int delta);

		virtual Void playerControlDown( ::openfl::_v2::events::KeyboardEvent e);
		Dynamic playerControlDown_dyn();

		virtual Void playerControlUp( ::openfl::_v2::events::KeyboardEvent e);
		Dynamic playerControlUp_dyn();

};


#endif /* INCLUDED_Paddle */ 
