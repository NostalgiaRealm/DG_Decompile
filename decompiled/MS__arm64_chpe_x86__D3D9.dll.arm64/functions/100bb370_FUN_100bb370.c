/*
 * FUN_100bb370 at 100bb370
 * undefined FUN_100bb370(void)
 * Address ranges: 100bb370-100bb5bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb370(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  piVar1 = (int *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x38) == '\0') {
    iVar3 = *(int *)(param_1 + 0x24);
    piVar2 = (int *)(param_1 + 8);
    if (iVar3 != *piVar1) {
      FUN_100ba988(param_1,*(undefined4 *)(*piVar2 + 0x15d8),iVar3,1);
    }
    param_2 = param_2 * param_3;
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 != *(int *)(param_1 + 0x1c)) {
      FUN_100ba988(param_1,*(undefined4 *)(*piVar2 + 0x15dc),iVar3,param_2);
    }
    *(int *)(param_1 + 0x28) = -1;
    *(int *)(param_1 + 0x24) = -1;
    uVar5 = 1;
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar5 = 2;
    }
    FUN_100ba988(param_1,*(undefined4 *)(*piVar2 + 0x15d8),*piVar1,uVar5);
    FUN_100ba988(param_1,*(undefined4 *)(*piVar2 + 0x15dc),*(int *)(param_1 + 0x1c),param_2);
    FUN_100ba988(param_1,*(undefined4 *)(*piVar2 + 0x15e0),*(undefined4 *)(param_1 + 0x20),param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *piVar1 = -1;
  iVar3 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      FUN_100ba778(param_1,iVar3);
    }
    else {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5);
    }
    *(int *)(param_1 + 0xc) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      FUN_100ba778(param_1,iVar3);
    }
    else {
      uVar5 = (*pcVar4)();
      (*extraout_w11_00)(uVar5);
    }
    *(int *)(param_1 + 0x10) = 0;
  }
  FUN_101322d0(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

