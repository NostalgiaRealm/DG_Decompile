/*
 * FUN_100fed70 at 100fed70
 * undefined FUN_100fed70(void)
 * Address ranges: 100fed70-100fedaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100fed70(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_1013824c < DAT_10138248) {
    *(undefined4 *)(DAT_10138244 + DAT_1013824c * 4) = param_1;
    DAT_1013824c = DAT_1013824c + 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

