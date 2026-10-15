/*
 * FUN_100340f0 at 100340f0
 * undefined FUN_100340f0(void)
 * Address ranges: 100340f0-10034163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100340f0(void)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar1);
  iVar2 = FUN_100fc2d0(DAT_1013ceec,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_100fc270(iVar2,0,FUN_100fc4c0);
    *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  }
  return;
}

