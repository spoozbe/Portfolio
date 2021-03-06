#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_soul_gaming_Rong
#include <com/soul/gaming/Rong.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_media_Sound
#include <neash/media/Sound.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Void ApplicationMain_obj::main( ){
{
		HX_STACK_PUSH("ApplicationMain::main","ApplicationMain.hx",13);
		HX_STACK_LINE(15)
		::nme::Lib_obj::setPackage(HX_CSTRING("Kevin Venables"),HX_CSTRING("Rong"),HX_CSTRING("com.soul.gaming"),HX_CSTRING("1.0.0"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
			HX_STACK_PUSH("*::_Function_1_1","ApplicationMain.hx",40);
			{
				HX_STACK_LINE(41)
				{
				}
				HX_STACK_LINE(47)
				bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::com::soul::gaming::Rong >());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(49)
					while(((_g < _g1->length))){
						HX_STACK_LINE(49)
						::String methodName = _g1->__get(_g);		HX_STACK_VAR(methodName,"methodName");
						HX_STACK_LINE(49)
						++(_g);
						HX_STACK_LINE(51)
						if (((methodName == HX_CSTRING("main")))){
							HX_STACK_LINE(53)
							hasMain = true;
							HX_STACK_LINE(54)
							break;
						}
					}
				}
				HX_STACK_LINE(58)
				if ((hasMain)){
					HX_STACK_LINE(59)
					::Reflect_obj::callMethod(hx::ClassOf< ::com::soul::gaming::Rong >(),::Reflect_obj::field(hx::ClassOf< ::com::soul::gaming::Rong >(),HX_CSTRING("main")),Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(63)
					::nme::Lib_obj::nmeGetCurrent()->addChild(hx::TCast< neash::display::DisplayObject >::cast(::Type_obj::createInstance(hx::ClassOf< ::com::soul::gaming::Rong >(),Dynamic( Array_obj<Dynamic>::__new()))));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(39)
		::nme::Lib_obj::create( Dynamic(new _Function_1_1()),(int)800,(int)400,(int)30,(int)16777215,(int((int((int((int((int((int((int(::nme::Lib_obj::HARDWARE) | int((int)0))) | int(::nme::Lib_obj::RESIZABLE))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0)),HX_CSTRING("Rong"),::ApplicationMain_obj::getAsset(HX_CSTRING("icon.png")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_STACK_PUSH("ApplicationMain::getAsset","ApplicationMain.hx",89);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(92)
	if (((inName == HX_CSTRING("assets/arrow.png")))){
		HX_STACK_LINE(93)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/arrow.png"),null());
	}
	HX_STACK_LINE(99)
	if (((inName == HX_CSTRING("assets/background.png")))){
		HX_STACK_LINE(100)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/background.png"),null());
	}
	HX_STACK_LINE(106)
	if (((inName == HX_CSTRING("assets/backgroundMenu.png")))){
		HX_STACK_LINE(107)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/backgroundMenu.png"),null());
	}
	HX_STACK_LINE(113)
	if (((inName == HX_CSTRING("assets/ball.png")))){
		HX_STACK_LINE(114)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/ball.png"),null());
	}
	HX_STACK_LINE(120)
	if (((inName == HX_CSTRING("assets/cow.jpg")))){
		HX_STACK_LINE(121)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/cow.jpg"),null());
	}
	HX_STACK_LINE(127)
	if (((inName == HX_CSTRING("assets/easy.png")))){
		HX_STACK_LINE(128)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/easy.png"),null());
	}
	HX_STACK_LINE(134)
	if (((inName == HX_CSTRING("assets/hard.png")))){
		HX_STACK_LINE(135)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/hard.png"),null());
	}
	HX_STACK_LINE(141)
	if (((inName == HX_CSTRING("assets/medium.png")))){
		HX_STACK_LINE(142)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/medium.png"),null());
	}
	HX_STACK_LINE(148)
	if (((inName == HX_CSTRING("assets/omg.png")))){
		HX_STACK_LINE(149)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/omg.png"),null());
	}
	HX_STACK_LINE(155)
	if (((inName == HX_CSTRING("assets/paddle.png")))){
		HX_STACK_LINE(156)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/paddle.png"),null());
	}
	HX_STACK_LINE(162)
	if (((inName == HX_CSTRING("assets/sound/Blip_Select.wav")))){
		HX_STACK_LINE(163)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/sound/Blip_Select.wav"));
	}
	HX_STACK_LINE(169)
	if (((inName == HX_CSTRING("assets/subtitle.png")))){
		HX_STACK_LINE(170)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/subtitle.png"),null());
	}
	HX_STACK_LINE(176)
	if (((inName == HX_CSTRING("assets/title.png")))){
		HX_STACK_LINE(177)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/title.png"),null());
	}
	HX_STACK_LINE(184)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,getAsset,return )


ApplicationMain_obj::ApplicationMain_obj()
{
}

void ApplicationMain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationMain);
	HX_MARK_END_CLASS();
}

void ApplicationMain_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	HX_CSTRING("getAsset"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ApplicationMain_obj::__boot()
{
}

