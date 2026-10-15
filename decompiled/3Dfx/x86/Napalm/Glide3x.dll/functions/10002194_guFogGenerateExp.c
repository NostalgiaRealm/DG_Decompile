/*
 * guFogGenerateExp at 10002194
 * undefined __stdcall guFogGenerateExp(int param_1)
 * Address ranges: 10002194-10002221
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guFogGenerateExp,8
 */

/* __stdcall guFogGenerateExp,8 */

void guFogGenerateExp(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
                    /* 0x2194  119  _guFogGenerateExp@8 */
  FUN_1002dccf(0x3f);
  FUN_1002eeb0();
  uVar1 = 0;
  do {
    FUN_1002dccf(uVar1);
    FUN_1002eeb0();
    lVar2 = FUN_10056570();
    *(char *)(uVar1 + param_1) = (char)lVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  return;
}

