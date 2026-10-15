/*
 * FUN_140024c60 at 140024c60
 * undefined8 __fastcall FUN_140024c60(undefined8 param_1)
 * Address ranges: 140024c60-140024c8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140024c60(undefined8 param_1)

{
  if (DAT_14002c2c4 < DAT_14002c2c0) {
    *(undefined8 *)(DAT_14002c2b8 + (ulonglong)DAT_14002c2c4 * 8) = param_1;
    DAT_14002c2c4 = DAT_14002c2c4 + 1;
    return 0;
  }
  return 0xffffffff;
}

