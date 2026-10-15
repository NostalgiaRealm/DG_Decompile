/*
 * FUN_1009b228 at 1009b228
 * undefined FUN_1009b228(void)
 * Address ranges: 1009b228-1009b3eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009b228(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = (char *)(param_1 + 0x38);
  if (*pcVar1 == '\0') {
    piVar2 = (int *)(param_1 + 8);
    uVar5 = 1;
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar5 = 2;
    }
    FUN_1009a858(param_1,*(undefined4 *)(*piVar2 + 0x15d8),*(undefined4 *)(param_1 + 0x18),uVar5);
    FUN_1009a858(param_1,*(undefined4 *)(*piVar2 + 0x15dc),*(undefined4 *)(param_1 + 0x1c),
                 param_2 * param_3);
    FUN_1009a858(param_1,*(undefined4 *)(*piVar2 + 0x15e0),*(undefined4 *)(param_1 + 0x20),
                 param_2 * param_3);
  }
  *(int *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  iVar3 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar3 != 0) {
    if (*pcVar1 == '\0') {
      FUN_1009a648(param_1,iVar3);
    }
    else {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5);
    }
    *(int *)(param_1 + 0xc) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*pcVar1 == '\0') {
      FUN_1009a648(param_1,iVar3);
    }
    else {
      uVar5 = (*pcVar4)();
      (*extraout_w11_00)(uVar5);
    }
    *(int *)(param_1 + 0x10) = 0;
  }
  FUN_100fed00(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

