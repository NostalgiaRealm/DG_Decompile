/*
 * FUN_100262df at 100262df
 * undefined __cdecl FUN_100262df(undefined4 * param_1)
 * Address ranges: 100262df-1002630d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100262df(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)*param_1;
  piVar2 = (int *)param_1[1];
  FUN_1001aaad(piVar2);
  FUN_1004fd20(piVar2 + 0xa6c,puVar1,piVar2[0x36]);
  return;
}

