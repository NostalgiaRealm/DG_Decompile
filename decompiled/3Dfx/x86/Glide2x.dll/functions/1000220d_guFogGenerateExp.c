/*
 * guFogGenerateExp at 1000220d
 * undefined __stdcall guFogGenerateExp(int param_1)
 * Address ranges: 1000220d-1000229a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guFogGenerateExp,8
 */

/* __stdcall guFogGenerateExp,8 */

void guFogGenerateExp(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
                    /* 0x220d  115  _guFogGenerateExp@8 */
  FUN_10004ae1(0x3f);
  FUN_10004e50();
  uVar1 = 0;
  do {
    FUN_10004ae1(uVar1);
    FUN_10004e50();
    lVar2 = FUN_10050550();
    *(char *)(uVar1 + param_1) = (char)lVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  return;
}

