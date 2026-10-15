/*
 * FUN_1009b4b0 at 1009b4b0
 * longlong __fastcall FUN_1009b4b0(undefined4 param_1, uint param_2)
 * Address ranges: 1009b4b0-1009b4fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong __fastcall FUN_1009b4b0(undefined4 param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    do {
      lVar3 = __allshl((byte)((uVar2 & 1) << 5),0);
      lVar3 = lVar3 + lVar1;
      uVar2 = uVar2 + 1;
      lVar1 = lVar3;
    } while (uVar2 < param_2);
  }
  return lVar3;
}

