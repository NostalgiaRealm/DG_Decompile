/*
 * FUN_1002af90 at 1002af90
 * undefined FUN_1002af90(void)
 * Address ranges: 1002af90-1002afbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002af90(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  *(undefined1 *)(param_1[1] + 0xd5a) = *(undefined1 *)(param_1 + 3);
  FUN_1006f598(uVar1,uVar2,0);
  return;
}

