/*
 * FUN_1002af80 at 1002af80
 * undefined FUN_1002af80(void)
 * Address ranges: 1002af80-1002b9af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002af80(int param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6,
                 uint param_7,int param_8,int param_9,undefined4 param_10,byte param_11,
                 undefined4 param_12,undefined1 param_13)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  ulonglong uVar28;
  int extraout_w12;
  ulonglong uVar29;
  uint *puVar30;
  uint *puVar31;
  int *piVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  int local_94;
  uint local_8c;
  int local_88;
  int local_84;
  int *local_80;
  undefined8 *local_7c;
  undefined4 *local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined8 local_58;
  int local_50;
  
  piVar1 = (int *)(param_1 + 0x1d54);
  local_68 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = param_1;
  local_70 = param_5;
  local_6c = param_7;
  local_64 = param_2;
  puVar15 = (undefined8 *)FUN_10081528(*piVar1 + 0x11c0);
  local_94 = param_6;
  if (*(char *)((int)puVar15 + 300) == '\0') {
    bVar10 = false;
    puVar31 = param_3;
  }
  else {
    local_60 = 0;
    if (*param_3 == *(uint *)(extraout_w12 + 0x2140)) {
      puVar21 = (undefined4 *)(extraout_w12 + 0x2144);
    }
    else {
      *(uint *)(extraout_w12 + 0x2140) = *param_3;
      puVar31 = (uint *)(extraout_w12 + 0x1dd8);
      uVar20 = *puVar31;
      if (uVar20 == 0) {
LAB_1002b0a0:
        local_7c = (undefined8 *)FUN_10081cb0(0xb0);
        puVar15 = (undefined8 *)0x0;
        if (local_7c != (undefined8 *)0x0) {
          uVar34 = *(undefined8 *)param_3;
          uVar33 = *(undefined8 *)(param_3 + 6);
          uVar17 = *(undefined8 *)(param_3 + 4);
          local_7c[1] = *(undefined8 *)(param_3 + 2);
          *local_7c = uVar34;
          local_7c[3] = uVar33;
          local_7c[2] = uVar17;
          uVar34 = *(undefined8 *)(param_3 + 8);
          uVar33 = *(undefined8 *)(param_3 + 0xe);
          uVar17 = *(undefined8 *)(param_3 + 0xc);
          local_7c[5] = *(undefined8 *)(param_3 + 10);
          local_7c[4] = uVar34;
          local_7c[7] = uVar33;
          local_7c[6] = uVar17;
          uVar34 = *(undefined8 *)(param_3 + 0x10);
          uVar33 = *(undefined8 *)(param_3 + 0x16);
          uVar17 = *(undefined8 *)(param_3 + 0x14);
          local_7c[9] = *(undefined8 *)(param_3 + 0x12);
          local_7c[8] = uVar34;
          local_7c[0xb] = uVar33;
          local_7c[10] = uVar17;
          uVar34 = *(undefined8 *)(param_3 + 0x18);
          uVar33 = *(undefined8 *)(param_3 + 0x1e);
          uVar17 = *(undefined8 *)(param_3 + 0x1c);
          local_7c[0xd] = *(undefined8 *)(param_3 + 0x1a);
          local_7c[0xc] = uVar34;
          local_7c[0xf] = uVar33;
          local_7c[0xe] = uVar17;
          uVar34 = *(undefined8 *)(param_3 + 0x20);
          uVar33 = *(undefined8 *)(param_3 + 0x26);
          uVar17 = *(undefined8 *)(param_3 + 0x24);
          local_7c[0x11] = *(undefined8 *)(param_3 + 0x22);
          local_7c[0x10] = uVar34;
          local_7c[0x13] = uVar33;
          local_7c[0x12] = uVar17;
          uVar17 = *(undefined8 *)(param_3 + 0x28);
          local_7c[0x15] = *(undefined8 *)(param_3 + 0x2a);
          local_7c[0x14] = uVar17;
          piVar7 = (int *)*puVar31;
          uVar29 = (ulonglong)*param_3;
          if (piVar7 == (int *)0x0) {
            piVar32 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            piVar19 = piVar7;
            do {
              piVar32 = (int *)((uint)((int)piVar19 + (int)piVar24) >> 1);
              uVar28 = *(ulonglong *)(*(int *)(extraout_w12 + 0x1dd4) + (int)piVar32 * 0x10);
              piVar14 = piVar32;
              local_80 = piVar7;
              if (uVar28 <= uVar29) {
                if (uVar29 <= uVar28) break;
                piVar24 = (int *)((int)piVar32 + 1);
                piVar32 = piVar24;
                piVar14 = piVar19;
              }
              piVar19 = piVar14;
            } while (piVar19 != piVar24);
          }
          puVar30 = (uint *)(extraout_w12 + 0x1dd4);
          puVar15 = local_7c;
          if ((piVar32 == piVar7) ||
             (puVar2 = (ulonglong *)(*puVar30 + (int)piVar32 * 0x10), *puVar2 != uVar29)) {
            local_80 = (int *)(extraout_w12 + 0x1ddc);
            piVar24 = (int *)*local_80;
            if (piVar24 == piVar7) {
              local_74 = 0x10;
              if (piVar24 != (int *)0x0) {
                local_74 = (int)piVar24 << 1;
              }
              local_78 = (undefined4 *)FUN_10081da0(local_74 * 0x10 + 0x7f);
              puVar15 = (undefined8 *)0x0;
              if (local_78 != (undefined4 *)0x0) {
                uVar23 = (int)local_78 + 0x7fU & 0xffffff80;
                uVar20 = 0;
                if (*puVar31 != 0) {
                  do {
                    puVar15 = (undefined8 *)(*puVar30 + uVar20 * 0x10);
                    puVar3 = (undefined8 *)(uVar23 + uVar20 * 0x10);
                    uVar20 = uVar20 + 1;
                    uVar17 = *puVar15;
                    puVar3[1] = puVar15[1];
                    *puVar3 = uVar17;
                  } while (uVar20 < *puVar31);
                }
                puVar15 = (undefined8 *)FUN_10081dc0(*(undefined4 *)(extraout_w12 + 0x1dd0));
                *puVar30 = uVar23;
                *(undefined4 *)(extraout_w12 + 0x1dd0) = local_78;
                *local_80 = local_74;
              }
            }
            piVar7 = (int *)*puVar31;
            if ((int *)*local_80 != piVar7) {
              for (; piVar32 < piVar7; piVar7 = (int *)((int)piVar7 + -1)) {
                puVar3 = (undefined8 *)(*puVar30 + (int)piVar7 * 0x10);
                puVar3[1] = puVar3[-1];
                *puVar3 = puVar3[-2];
              }
              *puVar31 = *puVar31 + 1;
              *(uint *)(*puVar30 + (int)piVar32 * 0x10 + 8) = *param_3;
              *(undefined8 **)(*puVar30 + (int)piVar32 * 0x10 + 0xc) = local_7c;
              *(ulonglong *)(*puVar30 + (int)piVar32 * 0x10) = uVar29;
            }
          }
          else {
            *(undefined8 **)((int)puVar2 + 0xc) = local_7c;
          }
          uVar20 = *puVar31;
          if (uVar20 == 0) {
LAB_1002b318:
            puVar21 = (undefined4 *)0x0;
          }
          else {
            uVar6 = *param_3;
            uVar23 = 0;
            uVar18 = uVar20;
            do {
              uVar27 = uVar18 + uVar23 >> 1;
              uVar29 = *(ulonglong *)(*puVar30 + uVar27 * 0x10);
              uVar13 = uVar27;
              if (uVar29 <= uVar6) {
                if (uVar6 <= uVar29) break;
                uVar23 = uVar27 + 1;
                uVar27 = uVar23;
                uVar13 = uVar18;
              }
              uVar18 = uVar13;
            } while (uVar18 != uVar23);
            if ((uVar27 == uVar20) ||
               (puVar2 = (ulonglong *)(*puVar30 + uVar27 * 0x10),
               puVar21 = (undefined4 *)((int)puVar2 + 0xc), *puVar2 != (ulonglong)uVar6))
            goto LAB_1002b318;
          }
          if (puVar21 != (undefined4 *)0x0) goto LAB_1002b324;
        }
        uVar26 = 0;
      }
      else {
        uVar6 = *param_3;
        uVar23 = 0;
        uVar18 = uVar20;
        do {
          uVar27 = uVar18 + uVar23 >> 1;
          uVar29 = *(ulonglong *)(*(int *)(extraout_w12 + 0x1dd4) + uVar27 * 0x10);
          uVar13 = uVar27;
          if (uVar29 <= uVar6) {
            if (uVar6 <= uVar29) break;
            uVar23 = uVar27 + 1;
            uVar27 = uVar23;
            uVar13 = uVar18;
          }
          uVar18 = uVar13;
        } while (uVar18 != uVar23);
        if (((uVar27 == uVar20) ||
            (puVar2 = (ulonglong *)(*(int *)(extraout_w12 + 0x1dd4) + uVar27 * 0x10),
            *puVar2 != (ulonglong)uVar6)) ||
           (puVar21 = (undefined4 *)((int)puVar2 + 0xc), puVar21 == (undefined4 *)0x0))
        goto LAB_1002b0a0;
LAB_1002b324:
        uVar26 = *puVar21;
      }
      puVar21 = (undefined4 *)(local_84 + 0x2144);
      *puVar21 = uVar26;
    }
    puVar31 = (uint *)*puVar21;
    if (puVar31 != (uint *)0x0) {
      uVar20 = (uint)param_11;
      local_7c = (undefined8 *)0x0;
      iVar25 = param_8;
      FUN_10027ea0(puVar15,local_6c,param_8,param_11,&local_88,&local_7c);
      local_94 = (int)local_7c + (1 - local_88);
      local_60 = param_3[3] * local_94;
      local_8c = local_60 + (iVar25 + uVar20 * iVar25 + 0x10) * 2;
      local_68 = param_4 + (local_88 + param_9) * local_70;
    }
    if (local_8c < 0x3f00) {
      bVar10 = true;
      uVar20 = param_3[3];
      iVar25 = *piVar1;
      puVar21 = (undefined4 *)(iVar25 + 0x11c0);
      cVar5 = *(char *)(iVar25 + 0x12ec);
      if (cVar5 == '\0') {
LAB_1002b59c:
        if (cVar5 != '\0') goto LAB_1002b670;
      }
      else {
        if (local_8c == 0) {
          iVar22 = 0x24;
        }
        else {
          iVar22 = (local_8c + 3 & 0xfffffffc) + 0x28;
        }
        puVar16 = (undefined4 *)FUN_100813d0(puVar21,iVar22);
        if (puVar16 != (undefined4 *)0x0) {
          piVar1 = (int *)(iVar25 + 0x12e8);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
            if (bVar9) {
              *piVar1 = *piVar1 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          DataMemoryBarrier(2,3);
          puVar16[1] = iVar22;
          iVar22 = 0xc;
          if (local_8c == 0) {
            iVar22 = 8;
          }
          piVar1 = (int *)(iVar22 + (int)puVar16);
          *piVar1 = local_60;
          piVar1[1] = local_84;
          piVar1[2] = local_64;
          piVar1[3] = (int)puVar31;
          piVar1[4] = uVar20;
          piVar1[5] = local_94;
          piVar1[6] = param_8;
          *(byte *)(piVar1 + 7) = param_11;
          *(undefined1 *)(piVar1 + 8) = param_13;
          puVar4 = (undefined4 *)((int)piVar1 + 0x27U & 0xfffffffc);
          local_78 = puVar4;
          local_74 = param_8;
          if (local_8c != 0) {
            puVar16[2] = puVar4;
            uVar23 = param_3[3];
            uVar17 = FUN_10029dd0(local_94,uVar23,local_68,local_70,puVar4,uVar23);
            FUN_10028000(uVar17,local_6c,(int)uVar17 + 0xfU & 0xfffffff0,local_74,-local_88,param_11
                        );
            puVar4 = (undefined4 *)((local_8c + 3 & 0xfffffffc) + (int)local_78);
          }
          *puVar4 = 0;
          *puVar16 = FUN_1002b9c0;
          puVar21[*(int *)(iVar25 + 0x12e4) * 5 + 0x1a] = puVar4;
          if (*(char *)(iVar25 + 0x12ed) != '\0') {
            *puVar21 = 0;
            (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar25 + 0x1220));
            bVar10 = false;
          }
          goto LAB_1002b59c;
        }
        *puVar21 = 0;
        (*(code *)PTR_FUN_100a1074)(100);
        FUN_10081528(puVar21);
      }
      piVar1 = *(int **)(iVar25 + 0x12d0);
      iVar25 = 4;
      if (local_8c == 0) {
        iVar25 = 0;
      }
      piVar7 = (int *)(iVar25 + (int)piVar1);
      *piVar7 = local_60;
      piVar7[1] = local_84;
      piVar7[2] = local_64;
      piVar7[3] = (int)puVar31;
      piVar7[4] = uVar20;
      piVar7[5] = local_94;
      piVar7[6] = param_8;
      *(byte *)(piVar7 + 7) = param_11;
      *(undefined1 *)(piVar7 + 8) = param_13;
      if (local_8c != 0) {
        *piVar1 = (int)(piVar7 + 9);
        uVar17 = FUN_10029dd0(local_94,param_3[3],local_68,local_70,piVar7 + 9,param_3[3]);
        FUN_10028000(uVar17,local_6c,(int)uVar17 + 0xfU & 0xfffffff0,param_8,-local_88,param_11);
      }
      FUN_1002b9c0(piVar1);
LAB_1002b670:
      if (!bVar10) {
        return;
      }
      *puVar21 = 0;
      return;
    }
    bVar10 = true;
  }
  uVar20 = local_6c;
  uVar23 = local_70;
  local_58 = 0;
  local_50 = 0;
  local_78 = (undefined4 *)local_6c;
  local_74 = local_70;
  if (bVar10) {
    uVar29 = FUN_10078c70(*piVar1 + 0x14f0,local_8c,&local_58);
    iVar25 = (int)local_58;
    if ((uVar29 & 1) != 0) {
      uVar23 = param_3[3];
      param_9 = 0;
      uVar17 = FUN_10029dd0(local_94,uVar23,local_68,local_74,local_58 & 0xffffffff,uVar23);
      uVar20 = (int)uVar17 + 0xfU & 0xfffffff0;
      FUN_10028000(uVar17,local_78,uVar20,param_8,-local_88,param_11);
      param_4 = iVar25;
    }
  }
  else {
    local_58._0_4_ = 0;
    iVar25 = (int)local_58;
  }
  iVar12 = local_50;
  iVar11 = local_58._4_4_;
  iVar22 = *piVar1;
  puVar21 = (undefined4 *)(iVar22 + 0x11c0);
  bVar10 = true;
  cVar5 = *(char *)(iVar22 + 0x12ec);
  if (cVar5 == '\0') {
LAB_1002b8c0:
    if (cVar5 != '\0') goto LAB_1002b964;
  }
  else {
    puVar16 = (undefined4 *)FUN_100813d0(puVar21,0x38);
    if (puVar16 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar22 + 0x12e8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      puVar16[1] = 0x38;
      puVar16[2] = local_84;
      puVar16[3] = local_64;
      puVar16[4] = puVar31;
      puVar16[5] = param_4;
      puVar16[6] = uVar23;
      puVar16[7] = local_94;
      puVar16[8] = uVar20;
      puVar16[9] = param_8;
      puVar16[10] = param_9;
      *(byte *)(puVar16 + 0xb) = param_11;
      *(undefined1 *)(puVar16 + 0xc) = param_13;
      puVar16[0xd] = iVar25;
      puVar16[0xe] = iVar11;
      puVar16[0xf] = iVar12;
      puVar4 = (undefined4 *)((int)puVar16 + 0x43U & 0xfffffffc);
      *puVar4 = 0;
      *puVar16 = FUN_1002bab0;
      puVar21[*(int *)(iVar22 + 0x12e4) * 5 + 0x1a] = puVar4;
      if (*(char *)(iVar22 + 0x12ed) != '\0') {
        *puVar21 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar22 + 0x1220));
        bVar10 = false;
      }
      goto LAB_1002b8c0;
    }
    *puVar21 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar21);
  }
  piVar1 = *(int **)(iVar22 + 0x12d0);
  *piVar1 = local_84;
  piVar1[1] = local_64;
  piVar1[2] = (int)puVar31;
  piVar1[3] = param_4;
  piVar1[4] = uVar23;
  piVar1[5] = local_94;
  piVar1[6] = uVar20;
  piVar1[7] = param_8;
  piVar1[8] = param_9;
  *(byte *)(piVar1 + 9) = param_11;
  *(undefined1 *)(piVar1 + 10) = param_13;
  piVar1[0xb] = iVar25;
  piVar1[0xc] = iVar11;
  piVar1[0xd] = iVar12;
  FUN_1002bab0(piVar1);
LAB_1002b964:
  if (bVar10) {
    *puVar21 = 0;
  }
  return;
}

