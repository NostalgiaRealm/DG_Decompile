/*
 * FUN_1801b15c0 at 1801b15c0
 * undefined FUN_1801b15c0(void)
 * Address ranges: 1801b15c0-1801b15db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b15c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[2];
  uVar1 = *param_1;
  *(undefined1 *)(param_1[1] + 0xd6a) = *(undefined1 *)(param_1 + 3);
  FUN_180203408(uVar1,uVar2,0);
  return;
}

