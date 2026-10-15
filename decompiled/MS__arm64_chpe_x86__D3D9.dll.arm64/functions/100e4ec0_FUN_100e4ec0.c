/*
 * FUN_100e4ec0 at 100e4ec0
 * undefined FUN_100e4ec0(void)
 * Address ranges: 100e4ec0-100e4f0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e4ec0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x5bd4) == 0) {
    *param_2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100ec150(*(int *)(param_1 + 0x5bd4),&DAT_1015e4f0,param_2);
  }
  return uVar1;
}

