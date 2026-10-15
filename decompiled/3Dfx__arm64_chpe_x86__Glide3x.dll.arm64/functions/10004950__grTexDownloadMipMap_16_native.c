/*
 * _grTexDownloadMipMap@16_native at 10004950
 * undefined _grTexDownloadMipMap@16_native(void)
 * Address ranges: 10004950-10004c1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMap_16_native(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar15;
  int *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int extraout_w15;
  ulonglong extraout_x15;
  uint uVar16;
  
  iVar12 = FUN_100093b8();
  if (*(char *)(iVar12 + 0x3c) != '\0') {
    iVar2 = *extraout_w11;
    iVar3 = extraout_w11[4];
    uVar4 = extraout_w11[3];
    iVar15 = extraout_w11[2];
    piVar1 = (int *)(iVar12 + 0x38);
    uVar5 = extraout_w11[1];
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    DataMemoryBarrier(2,3);
    if ((((param_1 < *(int *)(*(int *)(iVar12 + 0x1c) + 0x797)) &&
         (uVar16 = extraout_w1 & 0xfffffff8,
         uVar16 < *(uint *)(*(int *)(iVar12 + 0x1c) + 0x793) && (int)uVar5 < 9)) &&
        (iVar2 < 9 && uVar4 < 0x10)) &&
       ((iVar15 + 3U < 7 &&
        (iVar13 = FUN_10008338(extraout_x15 & 0xffffffff,iVar2,uVar5,iVar15,uVar4),
        pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer, iVar13 != 0)))) {
      if (extraout_w15 == 3) {
        iVar2 = *(int *)(iVar12 + 0xc);
        iVar15 = iVar2 + param_1 * 0x4e8;
        uVar4 = *(uint *)(iVar15 + 800);
        if (uVar4 < iVar13 + uVar16) {
          iVar13 = uVar4 - uVar16;
        }
        iVar2 = *(int *)(iVar15 + 0x31c) + *(int *)(iVar2 + 0x318) + uVar16;
        FUN_1007e4a0(iVar2,iVar3,iVar13);
        iVar12 = *(int *)(iVar12 + 0xc);
        uVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                           (iVar12,extraout_x1,*(int *)(iVar12 + param_1 * 0x4e8 + 0x31c) + uVar16);
        (*extraout_w11_00)(uVar14,iVar2);
      }
      else if (iVar2 <= (int)uVar5) {
        do {
          iVar13 = FUN_10008338(3,uVar5,uVar5,iVar15,uVar4);
          if ((uVar5 & 1) == (uint)(extraout_w15 != 1)) {
            iVar6 = *(int *)(iVar12 + 0xc);
            iVar8 = iVar6 + param_1 * 0x4e8;
            uVar7 = *(uint *)(iVar8 + 800);
            if (uVar7 < iVar13 + uVar16) {
              iVar13 = uVar7 - uVar16;
            }
            iVar6 = *(int *)(iVar8 + 0x31c) + *(int *)(iVar6 + 0x318) + uVar16;
            FUN_1007e4a0(iVar6,iVar3,iVar13);
            iVar8 = *(int *)(iVar12 + 0xc);
            uVar14 = (*pcVar11)(iVar8,extraout_x1_00,
                                *(int *)(iVar8 + param_1 * 0x4e8 + 0x31c) + uVar16);
            (*extraout_w11_01)(uVar14,iVar6);
            uVar16 = iVar13 + uVar16;
          }
          uVar5 = uVar5 - 1;
          iVar3 = iVar3 + iVar13;
        } while (iVar2 <= (int)uVar5);
      }
    }
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

