#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Vector2
#include <Vector2.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif

Void GameObject_obj::__construct(::Game game,::String img,::openfl::_v2::geom::Rectangle imgSize,::Vector2 pos)
{
HX_STACK_FRAME("GameObject","new",0xef0f99e3,"GameObject.new","GameObject.hx",16,0xe33972ed)
HX_STACK_THIS(this)
HX_STACK_ARG(game,"game")
HX_STACK_ARG(img,"img")
HX_STACK_ARG(imgSize,"imgSize")
HX_STACK_ARG(pos,"pos")
{
	HX_STACK_LINE(17)
	this->_game = game;
	HX_STACK_LINE(18)
	::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(img,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	::openfl::_v2::display::Tilesheet _g1 = ::openfl::_v2::display::Tilesheet_obj::__new(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(18)
	this->texture = _g1;
	HX_STACK_LINE(19)
	this->texture->addTileRect(imgSize,null());
	HX_STACK_LINE(20)
	::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new(pos->x,pos->y,imgSize->width,imgSize->height);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(20)
	this->rect = _g2;
	HX_STACK_LINE(21)
	if (((pos == null()))){
		HX_STACK_LINE(23)
		::Vector2 _g3 = ::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(23)
		this->pos = _g3;
	}
	else{
		HX_STACK_LINE(27)
		this->pos = pos;
	}
}
;
	return null();
}

//GameObject_obj::~GameObject_obj() { }

Dynamic GameObject_obj::__CreateEmpty() { return  new GameObject_obj; }
hx::ObjectPtr< GameObject_obj > GameObject_obj::__new(::Game game,::String img,::openfl::_v2::geom::Rectangle imgSize,::Vector2 pos)
{  hx::ObjectPtr< GameObject_obj > result = new GameObject_obj();
	result->__construct(game,img,imgSize,pos);
	return result;}

Dynamic GameObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameObject_obj > result = new GameObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void GameObject_obj::per_frame( int delta){
{
		HX_STACK_FRAME("GameObject","per_frame",0x3032e5ce,"GameObject.per_frame","GameObject.hx",32,0xe33972ed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(33)
		this->update(delta);
		HX_STACK_LINE(34)
		this->_draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,per_frame,(void))

Void GameObject_obj::update( int delta){
{
		HX_STACK_FRAME("GameObject","update",0x71a45066,"GameObject.update","GameObject.hx",38,0xe33972ed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,update,(void))

Void GameObject_obj::_draw( ){
{
		HX_STACK_FRAME("GameObject","_draw",0xe1e4b826,"GameObject._draw","GameObject.hx",44,0xe33972ed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		this->texture->drawTiles(this->_game->gameGraphics,Array_obj< Float >::__new().Add(this->pos->x).Add(this->pos->y).Add((int)0),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,_draw,(void))


GameObject_obj::GameObject_obj()
{
}

void GameObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameObject);
	HX_MARK_MEMBER_NAME(_game,"_game");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_END_CLASS();
}

void GameObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_game,"_game");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(rect,"rect");
}

Dynamic GameObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_game") ) { return _game; }
		if (HX_FIELD_EQ(inName,"_draw") ) { return _draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"per_frame") ) { return per_frame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::Vector2 >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_game") ) { _game=inValue.Cast< ::Game >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::openfl::_v2::display::Tilesheet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_game"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("rect"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Game*/ ,(int)offsetof(GameObject_obj,_game),HX_CSTRING("_game")},
	{hx::fsObject /*::Vector2*/ ,(int)offsetof(GameObject_obj,pos),HX_CSTRING("pos")},
	{hx::fsObject /*::openfl::_v2::display::Tilesheet*/ ,(int)offsetof(GameObject_obj,texture),HX_CSTRING("texture")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(GameObject_obj,rect),HX_CSTRING("rect")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_game"),
	HX_CSTRING("pos"),
	HX_CSTRING("texture"),
	HX_CSTRING("rect"),
	HX_CSTRING("per_frame"),
	HX_CSTRING("update"),
	HX_CSTRING("_draw"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameObject_obj::__mClass,"__mClass");
};

#endif

Class GameObject_obj::__mClass;

void GameObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameObject"), hx::TCanCast< GameObject_obj> ,sStaticFields,sMemberFields,
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

void GameObject_obj::__boot()
{
}

