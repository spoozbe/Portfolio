#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
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
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_Timer
#include <openfl/_v2/utils/Timer.h>
#endif

Void Game_obj::__construct()
{
HX_STACK_FRAME("Game","new",0x79ba3204,"Game.new","Game.hx",38,0x56a4f9ec)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->update_dyn(),null(),null(),null());
	HX_STACK_LINE(41)
	::openfl::_v2::display::Graphics _g = this->get_graphics();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(41)
	this->gameGraphics = _g;
	HX_STACK_LINE(43)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(43)
	this->scenes = _g1;
}
;
	return null();
}

//Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new()
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct();
	return result;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct();
	return result;}

Void Game_obj::update( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("Game","update",0xfb78c2e5,"Game.update","Game.hx",48,0x56a4f9ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(55)
		this->gameGraphics->clear();
		HX_STACK_LINE(56)
		this->activeScene->per_frame((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,update,(void))

Void Game_obj::swapScene( ::String name){
{
		HX_STACK_FRAME("Game","swapScene",0xbe241e5d,"Game.swapScene","Game.hx",68,0x56a4f9ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(68)
		if ((this->scenes->exists(name))){
			HX_STACK_LINE(70)
			this->activeScene->swapAway();
			HX_STACK_LINE(71)
			::Scene _g = this->scenes->get(name);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			this->activeScene = _g;
			HX_STACK_LINE(72)
			this->activeScene->swapTo();
		}
		else{
			HX_STACK_LINE(75)
			::haxe::Log_obj::trace(HX_CSTRING("Scene does not exist"),hx::SourceInfo(HX_CSTRING("Game.hx"),75,HX_CSTRING("Game"),HX_CSTRING("swapScene")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,swapScene,(void))


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(_fixedTimer,"_fixedTimer");
	HX_MARK_MEMBER_NAME(gameGraphics,"gameGraphics");
	HX_MARK_MEMBER_NAME(scenes,"scenes");
	HX_MARK_MEMBER_NAME(activeScene,"activeScene");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_fixedTimer,"_fixedTimer");
	HX_VISIT_MEMBER_NAME(gameGraphics,"gameGraphics");
	HX_VISIT_MEMBER_NAME(scenes,"scenes");
	HX_VISIT_MEMBER_NAME(activeScene,"activeScene");
	HX_VISIT_MEMBER_NAME(delta,"delta");
	HX_VISIT_MEMBER_NAME(lastTime,"lastTime");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Game_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { return delta; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scenes") ) { return scenes; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { return lastTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swapScene") ) { return swapScene_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fixedTimer") ) { return _fixedTimer; }
		if (HX_FIELD_EQ(inName,"activeScene") ) { return activeScene; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gameGraphics") ) { return gameGraphics; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Game_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scenes") ) { scenes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { lastTime=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fixedTimer") ) { _fixedTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeScene") ) { activeScene=inValue.Cast< ::Scene >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gameGraphics") ) { gameGraphics=inValue.Cast< ::openfl::_v2::display::Graphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_fixedTimer"));
	outFields->push(HX_CSTRING("gameGraphics"));
	outFields->push(HX_CSTRING("scenes"));
	outFields->push(HX_CSTRING("activeScene"));
	outFields->push(HX_CSTRING("delta"));
	outFields->push(HX_CSTRING("lastTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::utils::Timer*/ ,(int)offsetof(Game_obj,_fixedTimer),HX_CSTRING("_fixedTimer")},
	{hx::fsObject /*::openfl::_v2::display::Graphics*/ ,(int)offsetof(Game_obj,gameGraphics),HX_CSTRING("gameGraphics")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Game_obj,scenes),HX_CSTRING("scenes")},
	{hx::fsObject /*::Scene*/ ,(int)offsetof(Game_obj,activeScene),HX_CSTRING("activeScene")},
	{hx::fsInt,(int)offsetof(Game_obj,delta),HX_CSTRING("delta")},
	{hx::fsInt,(int)offsetof(Game_obj,lastTime),HX_CSTRING("lastTime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_fixedTimer"),
	HX_CSTRING("gameGraphics"),
	HX_CSTRING("scenes"),
	HX_CSTRING("activeScene"),
	HX_CSTRING("delta"),
	HX_CSTRING("lastTime"),
	HX_CSTRING("update"),
	HX_CSTRING("swapScene"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#endif

Class Game_obj::__mClass;

void Game_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Game"), hx::TCanCast< Game_obj> ,sStaticFields,sMemberFields,
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

void Game_obj::__boot()
{
}

