/*
 * FUN_100e4de0 at 100e4de0
 * undefined FUN_100e4de0(void)
 * Address ranges: 100e4de0-100e4e2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e4de0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x5bd8) == 0) {
    *param_2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100eb960(*(int *)(param_1 + 0x5bd8),&DAT_1015e4e0,param_2);
  }
  return uVar1;
}

