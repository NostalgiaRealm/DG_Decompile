/*
 * FUN_100091f0 at 100091f0
 * undefined FUN_100091f0(void)
 * Address ranges: 100091f0-100093b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100091f0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int *param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    return;
  }
  iVar5 = *param_6;
  uVar6 = param_6[3];
  iVar7 = param_6[2];
  piVar1 = (int *)(param_1 + 0x38);
  iVar8 = param_6[1];
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar11) {
      *piVar1 = *piVar1 + 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  DataMemoryBarrier(2,3);
  bVar11 = *(int *)(*(int *)(param_1 + 0x1c) + 0x797) <= param_2;
  if (((((bVar11 || 8 < iVar8) || 8 < iVar5) || 0xe < uVar6) &&
       (((bVar11 || 8 < iVar8) || 8 < iVar5) || uVar6 != 0xf)) || (6 < iVar7 + 3U))
  goto LAB_10009390;
  uVar9 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x793);
  uVar3 = param_4 & 0xfffffff8;
  if (uVar9 < (param_4 & 0xfffffff8)) {
    uVar3 = uVar9;
  }
  iVar2 = param_2 * 0x55 + *(int *)(param_1 + 0xc);
  if (*(byte *)(iVar2 + 0x1e2) == param_5) {
    iVar12 = 3 - param_3;
    iVar4 = iVar12;
    if (3 < param_3) {
      iVar4 = 0;
    }
    if ((((*(uint *)(iVar2 + 399 + iVar4 * 4 + 0x33) != uVar3) || (*(int *)(iVar2 + 0x1da) != iVar7)
         ) || (*(uint *)(iVar2 + 0x1de) != uVar6)) ||
       ((*(int *)(iVar2 + 0x1d6) != iVar8 || (*(int *)(iVar2 + 0x1d2) != iVar5))))
    goto LAB_10009338;
    uVar13 = 0;
  }
  else {
LAB_10009338:
    uVar13 = 1;
    iVar12 = 3 - param_3;
  }
  if (3 < param_3) {
    iVar12 = 0;
  }
  *(uint *)(iVar2 + 399 + iVar12 * 4 + 0x33) = uVar3;
  *(byte *)(iVar2 + 0x1e2) = (byte)param_5;
  *(int *)(iVar2 + 0x1da) = iVar7;
  *(uint *)(iVar2 + 0x1de) = uVar6;
  *(int *)(iVar2 + 0x1d6) = iVar8;
  *(int *)(iVar2 + 0x1d2) = iVar5;
  FUN_10008f68(param_1,param_2,uVar13);
LAB_10009390:
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar11) {
      *piVar1 = *piVar1 + -1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  DataMemoryBarrier(2,3);
  return;
}

