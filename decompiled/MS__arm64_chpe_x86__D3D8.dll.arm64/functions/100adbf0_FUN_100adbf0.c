/*
 * FUN_100adbf0 at 100adbf0
 * undefined FUN_100adbf0(void)
 * Address ranges: 100adbf0-100adc1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100adbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_100ac2d8(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = param_3;
    *(undefined4 *)(iVar1 + 0x20) = param_4;
  }
  return;
}

