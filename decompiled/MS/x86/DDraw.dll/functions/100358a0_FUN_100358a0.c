/*
 * FUN_100358a0 at 100358a0
 * undefined __stdcall FUN_100358a0(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100358a0-100358c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100358a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = FUN_1002356c(piVar1 + 0xb,0x100623c0);
  (**(code **)(*piVar1 + 0x34))(param_2,param_3,iVar2);
  return;
}

