/*
 * FUN_10063ee0 at 10063ee0
 * undefined FUN_10063ee0(void)
 * Address ranges: 10063ee0-100647fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063ee0(int param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6,
                 uint param_7,int param_8,int param_9,undefined4 param_10,byte param_11,
                 undefined4 param_12,undefined1 param_13)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  undefined4 uVar23;
  int extraout_w12;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  uint local_9c;
  uint *local_98;
  uint local_94;
  undefined4 *local_90;
  uint *local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  uint local_74;
  int local_70;
  undefined8 local_68;
  int local_60;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  
  local_88 = 0;
  local_90 = (undefined4 *)0x0;
  uVar26 = 0;
  local_94 = param_7;
  local_84 = param_1;
  local_80 = param_4;
  local_74 = param_5;
  local_70 = param_2;
  puVar14 = (undefined4 *)FUN_101308d0(*(int *)(param_1 + 0xf6b8) + 0x11c0);
  if (*(char *)(puVar14 + 0x4b) == '\0') {
    bVar11 = false;
    local_8c = param_3;
  }
  else {
    local_8c = (uint *)0x0;
    iVar20 = extraout_w12;
    if (*param_3 != *(uint *)(param_1 + 0xfd04)) {
      *(uint *)(param_1 + 0xfd04) = *param_3;
      puVar14 = (undefined4 *)FUN_100684c0(extraout_w12 + 0xf734,param_3);
      if (puVar14 == (undefined4 *)0x0) {
        local_98 = (uint *)FUN_101321c0(0x254);
        puVar14 = (undefined4 *)0x0;
        if (local_98 != (uint *)0x0) {
          FUN_101325a0(local_98,param_3,0x254);
          puVar1 = (uint *)(extraout_w12 + 0xf73c);
          local_68 = (ulonglong)*param_3;
          uVar18 = *puVar1;
          uVar25 = 0;
          if (uVar18 == 0) {
LAB_10064028:
            local_58 = (uint *)(extraout_w12 + 0xf740);
            uVar21 = *local_58;
            local_54 = puVar1;
            local_50 = puVar1;
            if (uVar21 == uVar18) {
              local_78 = (undefined4 *)&DAT_00000010;
              if (uVar21 != 0) {
                local_78 = (undefined4 *)(uVar21 << 1);
              }
              local_7c = (undefined4 *)FUN_101322b0((int)local_78 * 0x10 + 0x7f);
              if (local_7c != (undefined4 *)0x0) {
                uVar21 = (int)local_7c + 0x7fU & 0xffffff80;
                uVar18 = 0;
                if (*local_50 != 0) {
                  do {
                    puVar3 = (undefined8 *)(*(int *)(param_1 + 0xf738) + uVar18 * 0x10);
                    puVar4 = (undefined8 *)(uVar21 + uVar18 * 0x10);
                    uVar18 = uVar18 + 1;
                    uVar16 = *puVar3;
                    puVar4[1] = puVar3[1];
                    *puVar4 = uVar16;
                  } while (uVar18 < *(uint *)(param_1 + 0xf73c));
                }
                FUN_101322d0(*(undefined4 *)(param_1 + 0xf734));
                *(undefined4 **)(param_1 + 0xf734) = local_7c;
                *(uint *)(extraout_w12 + 0xf738) = uVar21;
                *local_58 = (uint)local_78;
              }
            }
            piVar22 = (int *)(extraout_w12 + 0xf738);
            uVar18 = *local_54;
            if (*local_58 != uVar18) {
              for (; uVar25 < uVar18; uVar18 = uVar18 - 1) {
                puVar3 = (undefined8 *)(*piVar22 + uVar18 * 0x10);
                puVar3[1] = puVar3[-1];
                *puVar3 = puVar3[-2];
              }
              *local_54 = *local_54 + 1;
              *(uint *)(*piVar22 + uVar25 * 0x10 + 8) = *param_3;
              *(uint **)(*piVar22 + uVar25 * 0x10 + 0xc) = local_98;
              *(ulonglong *)(*piVar22 + uVar25 * 0x10) = local_68;
            }
          }
          else {
            uVar21 = 0;
            uVar17 = uVar18;
            do {
              uVar25 = uVar17 + uVar21 >> 1;
              uVar24 = *(ulonglong *)(*(int *)(extraout_w12 + 0xf738) + uVar25 * 0x10);
              uVar13 = uVar25;
              if (uVar24 <= local_68) {
                if (local_68 <= uVar24) break;
                uVar21 = uVar25 + 1;
                uVar25 = uVar21;
                uVar13 = uVar17;
              }
              uVar17 = uVar13;
            } while (uVar17 != uVar21);
            if ((uVar25 == uVar18) ||
               (puVar2 = (ulonglong *)(*(int *)(extraout_w12 + 0xf738) + uVar25 * 0x10),
               *puVar2 != local_68)) goto LAB_10064028;
            *(uint **)((int)puVar2 + 0xc) = local_98;
          }
          puVar14 = (undefined4 *)FUN_100684c0(extraout_w12 + 0xf734,param_3);
          if (puVar14 != (undefined4 *)0x0) goto LAB_10064190;
        }
        uVar23 = 0;
      }
      else {
LAB_10064190:
        uVar23 = *puVar14;
      }
      *(undefined4 *)(param_1 + 0xfd08) = uVar23;
      iVar20 = local_84;
    }
    puVar1 = *(uint **)(iVar20 + 0xfd08);
    if (puVar1 != (uint *)0x0) {
      local_98 = (uint *)0x0;
      FUN_10060370(puVar14,local_94,param_8,param_11,&local_88,&local_98);
      param_6 = ((int)local_98 - local_88) + 1;
      local_8c = (uint *)(param_3[3] + ((int)local_98 - local_88) * param_3[3]);
      uVar26 = (int)local_8c + (param_8 + (uint)param_11 * param_8 + 0x10) * 2;
      local_90 = (undefined4 *)(local_80 + (local_88 + param_9) * local_74);
    }
    if (uVar26 < 0x3f00) {
      local_98 = (uint *)param_3[3];
      iVar20 = *(int *)(param_1 + 0xf6b8);
      puVar14 = (undefined4 *)(iVar20 + 0x11c0);
      bVar11 = true;
      cVar7 = *(char *)(iVar20 + 0x12ec);
      if (cVar7 == '\0') {
LAB_100643f4:
        if (cVar7 != '\0') goto joined_r0x100647b4;
      }
      else {
        if (uVar26 == 0) {
          local_9c = 0x24;
        }
        else {
          local_9c = (uVar26 + 3 & 0xfffffffc) + 0x28;
        }
        puVar15 = (undefined4 *)FUN_10130778(puVar14,local_9c);
        if (puVar15 != (undefined4 *)0x0) {
          piVar22 = (int *)(iVar20 + 0x12e8);
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar22),0x10);
            if (bVar10) {
              *piVar22 = *piVar22 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          DataMemoryBarrier(2,3);
          puVar15[1] = local_9c;
          iVar19 = 0xc;
          if (uVar26 == 0) {
            iVar19 = 8;
          }
          piVar22 = (int *)(iVar19 + (int)puVar15);
          *piVar22 = (int)local_8c;
          piVar22[1] = local_84;
          piVar22[2] = local_70;
          piVar22[3] = (int)puVar1;
          piVar22[4] = (int)local_98;
          piVar22[5] = param_6;
          piVar22[6] = param_8;
          *(byte *)(piVar22 + 7) = param_11;
          *(undefined1 *)(piVar22 + 8) = param_13;
          puVar6 = (undefined4 *)((int)piVar22 + 0x27U & 0xfffffffc);
          local_7c = puVar15;
          local_78 = puVar6;
          if (uVar26 != 0) {
            puVar15[2] = puVar6;
            uVar18 = param_3[3];
            uVar16 = FUN_10062e80(param_6,uVar18,local_90,local_74,puVar6,uVar18);
            FUN_100604d0(uVar16,local_94,(int)uVar16 + 0xfU & 0xfffffff0,param_8,-local_88,param_11)
            ;
            puVar6 = (undefined4 *)((uVar26 + 3 & 0xfffffffc) + (int)local_78);
          }
          *puVar6 = 0;
          *local_7c = FUN_10064800;
          puVar14[*(int *)(iVar20 + 0x12e4) * 5 + 0x1a] = puVar6;
          if (*(char *)(iVar20 + 0x12ed) != '\0') {
            *puVar14 = 0;
            (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar20 + 0x1220));
            bVar11 = false;
          }
          goto LAB_100643f4;
        }
        *puVar14 = 0;
        (*(code *)PTR_FUN_1016c114)(100);
        FUN_101308d0(puVar14);
      }
      piVar22 = *(int **)(iVar20 + 0x12d0);
      iVar20 = 4;
      if (uVar26 == 0) {
        iVar20 = 0;
      }
      piVar5 = (int *)(iVar20 + (int)piVar22);
      *piVar5 = (int)local_8c;
      piVar5[1] = local_84;
      piVar5[2] = local_70;
      piVar5[3] = (int)puVar1;
      piVar5[4] = (int)local_98;
      piVar5[5] = param_6;
      piVar5[6] = param_8;
      *(byte *)(piVar5 + 7) = param_11;
      *(undefined1 *)(piVar5 + 8) = param_13;
      if (uVar26 != 0) {
        *piVar22 = (int)(piVar5 + 9);
        uVar16 = FUN_10062e80(param_6,param_3[3],local_90,local_74,piVar5 + 9,param_3[3]);
        FUN_100604d0(uVar16,local_94,(int)uVar16 + 0xfU & 0xfffffff0,param_8,-local_88,param_11);
      }
      FUN_10064800(piVar22);
      goto joined_r0x100647b4;
    }
    bVar11 = true;
    local_8c = puVar1;
  }
  iVar20 = local_80;
  local_98 = param_3 + 3;
  local_68 = 0;
  local_60 = 0;
  local_9c = local_74;
  local_7c = (undefined4 *)local_94;
  local_78 = (undefined4 *)local_74;
  if (bVar11) {
    uVar24 = FUN_10120108(*(int *)(param_1 + 0xf6b8) + 0x14f0,uVar26,&local_68);
    iVar19 = (int)local_68;
    if ((uVar24 & 1) != 0) {
      param_9 = 0;
      local_9c = *local_98;
      uVar16 = FUN_10062e80(param_6,local_9c,local_90,local_78,local_68 & 0xffffffff,local_9c);
      local_94 = (int)uVar16 + 0xfU & 0xfffffff0;
      FUN_100604d0(uVar16,local_7c,local_94,param_8,-local_88,param_11);
      iVar20 = iVar19;
    }
  }
  else {
    local_68._0_4_ = 0;
    iVar19 = (int)local_68;
  }
  iVar12 = local_60;
  local_80 = local_68._4_4_;
  iVar8 = *(int *)(param_1 + 0xf6b8);
  puVar14 = (undefined4 *)(iVar8 + 0x11c0);
  bVar11 = true;
  cVar7 = *(char *)(iVar8 + 0x12ec);
  local_90 = puVar14;
  if (cVar7 == '\0') {
LAB_10064710:
    puVar14 = local_90;
    if (cVar7 != '\0') goto joined_r0x100647b4;
  }
  else {
    puVar15 = (undefined4 *)FUN_10130778(puVar14,0x38);
    if (puVar15 != (undefined4 *)0x0) {
      piVar22 = (int *)(iVar8 + 0x12e8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar22),0x10);
        if (bVar10) {
          *piVar22 = *piVar22 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      puVar15[1] = 0x38;
      puVar15[2] = local_84;
      puVar15[3] = local_70;
      puVar15[4] = local_8c;
      puVar15[5] = iVar20;
      puVar15[6] = local_9c;
      puVar15[7] = param_6;
      puVar15[8] = local_94;
      puVar15[9] = param_8;
      puVar15[10] = param_9;
      *(byte *)(puVar15 + 0xb) = param_11;
      *(undefined1 *)(puVar15 + 0xc) = param_13;
      puVar15[0xd] = iVar19;
      puVar15[0xe] = local_80;
      puVar15[0xf] = iVar12;
      puVar6 = (undefined4 *)((int)puVar15 + 0x43U & 0xfffffffc);
      *puVar6 = 0;
      *puVar15 = FUN_100648f0;
      puVar14[*(int *)(iVar8 + 0x12e4) * 5 + 0x1a] = puVar6;
      if (*(char *)(iVar8 + 0x12ed) != '\0') {
        *puVar14 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar8 + 0x1220));
        bVar11 = false;
      }
      goto LAB_10064710;
    }
    *puVar14 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar14);
  }
  piVar22 = (int *)local_90[0x44];
  *piVar22 = local_84;
  piVar22[1] = local_70;
  piVar22[2] = (int)local_8c;
  piVar22[3] = iVar20;
  piVar22[4] = local_9c;
  piVar22[5] = param_6;
  piVar22[6] = local_94;
  piVar22[7] = param_8;
  piVar22[8] = param_9;
  *(byte *)(piVar22 + 9) = param_11;
  *(undefined1 *)(piVar22 + 10) = param_13;
  piVar22[0xb] = iVar19;
  piVar22[0xc] = local_80;
  piVar22[0xd] = iVar12;
  FUN_100648f0(piVar22);
  puVar14 = local_90;
joined_r0x100647b4:
  if (bVar11) {
    *puVar14 = 0;
  }
  return;
}

