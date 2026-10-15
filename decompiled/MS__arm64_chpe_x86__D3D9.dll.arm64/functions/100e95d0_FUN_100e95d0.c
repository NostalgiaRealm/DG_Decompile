/*
 * FUN_100e95d0 at 100e95d0
 * undefined FUN_100e95d0(void)
 * Address ranges: 100e95d0-100e9bbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e95d0(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar21;
  int *piVar22;
  int iVar23;
  undefined1 auStack_60 [4];
  uint local_5c;
  int *local_58;
  int *local_54;
  code *local_50;
  int *local_4c;
  
  iVar14 = param_1 + 8;
  if (*(int *)(param_1 + 0xc0) != 0) {
    local_54 = (int *)(param_1 + 0xc0);
    FUN_1001e9f0(auStack_60);
    iVar3 = 0;
    if (iVar14 != 0) {
      iVar3 = param_1 + 0x30;
    }
    if (DAT_10170ad8 != 0) {
      piVar13 = (int *)(DAT_10170ad8 + 8);
      puVar2 = (uint *)(DAT_10170ad8 + 0xc);
      uVar21 = *puVar2;
      if (uVar21 != 0) {
        uVar18 = 0;
        do {
          if (*(int *)(*piVar13 + uVar18 * 4) == iVar3) {
            if (uVar18 != 0xffffffff) {
              uVar18 = uVar18 + 1;
              if (uVar18 < uVar21) {
                do {
                  puVar17 = (undefined4 *)(*piVar13 + uVar18 * 4);
                  uVar18 = uVar18 + 1;
                  puVar17[-1] = *puVar17;
                } while (uVar18 < *puVar2);
              }
              *puVar2 = *puVar2 - 1;
            }
            break;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar21);
      }
    }
    do {
      iVar3 = DAT_10170ae8 + -1;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(0x10170ae8,0x10);
      if (bVar11) {
        cVar8 = ExclusiveMonitorsStatus();
        DAT_10170ae8 = iVar3;
      }
    } while (cVar8 != '\0');
    DataMemoryBarrier(2,3);
    if ((iVar3 == 0) && (DAT_10170ad8 != 0)) {
      FUN_10039838(DAT_10170ad8);
      iVar3 = DAT_10170ad8;
      if (DAT_10170ad8 != 0) {
        FUN_100397f0(DAT_10170ad8);
        FUN_10132260(iVar3,0x5c);
      }
      DAT_10170ad8 = 0;
    }
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_50 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (*(char *)(param_1 + 0xbd) == '\0') {
      FUN_1003dfc0(iVar14);
      puVar17 = (undefined4 *)(param_1 + 0x50);
      uVar12 = (*pcVar6)();
      (*extraout_w11)(uVar12,*puVar17);
      uVar16 = FUN_1003e038(iVar14);
      iVar3 = *(int *)(param_1 + 0xac);
      FUN_1003b520(uVar16,iVar3,(&DAT_10171394)[iVar3 * 0x8a]);
      (&DAT_10170f74)[iVar3 * 0x20] = 0;
      FUN_1003e0a8(iVar14);
    }
    iVar10 = DAT_10170ad0;
    local_4c = (int *)(param_1 + 0x50);
    iVar3 = *local_4c;
    piVar13 = (int *)FUN_1012f8a0(DAT_10170ad0,iVar3);
    if (*(uint *)(iVar10 + 0xd4) != 0) {
      piVar22 = (int *)(iVar10 + 0xd0);
      uVar21 = 0;
LAB_100e97d4:
      uVar18 = uVar21 * 9;
      piVar4 = (int *)(*piVar22 + uVar21 * 0x48);
      if ((*piVar4 != iVar3) || (piVar4[2] != iVar14)) goto LAB_100e97f8;
      local_5c = uVar18;
      if ((piVar4[5] == 0) ||
         (*(int *)(iVar10 + 0xcc) = *(int *)(iVar10 + 0xcc) + -1, piVar13 != piVar4))
      goto LAB_100e9a84;
      piVar4 = piVar4 + 10;
      iVar14 = *piVar4;
      while (iVar14 != 0) {
        local_58 = piVar22;
        (*(code *)PTR_FUN_1016c288)(0);
        iVar14 = *piVar4 + -1;
        *piVar4 = iVar14;
        piVar22 = local_58;
      }
      iVar14 = *piVar22;
      iVar23 = *(int *)(iVar14 + local_5c * 8 + 0x14);
      uVar18 = uVar21;
      if (uVar21 == 0) {
LAB_100e98ac:
        (*(code *)PTR_FUN_1016c220)(iVar3,0xaaaa);
      }
      else {
        while (*(int *)(iVar14 + -0x48 + uVar18 * 0x48) != iVar3) {
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_100e98ac;
        }
        iVar23 = *(int *)(iVar14 + uVar18 * 0x48 + -0x30);
      }
      if (iVar23 == 0) goto LAB_100e9a84;
      local_5c = *(uint *)(*piVar22 + local_5c * 8 + 0x20);
      iVar14 = (*(code *)PTR_FUN_1016c218)(iVar3);
      pcVar6 = (code *)PTR_FUN_1016c1f0;
      if (iVar14 != 0) {
        pcVar6 = (code *)PTR_FUN_1016c1f4;
      }
      iVar15 = (*pcVar6)(iVar3,0xfffffffc);
      iVar9 = DAT_1016d024;
      iVar14 = DAT_1016d014;
      uVar20 = *(uint *)(iVar10 + 0xe0);
      bVar11 = iVar15 == *(int *)(iVar10 + 0xc0) + local_5c * DAT_1016d024;
      if (uVar20 != 0) {
        uVar19 = 0;
        do {
          piVar13 = (int *)(*(int *)(iVar10 + 0xdc) + uVar19 * 0x10);
          if (*piVar13 == iVar3) {
            iVar7 = piVar13[2];
            if (iVar7 != -1) {
              *(int *)(*(int *)(iVar10 + 0xbc) + iVar7 * DAT_1016d014 + DAT_1016d018) = iVar23;
              if ((uVar18 != 0) ||
                 (bVar11 = true, iVar15 != *(int *)(iVar10 + 0xbc) + iVar7 * iVar14)) {
                bVar11 = false;
              }
            }
            break;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar20);
      }
      if (bVar11) {
        FUN_1012f840(iVar15,iVar3,iVar23);
        pbVar1 = (byte *)((local_5c >> 3 & 3) + iVar10 + ((local_5c >> 5) + 0x3a) * 4);
        *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(local_5c & 7)) ^ 0xff);
      }
      else {
        *(int *)(*(int *)(iVar10 + 0xc0) + local_5c * iVar9 + DAT_1016d030) = iVar23;
        uVar18 = *(uint *)(iVar10 + 0xe0);
        if (uVar18 != 0) {
          uVar20 = 0;
          do {
            piVar13 = (int *)(*(int *)(iVar10 + 0xdc) + uVar20 * 0x10);
            if (*piVar13 == iVar3) {
              piVar4 = (int *)(iVar10 + 0xf0);
              piVar13[2] = *piVar4;
              *piVar4 = *piVar4 + 1;
              break;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar18);
        }
      }
LAB_100e9a84:
      puVar2 = (uint *)(piVar22 + 1);
      uVar18 = *puVar2;
      if (uVar21 < uVar18) {
        uVar21 = uVar21 + 1;
        if (uVar21 < uVar18) {
          do {
            uVar20 = uVar21 + 1;
            puVar5 = (undefined8 *)(*piVar22 + uVar21 * 0x48);
            puVar5[-8] = puVar5[1];
            puVar5[-9] = *puVar5;
            puVar5[-6] = puVar5[3];
            puVar5[-7] = puVar5[2];
            puVar5[-4] = puVar5[5];
            puVar5[-5] = puVar5[4];
            puVar5[-2] = puVar5[7];
            puVar5[-3] = puVar5[6];
            puVar5[-1] = puVar5[8];
            uVar18 = *puVar2;
            uVar21 = uVar20;
          } while (uVar20 < uVar18);
        }
        *puVar2 = uVar18 - 1;
      }
    }
LAB_100e9af4:
    pcVar6 = local_50;
    piVar13 = local_54;
    uVar12 = (*local_50)();
    (*extraout_w11_00)(uVar12);
    *piVar13 = 0;
    uVar12 = (*pcVar6)();
    (*extraout_w11_01)(uVar12,*local_4c);
    FUN_1001eac0(auStack_60);
  }
  iVar3 = DAT_10170ad0;
  iVar14 = *(int *)(DAT_10170ad0 + 0xf8) + -1;
  *(int *)(DAT_10170ad0 + 0xf8) = iVar14;
  if ((iVar14 == 0) && (*(char *)(iVar3 + 0x789) != '\0')) {
    puVar17 = (undefined4 *)(iVar3 + 0xf4);
    (*(code *)PTR_FUN_1016c104)(*puVar17);
    *puVar17 = 0;
  }
  FUN_100e94e0(param_1);
  return;
LAB_100e97f8:
  uVar21 = uVar21 + 1;
  if (*(uint *)(iVar10 + 0xd4) <= uVar21) goto LAB_100e9af4;
  goto LAB_100e97d4;
}

