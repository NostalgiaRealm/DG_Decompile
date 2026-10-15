/*
 * FUN_100adb90 at 100adb90
 * undefined FUN_100adb90(void)
 * Address ranges: 100adb90-100adbb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100adb90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100ac2d8(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_3;
  }
  return;
}

