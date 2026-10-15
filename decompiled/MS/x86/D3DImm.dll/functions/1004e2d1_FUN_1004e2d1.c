/*
 * FUN_1004e2d1 at 1004e2d1
 * undefined __stdcall FUN_1004e2d1(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1004e2d1-1004e2fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004e2d1(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = FUN_10042a6d((void *)(iVar1 + 4),0x1005d2a0);
  (**(code **)(**(int **)(iVar1 + 0x60) + 0x34))(param_2,param_3,iVar2);
  return;
}

