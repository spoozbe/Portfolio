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
#ifndef INCLUDED_Scene
#include <Scene.h>
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

Void Scene_obj::__construct(::Game game)
{
HX_STACK_FRAME("Scene","new",0x2c34f01e,"Scene.new","Scene.hx",14,0x9b2cfd12)
HX_STACK_THIS(this)
HX_STACK_ARG(game,"game")
{
	HX_STACK_LINE(15)
	::List _g = ::List_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	this->objects = _g;
	HX_STACK_LINE(16)
	this->game = game;
}
;
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new(::Game game)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct(game);
	return result;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Scene_obj::per_frame( int delta){
{
		HX_STACK_FRAME("Scene","per_frame",0x226f1a49,"Scene.per_frame","Scene.hx",20,0x9b2cfd12)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(22)
		for(::cpp::FastIterator_obj< ::GameObject > *__it = ::cpp::CreateFastIterator< ::GameObject >(this->objects->iterator());  __it->hasNext(); ){
			::GameObject ob = __it->next();
			ob->update(delta);
		}
		HX_STACK_LINE(27)
		for(::cpp::FastIterator_obj< ::GameObject > *__it = ::cpp::CreateFastIterator< ::GameObject >(this->objects->iterator());  __it->hasNext(); ){
			::GameObject ob = __it->next();
			ob->_draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,per_frame,(void))

Void Scene_obj::swapTo( ){
{
		HX_STACK_FRAME("Scene","swapTo",0x721f49f0,"Scene.swapTo","Scene.hx",34,0x9b2cfd12)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,swapTo,(void))

Void Scene_obj::swapAway( ){
{
		HX_STACK_FRAME("Scene","swapAway",0xa370ff23,"Scene.swapAway","Scene.hx",39,0x9b2cfd12)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,swapAway,(void))


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(objects,"objects");
}

Dynamic Scene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"swapTo") ) { return swapTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"swapAway") ) { return swapAway_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"per_frame") ) { return per_frame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::Game >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("game"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("objects"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Game*/ ,(int)offsetof(Scene_obj,game),HX_CSTRING("game")},
	{hx::fsString,(int)offsetof(Scene_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Scene_obj,objects),HX_CSTRING("objects")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("game"),
	HX_CSTRING("name"),
	HX_CSTRING("objects"),
	HX_CSTRING("per_frame"),
	HX_CSTRING("swapTo"),
	HX_CSTRING("swapAway"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#endif

Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Scene"), hx::TCanCast< Scene_obj> ,sStaticFields,sMemberFields,
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

void Scene_obj::__boot()
{
}

