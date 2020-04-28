#include <stdio.h>

#include <dlfcn.h>

int main(void)    
{
void* sdl_library = dlopen("./.build/release/libHello.dylib", RTLD_LAZY);
if (sdl_library == NULL) {
  printf("Error");
} else {
  printf("Success");


	void* initializer = dlsym(sdl_library,"MAKW_test");
	if (initializer == NULL) {
	   printf("Error dlsym");
	} else {
	   // cast initializer to its proper type and use
	   printf("Success dlsym");
	}
}

  return 0;
}
