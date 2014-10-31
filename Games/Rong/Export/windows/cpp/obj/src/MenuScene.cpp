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
#ifndef INCLUDED_MenuScene
#include <MenuScene.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
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
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif

Void MenuScene_obj::__construct(::Game game)
{
HX_STACK_FRAME("MenuScene","new",0x593bce7f,"MenuScene.new","MenuScene.hx",23,0x41d5c5d1)
HX_STACK_THIS(this)
HX_STACK_ARG(game,"game")
{
	HX_STACK_LINE(24)
	super::__construct(game);
	HX_STACK_LINE(25)
	::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)200,(int)120);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	::Vector2 _g1 = ::Vector2_obj::__new((int)100,(int)40);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(25)
	::GameObject _g2 = ::GameObject_obj::__new(game,HX_CSTRING("assets/title.png"),_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(25)
	this->title = _g2;
	HX_STACK_LINE(26)
	::openfl::_v2::geom::Rectangle _g3 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)800,(int)400);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(26)
	::Vector2 _g4 = ::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(26)
	::GameObject _g5 = ::GameObject_obj::__new(game,HX_CSTRING("assets/background.png"),_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(26)
	this->background = _g5;
	HX_STACK_LINE(27)
	::openfl::_v2::geom::Rectangle _g6 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)73,(int)10);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(27)
	::Vector2 _g7 = ::Vector2_obj::__new((int)0,(int)380);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(27)
	::GameObject _g8 = ::GameObject_obj::__new(game,HX_CSTRING("assets/madeby.png"),_g6,_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(27)
	this->madeby = _g8;
	HX_STACK_LINE(29)
	this->objects->add(this->background);
	HX_STACK_LINE(30)
	this->objects->add(this->title);
	HX_STACK_LINE(31)
	this->objects->add(this->madeby);
	HX_STACK_LINE(32)
	::openfl::_v2::Lib_obj::get_current()->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onClick_dyn(),null(),null(),null());
}
;
	return null();
}

//MenuScene_obj::~MenuScene_obj() { }

Dynamic MenuScene_obj::__CreateEmpty() { return  new MenuScene_obj; }
hx::ObjectPtr< MenuScene_obj > MenuScene_obj::__new(::Game game)
{  hx::ObjectPtr< MenuScene_obj > result = new MenuScene_obj();
	result->__construct(game);
	return result;}

Dynamic MenuScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuScene_obj > result = new MenuScene_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuScene_obj::onClick( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("MenuScene","onClick",0xd7c71448,"MenuScene.onClick","MenuScene.hx",39,0x41d5c5d1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(40)
		::openfl::_v2::geom::Point _g = ::openfl::_v2::geom::Point_obj::__new(e->stageX,e->stageY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		if ((this->title->rect->containsPoint(_g))){
			HX_STACK_LINE(42)
			this->game->swapScene(HX_CSTRING("game"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuScene_obj,onClick,(void))

Void MenuScene_obj::swapTo( ){
{
		HX_STACK_FRAME("MenuScene","swapTo",0xaa54de2f,"MenuScene.swapTo","MenuScene.hx",48,0x41d5c5d1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		this->super::swapTo();
	}
return null();
}


Void MenuScene_obj::swapAway( ){
{
		HX_STACK_FRAME("MenuScene","swapAway",0x83636122,"MenuScene.swapAway","MenuScene.hx",52,0x41d5c5d1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		this->super::swapAway();
		HX_STACK_LINE(54)
		::openfl::_v2::Lib_obj::get_current()->removeEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onClick_dyn(),null());
	}
return null();
}



MenuScene_obj::MenuScene_obj()
{
}

void MenuScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuScene);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(madeby,"madeby");
	HX_MARK_MEMBER_NAME(difficulty,"difficulty");
	::Scene_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuScene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(madeby,"madeby");
	HX_VISIT_MEMBER_NAME(difficulty,"difficulty");
	::Scene_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuScene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"madeby") ) { return madeby; }
		if (HX_FIELD_EQ(inName,"swapTo") ) { return swapTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"swapAway") ) { return swapAway_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"difficulty") ) { return difficulty; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::GameObject >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"madeby") ) { madeby=inValue.Cast< ::GameObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::GameObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"difficulty") ) { difficulty=inValue.Cast< ::GameObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("title"));
	outFields->push(HX_CSTRING("madeby"));
	outFields->push(HX_CSTRING("difficulty"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::GameObject*/ ,(int)offsetof(MenuScene_obj,background),HX_CSTRING("background")},
	{hx::fsObject /*::GameObject*/ ,(int)offsetof(MenuScene_obj,title),HX_CSTRING("title")},
	{hx::fsObject /*::GameObject*/ ,(int)offsetof(MenuScene_obj,madeby),HX_CSTRING("madeby")},
	{hx::fsObject /*::GameObject*/ ,(int)offsetof(MenuScene_obj,difficulty),HX_CSTRING("difficulty")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("background"),
	HX_CSTRING("title"),
	HX_CSTRING("madeby"),
	HX_CSTRING("difficulty"),
	HX_CSTRING("onClick"),
	HX_CSTRING("swapTo"),
	HX_CSTRING("swapAway"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuScene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuScene_obj::__mClass,"__mClass");
};

#endif

Class MenuScene_obj::__mClass;

void MenuScene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuScene"), hx::TCanCast< MenuScene_obj> ,sStaticFields,sMemberFields,
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

void MenuScene_obj::__boot()
{
}

