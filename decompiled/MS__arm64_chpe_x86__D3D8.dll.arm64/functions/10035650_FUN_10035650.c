/*
 * FUN_10035650 at 10035650
 * undefined FUN_10035650(void)
 * Address ranges: 10035650-100356ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035650(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10121220(*(int *)(param_1 + 0x28),0,*(uint *)(param_1 + 0x2c) >> 2);
    uVar1 = *(uint *)(param_1 + 0x2c);
    FUN_10121170(*(int *)(param_1 + 0x28) + (uVar1 & 0xfffffffc),0,uVar1 & 3);
  }
  return;
}

