/*
 * FUN_1003c1d0 at 1003c1d0
 * undefined1 __thiscall FUN_1003c1d0(void * this, int * param_1, int param_2)
 * Address ranges: 1003c1d0-1003c25f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1003c1d0(void *this,int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)(*param_1 + -0xc0);
  if (*param_1 == 0) {
    piVar4 = (int *)0x0;
  }
  if (param_2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(param_2 + -0xc0);
    if (piVar3 != (int *)0x0) {
      param_1._3_1_ = (**(code **)(*piVar3 + 0x54))();
      goto LAB_1003c20f;
    }
  }
  param_1._3_1_ = 1;
LAB_1003c20f:
  if (piVar4 == (int *)0x0) {
    bVar1 = 1;
  }
  else {
    bVar1 = (**(code **)(*piVar4 + 0x54))();
  }
  if ((param_1._3_1_ & bVar1) != 0) {
    return 1;
  }
  FUN_100ac680(*(int *)((int)this + 0xd9b8) + 0x11c0);
  if ((piVar4 == (int *)0x0) || (cVar2 = (**(code **)(*piVar4 + 0x74))(), cVar2 != '\0')) {
    if (piVar3 == (int *)0x0) {
      return 1;
    }
    cVar2 = (**(code **)(*piVar3 + 0x74))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

