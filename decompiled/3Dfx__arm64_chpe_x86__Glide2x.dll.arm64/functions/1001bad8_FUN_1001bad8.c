/*
 * FUN_1001bad8 at 1001bad8
 * undefined FUN_1001bad8(void)
 * Address ranges: 1001bad8-1001bc5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001bad8(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0xc);
  if ((*piVar1 != 0) || (uVar8 = FUN_1001be00(param_1), (uVar8 & 1) == 0)) goto LAB_1001bc40;
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar6 = (*extraout_w11)(uVar5);
  if (iVar6 == 2) {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    iVar7 = FUN_10079f50(0xca84);
    uVar3 = iVar7 + 0x13U & 0xfffffff0;
    *(int *)(uVar3 - 4) = iVar7;
    iVar7 = FUN_1001f930(uVar3,uVar5);
    *piVar1 = iVar7;
  }
  if (*piVar1 == 0) {
    if (iVar6 == 2) goto LAB_1001bc40;
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    iVar6 = FUN_10079f50(0xca24);
    uVar3 = iVar6 + 0x13U & 0xfffffff0;
    *(int *)(uVar3 - 4) = iVar6;
    iVar6 = FUN_100241b8(uVar3,uVar5);
    *piVar1 = iVar6;
    if (iVar6 == 0) goto LAB_1001bc40;
  }
  piVar2 = (int *)(param_1 + 0x1c);
  iVar7 = 0;
  iVar6 = 0;
  if (0 < *(int *)(*piVar2 + 0x797)) {
    do {
      *(int *)(*piVar1 + iVar6 * 0x4e8 + 0x2a0) = iVar7;
      iVar4 = iVar6 * 0x4e8;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*piVar1 + iVar4 + 0x2a4) = *(undefined4 *)(*piVar2 + 0x793);
      iVar7 = *(int *)(*piVar2 + 0x793) + iVar7;
    } while (iVar6 < *(int *)(*piVar2 + 0x797));
  }
LAB_1001bc40:
  return *piVar1 != 0;
}

