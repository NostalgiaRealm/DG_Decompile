/*
 * FUN_100482c0 at 100482c0
 * undefined FUN_100482c0(void)
 * Address ranges: 100482c0-100483bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100482c0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int extraout_w10;
  code *extraout_w11;
  code *extraout_w11_00;
  
  uVar4 = FUN_1002be40(param_1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x2964));
  uVar5 = uVar4 & 0xffffffff;
  iVar2 = FUN_1002be40(uVar4,*(undefined4 *)(extraout_w10 + 0x2968));
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((int)uVar5 != -1) {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar3 = (*extraout_w11)(uVar3,uVar5 & 0xffffffff);
    FUN_10034cc8(uVar3);
  }
  if (iVar2 != -1) {
    uVar3 = (*pcVar1)();
    iVar2 = (*extraout_w11_00)(uVar3,iVar2);
    if ((*(char *)(*(int *)(param_1 + 4) + 0x2abc) != '\0') && (*(char *)(iVar2 + 0x48) != '\0')) {
      FUN_10034cc8(iVar2);
    }
  }
  return;
}

