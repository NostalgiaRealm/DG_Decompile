/*
 * FUN_10046c72 at 10046c72
 * undefined __thiscall FUN_10046c72(void * this, int param_1, undefined4 param_2, undefined4 param_3, int * param_4)
 * Address ranges: 10046c72-10046ca6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10046c72(void *this,int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)this + param_1 * 0x1510 + 0x598);
  if (*piVar2 != *param_4) {
    *piVar2 = *param_4;
    piVar1 = *(int **)(param_1 * 0x1510 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x28))(piVar1,1,1,piVar2);
  }
  return;
}

