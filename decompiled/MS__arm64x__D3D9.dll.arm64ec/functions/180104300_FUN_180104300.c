/*
 * FUN_180104300 at 180104300
 * undefined FUN_180104300(void)
 * Address ranges: 180104300-180104347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180104300(int *param_1,undefined8 param_2,longlong param_3)

{
  if ((*param_1 == -0x3fffffe3) && ((**(uint **)(param_3 + 0x108) & 0xffffffe0) == 0xd5384240)) {
    *(uint **)(param_3 + 0x108) = *(uint **)(param_3 + 0x108) + 1;
    return 0;
  }
  return 1;
}

