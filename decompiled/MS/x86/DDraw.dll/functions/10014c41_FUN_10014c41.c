/*
 * FUN_10014c41 at 10014c41
 * undefined __thiscall FUN_10014c41(void * this, int * param_1)
 * Address ranges: 10014c41-10014c6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014c41(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (iVar1 == 1) {
    FUN_1005c061((void *)(*(int *)((int)this + 8) + 0x1580),param_1);
  }
  return;
}

