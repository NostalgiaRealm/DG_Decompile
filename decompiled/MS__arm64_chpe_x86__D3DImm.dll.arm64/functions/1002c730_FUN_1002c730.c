/*
 * FUN_1002c730 at 1002c730
 * undefined FUN_1002c730(void)
 * Address ranges: 1002c730-1002d103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002c730(int param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,byte param_9,undefined4 param_10,undefined1 param_11)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  uint *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint *local_e8;
  uint local_e4;
  uint *local_e0;
  uint *local_dc;
  uint *local_d8;
  int local_d4;
  uint *local_d0;
  int *local_cc;
  uint *local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint *local_90;
  int local_8c;
  uint local_88;
  int local_84;
  uint **local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  undefined4 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  local_d0 = param_3 + 2;
  local_b8 = 0;
  local_b0 = 0;
  local_bc = *local_d0 << 3;
  local_cc = (int *)(param_1 + 0x1d54);
  local_d4 = param_2;
  local_c8 = param_3;
  local_c4 = param_4;
  local_c0 = param_6;
  local_b4 = param_8;
  local_84 = param_6;
  puVar14 = (uint *)FUN_10081528(*local_cc + 0x11c0);
  if ((char)puVar14[0x4b] == '\0') {
    bVar13 = false;
    iVar21 = local_b0._4_4_;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0x2140)) {
      *(uint *)(param_1 + 0x2140) = *param_3;
      puVar1 = (uint *)(param_1 + 0x1dd8);
      uVar23 = *puVar1;
      if (uVar23 == 0) {
LAB_1002c860:
        local_e8 = (uint *)FUN_10081cb0(0xb0);
        puVar14 = (uint *)0x0;
        if (local_e8 != (uint *)0x0) {
          uVar32 = *(undefined8 *)param_3;
          uVar31 = *(undefined8 *)(param_3 + 6);
          uVar30 = *(undefined8 *)(param_3 + 4);
          *(undefined8 *)(local_e8 + 2) = *(undefined8 *)(param_3 + 2);
          *(undefined8 *)local_e8 = uVar32;
          *(undefined8 *)(local_e8 + 6) = uVar31;
          *(undefined8 *)(local_e8 + 4) = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 8);
          uVar31 = *(undefined8 *)(param_3 + 0xe);
          uVar30 = *(undefined8 *)(param_3 + 0xc);
          *(undefined8 *)(local_e8 + 10) = *(undefined8 *)(param_3 + 10);
          *(undefined8 *)(local_e8 + 8) = uVar32;
          *(undefined8 *)(local_e8 + 0xe) = uVar31;
          *(undefined8 *)(local_e8 + 0xc) = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 0x10);
          uVar31 = *(undefined8 *)(param_3 + 0x16);
          uVar30 = *(undefined8 *)(param_3 + 0x14);
          *(undefined8 *)(local_e8 + 0x12) = *(undefined8 *)(param_3 + 0x12);
          *(undefined8 *)(local_e8 + 0x10) = uVar32;
          *(undefined8 *)(local_e8 + 0x16) = uVar31;
          *(undefined8 *)(local_e8 + 0x14) = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 0x18);
          uVar31 = *(undefined8 *)(param_3 + 0x1e);
          uVar30 = *(undefined8 *)(param_3 + 0x1c);
          *(undefined8 *)(local_e8 + 0x1a) = *(undefined8 *)(param_3 + 0x1a);
          *(undefined8 *)(local_e8 + 0x18) = uVar32;
          *(undefined8 *)(local_e8 + 0x1e) = uVar31;
          *(undefined8 *)(local_e8 + 0x1c) = uVar30;
          uVar32 = *(undefined8 *)(param_3 + 0x20);
          uVar31 = *(undefined8 *)(param_3 + 0x26);
          uVar30 = *(undefined8 *)(param_3 + 0x24);
          *(undefined8 *)(local_e8 + 0x22) = *(undefined8 *)(param_3 + 0x22);
          *(undefined8 *)(local_e8 + 0x20) = uVar32;
          *(undefined8 *)(local_e8 + 0x26) = uVar31;
          *(undefined8 *)(local_e8 + 0x24) = uVar30;
          uVar30 = *(undefined8 *)(param_3 + 0x28);
          *(undefined8 *)(local_e8 + 0x2a) = *(undefined8 *)(param_3 + 0x2a);
          *(undefined8 *)(local_e8 + 0x28) = uVar30;
          uVar23 = *puVar1;
          uVar28 = (ulonglong)*param_3;
          if (uVar23 == 0) {
            uVar22 = 0;
          }
          else {
            uVar25 = 0;
            uVar17 = uVar23;
            do {
              uVar22 = uVar17 + uVar25 >> 1;
              uVar27 = *(ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar22 * 0x10);
              uVar26 = uVar22;
              if (uVar27 <= uVar28) {
                if (uVar28 <= uVar27) break;
                uVar25 = uVar22 + 1;
                uVar22 = uVar25;
                uVar26 = uVar17;
              }
              uVar17 = uVar26;
            } while (uVar17 != uVar25);
          }
          puVar18 = (uint *)(param_1 + 0x1dd4);
          local_d8 = puVar1;
          puVar14 = local_e8;
          if ((uVar22 == uVar23) ||
             (puVar3 = (ulonglong *)(*puVar18 + uVar22 * 0x10), *puVar3 != uVar28)) {
            local_e0 = (uint *)(param_1 + 0x1ddc);
            uVar25 = *local_e0;
            local_dc = puVar18;
            local_90 = puVar18;
            if (uVar25 == uVar23) {
              local_88 = 0x10;
              if (uVar25 != 0) {
                local_88 = uVar25 << 1;
              }
              local_8c = FUN_10081da0(local_88 * 0x10 + 0x7f);
              puVar14 = (uint *)0x0;
              if (local_8c != 0) {
                local_e4 = local_8c + 0x7fU & 0xffffff80;
                uVar23 = 0;
                if (*local_d8 != 0) {
                  do {
                    puVar4 = (undefined8 *)(*local_90 + uVar23 * 0x10);
                    puVar5 = (undefined8 *)(local_e4 + uVar23 * 0x10);
                    uVar23 = uVar23 + 1;
                    uVar30 = *puVar4;
                    puVar5[1] = puVar4[1];
                    *puVar5 = uVar30;
                  } while (uVar23 < *local_d8);
                }
                puVar14 = (uint *)FUN_10081dc0(*(int *)(param_1 + 0x1dd0));
                *(int *)(param_1 + 0x1dd0) = local_8c;
                *local_dc = local_e4;
                *local_e0 = local_88;
              }
            }
            uVar23 = *local_d8;
            if (*local_e0 != uVar23) {
              for (; uVar22 < uVar23; uVar23 = uVar23 - 1) {
                puVar4 = (undefined8 *)(*local_dc + uVar23 * 0x10);
                puVar4[1] = puVar4[-1];
                *puVar4 = puVar4[-2];
              }
              *local_d8 = *local_d8 + 1;
              *(uint *)(*puVar18 + uVar22 * 0x10 + 8) = *param_3;
              *(uint **)(*puVar18 + uVar22 * 0x10 + 0xc) = local_e8;
              *(ulonglong *)(*puVar18 + uVar22 * 0x10) = uVar28;
            }
          }
          else {
            *(uint **)((int)puVar3 + 0xc) = local_e8;
          }
          uVar23 = *local_d8;
          if (uVar23 == 0) {
LAB_1002cb08:
            puVar19 = (undefined4 *)0x0;
          }
          else {
            uVar22 = 0;
            uVar25 = *param_3;
            uVar17 = uVar23;
            do {
              uVar26 = uVar17 + uVar22 >> 1;
              uVar28 = *(ulonglong *)(*puVar18 + uVar26 * 0x10);
              uVar12 = uVar26;
              if (uVar28 <= uVar25) {
                if (uVar25 <= uVar28) break;
                uVar22 = uVar26 + 1;
                uVar26 = uVar22;
                uVar12 = uVar17;
              }
              uVar17 = uVar12;
            } while (uVar17 != uVar22);
            if ((uVar26 == uVar23) ||
               (puVar3 = (ulonglong *)(*puVar18 + uVar26 * 0x10),
               puVar19 = (undefined4 *)((int)puVar3 + 0xc), *puVar3 != (ulonglong)uVar25))
            goto LAB_1002cb08;
          }
          if (puVar19 != (undefined4 *)0x0) goto LAB_1002cb14;
        }
        uVar24 = 0;
      }
      else {
        uVar25 = *param_3;
        uVar22 = 0;
        uVar17 = uVar23;
        do {
          uVar26 = uVar17 + uVar22 >> 1;
          uVar28 = *(ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar26 * 0x10);
          uVar12 = uVar26;
          if (uVar28 <= uVar25) {
            if (uVar25 <= uVar28) break;
            uVar22 = uVar26 + 1;
            uVar26 = uVar22;
            uVar12 = uVar17;
          }
          uVar17 = uVar12;
        } while (uVar17 != uVar22);
        if (((uVar26 == uVar23) ||
            (puVar3 = (ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar26 * 0x10),
            *puVar3 != (ulonglong)uVar25)) ||
           (puVar19 = (undefined4 *)((int)puVar3 + 0xc), puVar19 == (undefined4 *)0x0))
        goto LAB_1002c860;
LAB_1002cb14:
        uVar24 = *puVar19;
      }
      *(undefined4 *)(param_1 + 0x2144) = uVar24;
    }
    local_c8 = *(uint **)(param_1 + 0x2144);
    if (local_c8 == (uint *)0x0) {
      iVar21 = local_b0._4_4_;
    }
    else {
      local_e8 = (uint *)0x0;
      FUN_10027ea0(puVar14,local_84,param_7,param_9,&local_b0,&local_e8);
      param_5 = (int)local_e8 + (1 - (int)local_b0);
      uVar23 = 0;
      if (*local_d0 != 0) {
        do {
          iVar21 = uVar23 + 0x9c;
          uVar23 = uVar23 + 1;
          local_b8 = local_b8 +
                     (uint)*(byte *)((int)param_3 +
                                    (uint)*(byte *)((int)param_3 + iVar21) * 8 + 0x16) * param_5 +
                     0x10;
        } while (uVar23 < *local_d0);
      }
      iVar21 = (param_7 + (uint)param_9 * param_7) * 2;
      local_b0 = CONCAT44(iVar21,(int)local_b0);
    }
    bVar13 = true;
  }
  local_80 = &local_c8;
  local_70 = CONCAT31(local_70._1_3_,param_9);
  iVar21 = iVar21 + local_b8 + local_bc;
  uVar23 = iVar21 + 0x24;
  iStack_7c = param_1;
  local_78 = param_5;
  iStack_74 = param_7;
  if (uVar23 < 0x3f00 && bVar13) {
    iVar29 = *local_cc;
    local_a0 = CONCAT44(param_1,local_80);
    puVar19 = (undefined4 *)(iVar29 + 0x11c0);
    local_d0 = (uint *)local_70;
    local_50 = local_70;
    bVar10 = true;
    bVar13 = *(char *)(iVar29 + 0x12ec) == '\0';
    uStack_98 = CONCAT44(param_7,param_5);
    local_e8 = local_c8;
    if (*(char *)(iVar29 + 0x12ec) != '\0') {
      if (uVar23 == 0) {
        iVar20 = 0x1c;
      }
      else {
        iVar20 = (iVar21 + 0x27U & 0xfffffffc) + 0x20;
      }
      local_60 = local_a0;
      uStack_58 = uStack_98;
      piVar15 = (int *)FUN_100813d0(puVar19,iVar20);
      if (piVar15 == (int *)0x0) {
        *puVar19 = 0;
        (*(code *)PTR_FUN_100a1074)(100);
        FUN_10081528(puVar19);
        bVar13 = true;
      }
      else {
        piVar2 = (int *)(iVar29 + 0x12e8);
        do {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
        piVar15[1] = iVar20;
        iVar20 = 0xc;
        if (uVar23 == 0) {
          iVar20 = 8;
        }
        piVar2 = (int *)(iVar20 + (int)piVar15);
        *piVar2 = param_1;
        piVar2[1] = local_d4;
        piVar2[2] = (int)local_e8;
        piVar2[3] = param_5;
        piVar2[4] = param_7;
        *(byte *)(piVar2 + 5) = param_9;
        *(undefined1 *)(piVar2 + 6) = param_11;
        puVar16 = (undefined4 *)((int)piVar2 + 0x1fU & 0xfffffffc);
        local_cc = piVar15;
        if (uVar23 != 0) {
          piVar15[2] = (int)puVar16;
          FUN_1002d108(&local_60,puVar16);
          puVar16 = (undefined4 *)((iVar21 + 0x27U & 0xfffffffc) + (int)puVar16);
        }
        *puVar16 = 0;
        *local_cc = (int)FUN_1002d2b0;
        puVar19[*(int *)(iVar29 + 0x12e4) * 5 + 0x1a] = puVar16;
        if (*(char *)(iVar29 + 0x12ed) != '\0') {
          *puVar19 = 0;
          (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar29 + 0x1220));
          bVar10 = false;
        }
      }
    }
    if (bVar13) {
      local_50 = local_d0;
      piVar15 = *(int **)(iVar29 + 0x12d0);
      iVar21 = 4;
      if (uVar23 == 0) {
        iVar21 = 0;
      }
      uStack_58 = uStack_98;
      local_60 = local_a0;
      piVar2 = (int *)(iVar21 + (int)piVar15);
      *piVar2 = param_1;
      piVar2[1] = local_d4;
      piVar2[2] = (int)local_e8;
      piVar2[3] = param_5;
      piVar2[4] = param_7;
      *(byte *)(piVar2 + 5) = param_9;
      *(undefined1 *)(piVar2 + 6) = param_11;
      if (uVar23 != 0) {
        *piVar15 = (int)(piVar2 + 7);
        FUN_1002d108(&local_60,piVar2 + 7);
      }
      FUN_1002d2b0(piVar15);
    }
    if (!bVar10) {
      return;
    }
    *puVar19 = 0;
    return;
  }
  local_a0 = 0;
  iVar21 = 0;
  uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
  if (bVar13) {
    uVar28 = FUN_10078c70(*(int *)(param_1 + 0x1d54) + 0x14f0,uVar23,&local_a0);
    iVar29 = (int)local_a0;
    if ((uVar28 & 1) != 0) {
      FUN_1002d108(&local_80,local_a0 & 0xffffffff);
    }
    iVar21 = (int)uStack_98;
  }
  else {
    local_a0._0_4_ = 0;
    iVar29 = (int)local_a0;
  }
  iVar11 = local_a0._4_4_;
  bVar13 = true;
  iVar20 = *(int *)(param_1 + 0x1d54);
  local_e4 = local_b4;
  puVar19 = (undefined4 *)(iVar20 + 0x11c0);
  local_e0 = (uint *)local_c0;
  cVar7 = *(char *)(iVar20 + 0x12ec);
  local_dc = (uint *)local_c4;
  local_e8 = local_c8;
  if (cVar7 == '\0') {
LAB_1002d028:
    if (cVar7 != '\0') goto LAB_1002d0c0;
  }
  else {
    puVar16 = (undefined4 *)FUN_100813d0(puVar19,0x34);
    if (puVar16 != (undefined4 *)0x0) {
      piVar15 = (int *)(iVar20 + 0x12e8);
      do {
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar15),0x10);
        if (bVar10) {
          *piVar15 = *piVar15 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar16[1] = 0x34;
      puVar16[2] = param_1;
      puVar16[3] = local_d4;
      puVar16[4] = local_e8;
      puVar16[5] = local_dc;
      puVar16[6] = param_5;
      puVar16[7] = local_e0;
      puVar16[8] = param_7;
      puVar16[9] = local_e4;
      *(byte *)(puVar16 + 10) = param_9;
      *(undefined1 *)(puVar16 + 0xb) = param_11;
      puVar16[0xc] = iVar29;
      puVar16[0xd] = iVar11;
      puVar16[0xe] = iVar21;
      puVar6 = (undefined4 *)((int)puVar16 + 0x3fU & 0xfffffffc);
      *puVar6 = 0;
      *puVar16 = FUN_1002d390;
      puVar19[*(int *)(iVar20 + 0x12e4) * 5 + 0x1a] = puVar6;
      if (*(char *)(iVar20 + 0x12ed) != '\0') {
        *puVar19 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar20 + 0x1220));
        bVar13 = false;
      }
      goto LAB_1002d028;
    }
    *puVar19 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar19);
  }
  piVar15 = *(int **)(iVar20 + 0x12d0);
  *piVar15 = param_1;
  piVar15[1] = local_d4;
  piVar15[2] = (int)local_e8;
  piVar15[3] = (int)local_dc;
  piVar15[4] = param_5;
  piVar15[5] = (int)local_e0;
  piVar15[6] = param_7;
  piVar15[7] = local_e4;
  *(byte *)(piVar15 + 8) = param_9;
  *(undefined1 *)(piVar15 + 9) = param_11;
  piVar15[10] = iVar29;
  piVar15[0xb] = iVar11;
  piVar15[0xc] = iVar21;
  FUN_1002d390(piVar15);
LAB_1002d0c0:
  if (bVar13) {
    *puVar19 = 0;
  }
  return;
}

