/*
 * FUN_1000ac50 at 1000ac50
 * undefined FUN_1000ac50(void)
 * Address ranges: 1000ac50-1000ae5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ac50(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int *param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    return;
  }
  iVar3 = *param_6;
  iVar4 = param_6[3];
  iVar5 = param_6[2];
  iVar6 = param_6[1];
  piVar1 = (int *)(param_1 + 0x38);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar9) {
      *piVar1 = *piVar1 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  if ((*(int *)(*(int *)(param_1 + 0x1c) + 0x797) <= param_2) ||
     (uVar11 = FUN_10009a38(param_1,iVar3,iVar6,iVar5,iVar4), (uVar11 & 1) == 0)) goto LAB_1000ae24;
  uVar13 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x793);
  uVar2 = param_4 & 0xfffffff8;
  if (uVar13 < (param_4 & 0xfffffff8)) {
    uVar2 = uVar13;
  }
  iVar7 = *(int *)(param_1 + 0xc) + param_2 * 0x9d;
  if (*(byte *)(iVar7 + 0x28d) == param_5) {
    uVar13 = param_3;
    if (3 < param_3) {
      uVar13 = param_3 - 4;
    }
    iVar10 = 3 - uVar13;
    if (3 < uVar13) {
      iVar10 = 0;
    }
    if ((((*(uint *)(iVar7 + 0x1f2 + iVar10 * 4 + 0x7b) != uVar2) ||
         (*(int *)(iVar7 + 0x285) != iVar5)) || (*(int *)(iVar7 + 0x289) != iVar4)) ||
       ((*(int *)(iVar7 + 0x281) != iVar6 || (uVar12 = 0, *(int *)(iVar7 + 0x27d) != iVar3))))
    goto switchD_1000aaa8_caseD_4;
  }
  else {
switchD_1000aaa8_caseD_4:
    uVar12 = 1;
  }
  if (3 < param_3) {
    param_3 = param_3 - 4;
  }
  iVar10 = 3 - param_3;
  if (3 < param_3) {
    iVar10 = 0;
  }
  *(uint *)(iVar7 + 0x1f2 + iVar10 * 4 + 0x7b) = uVar2;
  *(char *)(iVar7 + 0x28d) = (char)param_5;
  *(int *)(iVar7 + 0x285) = iVar5;
  *(int *)(iVar7 + 0x289) = iVar4;
  *(int *)(iVar7 + 0x281) = iVar6;
  *(int *)(iVar7 + 0x27d) = iVar3;
  FUN_1000a990(param_1,param_2,uVar12);
LAB_1000ae24:
  piVar1 = (int *)(param_1 + 0x38);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar9) {
      *piVar1 = *piVar1 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  return;
}

