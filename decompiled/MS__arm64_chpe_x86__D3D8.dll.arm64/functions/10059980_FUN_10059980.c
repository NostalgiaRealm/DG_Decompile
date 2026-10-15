/*
 * FUN_10059980 at 10059980
 * undefined FUN_10059980(void)
 * Address ranges: 10059980-1005a2cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10059980(int param_1,int param_2,uint *param_3,int param_4,int param_5,uint param_6,
                 int param_7,uint param_8,uint param_9,undefined4 param_10,int param_11,
                 undefined4 param_12,byte param_13)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
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
  uint *puVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 *local_9c;
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
  uVar25 = 0;
  local_8c = param_7;
  local_80 = param_1;
  local_74 = param_6;
  local_70 = param_8;
  local_68 = param_2;
  local_64 = param_4;
  puVar11 = (undefined4 *)FUN_100fd300(*(int *)(param_1 + 0xd9b8) + 0x11c0);
  local_88 = param_9;
  if (*(char *)(puVar11 + 0x4b) == '\0') {
    bVar8 = false;
    puVar23 = param_3;
  }
  else {
    local_94 = (undefined4 *)0x0;
    iVar18 = extraout_w13;
    if (*param_3 != *(uint *)(extraout_w12 + 0x1dc4)) {
      *(uint *)(extraout_w12 + 0x1dc4) = *param_3;
      puVar11 = (undefined4 *)FUN_10057e10(extraout_w13 + 0xda34,param_3);
      if (puVar11 == (undefined4 *)0x0) {
        local_9c = (undefined8 *)FUN_100febf0(0xb0);
        puVar11 = (undefined4 *)0x0;
        if (local_9c != (undefined8 *)0x0) {
          uVar28 = *(undefined8 *)param_3;
          uVar27 = *(undefined8 *)(param_3 + 6);
          uVar14 = *(undefined8 *)(param_3 + 4);
          puVar23 = (uint *)(extraout_w13 + 0xda3c);
          uVar26 = 0;
          local_9c[1] = *(undefined8 *)(param_3 + 2);
          *local_9c = uVar28;
          local_9c[3] = uVar27;
          local_9c[2] = uVar14;
          uVar28 = *(undefined8 *)(param_3 + 8);
          uVar27 = *(undefined8 *)(param_3 + 0xe);
          uVar14 = *(undefined8 *)(param_3 + 0xc);
          local_9c[5] = *(undefined8 *)(param_3 + 10);
          local_9c[4] = uVar28;
          local_9c[7] = uVar27;
          local_9c[6] = uVar14;
          uVar28 = *(undefined8 *)(param_3 + 0x10);
          uVar27 = *(undefined8 *)(param_3 + 0x16);
          uVar14 = *(undefined8 *)(param_3 + 0x14);
          local_9c[9] = *(undefined8 *)(param_3 + 0x12);
          local_9c[8] = uVar28;
          local_9c[0xb] = uVar27;
          local_9c[10] = uVar14;
          uVar28 = *(undefined8 *)(param_3 + 0x18);
          uVar27 = *(undefined8 *)(param_3 + 0x1e);
          uVar14 = *(undefined8 *)(param_3 + 0x1c);
          local_9c[0xd] = *(undefined8 *)(param_3 + 0x1a);
          local_9c[0xc] = uVar28;
          local_9c[0xf] = uVar27;
          local_9c[0xe] = uVar14;
          uVar28 = *(undefined8 *)(param_3 + 0x20);
          uVar27 = *(undefined8 *)(param_3 + 0x26);
          uVar14 = *(undefined8 *)(param_3 + 0x24);
          local_9c[0x11] = *(undefined8 *)(param_3 + 0x22);
          local_9c[0x10] = uVar28;
          local_9c[0x13] = uVar27;
          local_9c[0x12] = uVar14;
          uVar14 = *(undefined8 *)(param_3 + 0x28);
          local_9c[0x15] = *(undefined8 *)(param_3 + 0x2a);
          local_9c[0x14] = uVar14;
          uVar16 = *puVar23;
          uVar22 = (ulonglong)*param_3;
          local_60 = puVar23;
          if (uVar16 == 0) {
LAB_10059b04:
            local_5c = (uint *)(extraout_w13 + 0xda40);
            uVar19 = *local_5c;
            if (uVar19 == uVar16) {
              local_78 = 0x10;
              if (uVar19 != 0) {
                local_78 = uVar19 << 1;
              }
              local_7c = (undefined4 *)FUN_100fece0(local_78 * 0x10 + 0x7f);
              iVar18 = local_90;
              if (local_7c != (undefined4 *)0x0) {
                uVar19 = (int)local_7c + 0x7fU & 0xffffff80;
                uVar16 = 0;
                if (*puVar23 != 0) {
                  do {
                    puVar12 = (undefined8 *)(*(int *)(local_90 + 0x1a38) + uVar16 * 0x10);
                    puVar2 = (undefined8 *)(uVar19 + uVar16 * 0x10);
                    uVar16 = uVar16 + 1;
                    uVar14 = *puVar12;
                    puVar2[1] = puVar12[1];
                    *puVar2 = uVar14;
                  } while (uVar16 < *(uint *)(local_90 + 0x1a3c));
                }
                FUN_100fed00(*(undefined4 *)(local_90 + 0x1a34));
                *(uint *)(&DAT_0000da38 + extraout_w13) = uVar19;
                *(undefined4 **)(iVar18 + 0x1a34) = local_7c;
                *local_5c = local_78;
              }
            }
            piVar24 = (int *)(&DAT_0000da38 + extraout_w13);
            uVar16 = *local_60;
            if (*local_5c != uVar16) {
              for (; uVar26 < uVar16; uVar16 = uVar16 - 1) {
                puVar12 = (undefined8 *)(*piVar24 + uVar16 * 0x10);
                puVar12[1] = puVar12[-1];
                *puVar12 = puVar12[-2];
              }
              *local_60 = *local_60 + 1;
              *(uint *)(*piVar24 + uVar26 * 0x10 + 8) = *param_3;
              *(undefined8 **)(*piVar24 + uVar26 * 0x10 + 0xc) = local_9c;
              *(ulonglong *)(*piVar24 + uVar26 * 0x10) = uVar22;
            }
          }
          else {
            uVar19 = 0;
            uVar15 = uVar16;
            do {
              uVar26 = uVar15 + uVar19 >> 1;
              uVar21 = *(ulonglong *)(*(int *)(&DAT_0000da38 + extraout_w13) + uVar26 * 0x10);
              uVar10 = uVar26;
              if (uVar21 <= uVar22) {
                if (uVar22 <= uVar21) break;
                uVar19 = uVar26 + 1;
                uVar26 = uVar19;
                uVar10 = uVar15;
              }
              uVar15 = uVar10;
            } while (uVar15 != uVar19);
            if ((uVar26 == uVar16) ||
               (puVar1 = (ulonglong *)(*(int *)(&DAT_0000da38 + extraout_w13) + uVar26 * 0x10),
               *puVar1 != uVar22)) goto LAB_10059b04;
            *(undefined8 **)((int)puVar1 + 0xc) = local_9c;
          }
          puVar11 = (undefined4 *)FUN_10057e10(extraout_w13 + 0xda34,param_3);
          if (puVar11 != (undefined4 *)0x0) goto LAB_10059c5c;
        }
        uVar20 = 0;
      }
      else {
LAB_10059c5c:
        uVar20 = *puVar11;
      }
      *(undefined4 *)(local_90 + 0x1dc8) = uVar20;
      iVar18 = local_80;
    }
    puVar23 = *(uint **)(iVar18 + 0xddc8);
    if (puVar23 != (uint *)0x0) {
      uVar16 = (uint)param_13;
      local_9c = (undefined8 *)0x0;
      uVar25 = local_88;
      FUN_1004ff10(puVar11,local_70,local_88,param_13,&local_84,&local_9c);
      local_8c = ((int)local_9c - local_84) + 1;
      local_94 = (undefined4 *)(param_3[3] + ((int)local_9c - local_84) * param_3[3]);
      uVar25 = (int)local_94 + (uVar25 + uVar16 * uVar25 + 0x10) * 2;
      local_6c = param_5 + (local_84 + param_11) * local_74;
    }
    if (uVar25 < 0x3f00) {
      bVar8 = true;
      uVar16 = param_3[3];
      iVar18 = *(int *)(local_90 + 0x19b8);
      puVar11 = (undefined4 *)(iVar18 + 0x11c0);
      cVar5 = *(char *)(iVar18 + 0x12ec);
      if (cVar5 == '\0') {
LAB_10059ebc:
        if (cVar5 != '\0') goto LAB_10059f90;
      }
      else {
        if (uVar25 == 0) {
          iVar17 = 0x24;
        }
        else {
          iVar17 = (uVar25 + 3 & 0xfffffffc) + 0x28;
        }
        puVar12 = (undefined8 *)FUN_100fd1a8(puVar11,iVar17);
        if (puVar12 != (undefined8 *)0x0) {
          piVar24 = (int *)(iVar18 + 0x12e8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar24),0x10);
            if (bVar7) {
              *piVar24 = *piVar24 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          DataMemoryBarrier(2,3);
          *(int *)((int)puVar12 + 4) = iVar17;
          iVar17 = 0xc;
          if (uVar25 == 0) {
            iVar17 = 8;
          }
          piVar24 = (int *)(iVar17 + (int)puVar12);
          *piVar24 = (int)local_94;
          piVar24[1] = local_80;
          piVar24[2] = local_68;
          piVar24[3] = (int)puVar23;
          piVar24[4] = local_64;
          piVar24[5] = uVar16;
          piVar24[6] = local_8c;
          piVar24[7] = local_88;
          *(byte *)(piVar24 + 8) = param_13;
          puVar13 = (undefined4 *)((int)piVar24 + 0x27U & 0xfffffffc);
          local_78 = local_88;
          local_9c = puVar12;
          local_7c = puVar13;
          if (uVar25 != 0) {
            *(undefined4 **)(puVar12 + 1) = puVar13;
            uVar26 = param_3[3];
            uVar14 = FUN_10052990(local_8c,uVar26,local_6c,local_74,puVar13,uVar26);
            FUN_10050070(uVar14,local_70,(int)uVar14 + 0xfU & 0xfffffff0,local_78,-local_84,param_13
                        );
            puVar13 = (undefined4 *)((uVar25 + 3 & 0xfffffffc) + (int)local_7c);
          }
          *puVar13 = 0;
          *(code **)local_9c = FUN_1005a2d0;
          puVar11[*(int *)(iVar18 + 0x12e4) * 5 + 0x1a] = puVar13;
          if (*(char *)(iVar18 + 0x12ed) != '\0') {
            *puVar11 = 0;
            (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar18 + 0x1220));
            bVar8 = false;
          }
          goto LAB_10059ebc;
        }
        *puVar11 = 0;
        (*(code *)PTR_FUN_10134114)(100);
        FUN_100fd300(puVar11);
      }
      uVar26 = local_88;
      piVar24 = *(int **)(iVar18 + 0x12d0);
      iVar18 = 4;
      if (uVar25 == 0) {
        iVar18 = 0;
      }
      piVar3 = (int *)(iVar18 + (int)piVar24);
      *piVar3 = (int)local_94;
      piVar3[1] = local_80;
      piVar3[2] = local_68;
      piVar3[3] = (int)puVar23;
      piVar3[4] = local_64;
      piVar3[5] = uVar16;
      piVar3[6] = local_8c;
      piVar3[7] = local_88;
      *(byte *)(piVar3 + 8) = param_13;
      if (uVar25 != 0) {
        *piVar24 = (int)(piVar3 + 9);
        uVar14 = FUN_10052990(local_8c,param_3[3],local_6c,local_74,piVar3 + 9,param_3[3]);
        FUN_10050070(uVar14,local_70,(int)uVar14 + 0xfU & 0xfffffff0,uVar26,-local_84,param_13);
      }
      FUN_1005a2d0(piVar24);
LAB_10059f90:
      if (!bVar8) {
        return;
      }
      *puVar11 = 0;
      return;
    }
    bVar8 = true;
  }
  uVar16 = local_70;
  uVar26 = local_74;
  local_58 = 0;
  local_50 = 0;
  local_7c = (undefined4 *)local_70;
  local_78 = local_74;
  if (bVar8) {
    uVar22 = FUN_100ed8b8(*(int *)(local_90 + 0x19b8) + 0x14f0,uVar25,&local_58);
    iVar18 = (int)local_58;
    if ((uVar22 & 1) != 0) {
      uVar26 = param_3[3];
      param_11 = 0;
      uVar14 = FUN_10052990(local_8c,uVar26,local_6c,local_78,local_58 & 0xffffffff,uVar26);
      uVar16 = (int)uVar14 + 0xfU & 0xfffffff0;
      FUN_10050070(uVar14,local_7c,uVar16,local_88,-local_84,param_13);
      param_5 = iVar18;
    }
  }
  else {
    local_58._0_4_ = 0;
    iVar18 = (int)local_58;
  }
  iVar9 = local_50;
  local_9c = local_58._4_4_;
  iVar17 = *(int *)(local_90 + 0x19b8);
  puVar11 = (undefined4 *)(iVar17 + 0x11c0);
  bVar8 = true;
  local_98 = *(char *)(iVar17 + 0x12ec) == '\0';
  local_94 = puVar11;
  if (*(char *)(iVar17 + 0x12ec) == '\0') {
LAB_1005a1dc:
    if (local_98 == '\0') goto LAB_1005a280;
  }
  else {
    puVar13 = (undefined4 *)FUN_100fd1a8(puVar11,0x38);
    if (puVar13 != (undefined4 *)0x0) {
      piVar24 = (int *)(iVar17 + 0x12e8);
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar24),0x10);
        if (bVar7) {
          *piVar24 = *piVar24 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      puVar13[1] = 0x38;
      puVar13[2] = local_80;
      puVar13[3] = local_68;
      puVar13[4] = puVar23;
      puVar13[5] = local_64;
      puVar13[6] = param_5;
      puVar13[7] = uVar26;
      puVar13[8] = local_8c;
      puVar13[9] = uVar16;
      puVar13[10] = local_88;
      puVar13[0xb] = param_11;
      *(byte *)(puVar13 + 0xc) = param_13;
      puVar13[0xd] = iVar18;
      puVar13[0xe] = local_9c;
      puVar13[0xf] = iVar9;
      puVar4 = (undefined4 *)((int)puVar13 + 0x43U & 0xfffffffc);
      *puVar4 = 0;
      *puVar13 = FUN_1005a360;
      puVar11[*(int *)(iVar17 + 0x12e4) * 5 + 0x1a] = puVar4;
      if (*(char *)(iVar17 + 0x12ed) != '\0') {
        *puVar11 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar17 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1005a1dc;
    }
    *puVar11 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar11);
  }
  piVar24 = (int *)local_94[0x44];
  *piVar24 = local_80;
  piVar24[1] = local_68;
  piVar24[2] = (int)puVar23;
  piVar24[3] = local_64;
  piVar24[4] = param_5;
  piVar24[5] = uVar26;
  piVar24[6] = local_8c;
  piVar24[7] = uVar16;
  piVar24[8] = local_88;
  piVar24[9] = param_11;
  *(byte *)(piVar24 + 10) = param_13;
  piVar24[0xb] = iVar18;
  piVar24[0xc] = (int)local_9c;
  piVar24[0xd] = iVar9;
  FUN_1005a360(piVar24);
LAB_1005a280:
  if (bVar8) {
    *local_94 = 0;
  }
  return;
}

