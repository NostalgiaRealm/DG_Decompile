/*
 * FUN_10037c10 at 10037c10
 * undefined FUN_10037c10(void)
 * Address ranges: 10037c10-10037ccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10037c10(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_101294dc;
  FUN_100383b0(param_1);
  FUN_10043520(param_1 + 0x3684);
  FUN_100fed00(param_1[0x3687]);
  *(undefined8 *)(param_1 + 0x3687) = 0;
  *(undefined8 *)(param_1 + 0x3689) = 0;
  FUN_100fed00(param_1[0x367d]);
  FUN_100426d8(param_1 + 0x3677);
  FUN_100fed00(param_1[0x3679]);
  *(undefined8 *)(param_1 + 0x3679) = 0;
  *(undefined8 *)(param_1 + 0x367b) = 0;
  *param_1 = &PTR_FUN_101295a8;
  if ((param_2 & 1) != 0) {
    FUN_100fec90(param_1,0xdf10);
  }
  return param_1;
}

