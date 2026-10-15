/*
 * FUN_1002672b at 1002672b
 * undefined1 __thiscall FUN_1002672b(void * this, int * param_1, int param_2)
 * Address ranges: 1002672b-100267ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1002672b(void *this,int *param_1,int param_2)

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
      goto LAB_1002676a;
    }
  }
  param_1._3_1_ = 1;
LAB_1002676a:
  if (piVar4 == (int *)0x0) {
    bVar1 = 1;
  }
  else {
    bVar1 = (**(code **)(*piVar4 + 0x54))();
  }
  if ((param_1._3_1_ & bVar1) != 0) {
    return 1;
  }
  FUN_1005c2e0(*(int *)((int)this + 0x1d54) + 0x11c0);
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

