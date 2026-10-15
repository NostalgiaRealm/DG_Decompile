/*
 * FUN_180201118 at 180201118
 * undefined FUN_180201118(void)
 * Address ranges: 180201118-18020117b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180201118(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_D3DPERF_GetStatus_native_180238930;
  FUN_1802012c8();
  FUN_1802229d8(param_1[0xd2]);
  FUN_1802229d8(param_1[0xcb]);
  FUN_1802229d8(param_1[0xc9]);
  lVar2 = 8;
  param_1 = param_1 + 0xc3;
  do {
    puVar1 = param_1 + -0xb;
    lVar2 = lVar2 + -1;
    param_1 = param_1 + -0xc;
    FUN_1802229d8(*puVar1);
  } while (lVar2 != 0);
  return;
}

