/*
 * FUN_1801a6db8 at 1801a6db8
 * undefined FUN_1801a6db8(void)
 * Address ranges: 1801a6db8-1801a6e0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801a6db8(longlong param_1,int param_2,int param_3)

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
  lVar2 = FUN_1802229a8(lVar2);
  *(longlong *)(param_1 + 0x24) = lVar2;
  if (lVar2 != 0) {
    FUN_180222c50(lVar2,0,(uVar3 & 0x7ffffff) << 5);
  }
  return *(longlong *)(param_1 + 0x24) != 0;
}

