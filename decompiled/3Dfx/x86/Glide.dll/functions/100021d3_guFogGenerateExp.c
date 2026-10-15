/*
 * guFogGenerateExp at 100021d3
 * undefined __stdcall guFogGenerateExp(int param_1)
 * Address ranges: 100021d3-10002260
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guFogGenerateExp,8
 */

/* __stdcall guFogGenerateExp,8 */

void guFogGenerateExp(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
                    /* 0x21d3  119  _guFogGenerateExp@8 */
  FUN_10004e2f(0x3f);
  FUN_100051a0();
  uVar1 = 0;
  do {
    FUN_10004e2f(uVar1);
    FUN_100051a0();
    lVar2 = FUN_100508e0();
    *(char *)(uVar1 + param_1) = (char)lVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  return;
}

