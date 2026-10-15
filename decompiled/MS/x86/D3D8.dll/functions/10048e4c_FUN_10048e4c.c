/*
 * FUN_10048e4c at 10048e4c
 * undefined __thiscall FUN_10048e4c(void * this, int param_1, int param_2, int * param_3)
 * Address ranges: 10048e4c-10048e86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10048e4c(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(*(int *)this + 0xc0))(0);
  piVar2 = (int *)(param_1 * 0x10 + 0x730 + (int)this);
  for (iVar1 = (param_2 - param_1) * 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_3;
    param_3 = param_3 + 1;
    piVar2 = piVar2 + 1;
  }
  *(undefined1 *)((int)this + 0xd9a5) = 1;
  return;
}

