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
#ifndef INCLUDED_GameScene
#include <GameScene.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Paddle
#include <Paddle.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_Vector2
#include <Vector2.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

Void GameScene_obj::__construct(::Game game)
{
HX_STACK_FRAME("GameScene","new",0x2a353dcc,"GameScene.new","GameScene.hx",13,0xc47e7f24)
HX_STACK_THIS(this)
HX_STACK_ARG(game,"game")
{
	HX_STACK_LINE(14)
	super::__construct(game);
	HX_STACK_LINE(15)
	::haxe::Log_obj::trace(HX_CSTRING("game start"),hx::SourceInfo(HX_CSTRING("GameScene.hx"),15,HX_CSTRING("GameScene"),HX_CSTRING("new")));
	HX_STACK_LINE(16)
	::Ball _g = ::Ball_obj::__new(game);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(16)
	this->ball = _g;
	HX_STACK_LINE(17)
	::openfl::_v2::geom::Rectangle _g1 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)800,(int)400);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(17)
	::Vector2 _g2 = ::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(17)
	::GameObject _g3 = ::GameObject_obj::__new(game,HX_CSTRING("assets/background.png"),_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(17)
	this->background = _g3;
	HX_STACK_LINE(18)
	this->objects->add(this->background);
	HX_STACK_LINE(19)
	::Paddle _g4 = ::Paddle_obj::__new(game,this->ball,null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(19)
	this->objects->add(_g4);
	HX_STACK_LINE(20)
	::Paddle _g5 = ::Paddle_obj::__new(game,this->ball,true);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(20)
	this->objects->add(_g5);
	HX_STACK_LINE(21)
	this->objects->add(this->ball);
}
;
	return null();
}

//GameScene_obj::~GameScene_obj() { }

Dynamic GameScene_obj::__CreateEmpty() { return  new GameScene_obj; }
hx::ObjectPtr< GameScene_obj > GameScene_obj::__new(::Game game)
{  hx::ObjectPtr< GameScene_obj > result = new GameScene_obj();
	result->__construct(game);
	return result;}

Dynamic GameScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameScene_obj > result = new GameScene_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GameScene_obj::swapTo( ){
{
		HX_STACK_FRAME("GameScene","swapTo",0x8c903d02,"GameScene.swapTo","GameScene.hx",27,0xc47e7f24)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->super::swapTo();
	}
return null();
}


Void GameScene_obj::swapAway( ){
{
		HX_STACK_FRAME("GameScene","swapAway",0xf2525ab5,"GameScene.swapAway","GameScene.hx",32,0xc47e7f24)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		this->super::swapAway();
	}
return null();
}



GameScene_obj::GameScene_obj()
{
}

void GameScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameScene);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(ball,"ball");
	::Scene_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameScene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	::Scene_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameScene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"swapTo") ) { return swapTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"swapAway") ) { return swapAway_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::Ball >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::GameObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("ball"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::GameObject*/ ,(int)offsetof(GameScene_obj,background),HX_CSTRING("background")},
	{hx::fsObject /*::Ball*/ ,(int)offsetof(GameScene_obj,ball),HX_CSTRING("ball")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("background"),
	HX_CSTRING("ball"),
	HX_CSTRING("swapTo"),
	HX_CSTRING("swapAway"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameScene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameScene_obj::__mClass,"__mClass");
};

#endif

Class GameScene_obj::__mClass;

void GameScene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameScene"), hx::TCanCast< GameScene_obj> ,sStaticFields,sMemberFields,
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

void GameScene_obj::__boot()
{
}

