/*
 * _grTexDownloadMipMap@16_native at 10004b30
 * undefined _grTexDownloadMipMap@16_native(void)
 * Address ranges: 10004b30-10004e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMap_16_native(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  uint extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar17;
  
  iVar13 = FUN_1000ae60();
  if (*(char *)(iVar13 + 0x3c) != '\0') {
    iVar2 = *extraout_w11;
    iVar3 = extraout_w11[4];
    iVar4 = extraout_w11[3];
    iVar5 = extraout_w11[2];
    uVar6 = extraout_w11[1];
    piVar1 = (int *)(iVar13 + 0x38);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    DataMemoryBarrier(2,3);
    if ((((param_1 < *(int *)(*(int *)(iVar13 + 0x1c) + 0x797)) &&
         (uVar17 = extraout_w1 & 0xfffffff8, uVar17 < *(uint *)(*(int *)(iVar13 + 0x1c) + 0x793)))
        && (uVar16 = FUN_10009a38(iVar13,iVar2,uVar6,iVar5,iVar4), (uVar16 & 1) != 0)) &&
       (iVar14 = FUN_10009b30(param_3,iVar2,uVar6,iVar5,iVar4),
       pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer, iVar14 != 0)) {
      if (param_3 == 3) {
        iVar2 = *(int *)(iVar13 + 0xc);
        iVar4 = iVar2 + param_1 * 0x4e8;
        uVar6 = *(uint *)(iVar4 + 0x45c);
        if (uVar6 < iVar14 + uVar17) {
          iVar14 = uVar6 - uVar17;
        }
        iVar2 = *(int *)(iVar4 + 0x458) + *(int *)(iVar2 + 0x454) + uVar17;
        FUN_10083b40(iVar2,iVar3,iVar14);
        iVar13 = *(int *)(iVar13 + 0xc);
        uVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                           (iVar13,extraout_x1,*(int *)(iVar13 + param_1 * 0x4e8 + 0x458) + uVar17);
        (*extraout_w11_00)(uVar15,iVar2);
      }
      else if (iVar2 <= (int)uVar6) {
        do {
          iVar14 = FUN_10009b30(3,uVar6,uVar6,iVar5,iVar4);
          if ((uVar6 & 1) == (uint)(param_3 != 1)) {
            iVar7 = *(int *)(iVar13 + 0xc);
            iVar9 = iVar7 + param_1 * 0x4e8;
            uVar8 = *(uint *)(iVar9 + 0x45c);
            if (uVar8 < iVar14 + uVar17) {
              iVar14 = uVar8 - uVar17;
            }
            iVar7 = *(int *)(iVar9 + 0x458) + *(int *)(iVar7 + 0x454) + uVar17;
            FUN_10083b40(iVar7,iVar3,iVar14);
            iVar9 = *(int *)(iVar13 + 0xc);
            uVar15 = (*pcVar12)(iVar9,extraout_x1_00,
                                *(int *)(iVar9 + param_1 * 0x4e8 + 0x458) + uVar17);
            (*extraout_w11_01)(uVar15,iVar7);
            uVar17 = iVar14 + uVar17;
          }
          uVar6 = uVar6 - 1;
          iVar3 = iVar3 + iVar14;
        } while (iVar2 <= (int)uVar6);
      }
    }
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

