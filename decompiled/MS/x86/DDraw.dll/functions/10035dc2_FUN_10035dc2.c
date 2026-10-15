/*
 * FUN_10035dc2 at 10035dc2
 * undefined __stdcall FUN_10035dc2(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10035dc2-10035deb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035dc2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = FUN_1002356c(piVar1 + 0xb,0x100623f0);
  (**(code **)(*piVar1 + 0x34))(param_2,param_3,iVar2);
  return;
}

