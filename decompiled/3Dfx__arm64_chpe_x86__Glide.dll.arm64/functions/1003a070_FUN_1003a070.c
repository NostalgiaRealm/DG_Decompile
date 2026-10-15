/*
 * FUN_1003a070 at 1003a070
 * undefined FUN_1003a070(void)
 * Address ranges: 1003a070-1003a0b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003a070(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = FUN_1002bb88(*(undefined4 *)(*param_1 + 0x315c));
  *(bool *)iVar1 = iVar2 != 0;
  return;
}

