/*
 * FUN_1002dfb0 at 1002dfb0
 * undefined FUN_1002dfb0(void)
 * Address ranges: 1002dfb0-1002e01f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002dfb0(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_1005b390(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3308) + 0x1640,
                         *(undefined4 *)(param_1 + 0x1f8 + uVar2 * 4));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  FUN_10061078(uVar1,2,param_1 + 0x1f8);
  return;
}

