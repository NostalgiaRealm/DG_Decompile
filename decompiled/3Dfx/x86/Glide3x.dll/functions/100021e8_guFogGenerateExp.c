/*
 * guFogGenerateExp at 100021e8
 * undefined __stdcall guFogGenerateExp(int param_1)
 * Address ranges: 100021e8-10002275
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guFogGenerateExp,8
 */

/* __stdcall guFogGenerateExp,8 */

void guFogGenerateExp(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
                    /* 0x21e8  97  _guFogGenerateExp@8 */
  FUN_1002a956(0x3f);
  FUN_1002baa0();
  uVar1 = 0;
  do {
    FUN_1002a956(uVar1);
    FUN_1002baa0();
    lVar2 = FUN_10053160();
    *(char *)(uVar1 + param_1) = (char)lVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  return;
}

