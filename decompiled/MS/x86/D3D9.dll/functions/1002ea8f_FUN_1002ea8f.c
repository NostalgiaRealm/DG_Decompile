/*
 * FUN_1002ea8f at 1002ea8f
 * undefined __thiscall FUN_1002ea8f(void * this, int param_1)
 * Address ranges: 1002ea8f-1002eac6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002ea8f(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x14c) * 0x1510 + 0x520 + *(int *)((int)this + 0x148));
  *(bool *)param_1 = 0xafff < iVar1;
  *(bool *)(param_1 + 1) = 0xa0ff < iVar1;
  return;
}

