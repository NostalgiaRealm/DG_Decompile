/*
 * FUN_10021b00 at 10021b00
 * undefined FUN_10021b00(void)
 * Address ranges: 10021b00-10021b57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021b00(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_10046360(*(int *)(*(int *)(param_1 + 0x138) + 0x3308) + 0x11c0);
  if ((uVar1 & 1) == 0) {
    FUN_100462b8(*(int *)(*(int *)(param_1 + 0x138) + 0x3308) + 0x11c0);
  }
  return;
}

