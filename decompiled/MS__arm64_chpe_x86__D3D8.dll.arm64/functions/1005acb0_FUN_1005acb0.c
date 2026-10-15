/*
 * FUN_1005acb0 at 1005acb0
 * undefined FUN_1005acb0(void)
 * Address ranges: 1005acb0-1005b57f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005acb0(int param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,undefined4 param_10,byte param_11)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  bool bVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint *local_ec;
  uint *local_e8;
  int *local_e4;
  uint *local_e0;
  uint *local_dc;
  int local_d8;
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
  local_b0 = 0;
  local_bc = *local_d0 << 3;
  local_b8 = 0;
  local_b4 = param_9;
  local_cc = (int *)(param_1 + 0xd9b8);
  local_e8 = param_3;
  local_d8 = param_2;
  local_d4 = param_4;
  local_c8 = param_3;
  local_c4 = param_5;
  local_c0 = param_7;
  local_84 = param_7;
  puVar13 = (undefined4 *)FUN_100fd300(*local_cc + 0x11c0);
  if (*(char *)(puVar13 + 0x4b) == '\0') {
    bVar12 = false;
    iVar18 = local_b0._4_4_;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0xddc4)) {
      *(uint *)(param_1 + 0xddc4) = *param_3;
      puVar13 = (undefined4 *)FUN_10057e10(param_1 + 0xda34,param_3);
      if (puVar13 == (undefined4 *)0x0) {
        local_ec = (uint *)FUN_100febf0(0xb0);
        puVar13 = (undefined4 *)0x0;
        if (local_ec != (uint *)0x0) {
          uVar27 = *(undefined8 *)param_3;
          uVar26 = *(undefined8 *)(param_3 + 6);
          uVar25 = *(undefined8 *)(param_3 + 4);
          puVar1 = (uint *)(param_1 + 0xda3c);
          *(undefined8 *)(local_ec + 2) = *(undefined8 *)(param_3 + 2);
          *(undefined8 *)local_ec = uVar27;
          *(undefined8 *)(local_ec + 6) = uVar26;
          *(undefined8 *)(local_ec + 4) = uVar25;
          uVar27 = *(undefined8 *)(param_3 + 8);
          uVar26 = *(undefined8 *)(param_3 + 0xe);
          uVar25 = *(undefined8 *)(param_3 + 0xc);
          *(undefined8 *)(local_ec + 10) = *(undefined8 *)(param_3 + 10);
          *(undefined8 *)(local_ec + 8) = uVar27;
          *(undefined8 *)(local_ec + 0xe) = uVar26;
          *(undefined8 *)(local_ec + 0xc) = uVar25;
          uVar27 = *(undefined8 *)(param_3 + 0x10);
          uVar26 = *(undefined8 *)(param_3 + 0x16);
          uVar25 = *(undefined8 *)(param_3 + 0x14);
          *(undefined8 *)(local_ec + 0x12) = *(undefined8 *)(param_3 + 0x12);
          *(undefined8 *)(local_ec + 0x10) = uVar27;
          *(undefined8 *)(local_ec + 0x16) = uVar26;
          *(undefined8 *)(local_ec + 0x14) = uVar25;
          uVar27 = *(undefined8 *)(param_3 + 0x18);
          uVar26 = *(undefined8 *)(param_3 + 0x1e);
          uVar25 = *(undefined8 *)(param_3 + 0x1c);
          *(undefined8 *)(local_ec + 0x1a) = *(undefined8 *)(param_3 + 0x1a);
          *(undefined8 *)(local_ec + 0x18) = uVar27;
          *(undefined8 *)(local_ec + 0x1e) = uVar26;
          *(undefined8 *)(local_ec + 0x1c) = uVar25;
          uVar27 = *(undefined8 *)(param_3 + 0x20);
          uVar26 = *(undefined8 *)(param_3 + 0x26);
          uVar25 = *(undefined8 *)(param_3 + 0x24);
          *(undefined8 *)(local_ec + 0x22) = *(undefined8 *)(param_3 + 0x22);
          *(undefined8 *)(local_ec + 0x20) = uVar27;
          *(undefined8 *)(local_ec + 0x26) = uVar26;
          *(undefined8 *)(local_ec + 0x24) = uVar25;
          uVar25 = *(undefined8 *)(param_3 + 0x28);
          *(undefined8 *)(local_ec + 0x2a) = *(undefined8 *)(param_3 + 0x2a);
          *(undefined8 *)(local_ec + 0x28) = uVar25;
          uVar17 = *puVar1;
          uVar23 = (ulonglong)*param_3;
          uVar22 = 0;
          if (uVar17 == 0) {
LAB_1005ae3c:
            local_e4 = (int *)(&DAT_0000da38 + param_1);
            local_e0 = (uint *)(param_1 + 0xda40);
            uVar19 = *local_e0;
            piVar14 = local_e4;
            local_dc = puVar1;
            local_90 = puVar1;
            if (uVar19 == uVar17) {
              local_88 = 0x10;
              if (uVar19 != 0) {
                local_88 = uVar19 << 1;
              }
              local_8c = FUN_100fece0(local_88 * 0x10 + 0x7f);
              piVar14 = local_e4;
              if (local_8c != 0) {
                local_e4 = (int *)(local_8c + 0x7fU & 0xffffff80);
                uVar17 = 0;
                if (*local_90 != 0) {
                  do {
                    puVar4 = (undefined8 *)(*(int *)(&DAT_0000da38 + param_1) + uVar17 * 0x10);
                    iVar18 = uVar17 * 4;
                    uVar17 = uVar17 + 1;
                    uVar25 = *puVar4;
                    *(undefined8 *)(local_e4 + iVar18 + 2) = puVar4[1];
                    *(undefined8 *)(local_e4 + iVar18) = uVar25;
                  } while (uVar17 < *(uint *)(param_1 + 0xda3c));
                }
                FUN_100fed00(*(undefined4 *)(param_1 + 0xda34));
                *(int *)(param_1 + 0xda34) = local_8c;
                *(int **)(&DAT_0000da38 + param_1) = local_e4;
                *local_e0 = local_88;
                piVar14 = (int *)(&DAT_0000da38 + param_1);
              }
            }
            uVar17 = *local_dc;
            if (*local_e0 != uVar17) {
              for (; uVar22 < uVar17; uVar17 = uVar17 - 1) {
                puVar4 = (undefined8 *)(*piVar14 + uVar17 * 0x10);
                puVar4[1] = puVar4[-1];
                *puVar4 = puVar4[-2];
              }
              *local_dc = *local_dc + 1;
              *(uint *)(*piVar14 + uVar22 * 0x10 + 8) = *local_e8;
              *(uint **)(*piVar14 + uVar22 * 0x10 + 0xc) = local_ec;
              *(ulonglong *)(*piVar14 + uVar22 * 0x10) = uVar23;
            }
          }
          else {
            uVar19 = 0;
            uVar16 = uVar17;
            do {
              uVar22 = uVar16 + uVar19 >> 1;
              uVar21 = *(ulonglong *)(*(int *)(&DAT_0000da38 + param_1) + uVar22 * 0x10);
              uVar11 = uVar22;
              if (uVar21 <= uVar23) {
                if (uVar23 <= uVar21) break;
                uVar19 = uVar22 + 1;
                uVar22 = uVar19;
                uVar11 = uVar16;
              }
              uVar16 = uVar11;
            } while (uVar16 != uVar19);
            if ((uVar22 == uVar17) ||
               (puVar3 = (ulonglong *)(*(int *)(&DAT_0000da38 + param_1) + uVar22 * 0x10),
               *puVar3 != uVar23)) goto LAB_1005ae3c;
            *(uint **)((int)puVar3 + 0xc) = local_ec;
          }
          puVar13 = (undefined4 *)FUN_10057e10(param_1 + 0xda34,local_e8);
          if (puVar13 != (undefined4 *)0x0) goto LAB_1005afa4;
        }
        uVar20 = 0;
      }
      else {
LAB_1005afa4:
        uVar20 = *puVar13;
      }
      *(undefined4 *)(param_1 + 0xddc8) = uVar20;
    }
    local_c8 = *(uint **)(param_1 + 0xddc8);
    if (local_c8 == (uint *)0x0) {
      iVar18 = local_b0._4_4_;
    }
    else {
      local_ec = (uint *)0x0;
      FUN_1004ff10(puVar13,local_84,param_8,param_11,&local_b0,&local_ec);
      param_6 = (int)local_ec + (1 - (int)local_b0);
      uVar17 = 0;
      if (*local_d0 != 0) {
        do {
          iVar18 = uVar17 + 0x9c;
          uVar17 = uVar17 + 1;
          local_b8 = local_b8 +
                     (uint)*(byte *)((int)local_e8 +
                                    (uint)*(byte *)((int)local_e8 + iVar18) * 8 + 0x16) * param_6 +
                     0x10;
        } while (uVar17 < *local_d0);
      }
      iVar18 = (param_8 + (uint)param_11 * param_8) * 2;
      local_b0 = CONCAT44(iVar18,(int)local_b0);
    }
    bVar12 = true;
  }
  local_80 = &local_c8;
  local_70 = CONCAT31(local_70._1_3_,param_11);
  iVar18 = iVar18 + local_b8 + local_bc;
  local_e8 = (uint *)(iVar18 + 0x24);
  iStack_7c = param_1;
  local_78 = param_6;
  iStack_74 = param_8;
  if (local_e8 < 0x3f00 && bVar12) {
    iVar24 = *local_cc;
    local_a0 = CONCAT44(param_1,local_80);
    puVar13 = (undefined4 *)(iVar24 + 0x11c0);
    local_d0 = (uint *)local_70;
    local_50 = local_70;
    bVar10 = true;
    bVar12 = *(char *)(iVar24 + 0x12ec) == '\0';
    uStack_98 = CONCAT44(param_8,param_6);
    local_ec = local_c8;
    if (*(char *)(iVar24 + 0x12ec) != '\0') {
      if (local_e8 == (uint *)0x0) {
        iVar18 = 0x1c;
      }
      else {
        iVar18 = (iVar18 + 0x27U & 0xfffffffc) + 0x20;
      }
      local_60 = local_a0;
      uStack_58 = uStack_98;
      piVar14 = (int *)FUN_100fd1a8(puVar13,iVar18);
      puVar1 = local_e8;
      if (piVar14 == (int *)0x0) {
        *puVar13 = 0;
        (*(code *)PTR_FUN_10134114)(100);
        FUN_100fd300(puVar13);
        bVar12 = true;
      }
      else {
        piVar2 = (int *)(iVar24 + 0x12e8);
        do {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
        piVar14[1] = iVar18;
        iVar18 = 0xc;
        if (local_e8 == (uint *)0x0) {
          iVar18 = 8;
        }
        piVar2 = (int *)(iVar18 + (int)piVar14);
        *piVar2 = param_1;
        piVar2[1] = local_d8;
        piVar2[2] = (int)local_ec;
        piVar2[3] = local_d4;
        piVar2[4] = param_6;
        piVar2[5] = param_8;
        *(byte *)(piVar2 + 6) = param_11;
        puVar15 = (undefined4 *)((int)piVar2 + 0x1fU & 0xfffffffc);
        local_cc = piVar14;
        if (local_e8 != (uint *)0x0) {
          piVar14[2] = (int)puVar15;
          FUN_10055888(&local_60,puVar15);
          puVar15 = (undefined4 *)(((int)puVar1 + 3U & 0xfffffffc) + (int)puVar15);
        }
        *puVar15 = 0;
        *local_cc = (int)FUN_1005b590;
        puVar13[*(int *)(iVar24 + 0x12e4) * 5 + 0x1a] = puVar15;
        if (*(char *)(iVar24 + 0x12ed) != '\0') {
          *puVar13 = 0;
          (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar24 + 0x1220));
          bVar10 = false;
        }
      }
    }
    if (bVar12) {
      local_50 = local_d0;
      piVar14 = *(int **)(iVar24 + 0x12d0);
      iVar18 = 4;
      if (local_e8 == (uint *)0x0) {
        iVar18 = 0;
      }
      uStack_58 = uStack_98;
      local_60 = local_a0;
      piVar2 = (int *)(iVar18 + (int)piVar14);
      *piVar2 = param_1;
      piVar2[1] = local_d8;
      piVar2[2] = (int)local_ec;
      piVar2[3] = local_d4;
      piVar2[4] = param_6;
      piVar2[5] = param_8;
      *(byte *)(piVar2 + 6) = param_11;
      if (local_e8 != (uint *)0x0) {
        *piVar14 = (int)(piVar2 + 7);
        FUN_10055888(&local_60,piVar2 + 7);
      }
      FUN_1005b590(piVar14);
    }
    if (!bVar10) {
      return;
    }
    *puVar13 = 0;
    return;
  }
  local_a0 = 0;
  iVar18 = 0;
  uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
  if (bVar12) {
    uVar23 = FUN_100ed8b8(*(int *)(param_1 + 0xd9b8) + 0x14f0,local_e8,&local_a0);
    iVar24 = (int)local_a0;
    if ((uVar23 & 1) != 0) {
      FUN_10055888(&local_80,local_a0 & 0xffffffff);
    }
    iVar18 = (int)uStack_98;
  }
  else {
    local_a0._0_4_ = 0;
    iVar24 = (int)local_a0;
  }
  bVar12 = true;
  local_e4 = (int *)local_a0._4_4_;
  local_e8 = (uint *)local_b4;
  iVar6 = *(int *)(param_1 + 0xd9b8);
  puVar13 = (undefined4 *)(iVar6 + 0x11c0);
  local_e0 = (uint *)local_c0;
  cVar7 = *(char *)(iVar6 + 0x12ec);
  local_dc = (uint *)local_c4;
  local_ec = local_c8;
  if (cVar7 == '\0') {
LAB_1005b4a8:
    if (cVar7 != '\0') goto LAB_1005b53c;
  }
  else {
    puVar15 = (undefined4 *)FUN_100fd1a8(puVar13,0x34);
    if (puVar15 != (undefined4 *)0x0) {
      piVar14 = (int *)(iVar6 + 0x12e8);
      do {
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar14),0x10);
        if (bVar10) {
          *piVar14 = *piVar14 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar15[1] = 0x34;
      puVar15[2] = param_1;
      puVar15[3] = local_d8;
      puVar15[4] = local_ec;
      puVar15[5] = local_d4;
      puVar15[6] = local_dc;
      puVar15[7] = param_6;
      puVar15[8] = local_e0;
      puVar15[9] = param_8;
      puVar15[10] = local_e8;
      *(byte *)(puVar15 + 0xb) = param_11;
      puVar15[0xc] = iVar24;
      puVar15[0xd] = local_e4;
      puVar15[0xe] = iVar18;
      puVar5 = (undefined4 *)((int)puVar15 + 0x3fU & 0xfffffffc);
      *puVar5 = 0;
      *puVar15 = FUN_1005b610;
      puVar13[*(int *)(iVar6 + 0x12e4) * 5 + 0x1a] = puVar5;
      if (*(char *)(iVar6 + 0x12ed) != '\0') {
        *puVar13 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar6 + 0x1220));
        bVar12 = false;
      }
      goto LAB_1005b4a8;
    }
    *puVar13 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar13);
  }
  piVar14 = *(int **)(iVar6 + 0x12d0);
  *piVar14 = param_1;
  piVar14[1] = local_d8;
  piVar14[2] = (int)local_ec;
  piVar14[3] = local_d4;
  piVar14[4] = (int)local_dc;
  piVar14[5] = param_6;
  piVar14[6] = (int)local_e0;
  piVar14[7] = param_8;
  piVar14[8] = (int)local_e8;
  *(byte *)(piVar14 + 9) = param_11;
  piVar14[10] = iVar24;
  piVar14[0xb] = (int)local_e4;
  piVar14[0xc] = iVar18;
  FUN_1005b610(piVar14);
LAB_1005b53c:
  if (bVar12) {
    *puVar13 = 0;
  }
  return;
}

