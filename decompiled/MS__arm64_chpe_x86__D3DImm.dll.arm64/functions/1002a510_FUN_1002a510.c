/*
 * FUN_1002a510 at 1002a510
 * undefined FUN_1002a510(void)
 * Address ranges: 1002a510-1002add7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a510(int param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6,
                 undefined1 param_7)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  char cVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int local_80;
  undefined8 local_60;
  int local_58;
  uint *local_50;
  int local_4c;
  
  iVar15 = FUN_10081528(*(int *)(param_1 + 0x1d54) + 0x11c0);
  if (*(char *)(iVar15 + 300) == '\0') {
    bVar12 = false;
    puVar29 = param_3;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0x2140)) {
      *(uint *)(param_1 + 0x2140) = *param_3;
      puVar29 = (uint *)(param_1 + 0x1dd8);
      uVar9 = *puVar29;
      if (uVar9 == 0) {
LAB_1002a620:
        puVar16 = (undefined8 *)FUN_10081cb0(0xb0);
        if (puVar16 != (undefined8 *)0x0) {
          uVar32 = *(undefined8 *)param_3;
          uVar31 = *(undefined8 *)(param_3 + 6);
          uVar30 = *(undefined8 *)(param_3 + 4);
          puVar16[1] = *(undefined8 *)(param_3 + 2);
          *puVar16 = uVar32;
          puVar16[3] = uVar31;
          puVar16[2] = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 8);
          uVar31 = *(undefined8 *)(param_3 + 0xe);
          uVar30 = *(undefined8 *)(param_3 + 0xc);
          puVar16[5] = *(undefined8 *)(param_3 + 10);
          puVar16[4] = uVar32;
          puVar16[7] = uVar31;
          puVar16[6] = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 0x10);
          uVar31 = *(undefined8 *)(param_3 + 0x16);
          uVar30 = *(undefined8 *)(param_3 + 0x14);
          puVar16[9] = *(undefined8 *)(param_3 + 0x12);
          puVar16[8] = uVar32;
          puVar16[0xb] = uVar31;
          puVar16[10] = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 0x18);
          uVar31 = *(undefined8 *)(param_3 + 0x1e);
          uVar30 = *(undefined8 *)(param_3 + 0x1c);
          puVar16[0xd] = *(undefined8 *)(param_3 + 0x1a);
          puVar16[0xc] = uVar32;
          puVar16[0xf] = uVar31;
          puVar16[0xe] = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 0x20);
          uVar31 = *(undefined8 *)(param_3 + 0x26);
          uVar30 = *(undefined8 *)(param_3 + 0x24);
          puVar16[0x11] = *(undefined8 *)(param_3 + 0x22);
          puVar16[0x10] = uVar32;
          puVar16[0x13] = uVar31;
          puVar16[0x12] = uVar30;
          uVar30 = *(undefined8 *)(param_3 + 0x28);
          puVar16[0x15] = *(undefined8 *)(param_3 + 0x2a);
          puVar16[0x14] = uVar30;
          uVar9 = *puVar29;
          uVar28 = (ulonglong)*param_3;
          if (uVar9 == 0) {
            uVar23 = 0;
          }
          else {
            uVar25 = 0;
            uVar18 = uVar9;
            do {
              uVar23 = uVar18 + uVar25 >> 1;
              uVar27 = *(ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar23 * 0x10);
              uVar26 = uVar23;
              if (uVar27 <= uVar28) {
                if (uVar28 <= uVar27) break;
                uVar25 = uVar23 + 1;
                uVar23 = uVar25;
                uVar26 = uVar18;
              }
              uVar18 = uVar26;
            } while (uVar18 != uVar25);
          }
          puVar19 = (uint *)(param_1 + 0x1dd4);
          if ((uVar23 == uVar9) ||
             (puVar3 = (ulonglong *)(*puVar19 + uVar23 * 0x10), *puVar3 != uVar28)) {
            puVar1 = (uint *)(param_1 + 0x1ddc);
            uVar25 = *puVar1;
            local_50 = puVar19;
            if (uVar25 == uVar9) {
              uVar9 = 0x10;
              if (uVar25 != 0) {
                uVar9 = uVar25 << 1;
              }
              local_4c = FUN_10081da0(uVar9 * 0x10 + 0x7f);
              if (local_4c != 0) {
                uVar18 = local_4c + 0x7fU & 0xffffff80;
                uVar25 = 0;
                if (*puVar29 != 0) {
                  do {
                    puVar4 = (undefined8 *)(*local_50 + uVar25 * 0x10);
                    puVar5 = (undefined8 *)(uVar18 + uVar25 * 0x10);
                    uVar25 = uVar25 + 1;
                    uVar30 = *puVar4;
                    puVar5[1] = puVar4[1];
                    *puVar5 = uVar30;
                  } while (uVar25 < *puVar29);
                }
                FUN_10081dc0(*(int *)(param_1 + 0x1dd0));
                *(int *)(param_1 + 0x1dd0) = local_4c;
                *puVar19 = uVar18;
                *puVar1 = uVar9;
              }
            }
            uVar9 = *puVar29;
            if (*puVar1 != uVar9) {
              for (; uVar23 < uVar9; uVar9 = uVar9 - 1) {
                puVar4 = (undefined8 *)(*puVar19 + uVar9 * 0x10);
                puVar4[1] = puVar4[-1];
                *puVar4 = puVar4[-2];
              }
              *puVar29 = *puVar29 + 1;
              *(uint *)(*puVar19 + uVar23 * 0x10 + 8) = *param_3;
              *(undefined8 **)(*puVar19 + uVar23 * 0x10 + 0xc) = puVar16;
              *(ulonglong *)(*puVar19 + uVar23 * 0x10) = uVar28;
            }
          }
          else {
            *(undefined8 **)((int)puVar3 + 0xc) = puVar16;
          }
          uVar9 = *puVar29;
          if (uVar9 == 0) {
LAB_1002a8b0:
            puVar20 = (undefined4 *)0x0;
          }
          else {
            uVar23 = 0;
            uVar25 = *param_3;
            uVar18 = uVar9;
            do {
              uVar26 = uVar18 + uVar23 >> 1;
              uVar28 = *(ulonglong *)(*puVar19 + uVar26 * 0x10);
              uVar14 = uVar26;
              if (uVar28 <= uVar25) {
                if (uVar25 <= uVar28) break;
                uVar23 = uVar26 + 1;
                uVar26 = uVar23;
                uVar14 = uVar18;
              }
              uVar18 = uVar14;
            } while (uVar18 != uVar23);
            if ((uVar26 == uVar9) ||
               (puVar3 = (ulonglong *)(*puVar19 + uVar26 * 0x10),
               puVar20 = (undefined4 *)((int)puVar3 + 0xc), *puVar3 != (ulonglong)uVar25))
            goto LAB_1002a8b0;
          }
          if (puVar20 != (undefined4 *)0x0) goto LAB_1002a8bc;
        }
        uVar24 = 0;
      }
      else {
        uVar25 = *param_3;
        uVar23 = 0;
        uVar18 = uVar9;
        do {
          uVar26 = uVar18 + uVar23 >> 1;
          uVar28 = *(ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar26 * 0x10);
          uVar14 = uVar26;
          if (uVar28 <= uVar25) {
            if (uVar25 <= uVar28) break;
            uVar23 = uVar26 + 1;
            uVar26 = uVar23;
            uVar14 = uVar18;
          }
          uVar18 = uVar14;
        } while (uVar18 != uVar23);
        if (((uVar26 == uVar9) ||
            (puVar3 = (ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar26 * 0x10),
            *puVar3 != (ulonglong)uVar25)) ||
           (puVar20 = (undefined4 *)((int)puVar3 + 0xc), puVar20 == (undefined4 *)0x0))
        goto LAB_1002a620;
LAB_1002a8bc:
        uVar24 = *puVar20;
      }
      *(undefined4 *)(param_1 + 0x2144) = uVar24;
    }
    bVar12 = true;
    puVar29 = *(uint **)(param_1 + 0x2144);
  }
  puVar19 = param_3 + 3;
  uVar9 = *puVar19;
  iVar15 = uVar9 * param_6;
  if ((bVar12) && (iVar15 + 4U < 0x3f00)) {
    bVar12 = true;
    iVar22 = *(int *)(param_1 + 0x1d54);
    puVar20 = (undefined4 *)(iVar22 + 0x11c0);
    cVar8 = *(char *)(iVar22 + 0x12ec);
    if (cVar8 == '\0') {
LAB_1002aab8:
      if (cVar8 != '\0') goto LAB_1002ab50;
    }
    else {
      if (iVar15 == -4) {
        local_80 = 0x18;
      }
      else {
        local_80 = (iVar15 + 7U & 0xfffffffc) + 0x1c;
      }
      puVar17 = (undefined4 *)FUN_100813d0(puVar20,local_80);
      if (puVar17 != (undefined4 *)0x0) {
        piVar2 = (int *)(iVar22 + 0x12e8);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
          if (bVar11) {
            *piVar2 = *piVar2 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        DataMemoryBarrier(2,3);
        puVar17[1] = local_80;
        iVar21 = 0xc;
        if (iVar15 == -4) {
          iVar21 = 8;
        }
        piVar2 = (int *)(iVar21 + (int)puVar17);
        *piVar2 = param_1;
        piVar2[1] = param_2;
        piVar2[2] = (int)puVar29;
        piVar2[3] = uVar9;
        piVar2[4] = param_6;
        *(undefined1 *)(piVar2 + 5) = param_7;
        puVar7 = (undefined4 *)((int)piVar2 + 0x1bU & 0xfffffffc);
        if (iVar15 != -4) {
          puVar17[2] = puVar7;
          FUN_10029dd0(param_6,*puVar19,param_4,param_5,puVar7,*puVar19);
          puVar7 = (undefined4 *)((iVar15 + 7U & 0xfffffffc) + (int)puVar7);
        }
        *puVar7 = 0;
        *puVar17 = FUN_1002ade0;
        puVar20[*(int *)(iVar22 + 0x12e4) * 5 + 0x1a] = puVar7;
        if (*(char *)(iVar22 + 0x12ed) != '\0') {
          *puVar20 = 0;
          (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar22 + 0x1220));
          bVar12 = false;
        }
        goto LAB_1002aab8;
      }
      *puVar20 = 0;
      (*(code *)PTR_FUN_100a1074)(100);
      FUN_10081528(puVar20);
    }
    piVar2 = *(int **)(iVar22 + 0x12d0);
    iVar22 = 4;
    if (iVar15 == -4) {
      iVar22 = 0;
    }
    piVar6 = (int *)(iVar22 + (int)piVar2);
    *piVar6 = param_1;
    piVar6[1] = param_2;
    piVar6[2] = (int)puVar29;
    piVar6[3] = uVar9;
    piVar6[4] = param_6;
    *(undefined1 *)(piVar6 + 5) = param_7;
    if (iVar15 != -4) {
      *piVar2 = (int)(piVar6 + 6);
      FUN_10029dd0(param_6,param_3[3],param_4,param_5,piVar6 + 6,param_3[3]);
    }
    FUN_1002ade0(piVar2);
LAB_1002ab50:
    if (!bVar12) {
      return;
    }
    *puVar20 = 0;
    return;
  }
  local_60 = 0;
  local_58 = 0;
  if (bVar12) {
    uVar28 = FUN_10078c70(*(int *)(param_1 + 0x1d54) + 0x14f0,iVar15,&local_60);
    iVar15 = (int)local_60;
    if ((uVar28 & 1) != 0) {
      FUN_10029dd0(param_6,*puVar19,param_4,param_5,local_60 & 0xffffffff,*puVar19);
      param_5 = *puVar19;
      param_4 = iVar15;
    }
  }
  else {
    local_60._0_4_ = 0;
    iVar15 = (int)local_60;
  }
  iVar13 = local_58;
  iVar21 = local_60._4_4_;
  iVar22 = *(int *)(param_1 + 0x1d54);
  puVar20 = (undefined4 *)(iVar22 + 0x11c0);
  bVar12 = true;
  cVar8 = *(char *)(iVar22 + 0x12ec);
  if (cVar8 == '\0') {
LAB_1002ad18:
    if (cVar8 != '\0') goto LAB_1002ad8c;
  }
  else {
    puVar17 = (undefined4 *)FUN_100813d0(puVar20,0x28);
    if (puVar17 != (undefined4 *)0x0) {
      piVar2 = (int *)(iVar22 + 0x12e8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
        if (bVar11) {
          *piVar2 = *piVar2 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      DataMemoryBarrier(2,3);
      puVar17[1] = 0x28;
      puVar17[2] = param_1;
      puVar17[3] = param_2;
      puVar17[4] = puVar29;
      puVar17[5] = param_4;
      puVar17[6] = param_5;
      puVar17[7] = param_6;
      *(undefined1 *)(puVar17 + 8) = param_7;
      puVar17[9] = iVar15;
      puVar17[10] = iVar21;
      puVar17[0xb] = iVar13;
      puVar7 = (undefined4 *)((int)puVar17 + 0x33U & 0xfffffffc);
      *puVar7 = 0;
      *puVar17 = FUN_1002ae90;
      puVar20[*(int *)(iVar22 + 0x12e4) * 5 + 0x1a] = puVar7;
      if (*(char *)(iVar22 + 0x12ed) != '\0') {
        *puVar20 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar22 + 0x1220));
        bVar12 = false;
      }
      goto LAB_1002ad18;
    }
    *puVar20 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar20);
  }
  piVar2 = *(int **)(iVar22 + 0x12d0);
  *piVar2 = param_1;
  piVar2[1] = param_2;
  piVar2[2] = (int)puVar29;
  piVar2[3] = param_4;
  piVar2[4] = param_5;
  piVar2[5] = param_6;
  *(undefined1 *)(piVar2 + 6) = param_7;
  piVar2[7] = iVar15;
  piVar2[8] = iVar21;
  piVar2[9] = iVar13;
  FUN_1002ae90(piVar2);
LAB_1002ad8c:
  if (bVar12) {
    *puVar20 = 0;
  }
  return;
}

