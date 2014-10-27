#ifndef INCLUDED_GameObject
#define INCLUDED_GameObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(Vector2)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,display,Tilesheet)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)


class HXCPP_CLASS_ATTRIBUTES  GameObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameObject_obj OBJ_;
		GameObject_obj();
		Void __construct(::Game game,::String img,::openfl::_v2::geom::Rectangle imgSize,::Vector2 pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameObject_obj > __new(::Game game,::String img,::openfl::_v2::geom::Rectangle imgSize,::Vector2 pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameObject"); }

		::Game _game;
		::Vector2 pos;
		::openfl::_v2::display::Tilesheet texture;
		virtual Void per_frame( int delta);
		Dynamic per_frame_dyn();

		virtual Void update( int delta);
		Dynamic update_dyn();

		virtual Void _draw( );
		Dynamic _draw_dyn();

};


#endif /* INCLUDED_GameObject */ 
