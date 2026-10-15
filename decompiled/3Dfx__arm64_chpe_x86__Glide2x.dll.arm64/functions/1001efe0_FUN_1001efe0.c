/*
 * FUN_1001efe0 at 1001efe0
 * undefined FUN_1001efe0(void)
 * Address ranges: 1001efe0-1001f2db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001efe0(int param_1,int param_2,uint param_3,ulonglong param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  code *extraout_w11;
  code *extraout_w11_00;
  
  param_4 = param_4 & 0xffffffff;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    uVar13 = *param_5;
    iVar2 = param_5[4];
    uVar3 = param_5[3];
    uVar4 = param_5[2];
    piVar1 = (int *)(param_1 + 0x38);
    uVar16 = (ulonglong)(uint)param_5[1];
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    if ((param_2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)) &&
       (param_3 = param_3 & 0xfffffff8, param_3 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x793))) {
      uVar15 = FUN_1001eee0(uVar16);
      uVar18 = uVar15 & 0xffffffff;
      if ((uint)uVar15 < 9) {
        uVar11 = FUN_1001eee0(uVar13);
        iVar17 = (int)param_4;
        if (((uVar11 < 9 && uVar3 < 0x10) && uVar4 < 7) &&
           (iVar12 = FUN_1001ef08(param_4 & 0xffffffff,uVar13,uVar16 & 0xffffffff,uVar4,uVar3),
           pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer, iVar12 != 0)) {
          if (iVar17 == 3) {
            iVar17 = *(int *)(param_1 + 0xc);
            iVar5 = iVar17 + param_2 * 0x4e8;
            uVar3 = *(uint *)(iVar5 + 0x2a4);
            if (uVar3 < iVar12 + param_3) {
              iVar12 = uVar3 - param_3;
            }
            iVar17 = *(int *)(iVar5 + 0x2a0) + *(int *)(iVar17 + 0x29c) + param_3;
            FUN_1007a780(iVar17,iVar2,iVar12);
            iVar2 = *(int *)(param_1 + 0xc);
            uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                               (iVar2,extraout_x1,
                                *(int *)(iVar2 + param_2 * 0x4e8 + 0x2a0) + param_3);
            (*extraout_w11)(uVar13,iVar17);
          }
          else {
            uVar16 = uVar18 & 0xffffffff;
            if ((int)uVar11 <= (int)uVar18) {
              do {
                iVar12 = FUN_1001ef08(3,(&DAT_10095778)[(int)uVar16],(&DAT_10095778)[(int)uVar16],
                                      uVar4,uVar3);
                bVar10 = FUN_1001eee0(uVar16);
                if ((bool)(bVar10 & 1) == (iVar17 != 1)) {
                  iVar5 = *(int *)(param_1 + 0xc);
                  iVar6 = iVar5 + param_2 * 0x4e8;
                  uVar11 = *(uint *)(iVar6 + 0x2a4);
                  if (uVar11 < iVar12 + param_3) {
                    iVar12 = uVar11 - param_3;
                  }
                  iVar5 = *(int *)(iVar6 + 0x2a0) + *(int *)(iVar5 + 0x29c) + param_3;
                  FUN_1007a780(iVar5,iVar2,iVar12);
                  iVar6 = *(int *)(param_1 + 0xc);
                  uVar14 = (*pcVar9)(iVar6,extraout_x1_00,
                                     *(int *)(iVar6 + param_2 * 0x4e8 + 0x2a0) + param_3);
                  (*extraout_w11_00)(uVar14,iVar5);
                  param_3 = iVar12 + param_3;
                }
                iVar2 = iVar2 + iVar12;
                uVar11 = (int)uVar16 - 1;
                uVar16 = (ulonglong)uVar11;
                iVar12 = FUN_1001eee0(uVar13);
              } while (iVar12 <= (int)uVar11);
            }
          }
        }
      }
    }
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

