/*
 * FUN_180113ec8 at 180113ec8
 * undefined FUN_180113ec8(void)
 * Address ranges: 180113ec8-180113f13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180113ec8(uint *param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    param_1[lVar1 + 0x16] = 0xffffffff;
    param_1[lVar1 + 6] = 0xffffffff;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  param_1[0x26] =
       1 << (ulonglong)(param_1[2] & 0x1f) | 1 << (ulonglong)(param_1[1] & 0x1f) |
       1 << (ulonglong)(*param_1 & 0x1f);
  param_1[0x27] = 0;
  return;
}

