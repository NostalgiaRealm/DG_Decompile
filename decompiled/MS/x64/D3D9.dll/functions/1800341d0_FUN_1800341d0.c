/*
 * FUN_1800341d0 at 1800341d0
 * undefined8 * __fastcall FUN_1800341d0(undefined8 * param_1, uint param_2)
 * Address ranges: 1800341d0-180034289
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800341d0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_1801017d8;
  FUN_180034a00((longlong)param_1);
  FUN_18003f330((longlong)(param_1 + 0x1ef0));
  FUN_1800fbcf0((LPVOID)param_1[0x1ef2]);
  param_1[0x1ef2] = 0;
  param_1[0x1ef3] = 0;
  param_1[0x1ef4] = 0;
  FUN_1800fbcf0((LPVOID)param_1[0x1eea]);
  FUN_18003dab8((longlong)(param_1 + 0x1ee5));
  FUN_1800fbcf0((LPVOID)param_1[0x1ee7]);
  param_1[0x1ee7] = 0;
  param_1[0x1ee8] = 0;
  param_1[0x1ee9] = 0;
  *param_1 = &PTR_FUN_1801019e0;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

