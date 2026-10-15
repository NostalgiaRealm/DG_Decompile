/*
 * FUN_10048740 at 10048740
 * undefined FUN_10048740(void)
 * Address ranges: 10048740-1004883f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048740(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int extraout_w10;
  code *extraout_w11;
  code *extraout_w11_00;
  
  uVar4 = FUN_1002c2c0(param_1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x2964));
  uVar5 = uVar4 & 0xffffffff;
  iVar2 = FUN_1002c2c0(uVar4,*(undefined4 *)(extraout_w10 + 0x2968));
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((int)uVar5 != -1) {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar3 = (*extraout_w11)(uVar3,uVar5 & 0xffffffff);
    FUN_10035148(uVar3);
  }
  if (iVar2 != -1) {
    uVar3 = (*pcVar1)();
    iVar2 = (*extraout_w11_00)(uVar3,iVar2);
    if ((*(char *)(*(int *)(param_1 + 4) + 0x2abc) != '\0') && (*(char *)(iVar2 + 0x48) != '\0')) {
      FUN_10035148(iVar2);
    }
  }
  return;
}

