/*
 * FUN_100a15a6 at 100a15a6
 * undefined __fastcall FUN_100a15a6(int * param_1)
 * Address ranges: 100a15a6-100a15c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100a15a6(int *param_1)

{
  int iVar1;
  
  *(int *)(*param_1 + 0x18) = param_1[1] - *param_1;
  iVar1 = *param_1;
  FUN_100a86f1(iVar1,param_1[1] - iVar1,(undefined4 *)(iVar1 + 4));
  return;
}

