/*
 * FUN_180090460 at 180090460
 * undefined FUN_180090460(void)
 * Address ranges: 180090460-1800904b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180090460(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = CONCAT44(0,param_2 * param_3);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  lVar2 = uVar3 << 5;
  if (SUB168(auVar1 * ZEXT816(0x20),8) != 0) {
    lVar2 = -1;
  }
  lVar2 = thunk_FUN_180102f80(lVar2);
  *(longlong *)(param_1 + 0x24) = lVar2;
  if (lVar2 != 0) {
    func_0x000180222c50(lVar2,0,(uVar3 & 0x7ffffff) << 5);
  }
  return *(longlong *)(param_1 + 0x24) != 0;
}

