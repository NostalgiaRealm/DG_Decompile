/*
 * FUN_10017b4c at 10017b4c
 * undefined __cdecl FUN_10017b4c(int * param_1)
 * Address ranges: 10017b4c-10017b6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10017b4c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = FUN_10010251(*(int *)(*param_1 + 0x32dc));
  *(bool *)iVar1 = iVar2 != 0;
  return;
}

