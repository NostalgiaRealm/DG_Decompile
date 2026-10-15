/*
 * FUN_10019f20 at 10019f20
 * undefined FUN_10019f20(void)
 * Address ranges: 10019f20-10019faf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019f20(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[2] != 0) {
    do {
      FUN_101322d0(*(undefined4 *)(param_1[1] + uVar1 * 0x20 + 0x10));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[2]);
  }
  FUN_101322d0(*param_1);
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

