/*
 * FUN_1005c090 at 1005c090
 * undefined FUN_1005c090(void)
 * Address ranges: 1005c090-1005ce0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005c090(int param_1,uint *param_2,uint *param_3,int param_4,int param_5,int param_6,
                 uint param_7,int param_8,byte param_9,undefined4 param_10,undefined1 param_11)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  undefined4 uVar23;
  int *extraout_w12;
  int extraout_w13;
  ulonglong uVar24;
  uint *puVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int local_9c;
  uint local_98;
  uint *local_94;
  uint *local_90;
  uint *local_8c;
  char local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  undefined8 *local_6c;
  uint local_68;
  int local_64;
  undefined8 local_60;
  int local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  uVar28 = param_7;
  local_90 = param_2;
  local_84 = param_5;
  local_80 = param_4;
  local_7c = param_6;
  if (*(char *)(*(int *)(param_1 + 0xd9bc) + 0x13) == '\0') {
    if (param_2 != (uint *)&DAT_00000006) {
      iVar15 = *(int *)(param_1 + 0xdd38);
      if (*(int *)(iVar15 + 0x1c) == 1) {
        uVar28 = 0xffffffff;
        uVar19 = 1;
        if (*(char *)(iVar15 + 0x40) != '\0') {
          uVar19 = 2;
        }
        uVar21 = *(uint *)(iVar15 + 0x18);
        uVar20 = param_8 << (ulonglong)uVar19;
        if (uVar20 <= uVar21) {
          puVar1 = (uint *)(iVar15 + 0x3c);
          uVar7 = *puVar1;
          if (uVar21 < uVar7 + uVar20) {
            *puVar1 = 0;
          }
          local_8c = (uint *)(iVar15 + 4);
          local_98 = 0;
          iVar15 = FUN_100456c0(local_8c,uVar21 < uVar7 + uVar20,1,&local_98);
          if (iVar15 == 0) {
            FUN_100ff660(*puVar1 + local_98,(param_7 << (ulonglong)uVar19) + local_84,uVar20);
            FUN_10045b10(local_8c);
            uVar28 = *puVar1 >> (ulonglong)uVar19;
            *puVar1 = *puVar1 + uVar20;
          }
        }
      }
      goto LAB_1005c1a8;
    }
    uVar18 = 0;
  }
  else {
LAB_1005c1a8:
    uVar18 = 1;
    param_7 = uVar28;
  }
  FUN_10058a20(param_1,param_3,uVar18);
  local_64 = (param_9 + 1) * 2;
  local_68 = local_64 * param_8;
  if ((local_90 == (uint *)&DAT_00000006) && (*(char *)(*(int *)(param_1 + 0xd9bc) + 0x13) == '\0'))
  {
    iVar15 = *(int *)(param_1 + 0xd9b8);
    if (local_68 <= *(int *)(iVar15 + 0x12d8) - 0x400U) {
      local_74 = (uint *)(param_1 + 0xd9b8);
      iVar15 = FUN_100fd300(iVar15 + 0x11c0);
      if (*(char *)(iVar15 + 300) != '\0') {
        if (*param_3 != *(uint *)(param_1 + 0xddc4)) {
          *(uint *)(param_1 + 0xddc4) = *param_3;
          puVar16 = (undefined4 *)FUN_10057e10(param_1 + 0xda34,param_3);
          if (puVar16 == (undefined4 *)0x0) {
            local_78 = (uint *)FUN_100febf0(0xb0);
            if (local_78 != (uint *)0x0) {
              uVar30 = *(undefined8 *)param_3;
              uVar29 = *(undefined8 *)(param_3 + 6);
              uVar18 = *(undefined8 *)(param_3 + 4);
              puVar1 = (uint *)(param_1 + 0xda3c);
              uVar19 = 0;
              *(undefined8 *)(local_78 + 2) = *(undefined8 *)(param_3 + 2);
              *(undefined8 *)local_78 = uVar30;
              *(undefined8 *)(local_78 + 6) = uVar29;
              *(undefined8 *)(local_78 + 4) = uVar18;
              uVar30 = *(undefined8 *)(param_3 + 8);
              uVar29 = *(undefined8 *)(param_3 + 0xe);
              uVar18 = *(undefined8 *)(param_3 + 0xc);
              *(undefined8 *)(local_78 + 10) = *(undefined8 *)(param_3 + 10);
              *(undefined8 *)(local_78 + 8) = uVar30;
              *(undefined8 *)(local_78 + 0xe) = uVar29;
              *(undefined8 *)(local_78 + 0xc) = uVar18;
              uVar30 = *(undefined8 *)(param_3 + 0x10);
              uVar29 = *(undefined8 *)(param_3 + 0x16);
              uVar18 = *(undefined8 *)(param_3 + 0x14);
              *(undefined8 *)(local_78 + 0x12) = *(undefined8 *)(param_3 + 0x12);
              *(undefined8 *)(local_78 + 0x10) = uVar30;
              *(undefined8 *)(local_78 + 0x16) = uVar29;
              *(undefined8 *)(local_78 + 0x14) = uVar18;
              uVar30 = *(undefined8 *)(param_3 + 0x18);
              uVar29 = *(undefined8 *)(param_3 + 0x1e);
              uVar18 = *(undefined8 *)(param_3 + 0x1c);
              *(undefined8 *)(local_78 + 0x1a) = *(undefined8 *)(param_3 + 0x1a);
              *(undefined8 *)(local_78 + 0x18) = uVar30;
              *(undefined8 *)(local_78 + 0x1e) = uVar29;
              *(undefined8 *)(local_78 + 0x1c) = uVar18;
              uVar30 = *(undefined8 *)(param_3 + 0x20);
              uVar29 = *(undefined8 *)(param_3 + 0x26);
              uVar18 = *(undefined8 *)(param_3 + 0x24);
              *(undefined8 *)(local_78 + 0x22) = *(undefined8 *)(param_3 + 0x22);
              *(undefined8 *)(local_78 + 0x20) = uVar30;
              *(undefined8 *)(local_78 + 0x26) = uVar29;
              *(undefined8 *)(local_78 + 0x24) = uVar18;
              uVar18 = *(undefined8 *)(param_3 + 0x28);
              *(undefined8 *)(local_78 + 0x2a) = *(undefined8 *)(param_3 + 0x2a);
              *(undefined8 *)(local_78 + 0x28) = uVar18;
              uVar28 = *puVar1;
              uVar26 = (ulonglong)*param_3;
              if (uVar28 == 0) {
LAB_1005c338:
                local_90 = (uint *)(&DAT_0000da38 + param_1);
                puVar25 = (uint *)(param_1 + 0xda40);
                uVar21 = *puVar25;
                puVar22 = local_90;
                local_94 = puVar1;
                local_8c = puVar1;
                if (uVar21 == uVar28) {
                  local_70 = (uint *)&DAT_00000010;
                  if (uVar21 != 0) {
                    local_70 = (uint *)(uVar21 << 1);
                  }
                  local_6c = (undefined8 *)FUN_100fece0((int)local_70 * 0x10 + 0x7f);
                  puVar22 = local_90;
                  if (local_6c != (undefined8 *)0x0) {
                    local_98 = (int)local_6c + 0x7fU & 0xffffff80;
                    uVar28 = 0;
                    if (*local_8c != 0) {
                      do {
                        puVar4 = (undefined8 *)(*(int *)(&DAT_0000da38 + param_1) + uVar28 * 0x10);
                        puVar5 = (undefined8 *)(local_98 + uVar28 * 0x10);
                        uVar28 = uVar28 + 1;
                        uVar18 = *puVar4;
                        puVar5[1] = puVar4[1];
                        *puVar5 = uVar18;
                      } while (uVar28 < *(uint *)(param_1 + 0xda3c));
                    }
                    FUN_100fed00(*(undefined4 *)(param_1 + 0xda34));
                    *(undefined8 **)(param_1 + 0xda34) = local_6c;
                    *(uint *)(&DAT_0000da38 + param_1) = local_98;
                    *puVar25 = (uint)local_70;
                    puVar22 = (uint *)(&DAT_0000da38 + param_1);
                  }
                }
                uVar28 = *local_94;
                if (*puVar25 != uVar28) {
                  for (; uVar19 < uVar28; uVar28 = uVar28 - 1) {
                    puVar4 = (undefined8 *)(*puVar22 + uVar28 * 0x10);
                    puVar4[1] = puVar4[-1];
                    *puVar4 = puVar4[-2];
                  }
                  *local_94 = *local_94 + 1;
                  *(uint *)(*puVar22 + uVar19 * 0x10 + 8) = *param_3;
                  *(uint **)(*puVar22 + uVar19 * 0x10 + 0xc) = local_78;
                  *(ulonglong *)(*puVar22 + uVar19 * 0x10) = uVar26;
                }
              }
              else {
                uVar21 = 0;
                uVar20 = uVar28;
                do {
                  uVar19 = uVar20 + uVar21 >> 1;
                  uVar24 = *(ulonglong *)(*(int *)(&DAT_0000da38 + param_1) + uVar19 * 0x10);
                  uVar7 = uVar19;
                  if (uVar24 <= uVar26) {
                    if (uVar26 <= uVar24) break;
                    uVar21 = uVar19 + 1;
                    uVar19 = uVar21;
                    uVar7 = uVar20;
                  }
                  uVar20 = uVar7;
                } while (uVar20 != uVar21);
                if ((uVar19 == uVar28) ||
                   (puVar3 = (ulonglong *)(*(int *)(&DAT_0000da38 + param_1) + uVar19 * 0x10),
                   *puVar3 != uVar26)) goto LAB_1005c338;
                *(uint **)((int)puVar3 + 0xc) = local_78;
              }
              puVar16 = (undefined4 *)FUN_10057e10(param_1 + 0xda34,param_3);
              if (puVar16 != (undefined4 *)0x0) goto LAB_1005c4a0;
            }
            uVar23 = 0;
          }
          else {
LAB_1005c4a0:
            uVar23 = *puVar16;
          }
          *(undefined4 *)(param_1 + 0xddc8) = uVar23;
        }
        uVar28 = local_68;
        iVar15 = *(int *)(param_1 + 0xddc8);
        bVar13 = *(int *)(param_1 + 0xddcc) != 0;
        iVar27 = *local_74;
        puVar16 = (undefined4 *)(iVar27 + 0x11c0);
        iVar8 = local_84 + local_64 * param_7;
        if (*(char *)(iVar27 + 0x12ec) != '\0') {
          local_8c = (uint *)(local_68 + 3);
          local_74 = (uint *)(((uint)local_8c & 0xfffffffc) + 0x28);
          puVar17 = (undefined4 *)FUN_100fd1a8(puVar16,local_74);
          if (puVar17 != (undefined4 *)0x0) {
            piVar2 = (int *)(iVar27 + 0x12e8);
            do {
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
              if (bVar14) {
                *piVar2 = *piVar2 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            DataMemoryBarrier(2,3);
            puVar17[1] = local_74;
            puVar17[3] = param_1;
            puVar17[4] = 6;
            puVar17[5] = iVar15;
            puVar17[6] = local_80;
            puVar17[7] = local_7c;
            puVar17[8] = param_8;
            *(byte *)(puVar17 + 9) = param_9;
            *(undefined1 *)(puVar17 + 10) = param_11;
            *(bool *)(puVar17 + 0xb) = bVar13;
            uVar19 = (int)puVar17 + 0x33U & 0xfffffffc;
            puVar17[2] = uVar19;
            FUN_100ff660(uVar19,iVar8,uVar28);
            puVar6 = (undefined4 *)(((uint)local_8c & 0xfffffffc) + uVar19);
            *puVar6 = 0;
            *puVar17 = FUN_1005ce10;
            puVar16[*(int *)(iVar27 + 0x12e4) * 5 + 0x1a] = puVar6;
            if (*(char *)(iVar27 + 0x12ed) != '\0') {
              *puVar16 = 0;
              (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar27 + 0x1220));
              return;
            }
            goto LAB_1005c6a0;
          }
          *puVar16 = 0;
          (*(code *)PTR_FUN_10134114)(100);
          FUN_100fd300(puVar16);
        }
        piVar2 = *(int **)(iVar27 + 0x12d0);
        *piVar2 = iVar8;
        piVar2[1] = param_1;
        piVar2[2] = 6;
        piVar2[3] = iVar15;
        piVar2[4] = local_80;
        piVar2[5] = local_7c;
        piVar2[6] = param_8;
        *(byte *)(piVar2 + 7) = param_9;
        *(undefined1 *)(piVar2 + 8) = param_11;
        *(bool *)(piVar2 + 9) = bVar13;
        FUN_1005ce10(piVar2);
LAB_1005c6a0:
        *puVar16 = 0;
        return;
      }
      bVar13 = true;
      bVar14 = *(int *)(param_1 + 0xddcc) != 0;
      puVar16 = (undefined4 *)(*extraout_w12 + extraout_w13);
      cVar9 = *(char *)(puVar16 + 0x4b);
      if (cVar9 == '\0') {
LAB_1005c7d4:
        if (cVar9 != '\0') goto LAB_1005c854;
      }
      else {
        puVar17 = (undefined4 *)FUN_100fd1a8(puVar16,0x2c);
        if (puVar17 != (undefined4 *)0x0) {
          piVar2 = puVar16 + 0x4a;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
            if (bVar11) {
              *piVar2 = *piVar2 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          DataMemoryBarrier(2,3);
          puVar17[1] = 0x2c;
          puVar17[2] = param_1;
          puVar17[3] = 6;
          puVar17[4] = param_3;
          puVar17[5] = local_80;
          puVar17[6] = local_84;
          puVar17[7] = local_7c;
          puVar17[8] = param_7;
          puVar17[9] = param_8;
          *(byte *)(puVar17 + 10) = param_9;
          *(undefined1 *)(puVar17 + 0xb) = param_11;
          *(bool *)(puVar17 + 0xc) = bVar14;
          puVar6 = (undefined4 *)((int)puVar17 + 0x37U & 0xfffffffc);
          *puVar6 = 0;
          *puVar17 = FUN_1005ce90;
          puVar16[puVar16[0x49] * 5 + 0x1a] = puVar6;
          if (*(char *)((int)puVar16 + 0x12d) != '\0') {
            *puVar16 = 0;
            (*(code *)PTR_FUN_101340fc)(puVar16[0x18]);
            bVar13 = false;
          }
          goto LAB_1005c7d4;
        }
        *puVar16 = 0;
        (*(code *)PTR_FUN_10134114)(100);
        FUN_100fd300(puVar16);
      }
      piVar2 = (int *)puVar16[0x44];
      *piVar2 = param_1;
      piVar2[1] = 6;
      piVar2[2] = (int)param_3;
      piVar2[3] = local_80;
      piVar2[4] = local_84;
      piVar2[5] = local_7c;
      piVar2[6] = param_7;
      piVar2[7] = param_8;
      *(byte *)(piVar2 + 8) = param_9;
      *(undefined1 *)(piVar2 + 9) = param_11;
      *(bool *)(piVar2 + 10) = bVar14;
      FUN_1005ce90(piVar2);
LAB_1005c854:
      if (!bVar13) {
        return;
      }
      *puVar16 = 0;
      return;
    }
  }
  local_60 = 0;
  local_58 = 0;
  local_9c = local_84;
  local_8c = (uint *)(param_1 + 0xd9b8);
  local_98 = param_7;
  iVar15 = FUN_100fd300(*local_8c + 0x11c0);
  if (*(char *)(iVar15 + 300) == '\0') {
LAB_1005cbc0:
    iVar15 = (int)local_60;
    iVar27 = 0;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0xddc4)) {
      *(uint *)(param_1 + 0xddc4) = *param_3;
      local_94 = (uint *)(param_1 + 0xda34);
      puVar16 = (undefined4 *)FUN_10057e10(local_94,param_3);
      if (puVar16 == (undefined4 *)0x0) {
        local_6c = (undefined8 *)FUN_100febf0(0xb0);
        if (local_6c != (undefined8 *)0x0) {
          uVar30 = *(undefined8 *)param_3;
          uVar29 = *(undefined8 *)(param_3 + 6);
          uVar18 = *(undefined8 *)(param_3 + 4);
          puVar1 = (uint *)(param_1 + 0xda3c);
          uVar19 = 0;
          local_6c[1] = *(undefined8 *)(param_3 + 2);
          *local_6c = uVar30;
          local_6c[3] = uVar29;
          local_6c[2] = uVar18;
          uVar30 = *(undefined8 *)(param_3 + 8);
          uVar29 = *(undefined8 *)(param_3 + 0xe);
          uVar18 = *(undefined8 *)(param_3 + 0xc);
          local_6c[5] = *(undefined8 *)(param_3 + 10);
          local_6c[4] = uVar30;
          local_6c[7] = uVar29;
          local_6c[6] = uVar18;
          uVar30 = *(undefined8 *)(param_3 + 0x10);
          uVar29 = *(undefined8 *)(param_3 + 0x16);
          uVar18 = *(undefined8 *)(param_3 + 0x14);
          local_6c[9] = *(undefined8 *)(param_3 + 0x12);
          local_6c[8] = uVar30;
          local_6c[0xb] = uVar29;
          local_6c[10] = uVar18;
          uVar30 = *(undefined8 *)(param_3 + 0x18);
          uVar29 = *(undefined8 *)(param_3 + 0x1e);
          uVar18 = *(undefined8 *)(param_3 + 0x1c);
          local_6c[0xd] = *(undefined8 *)(param_3 + 0x1a);
          local_6c[0xc] = uVar30;
          local_6c[0xf] = uVar29;
          local_6c[0xe] = uVar18;
          uVar30 = *(undefined8 *)(param_3 + 0x20);
          uVar29 = *(undefined8 *)(param_3 + 0x26);
          uVar18 = *(undefined8 *)(param_3 + 0x24);
          local_6c[0x11] = *(undefined8 *)(param_3 + 0x22);
          local_6c[0x10] = uVar30;
          local_6c[0x13] = uVar29;
          local_6c[0x12] = uVar18;
          uVar18 = *(undefined8 *)(param_3 + 0x28);
          local_6c[0x15] = *(undefined8 *)(param_3 + 0x2a);
          local_6c[0x14] = uVar18;
          local_48 = (ulonglong)*param_3;
          uVar28 = *puVar1;
          if (uVar28 == 0) {
LAB_1005c9d8:
            puVar25 = local_94 + 1;
            local_78 = local_94 + 3;
            uVar21 = *local_78;
            local_74 = puVar1;
            local_70 = puVar1;
            if (uVar21 == uVar28) {
              local_4c = 0x10;
              if (uVar21 != 0) {
                local_4c = uVar21 << 1;
              }
              local_50 = FUN_100fece0(local_4c * 0x10 + 0x7f);
              if (local_50 != 0) {
                uVar21 = local_50 + 0x7fU & 0xffffff80;
                uVar28 = 0;
                if (*local_74 != 0) {
                  do {
                    puVar4 = (undefined8 *)(*(int *)(&DAT_0000da38 + param_1) + uVar28 * 0x10);
                    puVar5 = (undefined8 *)(uVar21 + uVar28 * 0x10);
                    uVar28 = uVar28 + 1;
                    uVar18 = *puVar4;
                    puVar5[1] = puVar4[1];
                    *puVar5 = uVar18;
                  } while (uVar28 < *(uint *)(param_1 + 0xda3c));
                }
                FUN_100fed00(*(undefined4 *)(param_1 + 0xda34));
                *(int *)(param_1 + 0xda34) = local_50;
                puVar25 = local_94 + 1;
                *puVar25 = uVar21;
                *local_78 = local_4c;
              }
            }
            uVar28 = *local_70;
            if (*local_78 != uVar28) {
              for (; uVar19 < uVar28; uVar28 = uVar28 - 1) {
                puVar4 = (undefined8 *)(*puVar25 + uVar28 * 0x10);
                puVar4[1] = puVar4[-1];
                *puVar4 = puVar4[-2];
              }
              *local_70 = *local_70 + 1;
              *(uint *)(*puVar25 + uVar19 * 0x10 + 8) = *param_3;
              *(undefined8 **)(*puVar25 + uVar19 * 0x10 + 0xc) = local_6c;
              *(ulonglong *)(*puVar25 + uVar19 * 0x10) = local_48;
            }
          }
          else {
            uVar21 = 0;
            uVar20 = uVar28;
            do {
              uVar19 = uVar20 + uVar21 >> 1;
              uVar26 = *(ulonglong *)(*(int *)(&DAT_0000da38 + param_1) + uVar19 * 0x10);
              uVar7 = uVar19;
              if (uVar26 <= local_48) {
                if (local_48 <= uVar26) break;
                uVar21 = uVar19 + 1;
                uVar19 = uVar21;
                uVar7 = uVar20;
              }
              uVar20 = uVar7;
            } while (uVar20 != uVar21);
            if ((uVar19 == uVar28) ||
               (puVar3 = (ulonglong *)(local_94[1] + uVar19 * 0x10), *puVar3 != local_48))
            goto LAB_1005c9d8;
            *(undefined8 **)((int)puVar3 + 0xc) = local_6c;
          }
          puVar16 = (undefined4 *)FUN_10057e10(local_94,param_3);
          if (puVar16 != (undefined4 *)0x0) goto LAB_1005cb3c;
        }
        uVar23 = 0;
      }
      else {
LAB_1005cb3c:
        uVar23 = *puVar16;
      }
      *(undefined4 *)(param_1 + 0xddc8) = uVar23;
    }
    uVar28 = local_68;
    param_3 = *(uint **)(param_1 + 0xddc8);
    if ((param_3 == (uint *)0x0 || local_90 != (uint *)&DAT_00000006) ||
       (*(char *)(*(int *)(param_1 + 0xd9bc) + 0x13) != '\0')) goto LAB_1005cbc0;
    uVar26 = FUN_100ed8b8(*local_8c + 0x14f0,local_68,&local_60);
    iVar15 = (int)local_60;
    iVar27 = local_58;
    if ((uVar26 & 1) != 0) {
      FUN_100ff660(local_60 & 0xffffffff,local_84 + local_64 * param_7,uVar28);
      local_9c = iVar15;
      local_98 = 0;
      iVar27 = local_58;
    }
  }
  bVar13 = true;
  iVar12 = local_60._4_4_;
  bVar14 = *(int *)(param_1 + 0xddcc) != 0;
  iVar8 = *local_8c;
  puVar16 = (undefined4 *)(iVar8 + 0x11c0);
  local_88 = *(char *)(iVar8 + 0x12ec) == '\0';
  if (*(char *)(iVar8 + 0x12ec) == '\0') {
LAB_1005cd24:
    if (local_88 == '\0') goto LAB_1005cdc8;
  }
  else {
    puVar17 = (undefined4 *)FUN_100fd1a8(puVar16,0x38);
    if (puVar17 != (undefined4 *)0x0) {
      piVar2 = (int *)(iVar8 + 0x12e8);
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
        if (bVar11) {
          *piVar2 = *piVar2 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      puVar17[1] = 0x38;
      puVar17[2] = param_1;
      puVar17[3] = local_90;
      puVar17[4] = param_3;
      puVar17[5] = local_80;
      puVar17[6] = local_9c;
      puVar17[7] = local_7c;
      puVar17[8] = local_98;
      puVar17[9] = param_8;
      *(byte *)(puVar17 + 10) = param_9;
      *(undefined1 *)(puVar17 + 0xb) = param_11;
      *(bool *)(puVar17 + 0xc) = bVar14;
      puVar17[0xd] = iVar15;
      puVar17[0xe] = iVar12;
      puVar17[0xf] = iVar27;
      puVar6 = (undefined4 *)((int)puVar17 + 0x43U & 0xfffffffc);
      *puVar6 = 0;
      *puVar17 = FUN_1005cf20;
      puVar16[*(int *)(iVar8 + 0x12e4) * 5 + 0x1a] = puVar6;
      if (*(char *)(iVar8 + 0x12ed) != '\0') {
        *puVar16 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar8 + 0x1220));
        bVar13 = false;
      }
      goto LAB_1005cd24;
    }
    *puVar16 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar16);
  }
  piVar2 = *(int **)(iVar8 + 0x12d0);
  *piVar2 = param_1;
  piVar2[1] = (int)local_90;
  piVar2[2] = (int)param_3;
  piVar2[3] = local_80;
  piVar2[4] = local_9c;
  piVar2[5] = local_7c;
  piVar2[6] = local_98;
  piVar2[7] = param_8;
  *(byte *)(piVar2 + 8) = param_9;
  *(undefined1 *)(piVar2 + 9) = param_11;
  *(bool *)(piVar2 + 10) = bVar14;
  piVar2[0xb] = iVar15;
  piVar2[0xc] = iVar12;
  piVar2[0xd] = iVar27;
  FUN_1005cf20(piVar2);
LAB_1005cdc8:
  if (bVar13) {
    *puVar16 = 0;
  }
  return;
}

