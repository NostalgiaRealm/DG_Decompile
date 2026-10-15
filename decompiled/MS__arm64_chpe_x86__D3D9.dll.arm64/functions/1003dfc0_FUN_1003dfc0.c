/*
 * FUN_1003dfc0 at 1003dfc0
 * undefined FUN_1003dfc0(void)
 * Address ranges: 1003dfc0-1003e033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003dfc0(void)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar1);
  iVar2 = FUN_1012f8a0(DAT_10170ad0,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_1012f840(iVar2,0,FUN_1012fa90);
    *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  }
  return;
}

