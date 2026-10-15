/*
 * FUN_100c5020 at 100c5020
 * undefined FUN_100c5020(void)
 * Address ranges: 100c5020-100c504f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c5020(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  *(undefined1 *)(param_1[1] + 0xd5a) = *(undefined1 *)(param_1 + 3);
  FUN_10110388(uVar1,uVar2,0);
  return;
}

