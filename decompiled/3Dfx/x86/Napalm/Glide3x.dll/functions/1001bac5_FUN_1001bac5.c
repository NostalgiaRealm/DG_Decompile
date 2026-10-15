/*
 * FUN_1001bac5 at 1001bac5
 * undefined __cdecl FUN_1001bac5(undefined4 * param_1)
 * Address ranges: 1001bac5-1001baf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001bac5(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)*param_1;
  piVar2 = (int *)param_1[1];
  FUN_10008a86(piVar2);
  FUN_10055d40(piVar2 + 0xae3,puVar1,piVar2[0x37]);
  return;
}

