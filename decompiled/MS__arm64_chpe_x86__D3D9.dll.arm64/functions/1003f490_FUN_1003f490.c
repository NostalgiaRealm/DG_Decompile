/*
 * FUN_1003f490 at 1003f490
 * undefined FUN_1003f490(void)
 * Address ranges: 1003f490-1003f4eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003f490(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10157c90(*(int *)(param_1 + 0x28),0,*(uint *)(param_1 + 0x2c) >> 2);
    uVar1 = *(uint *)(param_1 + 0x2c);
    FUN_10157d40(*(int *)(param_1 + 0x28) + (uVar1 & 0xfffffffc),0,uVar1 & 3);
  }
  return;
}

