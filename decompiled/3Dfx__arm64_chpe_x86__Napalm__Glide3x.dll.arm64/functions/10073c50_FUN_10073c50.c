/*
 * FUN_10073c50 at 10073c50
 * undefined FUN_10073c50(void)
 * Address ranges: 10073c50-10074827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10073c50(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  bool bVar7;
  code *pcVar8;
  char cVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  undefined1 uVar18;
  int iVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  int iVar20;
  int *local_10c;
  undefined4 *local_108;
  uint *local_104;
  uint *local_100;
  uint *local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int *local_ec;
  int local_e8;
  int local_e0;
  uint *puStack_dc;
  int local_d8;
  int iStack_d4;
  undefined4 local_d0;
  uint *puStack_cc;
  int local_c8;
  int local_c0;
  uint *puStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  uint uStack_ac;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_e8 = param_1 + 0x4a0;
  uVar12 = (*(code *)PTR_FUN_100a803c)(local_e8);
  local_f8 = param_2[5];
  if (local_f8 == 0) {
    local_f8 = 1;
  }
  local_f4 = param_2[6];
  if (local_f4 == 0) {
    local_f4 = 1;
  }
  iVar17 = param_2[3] * local_f8;
  local_fc = (uint *)(param_2[4] * local_f4);
  if ((((param_2[3] == 0) && (param_2[4] == 0)) && (param_2[7] == 0)) && (param_2[8] == 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_ec = param_2 + 9;
  iVar19 = *local_ec;
  if ((iVar19 - 3U & 0xfffffffa) == 0 && iVar19 != 7) {
    iVar20 = 1;
  }
  else if (iVar19 - 5U < 3) {
    iVar20 = 2;
  }
  else {
    iVar20 = param_2[10];
  }
  local_100 = (uint *)(param_1 + 0x4bc);
  local_f0 = *(int *)(&DAT_100a2318 + iVar19 * 4);
  uVar4 = *local_100;
  uVar16 = 0;
  if (uVar4 != 0) {
    do {
      piVar5 = *(int **)(*(int *)(param_1 + 0x4b8) + uVar16 * 4);
      if ((*piVar5 == param_2[2]) && (piVar5[2] == param_2[1])) break;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar4);
  }
  puVar15 = (undefined4 *)0x0;
  if (uVar16 == uVar4) {
    if (bVar7) goto LAB_100741ac;
    local_108 = param_2 + 2;
    FUN_10073940(uVar12,*local_108);
    pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    puVar10 = (undefined4 *)(*extraout_w11)(param_1);
    if (puVar10 != (undefined4 *)0x0) {
      piVar5 = (int *)(param_1 + 0x4b8);
      local_104 = (uint *)(param_1 + 0x4bc);
      puVar1 = (uint *)(param_1 + 0x4c0);
      uVar16 = *puVar1;
      if (*local_104 == uVar16) {
        uVar4 = uVar16 << 1;
        if (uVar16 == 0) {
          uVar4 = 0x10;
        }
        iVar19 = uVar4 * 4;
        if (uVar4 >> 0x1e != 0) {
          iVar19 = -1;
        }
        local_10c = (int *)FUN_10083400(iVar19);
        if (local_10c == (int *)0x0) goto LAB_10074180;
        FUN_10083b40(local_10c,*piVar5,((ulonglong)*puVar1 & 0x3fffffff) << 2);
        FUN_10083420(*piVar5);
        *piVar5 = (int)local_10c;
        *puVar1 = uVar4;
      }
      *(undefined4 **)(*piVar5 + *local_104 * 4) = puVar10;
      *local_104 = *local_104 + 1;
      puVar10[2] = param_2[1];
      local_104 = local_fc;
      puStack_bc = local_fc;
      local_b8 = param_2[7];
      uStack_b4 = param_2[8];
      local_10c = param_2 + 0xb;
      local_b0 = *(undefined4 *)(&DAT_100a2248 + *local_10c * 4);
      uStack_ac = (uint)(*(char *)((int)param_2 + 0x39) != '\0');
      local_a8 = local_f0;
      local_c0 = iVar17;
      (*pcVar8)();
      puVar15 = local_108;
      uVar13 = (*extraout_w11_00)(param_1,puVar10,&local_c0,param_2[0xc],*local_108);
      if ((uVar13 & 0xff) != 0) {
        puVar10[4] = iVar17;
        puVar2 = (undefined1 *)((int)puVar10 + 0xd5b);
        puVar10[5] = local_104;
        puVar10[6] = local_f8;
        puVar10[7] = local_f4;
        puVar10[0xb] = *local_10c;
        uVar11 = param_2[0xc];
        puVar10[0xd] = 0;
        puVar10[0xc] = uVar11;
        puVar10[3] = 0;
        *puVar2 = 1;
        FUN_10073880(uVar13,puVar10);
        puVar14 = param_2 + 0xf;
        (*pcVar8)();
        cVar9 = (*extraout_w11_01)(param_1,puVar10,*puVar14);
        if (cVar9 != '\0') {
          uVar11 = (*pcVar8)();
          (*extraout_w11_02)(uVar11,*puVar15,1);
          *puVar10 = *puVar15;
          puVar10[0x358] = *param_2;
          iVar17 = *local_ec;
          if ((iVar17 == 7) && (*(char *)(param_1 + 0x4e4) == '\0')) {
            iVar17 = 3;
          }
          puVar10[9] = iVar17;
          puVar10[10] = iVar20;
          if ((*(char *)(param_2 + 0xe) == '\0') && (*(char *)(param_1 + 0x2d6) != '\0')) {
            uVar18 = 0;
          }
          else {
            uVar18 = 1;
          }
          *(undefined1 *)(puVar10 + 0x356) = uVar18;
          uVar4 = param_2[0x10];
          uVar16 = 0;
          if (uVar4 != 0xffffffff) {
            uVar16 = uVar4;
          }
          puVar10[0x350] = uVar16;
          uVar16 = param_2[0x11];
          if (uVar16 == 0xffffffff) {
            uVar16 = 1;
          }
          puVar10[0x351] = uVar16;
          if (param_2[0xd] == 1) {
            puVar10[0xd] = 1;
            FUN_100734f0(param_1,puVar10,0,0);
          }
          uVar16 = param_2[0x10];
          uVar4 = param_2[0x11];
          if (uVar16 != 0xffffffff || uVar4 != 0xffffffff) {
            *(undefined8 *)(puVar10 + 0x354) = 0;
            *(longlong *)(puVar10 + 0x352) = 0;
            if (uVar16 != 0) {
              (*(code *)PTR_FUN_100a80b4)(&local_a0);
              lVar6 = 0;
              if ((ulonglong)uVar16 != 0) {
                lVar6 = (longlong)((ulonglong)uVar4 * local_a0) / (longlong)(ulonglong)uVar16;
              }
              *(longlong *)(puVar10 + 0x352) = lVar6;
            }
          }
          (*pcVar8)();
          (*extraout_w11_03)(param_1,puVar10);
          *puVar2 = 0;
          goto LAB_10074194;
        }
        *puVar2 = 0;
      }
      if (*local_100 != 0) {
        *local_100 = *local_100 - 1;
      }
    }
LAB_10074180:
    FUN_100833b0(puVar10,0xd68);
    puVar10 = (undefined4 *)0x0;
LAB_10074190:
    puVar15 = puVar10;
    if (puVar10 == (undefined4 *)0x0) goto LAB_100741ac;
  }
  else {
    puVar10 = *(undefined4 **)(*(int *)(param_1 + 0x4b8) + uVar16 * 4);
    local_104 = (uint *)((int)puVar10 + 0xd5b);
    if (*(char *)local_104 != '\0') goto LAB_100741ac;
    *(undefined1 *)local_104 = 1;
    pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    puVar1 = puVar10 + 1;
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    local_50 = 0;
    local_48 = 0;
    if (*puVar1 != 0) {
      uVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_04)(uVar11,&local_80);
    }
    puVar10[0x358] = *param_2;
    uVar16 = param_2[0x10];
    puVar3 = param_2 + 0x11;
    if ((puVar10[0x350] != uVar16 && uVar16 != 0xffffffff) ||
       ((puVar10[0x351] != *puVar3 && (*puVar3 != 0xffffffff)))) {
      puVar10[0x350] = uVar16;
      puVar10[0x351] = *puVar3;
      uVar16 = param_2[0x10];
      local_88 = (ulonglong)uVar16;
      local_90 = (ulonglong)*puVar3;
      if (uVar16 != 0xffffffff || *puVar3 != 0xffffffff) {
        local_100 = puVar10 + 0x352;
        *(undefined8 *)(puVar10 + 0x354) = 0;
        local_100[0] = 0;
        local_100[1] = 0;
        if (uVar16 != 0) {
          (*(code *)PTR_FUN_100a80b4)(&local_98);
          if (local_88 == 0) {
                    /* WARNING: Does not return */
            uVar12 = SoftwareBreakpoint(0xf004,0x1007430c);
            (*(code *)uVar12)();
          }
          lVar6 = 0;
          if (local_88 != 0) {
            lVar6 = (longlong)(local_90 * local_98) / (longlong)local_88;
          }
          *(longlong *)local_100 = lVar6;
        }
      }
    }
    if (bVar7) goto LAB_10074190;
    local_100 = (uint *)(uint)(*(char *)((int)param_2 + 0x39) != '\0');
    if ((((((puVar10[4] == iVar17) && ((uint *)puVar10[5] == local_fc)) && (puVar10[6] == local_f8))
         && (((puVar10[7] == local_f4 && ((int)uStack_78 == param_2[7])) &&
             ((uStack_78._4_4_ == param_2[8] &&
              (((int)local_68 == local_f0 && (puVar10[10] == iVar20)))))))) &&
        (puVar10[0xb] == param_2[0xb])) && ((uStack_70._4_4_ == local_100 && (*puVar1 != 0)))) {
      puVar15 = param_2 + 0xf;
      (*pcVar8)();
      (*extraout_w11_05)(param_1,puVar10,*puVar15);
    }
    else {
      (*pcVar8)();
      (*extraout_w11_06)(param_1,puVar10);
      puVar10[4] = iVar17;
      local_10c = (int *)0x0;
      local_108 = (undefined4 *)0x0;
      puVar10[5] = local_fc;
      puVar10[6] = local_f8;
      puVar10[7] = local_f4;
      puVar10[0xb] = param_2[0xb];
      if (*puVar1 == 0) {
        uVar13 = 0;
      }
      else {
        uVar11 = (*pcVar8)();
        (*extraout_w11_07)(uVar11,&local_10c,&local_108);
        uVar13 = (ulonglong)*puVar1;
      }
      puStack_dc = local_fc;
      local_d0 = *(undefined4 *)(&DAT_100a2248 + param_2[0xb] * 4);
      local_d8 = param_2[7];
      iStack_d4 = param_2[8];
      puStack_cc = local_100;
      local_c8 = local_f0;
      local_e0 = iVar17;
      if ((puVar10[0xd] != 0) && (iVar20 - 1U < 2)) {
        local_c8 = 0;
        local_e0 = (int)local_80;
        puStack_dc = local_80._4_4_;
      }
      if (((int)uStack_78 == local_d8) && (uStack_78._4_4_ == iStack_d4)) {
        FUN_100732a8(uVar13,puVar10,&local_e0,local_10c != (int *)0x0);
      }
      else {
        if ((int)uVar13 != 0) {
          uVar11 = (*pcVar8)();
          (*extraout_w11_08)(uVar11,0,0);
          uVar11 = (*pcVar8)();
          uVar13 = (*extraout_w11_09)(uVar11);
        }
        FUN_10073940(uVar13,param_2[2]);
        puVar15 = param_2 + 0xc;
        (*pcVar8)();
        uVar13 = (*extraout_w11_10)(param_1,puVar10,&local_e0,*puVar15,param_2[2]);
        if ((uVar13 & 0xff) != 0) {
          FUN_10073880(uVar13,puVar10);
          uVar11 = (*pcVar8)();
          (*extraout_w11_11)(uVar11,local_10c,local_108);
        }
        if (local_108 != (undefined4 *)0x0) {
          uVar11 = (*pcVar8)();
          (*extraout_w11_12)(uVar11);
        }
      }
      if (*puVar1 == 0) {
        (*pcVar8)();
        (*extraout_w11_16)(param_1,puVar10);
        (*pcVar8)();
        (*extraout_w11_17)(param_1,puVar10);
        FUN_10072e38(param_1,puVar10);
        puVar15 = (undefined4 *)0x0;
        *(undefined1 *)local_104 = 0;
        goto LAB_100741ac;
      }
      uVar11 = (*pcVar8)();
      (*extraout_w11_13)(uVar11,param_2[2],1);
      puVar15 = param_2 + 0xf;
      (*pcVar8)();
      (*extraout_w11_14)(param_1,puVar10,*puVar15);
      puVar10[10] = iVar20;
      if ((*(char *)(param_2 + 0xe) == '\0') && (*(char *)(param_1 + 0x2d6) != '\0')) {
        uVar18 = 0;
      }
      else {
        uVar18 = 1;
      }
      *(undefined1 *)(puVar10 + 0x356) = uVar18;
      (*pcVar8)();
      (*extraout_w11_15)(param_1,puVar10);
    }
    puVar15 = puVar10;
    if (puVar10 == (undefined4 *)0x0) goto LAB_100741ac;
    iVar17 = *local_ec;
    if ((iVar17 == 7) && (*(char *)(param_1 + 0x4e4) == '\0')) {
      iVar17 = 3;
    }
    puVar10[9] = iVar17;
    uVar16 = puVar10[0xd];
    if ((uVar16 < 2) && (uVar4 = param_2[0xd], uVar4 < 2 && uVar4 != uVar16)) {
      puVar10[0xd] = uVar4;
      FUN_100734f0(param_1,puVar10,0,0);
    }
  }
LAB_10074194:
  puVar10[3] = puVar10[3] + 1;
  *(undefined1 *)((int)puVar10 + 0xd5b) = 0;
  puVar15 = puVar10;
LAB_100741ac:
  (*(code *)PTR_FUN_100a8090)(local_e8);
  return puVar15;
}

