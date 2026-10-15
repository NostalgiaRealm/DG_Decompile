/*
 * FUN_10019928 at 10019928
 * undefined __cdecl FUN_10019928(undefined4 * param_1)
 * Address ranges: 10019928-10019956
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10019928(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)*param_1;
  piVar2 = (int *)param_1[1];
  FUN_100084dc(piVar2);
  FUN_10052930(piVar2 + 0xa93,puVar1,piVar2[0x36]);
  return;
}

