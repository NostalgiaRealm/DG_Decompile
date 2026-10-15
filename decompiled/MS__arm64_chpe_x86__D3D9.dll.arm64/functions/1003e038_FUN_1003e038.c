/*
 * FUN_1003e038 at 1003e038
 * undefined FUN_1003e038(void)
 * Address ranges: 1003e038-1003e0a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e038(void)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar1);
  iVar2 = FUN_1012f8a0(DAT_10170ad0,uVar1);
  if (iVar2 != 0) {
    FUN_1012f840(iVar2,0,*(undefined4 *)(iVar2 + 0x1c));
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  return;
}

