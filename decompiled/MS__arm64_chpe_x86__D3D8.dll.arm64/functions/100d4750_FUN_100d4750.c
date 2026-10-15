/*
 * FUN_100d4750 at 100d4750
 * undefined FUN_100d4750(void)
 * Address ranges: 100d4750-100d4767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d4750(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(param_1 + 0x3ac) == 0xc000) {
    uVar1 = 6;
  }
  return uVar1;
}

