#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Vector2
#include <Vector2.h>
#endif
#ifndef INCLUDED_cpp_Random
#include <cpp/Random.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif

Void Ball_obj::__construct(::Game game)
{
HX_STACK_FRAME("Ball","new",0xfd30aa91,"Ball.new","Ball.hx",17,0xf7f391ff)
HX_STACK_THIS(this)
HX_STACK_ARG(game,"game")
{
	HX_STACK_LINE(18)
	::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)10,(int)10);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	::Vector2 _g1 = ::Vector2_obj::__new((int)390,(int)190);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(18)
	super::__construct(game,HX_CSTRING("assets/ball.png"),_g,_g1);
	HX_STACK_LINE(20)
	::cpp::Random rando = ::cpp::Random_obj::__new();		HX_STACK_VAR(rando,"rando");
	HX_STACK_LINE(22)
	::Vector2 _g2 = ::Vector2_obj::__new((int)1,(int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(22)
	this->velocity = _g2;
}
;
	return null();
}

//Ball_obj::~Ball_obj() { }

Dynamic Ball_obj::__CreateEmpty() { return  new Ball_obj; }
hx::ObjectPtr< Ball_obj > Ball_obj::__new(::Game game)
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct(game);
	return result;}

Dynamic Ball_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Ball_obj::update( int delta){
{
		HX_STACK_FRAME("Ball","update",0x34906078,"Ball.update","Ball.hx",26,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(27)
		this->super::update(delta);
		HX_STACK_LINE(29)
		if (((bool((this->pos->y < (int)10)) || bool((this->pos->y > (int)385))))){
			HX_STACK_LINE(31)
			hx::MultEq(this->velocity->y,(int)-1);
		}
		HX_STACK_LINE(34)
		if (((bool((this->pos->x < (int)0)) || bool((this->pos->x > (int)800))))){
			HX_STACK_LINE(36)
			this->resetPos();
		}
		HX_STACK_LINE(47)
		hx::AddEq(this->pos->x,this->velocity->x);
		HX_STACK_LINE(48)
		hx::AddEq(this->pos->y,this->velocity->y);
		HX_STACK_LINE(49)
		this->rect->x = this->pos->x;
		HX_STACK_LINE(50)
		this->rect->y = this->pos->y;
	}
return null();
}


Void Ball_obj::resetPos( ){
{
		HX_STACK_FRAME("Ball","resetPos",0x99a52b34,"Ball.resetPos","Ball.hx",55,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		::Vector2 _g = ::Vector2_obj::__new((int)390,(int)190);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		this->pos = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ball_obj,resetPos,(void))


Ball_obj::Ball_obj()
{
}

void Ball_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ball);
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	::GameObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ball_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	::GameObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Ball_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"resetPos") ) { return resetPos_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ball_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ball_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("velocity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Vector2*/ ,(int)offsetof(Ball_obj,velocity),HX_CSTRING("velocity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("velocity"),
	HX_CSTRING("update"),
	HX_CSTRING("resetPos"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

#endif

Class Ball_obj::__mClass;

void Ball_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Ball"), hx::TCanCast< Ball_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Ball_obj::__boot()
{
}

