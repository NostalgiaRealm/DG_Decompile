/*
 * FUN_10026669 at 10026669
 * undefined __cdecl FUN_10026669(undefined4 * param_1)
 * Address ranges: 10026669-10026697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10026669(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)*param_1;
  piVar2 = (int *)param_1[1];
  FUN_1001ae38(piVar2);
  FUN_100500b0(piVar2 + 0xa6c,puVar1,piVar2[0x36]);
  return;
}

