/*
 * FUN_180028324 at 180028324
 * undefined __fastcall FUN_180028324(longlong * param_1)
 * Address ranges: 180028324-18002838a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028324(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[7];
  FUN_18002f5d0(lVar1 + 0x3b60,0,0);
  if (param_1 + 1 != (longlong *)0x0) {
    FUN_180049e0c(*(longlong *)(*(longlong *)(lVar1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(lVar1 + 0x3200),*(longlong *)(lVar1 + 0x31c0) + 0x16d0,
                  (longlong)(param_1 + 1),(int)lVar2);
  }
  return;
}

