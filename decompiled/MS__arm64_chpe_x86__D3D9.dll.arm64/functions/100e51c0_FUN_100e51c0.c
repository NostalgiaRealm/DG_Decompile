/*
 * FUN_100e51c0 at 100e51c0
 * undefined FUN_100e51c0(void)
 * Address ranges: 100e51c0-100e520b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e51c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x5bd0) == 0) {
    *param_2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100e6fa0(*(int *)(param_1 + 0x5bd0),&DAT_1015e500,param_2);
  }
  return uVar1;
}

