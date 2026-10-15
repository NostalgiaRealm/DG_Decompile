/*
 * FUN_10041b60 at 10041b60
 * undefined FUN_10041b60(void)
 * Address ranges: 10041b60-10041c13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041b60(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_100b24d0;
  if (param_1[0x40] != 0) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4);
  }
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + -4);
    iVar2 = *piVar3;
    iVar1 = iVar1 + iVar2 * 0x20;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      iVar1 = iVar1 + -0x20;
      FUN_100459d0(iVar1);
    }
    FUN_100914e0(piVar3,*piVar3 * 0x20 + 4);
  }
  *param_1 = &PTR_thunk_FUN_100925c0_100b1ab4;
  return;
}

