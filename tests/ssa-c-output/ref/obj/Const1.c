#include "./Const1.d"
#include "__oo2c.h"

static OOC_INT16 Const1__F() {

  return 12;
}

void Const1__Test() {
  register OOC_INT32 i0;

  i0 = Const1__F();
  Out0__Int(i0, 0);
  Out0__Ln();
  return;
}

void Const1_init(void) {

  return;
}

/* --- */