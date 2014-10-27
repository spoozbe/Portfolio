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
HX_STACK_FRAME("Ball","new",0xfd30aa91,"Ball.new","Ball.hx",18,0xf7f391ff)
HX_STACK_THIS(this)
HX_STACK_ARG(game,"game")
{
	HX_STACK_LINE(19)
	::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)10,(int)10);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	::Vector2 _g1 = ::Vector2_obj::__new((int)390,(int)190);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(19)
	super::__construct(game,HX_CSTRING("assets/ball.png"),_g,_g1);
	HX_STACK_LINE(20)
	::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new(this->pos->x,this->pos->y,(int)10,(int)10);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(20)
	this->rect = _g2;
	HX_STACK_LINE(22)
	::cpp::Random rando = ::cpp::Random_obj::__new();		HX_STACK_VAR(rando,"rando");
	HX_STACK_LINE(24)
	::Vector2 _g3 = ::Vector2_obj::__new((int)1,(int)1);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(24)
	this->velocity = _g3;
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
		HX_STACK_FRAME("Ball","update",0x34906078,"Ball.update","Ball.hx",28,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(29)
		this->super::update(delta);
		HX_STACK_LINE(31)
		if (((bool((this->pos->y < (int)10)) || bool((this->pos->y > (int)385))))){
			HX_STACK_LINE(33)
			hx::MultEq(this->velocity->y,(int)-1);
		}
		HX_STACK_LINE(37)
		if (((this->pos->x > (int)780))){
			HX_STACK_LINE(39)
			hx::MultEq(this->velocity->x,(int)-1);
		}
		HX_STACK_LINE(42)
		hx::AddEq(this->pos->x,this->velocity->x);
		HX_STACK_LINE(43)
		hx::AddEq(this->pos->y,this->velocity->y);
		HX_STACK_LINE(44)
		this->rect->x = this->pos->x;
		HX_STACK_LINE(45)
		this->rect->y = this->pos->y;
	}
return null();
}



Ball_obj::Ball_obj()
{
}

void Ball_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ball);
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(rect,"rect");
	::GameObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ball_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	::GameObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Ball_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ball_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ball_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("rect"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Vector2*/ ,(int)offsetof(Ball_obj,velocity),HX_CSTRING("velocity")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Ball_obj,rect),HX_CSTRING("rect")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("velocity"),
	HX_CSTRING("rect"),
	HX_CSTRING("update"),
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

