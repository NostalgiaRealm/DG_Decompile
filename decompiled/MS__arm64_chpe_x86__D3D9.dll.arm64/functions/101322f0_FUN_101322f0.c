/*
 * FUN_101322f0 at 101322f0
 * undefined FUN_101322f0(void)
 * Address ranges: 101322f0-1013232f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_101322f0(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_10170aac < DAT_10170aa8) {
    *(undefined4 *)(DAT_10170aa4 + DAT_10170aac * 4) = param_1;
    DAT_10170aac = DAT_10170aac + 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

