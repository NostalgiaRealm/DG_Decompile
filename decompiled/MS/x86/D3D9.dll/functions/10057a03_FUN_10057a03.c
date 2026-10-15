/*
 * FUN_10057a03 at 10057a03
 * undefined __thiscall FUN_10057a03(void * this, int param_1, int param_2, int * param_3)
 * Address ranges: 10057a03-10057a38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10057a03(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(*(int *)this + 0xec))(0);
  piVar2 = (int *)((int)this + (param_1 + 0x454) * 4);
  for (iVar1 = param_2 - param_1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_3;
    param_3 = param_3 + 1;
    piVar2 = piVar2 + 1;
  }
  *(undefined1 *)((int)this + 0xf695) = 1;
  return;
}

