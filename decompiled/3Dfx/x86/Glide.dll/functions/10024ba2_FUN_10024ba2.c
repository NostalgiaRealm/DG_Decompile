/*
 * FUN_10024ba2 at 10024ba2
 * undefined __cdecl FUN_10024ba2(int * param_1)
 * Address ranges: 10024ba2-10024bc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10024ba2(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = FUN_1001c45b(*(int *)(*param_1 + 0x315c));
  *(bool *)iVar1 = iVar2 != 0;
  return;
}

