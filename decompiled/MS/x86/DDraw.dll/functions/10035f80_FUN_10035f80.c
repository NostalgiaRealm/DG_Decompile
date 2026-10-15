/*
 * FUN_10035f80 at 10035f80
 * undefined __stdcall FUN_10035f80(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10035f80-10035fa9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035f80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = FUN_1002356c(piVar1 + 0xb,0x10062400);
  (**(code **)(*piVar1 + 0x34))(param_2,param_3,iVar2);
  return;
}

