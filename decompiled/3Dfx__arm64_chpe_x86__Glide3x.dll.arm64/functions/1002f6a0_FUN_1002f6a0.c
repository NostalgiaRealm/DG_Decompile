/*
 * FUN_1002f6a0 at 1002f6a0
 * undefined FUN_1002f6a0(void)
 * Address ranges: 1002f6a0-1002f837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002f6a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  
  piVar1 = (int *)(param_1 + 0xa8);
  uVar7 = FUN_10046360(*piVar1 + 0x11c0);
  if ((uVar7 & 1) == 0) {
    FUN_100462b8(*piVar1 + 0x11c0);
  }
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar6 = (*extraout_w11)(uVar5);
  if (iVar6 == 1) {
    FUN_10060ef0(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xbc));
  }
  else {
    (*pcVar4)();
    (*extraout_w11_00)(extraout_x1 & 0xffffffff);
  }
  FUN_10060ef0(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  iVar6 = *(int *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (iVar6 != -1) {
    iVar3 = *(int *)(*piVar1 + 0x15dc);
    iVar2 = iVar3 + 0x1c;
    (*(code *)PTR_FUN_100a003c)(iVar2);
    FUN_10061f28(iVar3,iVar6,2);
    (*(code *)PTR_FUN_100a0090)(iVar2);
  }
  iVar6 = *(int *)(param_1 + 0xc0);
  if (iVar6 != -1) {
    iVar3 = *(int *)(*piVar1 + 0x15d8);
    iVar2 = iVar3 + 0x1c;
    (*(code *)PTR_FUN_100a003c)(iVar2);
    FUN_10061f28(iVar3,iVar6,2);
    (*(code *)PTR_FUN_100a0090)(iVar2);
  }
  *(int *)(param_1 + 0xc0) = -1;
  *(int *)(param_1 + 0xc4) = -1;
  return;
}

