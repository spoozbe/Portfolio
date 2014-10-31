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
#ifndef INCLUDED_Paddle
#include <Paddle.h>
#endif
#ifndef INCLUDED_Vector2
#include <Vector2.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
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
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_KeyboardEvent
#include <openfl/_v2/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif

Void Paddle_obj::__construct(::Game game,::Ball ball,hx::Null< bool >  __o_isAI)
{
HX_STACK_FRAME("Paddle","new",0x0f94667c,"Paddle.new","Paddle.hx",14,0x43ccfc74)
HX_STACK_THIS(this)
HX_STACK_ARG(game,"game")
HX_STACK_ARG(ball,"ball")
HX_STACK_ARG(__o_isAI,"isAI")
bool isAI = __o_isAI.Default(false);
{
	HX_STACK_LINE(19)
	this->velocity = (int)3;
	HX_STACK_LINE(23)
	this->ball = ball;
	HX_STACK_LINE(24)
	if ((isAI)){
		HX_STACK_LINE(26)
		this->isAI = isAI;
		HX_STACK_LINE(27)
		::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)10,(int)50);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		::Vector2 _g1 = ::Vector2_obj::__new((int)790,(int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		super::__construct(game,HX_CSTRING("assets/paddle.png"),_g,_g1);
	}
	else{
		HX_STACK_LINE(33)
		::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)10,(int)50);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(33)
		::Vector2 _g3 = ::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(33)
		super::__construct(game,HX_CSTRING("assets/paddle.png"),_g2,_g3);
		HX_STACK_LINE(34)
		this->keyState = (int)0;
		HX_STACK_LINE(35)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->playerControlDown_dyn(),null(),null(),null());
		HX_STACK_LINE(36)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->playerControlUp_dyn(),null(),null(),null());
	}
}
;
	return null();
}

//Paddle_obj::~Paddle_obj() { }

Dynamic Paddle_obj::__CreateEmpty() { return  new Paddle_obj; }
hx::ObjectPtr< Paddle_obj > Paddle_obj::__new(::Game game,::Ball ball,hx::Null< bool >  __o_isAI)
{  hx::ObjectPtr< Paddle_obj > result = new Paddle_obj();
	result->__construct(game,ball,__o_isAI);
	return result;}

Dynamic Paddle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Paddle_obj > result = new Paddle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Paddle_obj::update( int delta){
{
		HX_STACK_FRAME("Paddle","update",0xb848a96d,"Paddle.update","Paddle.hx",43,0x43ccfc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(44)
		this->super::update(delta);
		HX_STACK_LINE(46)
		if ((this->isAI)){
			HX_STACK_LINE(49)
			if (((this->ball->velocity->x > (int)0))){
				HX_STACK_LINE(51)
				if (((this->ball->velocity->y > (int)0))){
					HX_STACK_LINE(52)
					hx::AddEq(this->pos->y,this->velocity);
				}
				else{
					HX_STACK_LINE(55)
					hx::SubEq(this->pos->y,this->velocity);
				}
			}
		}
		else{
			HX_STACK_LINE(61)
			hx::AddEq(this->pos->y,(this->velocity * this->keyState));
		}
		HX_STACK_LINE(65)
		if (((this->pos->y < (int)10))){
			HX_STACK_LINE(67)
			this->pos->y = (int)10;
		}
		HX_STACK_LINE(69)
		if (((this->pos->y > (int)340))){
			HX_STACK_LINE(71)
			this->pos->y = (int)340;
		}
		HX_STACK_LINE(73)
		this->rect->y = this->pos->y;
		HX_STACK_LINE(77)
		if ((this->rect->intersects(this->ball->rect))){
			HX_STACK_LINE(79)
			hx::MultEq(this->ball->velocity->x,(int)-1);
		}
	}
return null();
}


Void Paddle_obj::playerControlDown( ::openfl::_v2::events::KeyboardEvent e){
{
		HX_STACK_FRAME("Paddle","playerControlDown",0x7ca2a79a,"Paddle.playerControlDown","Paddle.hx",86,0x43ccfc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(87)
		::openfl::_v2::Lib_obj::trace(HX_CSTRING("Key down"));
		HX_STACK_LINE(88)
		if (((e->keyCode == (int)38))){
			HX_STACK_LINE(90)
			this->keyState = (int)-1;
		}
		HX_STACK_LINE(93)
		if (((e->keyCode == (int)40))){
			HX_STACK_LINE(95)
			this->keyState = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Paddle_obj,playerControlDown,(void))

Void Paddle_obj::playerControlUp( ::openfl::_v2::events::KeyboardEvent e){
{
		HX_STACK_FRAME("Paddle","playerControlUp",0xd26c5793,"Paddle.playerControlUp","Paddle.hx",101,0x43ccfc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(101)
		if (((bool((e->keyCode == (int)38)) || bool((e->keyCode == (int)40))))){
			HX_STACK_LINE(102)
			this->keyState = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Paddle_obj,playerControlUp,(void))


Paddle_obj::Paddle_obj()
{
}

void Paddle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Paddle);
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(keyState,"keyState");
	HX_MARK_MEMBER_NAME(isAI,"isAI");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	::GameObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Paddle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(keyState,"keyState");
	HX_VISIT_MEMBER_NAME(isAI,"isAI");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	::GameObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Paddle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"isAI") ) { return isAI; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyState") ) { return keyState; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerControlUp") ) { return playerControlUp_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playerControlDown") ) { return playerControlDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Paddle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::Ball >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isAI") ) { isAI=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyState") ) { keyState=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Paddle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("keyState"));
	outFields->push(HX_CSTRING("isAI"));
	outFields->push(HX_CSTRING("velocity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Ball*/ ,(int)offsetof(Paddle_obj,ball),HX_CSTRING("ball")},
	{hx::fsInt,(int)offsetof(Paddle_obj,keyState),HX_CSTRING("keyState")},
	{hx::fsBool,(int)offsetof(Paddle_obj,isAI),HX_CSTRING("isAI")},
	{hx::fsFloat,(int)offsetof(Paddle_obj,velocity),HX_CSTRING("velocity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ball"),
	HX_CSTRING("keyState"),
	HX_CSTRING("isAI"),
	HX_CSTRING("velocity"),
	HX_CSTRING("update"),
	HX_CSTRING("playerControlDown"),
	HX_CSTRING("playerControlUp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paddle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paddle_obj::__mClass,"__mClass");
};

#endif

Class Paddle_obj::__mClass;

void Paddle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Paddle"), hx::TCanCast< Paddle_obj> ,sStaticFields,sMemberFields,
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

void Paddle_obj::__boot()
{
}

