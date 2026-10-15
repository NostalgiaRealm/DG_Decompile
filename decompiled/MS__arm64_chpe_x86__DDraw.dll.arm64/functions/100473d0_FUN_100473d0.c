/*
 * FUN_100473d0 at 100473d0
 * undefined FUN_100473d0(void)
 * Address ranges: 100473d0-10047407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100473d0(int param_1)

{
  undefined8 uVar1;
  
  if (((*(uint *)(param_1 + 0x19c) >> 2 & 1) == 0) ||
     (uVar1 = 1, (*(int *)(param_1 + 0x1a0) + 0xcdaba7bcU & 0xfdffffff) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

