#include "ruby.h"


VALUE rb_makw_mac_os_metal_test() {

	
  	return Qnil;
}


void Init_jewel()
{
    VALUE mod = rb_define_module("Jewel");
    rb_define_method(mod, "makw_mac_os_metal_test", rb_makw_mac_os_metal_test, 0);
}

