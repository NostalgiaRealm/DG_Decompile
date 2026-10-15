/*
 * FUN_10006550 at 10006550
 * undefined FUN_10006550(void)
 * Address ranges: 10006550-100065c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006550(void)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar1);
  iVar2 = FUN_1008f3b8(DAT_100be0c0,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_1008ec10(iVar2,0,FUN_1008f5a0);
    *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  }
  return;
}

