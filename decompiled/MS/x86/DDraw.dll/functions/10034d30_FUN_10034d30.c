/*
 * FUN_10034d30 at 10034d30
 * undefined __stdcall FUN_10034d30(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10034d30-10034d59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10034d30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = FUN_1002356c(piVar1 + 0x11,0x10062380);
  (**(code **)(*piVar1 + 0x20))(param_2,param_3,iVar2);
  return;
}

