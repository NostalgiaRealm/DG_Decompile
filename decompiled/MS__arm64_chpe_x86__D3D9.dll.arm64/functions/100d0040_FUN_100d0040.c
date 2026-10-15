/*
 * FUN_100d0040 at 100d0040
 * undefined FUN_100d0040(void)
 * Address ranges: 100d0040-100d00ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d0040(undefined4 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &DAT_1015f834;
  param_1[0x18] = &PTR_FUN_1015e680;
  param_1[0x1c] = &PTR_FUN_1015f7dc;
  uVar1 = FUN_10002a70(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_100d1d70();
  }
  FUN_101322d0(param_1[0x2d]);
  FUN_100016f0(param_1);
  return;
}

