#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
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
HX_STACK_FRAME("Game","new",0x79ba3204,"Game.new","Game.hx",33,0x56a4f9ec)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	super::__construct();
	HX_STACK_LINE(35)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->_update_dyn(),null(),null(),null());
	HX_STACK_LINE(36)
	::openfl::_v2::display::Graphics _g = this->get_graphics();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	this->gameGraphics = _g;
	HX_STACK_LINE(37)
	::List _g1 = ::List_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(37)
	this->objects = _g1;
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

Void Game_obj::_update( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("Game","_update",0x65de9b4c,"Game._update","Game.hx",42,0x56a4f9ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(49)
		this->gameGraphics->clear();
		HX_STACK_LINE(50)
		for(::cpp::FastIterator_obj< ::GameObject > *__it = ::cpp::CreateFastIterator< ::GameObject >(this->objects->iterator());  __it->hasNext(); ){
			::GameObject ob = __it->next();
			ob->per_frame((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,_update,(void))


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(_fixedTimer,"_fixedTimer");
	HX_MARK_MEMBER_NAME(gameGraphics,"gameGraphics");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_fixedTimer,"_fixedTimer");
	HX_VISIT_MEMBER_NAME(gameGraphics,"gameGraphics");
	HX_VISIT_MEMBER_NAME(objects,"objects");
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
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { return lastTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fixedTimer") ) { return _fixedTimer; }
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
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::List >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { lastTime=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fixedTimer") ) { _fixedTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
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
	outFields->push(HX_CSTRING("objects"));
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
	{hx::fsObject /*::List*/ ,(int)offsetof(Game_obj,objects),HX_CSTRING("objects")},
	{hx::fsInt,(int)offsetof(Game_obj,delta),HX_CSTRING("delta")},
	{hx::fsInt,(int)offsetof(Game_obj,lastTime),HX_CSTRING("lastTime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_fixedTimer"),
	HX_CSTRING("gameGraphics"),
	HX_CSTRING("objects"),
	HX_CSTRING("delta"),
	HX_CSTRING("lastTime"),
	HX_CSTRING("_update"),
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

