/*
 * FUN_100579c8 at 100579c8
 * undefined __thiscall FUN_100579c8(void * this, int param_1, int param_2, int * param_3)
 * Address ranges: 100579c8-10057a02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100579c8(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(*(int *)this + 0xec))(0);
  piVar2 = (int *)(param_1 * 0x10 + 0x1050 + (int)this);
  for (iVar1 = (param_2 - param_1) * 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_3;
    param_3 = param_3 + 1;
    piVar2 = piVar2 + 1;
  }
  *(undefined1 *)((int)this + 0xf695) = 1;
  return;
}

