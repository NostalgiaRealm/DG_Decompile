/*
 * FUN_1001a110 at 1001a110
 * undefined __cdecl FUN_1001a110(int * param_1)
 * Address ranges: 1001a110-1001a130
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001a110(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = FUN_100115ad(*(int *)(*param_1 + 0x365c));
  *(bool *)iVar1 = iVar2 != 0;
  return;
}

