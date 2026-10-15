/*
 * FUN_1003555b at 1003555b
 * undefined __stdcall FUN_1003555b(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1003555b-10035584
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003555b(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = FUN_1002356c(piVar1 + 0xb,0x10062560);
  (**(code **)(*piVar1 + 0x34))(param_2,param_3,iVar2);
  return;
}

