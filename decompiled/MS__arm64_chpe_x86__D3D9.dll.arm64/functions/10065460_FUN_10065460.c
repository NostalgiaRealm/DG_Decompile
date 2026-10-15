/*
 * FUN_10065460 at 10065460
 * undefined FUN_10065460(void)
 * Address ranges: 10065460-10065d03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065460(int param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,byte param_9,undefined4 param_10,undefined1 param_11)

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
  uint *puVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  undefined8 uVar26;
  uint *local_ec;
  uint *local_e8;
  uint *local_e4;
  uint *local_e0;
  uint *local_dc;
  int local_d8;
  uint *local_d4;
  int *local_d0;
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
  
  local_d4 = param_3 + 2;
  local_b8 = 0;
  local_b0 = 0;
  local_bc = *local_d4 * 0xc;
  local_d0 = (int *)(param_1 + 0xf6b8);
  local_e8 = param_3;
  local_d8 = param_2;
  local_c8 = param_3;
  local_c4 = param_4;
  local_c0 = param_6;
  local_b4 = param_8;
  local_84 = param_6;
  puVar13 = (undefined4 *)FUN_101308d0(*local_d0 + 0x11c0);
  if (*(char *)(puVar13 + 0x4b) == '\0') {
    bVar12 = false;
    iVar18 = local_b0._4_4_;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0xfd04)) {
      *(uint *)(param_1 + 0xfd04) = *param_3;
      puVar13 = (undefined4 *)FUN_100684c0(param_1 + 0xf734,param_3);
      if (puVar13 == (undefined4 *)0x0) {
        local_ec = (uint *)FUN_101321c0(0x254);
        puVar13 = (undefined4 *)0x0;
        if (local_ec != (uint *)0x0) {
          FUN_101325a0(local_ec,param_3,0x254);
          puVar1 = (uint *)(param_1 + 0xf73c);
          uVar23 = (ulonglong)*param_3;
          uVar17 = *puVar1;
          uVar24 = 0;
          if (uVar17 == 0) {
LAB_100655c0:
            local_e4 = (uint *)(param_1 + 0xf738);
            local_e0 = (uint *)(param_1 + 0xf740);
            uVar19 = *local_e0;
            puVar20 = local_e4;
            local_dc = puVar1;
            local_90 = puVar1;
            if (uVar19 == uVar17) {
              local_88 = 0x10;
              if (uVar19 != 0) {
                local_88 = uVar19 << 1;
              }
              local_8c = FUN_101322b0(local_88 * 0x10 + 0x7f);
              puVar20 = local_e4;
              if (local_8c != 0) {
                local_e4 = (uint *)(local_8c + 0x7fU & 0xffffff80);
                uVar17 = 0;
                if (*local_90 != 0) {
                  do {
                    puVar4 = (undefined8 *)(*(int *)(param_1 + 0xf738) + uVar17 * 0x10);
                    iVar18 = uVar17 * 4;
                    uVar17 = uVar17 + 1;
                    uVar26 = *puVar4;
                    *(undefined8 *)(local_e4 + iVar18 + 2) = puVar4[1];
                    *(undefined8 *)(local_e4 + iVar18) = uVar26;
                  } while (uVar17 < *(uint *)(param_1 + 0xf73c));
                }
                FUN_101322d0(*(undefined4 *)(param_1 + 0xf734));
                *(int *)(param_1 + 0xf734) = local_8c;
                *(uint *)(param_1 + 0xf738) = (uint)local_e4;
                *local_e0 = local_88;
                puVar20 = (uint *)(param_1 + 0xf738);
              }
            }
            uVar17 = *local_dc;
            if (*local_e0 != uVar17) {
              for (; uVar24 < uVar17; uVar17 = uVar17 - 1) {
                puVar4 = (undefined8 *)(*puVar20 + uVar17 * 0x10);
                puVar4[1] = puVar4[-1];
                *puVar4 = puVar4[-2];
              }
              *local_dc = *local_dc + 1;
              *(uint *)(*puVar20 + uVar24 * 0x10 + 8) = *local_e8;
              *(uint **)(*puVar20 + uVar24 * 0x10 + 0xc) = local_ec;
              *(ulonglong *)(*puVar20 + uVar24 * 0x10) = uVar23;
            }
          }
          else {
            uVar19 = 0;
            uVar16 = uVar17;
            do {
              uVar24 = uVar16 + uVar19 >> 1;
              uVar22 = *(ulonglong *)(*(int *)(param_1 + 0xf738) + uVar24 * 0x10);
              uVar11 = uVar24;
              if (uVar22 <= uVar23) {
                if (uVar23 <= uVar22) break;
                uVar19 = uVar24 + 1;
                uVar24 = uVar19;
                uVar11 = uVar16;
              }
              uVar16 = uVar11;
            } while (uVar16 != uVar19);
            if ((uVar24 == uVar17) ||
               (puVar3 = (ulonglong *)(*(int *)(param_1 + 0xf738) + uVar24 * 0x10),
               *puVar3 != uVar23)) goto LAB_100655c0;
            *(uint **)((int)puVar3 + 0xc) = local_ec;
          }
          puVar13 = (undefined4 *)FUN_100684c0(param_1 + 0xf734,local_e8);
          if (puVar13 != (undefined4 *)0x0) goto LAB_10065728;
        }
        uVar21 = 0;
      }
      else {
LAB_10065728:
        uVar21 = *puVar13;
      }
      *(undefined4 *)(param_1 + 0xfd08) = uVar21;
    }
    local_c8 = *(uint **)(param_1 + 0xfd08);
    if (local_c8 == (uint *)0x0) {
      iVar18 = local_b0._4_4_;
    }
    else {
      local_ec = (uint *)0x0;
      FUN_10060370(puVar13,local_84,param_7,param_9,&local_b0,&local_ec);
      param_5 = (int)local_ec + (1 - (int)local_b0);
      uVar17 = 0;
      if (*local_d4 != 0) {
        do {
          iVar18 = uVar17 + 0x214;
          uVar17 = uVar17 + 1;
          local_b8 = local_b8 +
                     (uint)*(byte *)((int)local_e8 +
                                    (uint)*(byte *)((int)local_e8 + iVar18) * 8 + 0x16) * param_5 +
                     0x10;
        } while (uVar17 < *local_d4);
      }
      iVar18 = (param_7 + (uint)param_9 * param_7) * 2;
      local_b0 = CONCAT44(iVar18,(int)local_b0);
    }
    bVar12 = true;
  }
  local_80 = &local_c8;
  local_70 = CONCAT31(local_70._1_3_,param_9);
  iVar18 = iVar18 + local_b8 + local_bc;
  local_e8 = (uint *)(iVar18 + 0x24);
  iStack_7c = param_1;
  local_78 = param_5;
  iStack_74 = param_7;
  if (local_e8 < 0x3f00 && bVar12) {
    iVar25 = *local_d0;
    local_a0 = CONCAT44(param_1,local_80);
    puVar13 = (undefined4 *)(iVar25 + 0x11c0);
    local_d4 = (uint *)local_70;
    local_50 = local_70;
    bVar10 = true;
    bVar12 = *(char *)(iVar25 + 0x12ec) == '\0';
    uStack_98 = CONCAT44(param_7,param_5);
    local_ec = local_c8;
    if (*(char *)(iVar25 + 0x12ec) != '\0') {
      if (local_e8 == (uint *)0x0) {
        iVar18 = 0x1c;
      }
      else {
        iVar18 = (iVar18 + 0x27U & 0xfffffffc) + 0x20;
      }
      local_60 = local_a0;
      uStack_58 = uStack_98;
      piVar14 = (int *)FUN_10130778(puVar13,iVar18);
      puVar1 = local_e8;
      if (piVar14 == (int *)0x0) {
        *puVar13 = 0;
        (*(code *)PTR_FUN_1016c114)(100);
        FUN_101308d0(puVar13);
        bVar12 = true;
      }
      else {
        piVar2 = (int *)(iVar25 + 0x12e8);
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
        piVar2[3] = param_5;
        piVar2[4] = param_7;
        *(byte *)(piVar2 + 5) = param_9;
        *(undefined1 *)(piVar2 + 6) = param_11;
        puVar15 = (undefined4 *)((int)piVar2 + 0x1fU & 0xfffffffc);
        local_d0 = piVar14;
        if (local_e8 != (uint *)0x0) {
          piVar14[2] = (int)puVar15;
          FUN_10065d08(&local_60,puVar15);
          puVar15 = (undefined4 *)(((int)puVar1 + 3U & 0xfffffffc) + (int)puVar15);
        }
        *puVar15 = 0;
        *local_d0 = (int)FUN_10065ee0;
        puVar13[*(int *)(iVar25 + 0x12e4) * 5 + 0x1a] = puVar15;
        if (*(char *)(iVar25 + 0x12ed) != '\0') {
          *puVar13 = 0;
          (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar25 + 0x1220));
          bVar10 = false;
        }
      }
    }
    if (bVar12) {
      local_50 = local_d4;
      piVar14 = *(int **)(iVar25 + 0x12d0);
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
      piVar2[3] = param_5;
      piVar2[4] = param_7;
      *(byte *)(piVar2 + 5) = param_9;
      *(undefined1 *)(piVar2 + 6) = param_11;
      if (local_e8 != (uint *)0x0) {
        *piVar14 = (int)(piVar2 + 7);
        FUN_10065d08(&local_60,piVar2 + 7);
      }
      FUN_10065ee0(piVar14);
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
    uVar23 = FUN_10120108(*(int *)(param_1 + 0xf6b8) + 0x14f0,local_e8,&local_a0);
    iVar25 = (int)local_a0;
    if ((uVar23 & 1) != 0) {
      FUN_10065d08(&local_80,local_a0 & 0xffffffff);
    }
    iVar18 = (int)uStack_98;
  }
  else {
    local_a0._0_4_ = 0;
    iVar25 = (int)local_a0;
  }
  bVar12 = true;
  local_e4 = (uint *)local_a0._4_4_;
  local_e8 = (uint *)local_b4;
  iVar6 = *(int *)(param_1 + 0xf6b8);
  puVar13 = (undefined4 *)(iVar6 + 0x11c0);
  local_e0 = (uint *)local_c0;
  cVar7 = *(char *)(iVar6 + 0x12ec);
  local_dc = (uint *)local_c4;
  local_ec = local_c8;
  if (cVar7 == '\0') {
LAB_10065c2c:
    if (cVar7 != '\0') goto LAB_10065cc0;
  }
  else {
    puVar15 = (undefined4 *)FUN_10130778(puVar13,0x34);
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
      puVar15[5] = local_dc;
      puVar15[6] = param_5;
      puVar15[7] = local_e0;
      puVar15[8] = param_7;
      puVar15[9] = local_e8;
      *(byte *)(puVar15 + 10) = param_9;
      *(undefined1 *)(puVar15 + 0xb) = param_11;
      puVar15[0xc] = iVar25;
      puVar15[0xd] = local_e4;
      puVar15[0xe] = iVar18;
      puVar5 = (undefined4 *)((int)puVar15 + 0x3fU & 0xfffffffc);
      *puVar5 = 0;
      *puVar15 = FUN_10065fc0;
      puVar13[*(int *)(iVar6 + 0x12e4) * 5 + 0x1a] = puVar5;
      if (*(char *)(iVar6 + 0x12ed) != '\0') {
        *puVar13 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar6 + 0x1220));
        bVar12 = false;
      }
      goto LAB_10065c2c;
    }
    *puVar13 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar13);
  }
  piVar14 = *(int **)(iVar6 + 0x12d0);
  *piVar14 = param_1;
  piVar14[1] = local_d8;
  piVar14[2] = (int)local_ec;
  piVar14[3] = (int)local_dc;
  piVar14[4] = param_5;
  piVar14[5] = (int)local_e0;
  piVar14[6] = param_7;
  piVar14[7] = (int)local_e8;
  *(byte *)(piVar14 + 8) = param_9;
  *(undefined1 *)(piVar14 + 9) = param_11;
  piVar14[10] = iVar25;
  piVar14[0xb] = (int)local_e4;
  piVar14[0xc] = iVar18;
  FUN_10065fc0(piVar14);
LAB_10065cc0:
  if (bVar12) {
    *puVar13 = 0;
  }
  return;
}

