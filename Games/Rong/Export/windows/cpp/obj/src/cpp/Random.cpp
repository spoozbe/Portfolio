#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_cpp_Random
#include <cpp/Random.h>
#endif
namespace cpp{

Void Random_obj::__construct()
{
HX_STACK_FRAME("cpp.Random","new",0x535de600,"cpp.Random.new","C:\\HaxeToolkit\\haxe\\std/cpp/Random.hx",28,0x9700c1d6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	Dynamic _g = ::cpp::Random_obj::random_new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(29)
	this->r = _g;
}
;
	return null();
}

//Random_obj::~Random_obj() { }

Dynamic Random_obj::__CreateEmpty() { return  new Random_obj; }
hx::ObjectPtr< Random_obj > Random_obj::__new()
{  hx::ObjectPtr< Random_obj > result = new Random_obj();
	result->__construct();
	return result;}

Dynamic Random_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Random_obj > result = new Random_obj();
	result->__construct();
	return result;}

Dynamic Random_obj::random_new;


Random_obj::Random_obj()
{
}

void Random_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Random);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_END_CLASS();
}

void Random_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
}

Dynamic Random_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"random_new") ) { return random_new; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Random_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"random_new") ) { random_new=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Random_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("random_new"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Random_obj,r),HX_CSTRING("r")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("r"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Random_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Random_obj::random_new,"random_new");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Random_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Random_obj::random_new,"random_new");
};

#endif

Class Random_obj::__mClass;

void Random_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.Random"), hx::TCanCast< Random_obj> ,sStaticFields,sMemberFields,
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

void Random_obj::__boot()
{
	random_new= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("random_new"),(int)0);
}

} // end namespace cpp
