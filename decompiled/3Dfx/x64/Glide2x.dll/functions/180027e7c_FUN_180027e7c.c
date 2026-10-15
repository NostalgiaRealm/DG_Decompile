/*
 * FUN_180027e7c at 180027e7c
 * undefined __fastcall FUN_180027e7c(longlong * param_1)
 * Address ranges: 180027e7c-180027ee2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027e7c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[7];
  FUN_18002f128(lVar1 + 0x3b60,0,0);
  if (param_1 + 1 != (longlong *)0x0) {
    FUN_180049964(*(longlong *)(*(longlong *)(lVar1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(lVar1 + 0x3200),*(longlong *)(lVar1 + 0x31c0) + 0x16d0,
                  (longlong)(param_1 + 1),(int)lVar2);
  }
  return;
}

