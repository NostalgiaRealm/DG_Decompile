/*
 * FUN_10057dde at 10057dde
 * undefined __fastcall FUN_10057dde(int * param_1)
 * Address ranges: 10057dde-10057dfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10057dde(int *param_1)

{
  int iVar1;
  
  *(int *)(*param_1 + 0x18) = param_1[1] - *param_1;
  iVar1 = *param_1;
  FUN_1005bf3b(iVar1,param_1[1] - iVar1,(undefined4 *)(iVar1 + 4));
  return;
}

