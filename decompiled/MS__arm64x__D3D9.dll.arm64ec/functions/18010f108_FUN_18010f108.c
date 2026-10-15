/*
 * FUN_18010f108 at 18010f108
 * undefined FUN_18010f108(void)
 * Address ranges: 18010f108-18010f133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010f108(longlong param_1,uint param_2)

{
  if (-1 < (int)param_2) {
    *(byte *)(param_1 + 0x14 + (longlong)((int)param_2 >> 3)) =
         *(byte *)(param_1 + 0x14 + (longlong)((int)param_2 >> 3)) &
         ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  }
  return;
}

