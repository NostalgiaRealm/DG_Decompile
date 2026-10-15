/*
 * FUN_100065c8 at 100065c8
 * undefined FUN_100065c8(void)
 * Address ranges: 100065c8-10006633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100065c8(void)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar1);
  iVar2 = FUN_1008f3b8(DAT_100be0c0,uVar1);
  if (iVar2 != 0) {
    FUN_1008ec10(iVar2,0,*(undefined4 *)(iVar2 + 0x1c));
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  return;
}

