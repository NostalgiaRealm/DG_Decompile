/*
 * guFogGenerateLinear at 10002239
 * undefined __stdcall guFogGenerateLinear(int param_1)
 * Address ranges: 10002239-1000228d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guFogGenerateLinear,12
 */

/* __stdcall guFogGenerateLinear,12 */

void guFogGenerateLinear(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
                    /* 0x2239  120  _guFogGenerateLinear@12 */
  uVar2 = 0;
  do {
    FUN_1002dccf(uVar2);
    lVar3 = FUN_10056570();
    iVar1 = (int)lVar3;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0xff < iVar1) {
      iVar1 = 0xff;
    }
    *(char *)(uVar2 + param_1) = (char)iVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  return;
}

