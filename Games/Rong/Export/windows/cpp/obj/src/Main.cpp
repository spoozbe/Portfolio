#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_GameScene
#include <GameScene.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MenuScene
#include <MenuScene.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",17,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(28)
	::GameScene _g = ::GameScene_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->gameScene = _g;
	HX_STACK_LINE(29)
	::MenuScene _g1 = ::MenuScene_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	this->menuScene = _g1;
	HX_STACK_LINE(31)
	this->scenes->set(HX_CSTRING("game"),this->gameScene);
	HX_STACK_LINE(32)
	this->scenes->set(HX_CSTRING("menu"),this->menuScene);
	HX_STACK_LINE(33)
	::Scene _g2 = this->scenes->get(HX_CSTRING("menu"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(33)
	this->activeScene = _g2;
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(gameScene,"gameScene");
	HX_MARK_MEMBER_NAME(menuScene,"menuScene");
	::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameScene,"gameScene");
	HX_VISIT_MEMBER_NAME(menuScene,"menuScene");
	::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"gameScene") ) { return gameScene; }
		if (HX_FIELD_EQ(inName,"menuScene") ) { return menuScene; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"gameScene") ) { gameScene=inValue.Cast< ::GameScene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuScene") ) { menuScene=inValue.Cast< ::MenuScene >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gameScene"));
	outFields->push(HX_CSTRING("menuScene"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::GameScene*/ ,(int)offsetof(Main_obj,gameScene),HX_CSTRING("gameScene")},
	{hx::fsObject /*::MenuScene*/ ,(int)offsetof(Main_obj,menuScene),HX_CSTRING("menuScene")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gameScene"),
	HX_CSTRING("menuScene"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

