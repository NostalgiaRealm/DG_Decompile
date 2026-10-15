/*
 * FUN_100e4e80 at 100e4e80
 * undefined FUN_100e4e80(void)
 * Address ranges: 100e4e80-100e4eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e4e80(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 < 0x10 && param_3 != (undefined4 *)0x0) {
    uVar1 = 0;
    *param_3 = *(undefined4 *)(param_1 + param_2 * 4 + 0x5bdc);
  }
  return uVar1;
}

