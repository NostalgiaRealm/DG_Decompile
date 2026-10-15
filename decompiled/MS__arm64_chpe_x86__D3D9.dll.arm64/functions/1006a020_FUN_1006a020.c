/*
 * FUN_1006a020 at 1006a020
 * undefined FUN_1006a020(void)
 * Address ranges: 1006a020-1006a943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006a020(int param_1,int param_2,uint *param_3,int param_4,int param_5,uint param_6,
                 int param_7,uint param_8,uint param_9,undefined4 param_10,int param_11,
                 undefined4 param_12,byte param_13)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  int extraout_w12;
  ulonglong uVar21;
  int extraout_w13;
  ulonglong uVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  undefined4 *local_9c;
  char local_98;
  undefined4 *local_94;
  int local_90;
  int local_8c;
  uint local_88;
  int local_84;
  int local_80;
  undefined4 *local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint *local_60;
  uint *local_5c;
  undefined8 local_58;
  int local_50;
  
  local_90 = param_1 + 0xc000;
  local_84 = 0;
  local_6c = 0;
  uVar24 = 0;
  local_8c = param_7;
  local_80 = param_1;
  local_74 = param_6;
  local_70 = param_8;
  local_68 = param_2;
  local_64 = param_4;
  puVar12 = (undefined4 *)FUN_101308d0(*(int *)(param_1 + 0xf6b8) + 0x11c0);
  local_88 = param_9;
  if (*(char *)(puVar12 + 0x4b) == '\0') {
    bVar9 = false;
    puVar26 = param_3;
  }
  else {
    local_94 = (undefined4 *)0x0;
    iVar18 = extraout_w13;
    if (*param_3 != *(uint *)(extraout_w12 + 0x3d04)) {
      *(uint *)(extraout_w12 + 0x3d04) = *param_3;
      puVar12 = (undefined4 *)FUN_100684c0(extraout_w13 + 0xf734,param_3);
      if (puVar12 == (undefined4 *)0x0) {
        local_9c = (undefined4 *)FUN_101321c0(0x254);
        puVar12 = (undefined4 *)0x0;
        if (local_9c != (undefined4 *)0x0) {
          FUN_101325a0(local_9c,param_3,0x254);
          puVar26 = (uint *)(extraout_w13 + 0xf73c);
          uVar22 = (ulonglong)*param_3;
          uVar16 = *puVar26;
          uVar25 = 0;
          local_60 = puVar26;
          if (uVar16 == 0) {
LAB_1006a17c:
            local_5c = (uint *)(extraout_w13 + 0xf740);
            uVar19 = *local_5c;
            if (uVar19 == uVar16) {
              local_78 = 0x10;
              if (uVar19 != 0) {
                local_78 = uVar19 << 1;
              }
              local_7c = (undefined4 *)FUN_101322b0(local_78 * 0x10 + 0x7f);
              iVar18 = local_90;
              if (local_7c != (undefined4 *)0x0) {
                uVar19 = (int)local_7c + 0x7fU & 0xffffff80;
                uVar16 = 0;
                if (*puVar26 != 0) {
                  do {
                    puVar2 = (undefined8 *)(*(int *)(local_90 + 0x3738) + uVar16 * 0x10);
                    puVar3 = (undefined8 *)(uVar19 + uVar16 * 0x10);
                    uVar16 = uVar16 + 1;
                    uVar14 = *puVar2;
                    puVar3[1] = puVar2[1];
                    *puVar3 = uVar14;
                  } while (uVar16 < *(uint *)(local_90 + 0x373c));
                }
                FUN_101322d0(*(undefined4 *)(local_90 + 0x3734));
                *(uint *)(extraout_w13 + 0xf738) = uVar19;
                *(undefined4 **)(iVar18 + 0x3734) = local_7c;
                *local_5c = local_78;
              }
            }
            piVar23 = (int *)(extraout_w13 + 0xf738);
            uVar16 = *local_60;
            if (*local_5c != uVar16) {
              for (; uVar25 < uVar16; uVar16 = uVar16 - 1) {
                puVar2 = (undefined8 *)(*piVar23 + uVar16 * 0x10);
                puVar2[1] = puVar2[-1];
                *puVar2 = puVar2[-2];
              }
              *local_60 = *local_60 + 1;
              *(uint *)(*piVar23 + uVar25 * 0x10 + 8) = *param_3;
              *(undefined4 **)(*piVar23 + uVar25 * 0x10 + 0xc) = local_9c;
              *(ulonglong *)(*piVar23 + uVar25 * 0x10) = uVar22;
            }
          }
          else {
            uVar19 = 0;
            uVar15 = uVar16;
            do {
              uVar25 = uVar15 + uVar19 >> 1;
              uVar21 = *(ulonglong *)(*(int *)(extraout_w13 + 0xf738) + uVar25 * 0x10);
              uVar11 = uVar25;
              if (uVar21 <= uVar22) {
                if (uVar22 <= uVar21) break;
                uVar19 = uVar25 + 1;
                uVar25 = uVar19;
                uVar11 = uVar15;
              }
              uVar15 = uVar11;
            } while (uVar15 != uVar19);
            if ((uVar25 == uVar16) ||
               (puVar1 = (ulonglong *)(*(int *)(extraout_w13 + 0xf738) + uVar25 * 0x10),
               *puVar1 != uVar22)) goto LAB_1006a17c;
            *(undefined4 **)((int)puVar1 + 0xc) = local_9c;
          }
          puVar12 = (undefined4 *)FUN_100684c0(extraout_w13 + 0xf734,param_3);
          if (puVar12 != (undefined4 *)0x0) goto LAB_1006a2d4;
        }
        uVar20 = 0;
      }
      else {
LAB_1006a2d4:
        uVar20 = *puVar12;
      }
      *(undefined4 *)(local_90 + 0x3d08) = uVar20;
      iVar18 = local_80;
    }
    puVar26 = *(uint **)(iVar18 + 0xfd08);
    if (puVar26 != (uint *)0x0) {
      uVar16 = (uint)param_13;
      local_9c = (undefined4 *)0x0;
      uVar24 = local_88;
      FUN_10060370(puVar12,local_70,local_88,param_13,&local_84,&local_9c);
      local_8c = ((int)local_9c - local_84) + 1;
      local_94 = (undefined4 *)(param_3[3] + ((int)local_9c - local_84) * param_3[3]);
      uVar24 = (int)local_94 + (uVar24 + uVar16 * uVar24 + 0x10) * 2;
      local_6c = param_5 + (local_84 + param_11) * local_74;
    }
    if (uVar24 < 0x3f00) {
      bVar9 = true;
      uVar16 = param_3[3];
      iVar18 = *(int *)(local_90 + 0x36b8);
      puVar12 = (undefined4 *)(iVar18 + 0x11c0);
      cVar6 = *(char *)(iVar18 + 0x12ec);
      if (cVar6 == '\0') {
LAB_1006a534:
        if (cVar6 != '\0') goto LAB_1006a608;
      }
      else {
        if (uVar24 == 0) {
          iVar17 = 0x24;
        }
        else {
          iVar17 = (uVar24 + 3 & 0xfffffffc) + 0x28;
        }
        puVar13 = (undefined4 *)FUN_10130778(puVar12,iVar17);
        if (puVar13 != (undefined4 *)0x0) {
          piVar23 = (int *)(iVar18 + 0x12e8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar23),0x10);
            if (bVar8) {
              *piVar23 = *piVar23 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          DataMemoryBarrier(2,3);
          puVar13[1] = iVar17;
          iVar17 = 0xc;
          if (uVar24 == 0) {
            iVar17 = 8;
          }
          piVar23 = (int *)(iVar17 + (int)puVar13);
          *piVar23 = (int)local_94;
          piVar23[1] = local_80;
          piVar23[2] = local_68;
          piVar23[3] = (int)puVar26;
          piVar23[4] = local_64;
          piVar23[5] = uVar16;
          piVar23[6] = local_8c;
          piVar23[7] = local_88;
          *(byte *)(piVar23 + 8) = param_13;
          puVar5 = (undefined4 *)((int)piVar23 + 0x27U & 0xfffffffc);
          local_78 = local_88;
          local_9c = puVar13;
          local_7c = puVar5;
          if (uVar24 != 0) {
            puVar13[2] = puVar5;
            uVar25 = param_3[3];
            uVar14 = FUN_10062e80(local_8c,uVar25,local_6c,local_74,puVar5,uVar25);
            FUN_100604d0(uVar14,local_70,(int)uVar14 + 0xfU & 0xfffffff0,local_78,-local_84,param_13
                        );
            puVar5 = (undefined4 *)((uVar24 + 3 & 0xfffffffc) + (int)local_7c);
          }
          *puVar5 = 0;
          *local_9c = FUN_1006a950;
          puVar12[*(int *)(iVar18 + 0x12e4) * 5 + 0x1a] = puVar5;
          if (*(char *)(iVar18 + 0x12ed) != '\0') {
            *puVar12 = 0;
            (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar18 + 0x1220));
            bVar9 = false;
          }
          goto LAB_1006a534;
        }
        *puVar12 = 0;
        (*(code *)PTR_FUN_1016c114)(100);
        FUN_101308d0(puVar12);
      }
      uVar25 = local_88;
      piVar23 = *(int **)(iVar18 + 0x12d0);
      iVar18 = 4;
      if (uVar24 == 0) {
        iVar18 = 0;
      }
      piVar4 = (int *)(iVar18 + (int)piVar23);
      *piVar4 = (int)local_94;
      piVar4[1] = local_80;
      piVar4[2] = local_68;
      piVar4[3] = (int)puVar26;
      piVar4[4] = local_64;
      piVar4[5] = uVar16;
      piVar4[6] = local_8c;
      piVar4[7] = local_88;
      *(byte *)(piVar4 + 8) = param_13;
      if (uVar24 != 0) {
        *piVar23 = (int)(piVar4 + 9);
        uVar14 = FUN_10062e80(local_8c,param_3[3],local_6c,local_74,piVar4 + 9,param_3[3]);
        FUN_100604d0(uVar14,local_70,(int)uVar14 + 0xfU & 0xfffffff0,uVar25,-local_84,param_13);
      }
      FUN_1006a950(piVar23);
LAB_1006a608:
      if (!bVar9) {
        return;
      }
      *puVar12 = 0;
      return;
    }
    bVar9 = true;
  }
  uVar16 = local_70;
  uVar25 = local_74;
  local_58 = 0;
  local_50 = 0;
  local_7c = (undefined4 *)local_70;
  local_78 = local_74;
  if (bVar9) {
    uVar22 = FUN_10120108(*(int *)(local_90 + 0x36b8) + 0x14f0,uVar24,&local_58);
    iVar18 = (int)local_58;
    if ((uVar22 & 1) != 0) {
      uVar25 = param_3[3];
      param_11 = 0;
      uVar14 = FUN_10062e80(local_8c,uVar25,local_6c,local_78,local_58 & 0xffffffff,uVar25);
      uVar16 = (int)uVar14 + 0xfU & 0xfffffff0;
      FUN_100604d0(uVar14,local_7c,uVar16,local_88,-local_84,param_13);
      param_5 = iVar18;
    }
  }
  else {
    local_58._0_4_ = 0;
    iVar18 = (int)local_58;
  }
  iVar10 = local_50;
  local_9c = local_58._4_4_;
  iVar17 = *(int *)(local_90 + 0x36b8);
  puVar12 = (undefined4 *)(iVar17 + 0x11c0);
  bVar9 = true;
  local_98 = *(char *)(iVar17 + 0x12ec) == '\0';
  local_94 = puVar12;
  if (*(char *)(iVar17 + 0x12ec) == '\0') {
LAB_1006a854:
    if (local_98 == '\0') goto LAB_1006a8f8;
  }
  else {
    puVar13 = (undefined4 *)FUN_10130778(puVar12,0x38);
    if (puVar13 != (undefined4 *)0x0) {
      piVar23 = (int *)(iVar17 + 0x12e8);
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar23),0x10);
        if (bVar8) {
          *piVar23 = *piVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      DataMemoryBarrier(2,3);
      puVar13[1] = 0x38;
      puVar13[2] = local_80;
      puVar13[3] = local_68;
      puVar13[4] = puVar26;
      puVar13[5] = local_64;
      puVar13[6] = param_5;
      puVar13[7] = uVar25;
      puVar13[8] = local_8c;
      puVar13[9] = uVar16;
      puVar13[10] = local_88;
      puVar13[0xb] = param_11;
      *(byte *)(puVar13 + 0xc) = param_13;
      puVar13[0xd] = iVar18;
      puVar13[0xe] = local_9c;
      puVar13[0xf] = iVar10;
      puVar5 = (undefined4 *)((int)puVar13 + 0x43U & 0xfffffffc);
      *puVar5 = 0;
      *puVar13 = FUN_1006a9e0;
      puVar12[*(int *)(iVar17 + 0x12e4) * 5 + 0x1a] = puVar5;
      if (*(char *)(iVar17 + 0x12ed) != '\0') {
        *puVar12 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar17 + 0x1220));
        bVar9 = false;
      }
      goto LAB_1006a854;
    }
    *puVar12 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar12);
  }
  piVar23 = (int *)local_94[0x44];
  *piVar23 = local_80;
  piVar23[1] = local_68;
  piVar23[2] = (int)puVar26;
  piVar23[3] = local_64;
  piVar23[4] = param_5;
  piVar23[5] = uVar25;
  piVar23[6] = local_8c;
  piVar23[7] = uVar16;
  piVar23[8] = local_88;
  piVar23[9] = param_11;
  *(byte *)(piVar23 + 10) = param_13;
  piVar23[0xb] = iVar18;
  piVar23[0xc] = (int)local_9c;
  piVar23[0xd] = iVar10;
  FUN_1006a9e0(piVar23);
LAB_1006a8f8:
  if (bVar9) {
    *local_94 = 0;
  }
  return;
}

