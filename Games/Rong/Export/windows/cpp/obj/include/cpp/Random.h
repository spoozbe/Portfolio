#ifndef INCLUDED_cpp_Random
#define INCLUDED_cpp_Random

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cpp,Random)
namespace cpp{


class HXCPP_CLASS_ATTRIBUTES  Random_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Random_obj OBJ_;
		Random_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Random_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Random_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Random"); }

		Dynamic r;
		static Dynamic random_new;
		static Dynamic &random_new_dyn() { return random_new;}
};

} // end namespace cpp

#endif /* INCLUDED_cpp_Random */ 
