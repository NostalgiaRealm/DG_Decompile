/*
 * FUN_18009a0e0 at 18009a0e0
 * undefined FUN_18009a0e0(void)
 * Address ranges: 18009a0e0-18009a0fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009a0e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[2];
  uVar1 = *param_1;
  *(undefined1 *)(param_1[1] + 0xd6a) = *(undefined1 *)(param_1 + 3);
  FUN_1800e6028(uVar1,uVar2,0);
  return;
}

