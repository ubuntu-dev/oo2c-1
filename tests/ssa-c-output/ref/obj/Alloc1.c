#include "./Alloc1.d"
#include "__oo2c.h"

static void Alloc1__F(OOC_INT16 a) {
  register OOC_INT32 i0,i1;

  i0 = a;
  i1 = i0<0;
  if (i1) goto l3;
  i0 = i0-1;
  Out0__Int(i0, 0);
  goto l4;
l3:
  i0 = i0+1;
  Out0__Int(i0, 0);
l4:
  Out0__Ln();
  return;
}

void Alloc1__Test() {

  Alloc1__F(-1);
  Alloc1__F(1);
  return;
}

void Alloc1_init(void) {

  return;
}

/* --- */