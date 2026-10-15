/*
 * FUN_10034168 at 10034168
 * undefined FUN_10034168(void)
 * Address ranges: 10034168-100341d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10034168(void)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar1);
  iVar2 = FUN_100fc2d0(DAT_1013ceec,uVar1);
  if (iVar2 != 0) {
    FUN_100fc270(iVar2,0,*(undefined4 *)(iVar2 + 0x1c));
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  return;
}

