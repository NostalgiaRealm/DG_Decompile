/*
 * FUN_180041b80 at 180041b80
 * longlong * __fastcall FUN_180041b80(longlong * param_1, uint param_2)
 * Address ranges: 180041b80-180041c8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180041b80(longlong *param_1,uint param_2)

{
  *param_1 = (longlong)&PTR_FUN_1801020a0;
  param_1[0x1eda] = (longlong)&PTR_LAB_180102098;
  FUN_180042ae0(param_1);
  FUN_1800fbcf0((LPVOID)param_1[8000]);
  param_1[8000] = 0;
  param_1[0x1f41] = 0;
  param_1[0x1f42] = 0;
  FUN_18005678c(param_1 + 0x1f01);
  FUN_1800fbcf0((LPVOID)param_1[0x1efa]);
  FUN_180041778(param_1 + 0x1ef7);
  FUN_1800591f4((longlong)(param_1 + 0x1ef2));
  FUN_1800fbcf0((LPVOID)param_1[0x1ef4]);
  param_1[0x1ef4] = 0;
  param_1[0x1ef5] = 0;
  param_1[0x1ef6] = 0;
  FUN_1800fbcf0((LPVOID)param_1[0x1eef]);
  FUN_180056578((longlong)(param_1 + 0x1ee9));
  FUN_1800fbcf0((LPVOID)param_1[0x1eec]);
  param_1[0x1eec] = 0;
  param_1[0x1eed] = 0;
  param_1[0x1eee] = 0;
  *param_1 = (longlong)&PTR_FUN_1801019e0;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

