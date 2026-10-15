/*
 * FUN_1004428e at 1004428e
 * undefined __thiscall FUN_1004428e(void * this, int param_1, int param_2, undefined4 param_3, int * param_4)
 * Address ranges: 1004428e-100442c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004428e(void *this,int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + (param_2 + 0x21) * 4 + param_1 * 0x1510 + 0x510);
  if (*piVar1 != *param_4) {
    *piVar1 = *param_4;
    piVar2 = *(int **)((int)this + param_1 * 0x1510 + 0x514);
    (**(code **)(*piVar2 + 0x28))(piVar2,param_2,1,piVar1);
  }
  return;
}

