/*
 * FUN_100598f8 at 100598f8
 * undefined FUN_100598f8(void)
 * Address ranges: 100598f8-10059a23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100598f8(undefined8 param_1,int *param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar6;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar6 = param_2[3];
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar4 = (*extraout_w11)(uVar3);
  if (uVar4 < *(ulonglong *)(param_2 + 4)) {
    iVar1 = param_2[1];
    if (param_4 == *param_2) {
      if (param_5 == iVar1) {
        iVar6 = param_2[3];
      }
      else if (iVar1 != -1) {
        FUN_100600f0(iVar1 + 4,0);
      }
    }
    else {
      if (iVar1 != -1) {
        FUN_100600f0(iVar1 + 4,0);
      }
      if (param_5 != -1) {
        FUN_100600f0(param_5 + 4,0);
      }
      puVar5 = (undefined4 *)(*param_2 + 0xc);
      uVar3 = (*pcVar2)();
      (*extraout_w11_00)(uVar3,*puVar5,*(ulonglong *)(param_2 + 4));
    }
  }
  return iVar6;
}

