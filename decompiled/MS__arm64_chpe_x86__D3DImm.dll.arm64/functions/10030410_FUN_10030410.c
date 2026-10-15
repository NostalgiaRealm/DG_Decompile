/*
 * FUN_10030410 at 10030410
 * undefined FUN_10030410(void)
 * Address ranges: 10030410-10030d7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030410(int param_1,int param_2,uint *param_3,int param_4,undefined8 *param_5,int param_6,
                 uint param_7,undefined1 param_8)

{
  int iVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  int *piVar23;
  undefined8 *puVar24;
  uint uVar25;
  int *extraout_w12;
  int *piVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int local_8c;
  undefined8 local_70;
  int local_68;
  uint local_60;
  uint *local_5c;
  uint *local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int *local_48;
  
  local_48 = (int *)(param_1 + 0x1d54);
  local_4c = param_4;
  iVar11 = FUN_10081528(*local_48 + 0x11c0);
  piVar26 = extraout_w12;
  if (*(char *)(iVar11 + 300) == '\0') {
    bVar8 = false;
    uVar15 = 0;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0x2140)) {
      *(uint *)(param_1 + 0x2140) = *param_3;
      puVar2 = (uint *)(param_1 + 0x1dd8);
      uVar15 = *puVar2;
      if (uVar15 == 0) {
LAB_10030514:
        puVar12 = (undefined8 *)FUN_10081cb0(0xb0);
        if (puVar12 != (undefined8 *)0x0) {
          uVar32 = *(undefined8 *)param_3;
          uVar31 = *(undefined8 *)(param_3 + 6);
          uVar30 = *(undefined8 *)(param_3 + 4);
          puVar12[1] = *(undefined8 *)(param_3 + 2);
          *puVar12 = uVar32;
          puVar12[3] = uVar31;
          puVar12[2] = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 8);
          uVar31 = *(undefined8 *)(param_3 + 0xe);
          uVar30 = *(undefined8 *)(param_3 + 0xc);
          puVar12[5] = *(undefined8 *)(param_3 + 10);
          puVar12[4] = uVar32;
          puVar12[7] = uVar31;
          puVar12[6] = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 0x10);
          uVar31 = *(undefined8 *)(param_3 + 0x16);
          uVar30 = *(undefined8 *)(param_3 + 0x14);
          puVar12[9] = *(undefined8 *)(param_3 + 0x12);
          puVar12[8] = uVar32;
          puVar12[0xb] = uVar31;
          puVar12[10] = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 0x18);
          uVar31 = *(undefined8 *)(param_3 + 0x1e);
          uVar30 = *(undefined8 *)(param_3 + 0x1c);
          puVar12[0xd] = *(undefined8 *)(param_3 + 0x1a);
          puVar12[0xc] = uVar32;
          puVar12[0xf] = uVar31;
          puVar12[0xe] = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 0x20);
          uVar31 = *(undefined8 *)(param_3 + 0x26);
          uVar30 = *(undefined8 *)(param_3 + 0x24);
          puVar12[0x11] = *(undefined8 *)(param_3 + 0x22);
          puVar12[0x10] = uVar32;
          puVar12[0x13] = uVar31;
          puVar12[0x12] = uVar30;
          uVar30 = *(undefined8 *)(param_3 + 0x28);
          puVar12[0x15] = *(undefined8 *)(param_3 + 0x2a);
          puVar12[0x14] = uVar30;
          uVar15 = *puVar2;
          uVar28 = (ulonglong)*param_3;
          if (uVar15 == 0) {
            uVar19 = 0;
          }
          else {
            uVar20 = 0;
            uVar14 = uVar15;
            do {
              uVar19 = uVar14 + uVar20 >> 1;
              uVar27 = *(ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar19 * 0x10);
              uVar25 = uVar19;
              if (uVar27 <= uVar28) {
                if (uVar28 <= uVar27) break;
                uVar20 = uVar19 + 1;
                uVar19 = uVar20;
                uVar25 = uVar14;
              }
              uVar14 = uVar25;
            } while (uVar14 != uVar20);
          }
          puVar29 = (uint *)(param_1 + 0x1dd4);
          if ((uVar19 == uVar15) ||
             (puVar3 = (ulonglong *)(*puVar29 + uVar19 * 0x10), *puVar3 != uVar28)) {
            local_5c = (uint *)(param_1 + 0x1ddc);
            uVar20 = *local_5c;
            local_58 = puVar29;
            if (uVar20 == uVar15) {
              local_50 = 0x10;
              if (uVar20 != 0) {
                local_50 = uVar20 << 1;
              }
              local_54 = FUN_10081da0(local_50 * 0x10 + 0x7f);
              if (local_54 != 0) {
                local_60 = local_54 + 0x7fU & 0xffffff80;
                uVar15 = 0;
                if (*puVar2 != 0) {
                  do {
                    puVar24 = (undefined8 *)(*puVar29 + uVar15 * 0x10);
                    puVar22 = (undefined8 *)(local_60 + uVar15 * 0x10);
                    uVar15 = uVar15 + 1;
                    uVar30 = *puVar24;
                    puVar22[1] = puVar24[1];
                    *puVar22 = uVar30;
                  } while (uVar15 < *puVar2);
                }
                FUN_10081dc0(*(int *)(param_1 + 0x1dd0));
                *(int *)(param_1 + 0x1dd0) = local_54;
                *local_58 = local_60;
                *local_5c = local_50;
              }
            }
            uVar15 = *puVar2;
            if (*local_5c != uVar15) {
              for (; uVar19 < uVar15; uVar15 = uVar15 - 1) {
                puVar24 = (undefined8 *)(*local_58 + uVar15 * 0x10);
                puVar24[1] = puVar24[-1];
                *puVar24 = puVar24[-2];
              }
              *puVar2 = *puVar2 + 1;
              *(uint *)(*puVar29 + uVar19 * 0x10 + 8) = *param_3;
              *(undefined8 **)(*puVar29 + uVar19 * 0x10 + 0xc) = puVar12;
              *(ulonglong *)(*puVar29 + uVar19 * 0x10) = uVar28;
            }
          }
          else {
            *(undefined8 **)((int)puVar3 + 0xc) = puVar12;
          }
          uVar15 = *puVar2;
          if (uVar15 == 0) {
LAB_100307a4:
            puVar16 = (undefined4 *)0x0;
          }
          else {
            uVar19 = 0;
            uVar20 = *param_3;
            uVar14 = uVar15;
            do {
              uVar25 = uVar14 + uVar19 >> 1;
              uVar28 = *(ulonglong *)(*puVar29 + uVar25 * 0x10);
              uVar10 = uVar25;
              if (uVar28 <= uVar20) {
                if (uVar20 <= uVar28) break;
                uVar19 = uVar25 + 1;
                uVar25 = uVar19;
                uVar10 = uVar14;
              }
              uVar14 = uVar10;
            } while (uVar14 != uVar19);
            if ((uVar25 == uVar15) ||
               (puVar3 = (ulonglong *)(*puVar29 + uVar25 * 0x10),
               puVar16 = (undefined4 *)((int)puVar3 + 0xc), *puVar3 != (ulonglong)uVar20))
            goto LAB_100307a4;
          }
          if (puVar16 != (undefined4 *)0x0) goto LAB_100307b0;
        }
        uVar21 = 0;
      }
      else {
        uVar20 = *param_3;
        uVar19 = 0;
        uVar14 = uVar15;
        do {
          uVar25 = uVar14 + uVar19 >> 1;
          uVar28 = *(ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar25 * 0x10);
          uVar10 = uVar25;
          if (uVar28 <= uVar20) {
            if (uVar20 <= uVar28) break;
            uVar19 = uVar25 + 1;
            uVar25 = uVar19;
            uVar10 = uVar14;
          }
          uVar14 = uVar10;
        } while (uVar14 != uVar19);
        if (((uVar25 == uVar15) ||
            (puVar3 = (ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar25 * 0x10),
            *puVar3 != (ulonglong)uVar20)) ||
           (puVar16 = (undefined4 *)((int)puVar3 + 0xc), puVar16 == (undefined4 *)0x0))
        goto LAB_10030514;
LAB_100307b0:
        uVar21 = *puVar16;
      }
      *(undefined4 *)(param_1 + 0x2144) = uVar21;
      piVar26 = (int *)(param_1 + 0x1d54);
    }
    param_3 = *(uint **)(param_1 + 0x2144);
    bVar8 = true;
    uVar15 = 0;
    if (param_3 != (uint *)0x0) {
      uVar15 = (param_7 + 2) * 2;
    }
  }
  iVar11 = *(int *)(*(int *)(local_4c + 0x28) + *(int *)(local_4c + 0x38) * 8);
  if (0x3eff < uVar15 || !bVar8) {
    local_70 = 0;
    local_68 = 0;
    puVar12 = param_5;
    if (bVar8) {
      uVar28 = FUN_10078c70(*piVar26 + 0x14f0,uVar15,&local_70);
      puVar24 = (undefined8 *)local_70;
      if ((uVar28 & 1) != 0) {
        puVar22 = (undefined8 *)local_70;
        if (param_7 >> 3 != 0) {
          uVar15 = 0;
          do {
            puVar12 = param_5 + 1;
            uVar30 = *param_5;
            uVar15 = uVar15 + 1;
            param_5 = param_5 + 2;
            puVar22[1] = *puVar12;
            *puVar22 = uVar30;
            puVar22 = puVar22 + 2;
          } while (uVar15 < param_7 >> 3);
        }
        uVar15 = 0;
        puVar12 = (undefined8 *)local_70;
        if ((param_7 & 7) != 0) {
          do {
            iVar18 = uVar15 * 2;
            iVar17 = uVar15 * 2;
            uVar15 = uVar15 + 1;
            *(undefined2 *)((int)puVar22 + iVar17) = *(undefined2 *)((int)param_5 + iVar18);
          } while (uVar15 < (param_7 & 7));
        }
      }
    }
    else {
      local_70._0_4_ = (undefined8 *)0x0;
      puVar24 = (undefined8 *)local_70;
    }
    iVar1 = local_68;
    iVar17 = local_70._4_4_;
    iVar18 = *(int *)(param_1 + 0x1d54);
    puVar16 = (undefined4 *)(iVar18 + 0x11c0);
    bVar8 = true;
    cVar5 = *(char *)(iVar18 + 0x12ec);
    if (cVar5 == '\0') {
LAB_10030cb4:
      if (cVar5 != '\0') goto joined_r0x10030d38;
    }
    else {
      puVar13 = (undefined4 *)FUN_100813d0(puVar16,0x2c);
      if (puVar13 != (undefined4 *)0x0) {
        piVar26 = (int *)(iVar18 + 0x12e8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar26),0x10);
          if (bVar7) {
            *piVar26 = *piVar26 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        puVar13[1] = 0x2c;
        puVar13[2] = param_1;
        puVar13[3] = param_2;
        puVar13[4] = param_3;
        puVar13[5] = iVar11;
        puVar13[6] = puVar12;
        puVar13[7] = param_6;
        puVar13[8] = param_7;
        *(undefined1 *)(puVar13 + 9) = param_8;
        puVar13[10] = puVar24;
        puVar13[0xb] = iVar17;
        puVar13[0xc] = iVar1;
        puVar4 = (undefined4 *)((int)puVar13 + 0x37U & 0xfffffffc);
        *puVar4 = 0;
        *puVar13 = FUN_10030de0;
        puVar16[*(int *)(iVar18 + 0x12e4) * 5 + 0x1a] = puVar4;
        if (*(char *)(iVar18 + 0x12ed) != '\0') {
          *puVar16 = 0;
          (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar18 + 0x1220));
          bVar8 = false;
        }
        goto LAB_10030cb4;
      }
      *puVar16 = 0;
      (*(code *)PTR_FUN_100a1074)(100);
      FUN_10081528(puVar16);
    }
    piVar26 = *(int **)(iVar18 + 0x12d0);
    *piVar26 = param_1;
    piVar26[1] = param_2;
    piVar26[2] = (int)param_3;
    piVar26[3] = iVar11;
    piVar26[4] = (int)puVar12;
    piVar26[5] = param_6;
    piVar26[6] = param_7;
    *(undefined1 *)(piVar26 + 7) = param_8;
    piVar26[8] = (int)puVar24;
    piVar26[9] = iVar17;
    piVar26[10] = iVar1;
    FUN_10030de0(piVar26);
    goto joined_r0x10030d38;
  }
  bVar8 = true;
  iVar18 = *local_48;
  puVar16 = (undefined4 *)(iVar18 + 0x11c0);
  cVar5 = *(char *)(iVar18 + 0x12ec);
  if (cVar5 == '\0') {
LAB_100309e4:
    if (cVar5 != '\0') goto joined_r0x10030d38;
  }
  else {
    if (uVar15 == 0) {
      local_8c = 0x1c;
    }
    else {
      local_8c = (uVar15 + 3 & 0xfffffffc) + 0x20;
    }
    puVar13 = (undefined4 *)FUN_100813d0(puVar16,local_8c);
    if (puVar13 != (undefined4 *)0x0) {
      piVar26 = (int *)(iVar18 + 0x12e8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar26),0x10);
        if (bVar7) {
          *piVar26 = *piVar26 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      DataMemoryBarrier(2,3);
      puVar13[1] = local_8c;
      iVar17 = 0xc;
      if (uVar15 == 0) {
        iVar17 = 8;
      }
      piVar26 = (int *)(iVar17 + (int)puVar13);
      *piVar26 = param_1;
      piVar26[1] = param_2;
      piVar26[2] = (int)param_3;
      piVar26[3] = iVar11;
      piVar26[4] = param_6;
      piVar26[5] = param_7;
      *(undefined1 *)(piVar26 + 6) = param_8;
      puVar12 = (undefined8 *)((int)piVar26 + 0x1fU & 0xfffffffc);
      if (uVar15 != 0) {
        puVar13[2] = puVar12;
        uVar19 = 0;
        puVar24 = param_5;
        puVar22 = puVar12;
        if (param_7 >> 3 != 0) {
          do {
            puVar9 = puVar24 + 1;
            uVar30 = *puVar24;
            uVar19 = uVar19 + 1;
            puVar24 = puVar24 + 2;
            puVar22[1] = *puVar9;
            *puVar22 = uVar30;
            puVar22 = puVar22 + 2;
          } while (uVar19 < param_7 >> 3);
        }
        uVar19 = 0;
        if ((param_7 & 7) != 0) {
          do {
            iVar17 = uVar19 * 2;
            iVar1 = uVar19 * 2;
            uVar19 = uVar19 + 1;
            *(undefined2 *)((int)puVar22 + iVar1) = *(undefined2 *)((int)puVar24 + iVar17);
          } while (uVar19 < (param_7 & 7));
        }
        puVar12 = (undefined8 *)((uVar15 + 3 & 0xfffffffc) + (int)puVar12);
      }
      *(undefined4 *)puVar12 = 0;
      *puVar13 = FUN_10030d90;
      puVar16[*(int *)(iVar18 + 0x12e4) * 5 + 0x1a] = puVar12;
      if (*(char *)(iVar18 + 0x12ed) != '\0') {
        *puVar16 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar18 + 0x1220));
        bVar8 = false;
      }
      goto LAB_100309e4;
    }
    *puVar16 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar16);
  }
  piVar26 = *(int **)(iVar18 + 0x12d0);
  iVar18 = 4;
  if (uVar15 == 0) {
    iVar18 = 0;
  }
  piVar23 = (int *)(iVar18 + (int)piVar26);
  *piVar23 = param_1;
  piVar23[1] = param_2;
  piVar23[2] = (int)param_3;
  piVar23[3] = iVar11;
  piVar23[4] = param_6;
  piVar23[5] = param_7;
  *(undefined1 *)(piVar23 + 6) = param_8;
  if (uVar15 != 0) {
    piVar23 = piVar23 + 7;
    *piVar26 = (int)piVar23;
    uVar15 = 0;
    if (param_7 >> 3 != 0) {
      do {
        puVar12 = param_5 + 1;
        uVar30 = *param_5;
        uVar15 = uVar15 + 1;
        param_5 = param_5 + 2;
        *(undefined8 *)(piVar23 + 2) = *puVar12;
        *(undefined8 *)piVar23 = uVar30;
        piVar23 = piVar23 + 4;
      } while (uVar15 < param_7 >> 3);
    }
    uVar15 = 0;
    if ((param_7 & 7) != 0) {
      do {
        iVar11 = uVar15 * 2;
        iVar18 = uVar15 * 2;
        uVar15 = uVar15 + 1;
        *(undefined2 *)((int)piVar23 + iVar18) = *(undefined2 *)((int)param_5 + iVar11);
      } while (uVar15 < (param_7 & 7));
    }
  }
  FUN_10030d90(piVar26);
joined_r0x10030d38:
  if (bVar8) {
    *puVar16 = 0;
  }
  return;
}

