/*
 * FUN_180198260 at 180198260
 * undefined FUN_180198260(void)
 * Address ranges: 180198260-1801982c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180198260(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar2 = CONCAT44(0,param_2 * param_3);
    lVar3 = uVar2 * 0x28;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    if (SUB168(auVar1 * ZEXT816(0x28),8) != 0) {
      lVar3 = -1;
    }
    lVar3 = FUN_1802229a8(lVar3);
    *(longlong *)(param_1 + 0x30) = lVar3;
    if (lVar3 != 0) {
      FUN_180222c50(lVar3,0,uVar2 * 0x28);
    }
  }
  return *(longlong *)(param_1 + 0x30) != 0;
}

