/*
 * FUN_100045c0 at 100045c0
 * undefined FUN_100045c0(void)
 * Address ranges: 100045c0-10005a3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100045c0(int param_1,int param_2,undefined4 *param_3,int param_4,uint param_5,uint param_6,
            int *param_7,undefined1 *param_8)

{
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined8 extraout_x1;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
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
  code *extraout_w11_18;
  code *extraout_w11_19;
  code *extraout_w11_20;
  code *extraout_w11_21;
  code *extraout_w11_22;
  code *extraout_w11_23;
  code *extraout_w11_24;
  code *extraout_w11_25;
  uint uVar25;
  char local_110;
  undefined4 local_100;
  uint local_f8;
  uint local_f4;
  char *local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_d0;
  uint uStack_cc;
  int local_c8;
  uint uStack_c4;
  uint local_c0;
  int iStack_bc;
  uint local_b8;
  int iStack_b4;
  uint local_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint auStack_70 [4];
  undefined1 auStack_60 [32];
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_a8 = param_8;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar8 = (*extraout_w11)(param_1);
  if (param_5 == 0x216) {
    *(undefined1 *)(param_3 + 0xb) = 1;
  }
  else if (((param_5 - 0x46 < 2) && (param_3[7] == 0)) &&
          (uVar18 = FUN_100067f8(0), (uVar18 & 1) != 0)) {
    iVar12 = FUN_10005fe8(param_1);
    if (iVar12 == 1) {
      uVar21 = 0x207;
      if (*(char *)(param_1 + 0x25) == '\0') {
        uVar21 = 0x204;
      }
    }
    else if (iVar12 == 2) {
      uVar21 = 3;
    }
    else {
      uVar21 = 0;
    }
    param_7[6] = uVar21 | param_7[6];
    DAT_100be0e0 = DAT_100be0e0 + -1;
    (*(code *)PTR_FUN_100ba0f0)(DAT_100be0e4);
  }
  if (*(char *)(DAT_100be0c0 + 0x7e6) == '\0') {
    if (param_5 != 0x113 || param_6 != 0xaaaa) {
      if (cVar8 == '\0') {
        if (param_5 == 0x14) {
          return 1;
        }
LAB_10004c7c:
        if (param_5 != 0x104) goto LAB_10005004;
        if ((param_6 == 0xd) && (((uint)param_7 >> 0x1d & 1) != 0)) {
          uVar18 = FUN_100067f8(1);
          if ((uVar18 & 1) == 0) {
            (*(code *)PTR_FUN_100ba278)(param_4,0x400,0x44454745,1);
          }
          else {
            (*pcVar4)();
            uVar11 = (*extraout_w11_08)(param_1,param_4);
            FUN_10005d28(param_1,uVar11);
            DAT_100be0e0 = DAT_100be0e0 + -1;
            (*(code *)PTR_FUN_100ba0f0)(DAT_100be0e4);
          }
          (*pcVar4)();
          (*extraout_w11_09)(param_1,param_4);
          return 0;
        }
        goto switchD_10005028_caseD_203;
      }
      if (param_5 < 0xa1) {
        if (param_5 < 0x14) {
          if ((param_5 - 3 & 0xfffffffd) == 0) goto LAB_10004c50;
          if (param_5 != 6) goto LAB_10005464;
        }
        else {
          if (param_5 == 0x14) {
            return 1;
          }
          if (param_5 != 0x1c) {
            if (param_5 - 0x46 < 2) goto LAB_10004c50;
            goto LAB_10004b58;
          }
        }
        uVar18 = FUN_100067f8(5);
        if ((uVar18 & 1) != 0) {
          (*pcVar4)();
          cVar8 = (*extraout_w11_07)(param_1);
          if ((cVar8 == '\0') || (*(char *)((int)param_3 + 0x2d) == '\0')) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          uVar11 = FUN_10005fb0(param_1);
          FUN_10006160(param_1,uVar6,uVar11);
          DAT_100be0e0 = DAT_100be0e0 + -1;
          (*(code *)PTR_FUN_100ba0f0)(DAT_100be0e4);
        }
        goto LAB_10004b58;
      }
      if ((param_5 < 0xa7) ||
         ((param_5 - 0x216 < 0x1d && ((0x18000001U >> (ulonglong)(param_5 - 0x216 & 0x1f) & 1) != 0)
          ))) {
LAB_10004c50:
        uVar14 = (*(code *)PTR_FUN_100ba1c4)(param_4,param_5,param_6,param_7);
        return uVar14;
      }
      if (param_5 != 0x214) goto LAB_10004c7c;
      uStack_d8 = *(undefined8 *)(param_7 + 2);
      local_e0 = *(undefined8 *)param_7;
      if (*(char *)(param_2 + 0x785) == '\0') goto LAB_10004af8;
      local_f8 = 0;
      local_f4 = 0;
      uVar14 = (*pcVar4)();
      (*extraout_w11_06)(uVar14,&local_f8,&local_f4);
      if ((local_f8 == 0) || (local_f4 == 0)) goto LAB_10004af8;
      local_a0 = 0;
      local_98 = 0;
      uVar14 = (*(code *)PTR_FUN_100ba22c)(param_4,0xfffffff0);
      uVar15 = (*(code *)PTR_FUN_100ba22c)(param_4,0xffffffec);
      (*(code *)PTR_FUN_100ba19c)(&local_a0,uVar14,0,uVar15);
      local_e0._4_4_ = local_e0._4_4_ - local_a0._4_4_;
      local_e0._0_4_ = (int)local_e0 - (int)local_a0;
      uStack_d8._4_4_ = uStack_d8._4_4_ - local_98._4_4_;
      uStack_d8._0_4_ = (int)uStack_d8 - (int)local_98;
      if (local_f4 == 0) {
                    /* WARNING: Does not return */
        uVar6 = SoftwareBreakpoint(0xf004,0x10004a04);
        (*(code *)uVar6)();
      }
      uVar21 = 0;
      if (local_f4 != 0) {
        uVar21 = ((uStack_d8._4_4_ - local_e0._4_4_) * local_f8) / local_f4;
      }
      if (local_f8 == 0) {
                    /* WARNING: Does not return */
        uVar6 = SoftwareBreakpoint(0xf004,0x10004a18);
        (*(code *)uVar6)();
      }
      uVar22 = 0;
      if (local_f8 != 0) {
        uVar22 = (((int)uStack_d8 - (int)local_e0) * local_f4) / local_f8;
      }
      if (param_6 < 4) {
LAB_10004a88:
        if (param_6 != 0) goto switchD_10004a50_caseD_6;
      }
      else {
        if (param_6 < 9) {
          uVar2 = (uVar21 - (int)uStack_d8) + (int)local_e0;
          uVar24 = (uVar22 - uStack_d8._4_4_) + local_e0._4_4_;
          switch(param_6) {
          case 4:
            param_6 = 3;
            uVar25 = 1;
            goto LAB_10004a80;
          case 5:
            uVar25 = 1;
            break;
          case 6:
            goto switchD_10004a50_caseD_6;
          case 7:
            param_6 = 2;
            if (uVar2 < uVar24) {
              param_6 = 3;
            }
            goto LAB_10004a88;
          case 8:
            uVar25 = 2;
          }
          param_6 = 6;
LAB_10004a80:
          if (uVar24 <= uVar2) {
            param_6 = uVar25;
          }
          goto LAB_10004a88;
        }
switchD_10004a50_caseD_6:
        switch(param_6) {
        case 1:
          local_e0 = CONCAT44(uStack_d8._4_4_ - uVar22,(int)local_e0);
          break;
        case 2:
          uStack_d8 = CONCAT44(uVar22 + local_e0._4_4_,(int)uStack_d8);
          break;
        case 3:
          local_e0 = CONCAT44(local_e0._4_4_,(int)uStack_d8 - uVar21);
          break;
        case 6:
          uVar22 = uVar21 + (int)local_e0;
        case 0:
          uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar22);
        }
      }
      (*(code *)PTR_FUN_100ba19c)(&local_e0,uVar14,0,uVar15);
LAB_10004af8:
      *(undefined8 *)(param_7 + 2) = uStack_d8;
      *(undefined8 *)param_7 = local_e0;
      param_3[3] = param_7[2] - *param_7;
      param_3[4] = param_7[3] - param_7[1];
      return 1;
    }
    uVar18 = FUN_100067f8(0);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    (*pcVar4)();
    cVar9 = (*extraout_w11_00)(param_1);
    bVar10 = 0;
    if (cVar9 != '\0') {
      bVar10 = FUN_10005fb0(param_1);
      *(byte *)(param_2 + 0x784) = bVar10 ^ 1;
      (*pcVar4)();
      iVar12 = (*extraout_w11_01)(param_1);
      (*pcVar4)();
      iVar13 = (*extraout_w11_02)(param_1);
      if ((iVar12 != 0) && ((&DAT_100be150)[iVar13 * 0x8a] != 0)) {
        uVar14 = (*pcVar4)();
        iVar12 = (*extraout_w11_03)(uVar14,iVar12,0,0,4,2,2,0,0);
        if (iVar12 != 0) {
          (*pcVar4)();
          (*extraout_w11_04)(iVar12);
          (*pcVar4)();
          (*extraout_w11_05)(iVar12);
        }
      }
      if (*(int *)(DAT_100be0c0 + 0x330) != 0) {
        (*(code *)PTR_FUN_100ba278)(*(int *)(DAT_100be0c0 + 0x330),0x408,0,0);
      }
      if (*(byte *)(param_2 + 0x784) != 0) {
        FUN_1008f6d8(param_2,param_4,param_3,1);
      }
    }
    if (((cVar8 == '\0') || (cVar9 == '\0')) || (*(char *)((int)param_3 + 0x2d) == '\0')) {
      iVar12 = 0;
    }
    else {
      iVar12 = 1;
    }
LAB_10004df8:
    FUN_10006160(param_1,iVar12,bVar10);
    FUN_10006438(param_1);
    goto LAB_100059cc;
  }
  if (param_5 < 0x1c) {
    if (param_5 == 6) goto LAB_10004e24;
    if (param_5 == 0x14) {
      return 1;
    }
    goto LAB_10005464;
  }
  if (param_5 < 0x1d) {
LAB_10004e24:
    if ((cVar8 != '\0') && (uVar18 = FUN_100067f8(5), (uVar18 & 1) != 0)) {
      if (param_6 == 0) {
        if (param_5 == 0x1c) {
          piVar16 = (int *)(*(code *)PTR_FUN_100ba23c)(param_4);
          bVar7 = piVar16 != param_7;
          piVar16 = param_7;
        }
        else {
          piVar16 = (int *)(*(code *)PTR_FUN_100ba23c)(param_7,0);
          iVar12 = (*(code *)PTR_FUN_100ba224)(param_7,4);
          if ((iVar12 == param_4) && ((*(uint *)(DAT_100be0c0 + 0x82a) & 1) == 0)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
        }
        if (bVar7) {
          (*pcVar4)();
          cVar8 = (*extraout_w11_12)(param_1,piVar16);
          if (cVar8 == '\0') {
            (*(code *)PTR_FUN_100ba2a0)(param_4,0x405,0x44454745);
          }
          else {
            DAT_100be0d4 = 0;
            (*(code *)PTR_FUN_100ba2d8)(param_4,7);
            if (DAT_100be0d4 != param_1) {
              (*pcVar4)();
              (*extraout_w11_13)(param_1,param_4);
              FUN_10006160(param_1,0,0);
              uVar18 = FUN_10005fb0(param_1);
              if ((uVar18 & 1) != 0) {
                FUN_10005d28(param_1,0);
              }
            }
          }
        }
      }
      else {
        pcVar1 = (char *)(param_3 + 0x11);
        if ((*pcVar1 == '\0') && (*(char *)((int)param_3 + 0x2d) == '\0')) {
          *pcVar1 = '\x01';
          (*pcVar4)();
          (*extraout_w11_11)(param_1,param_4);
          uVar11 = FUN_10005fb0(param_1);
          FUN_10006160(param_1,1,uVar11);
          *pcVar1 = '\0';
        }
      }
      DAT_100be0e0 = DAT_100be0e0 + -1;
      (*(code *)PTR_FUN_100ba0f0)(DAT_100be0e4);
    }
  }
  else if (param_5 == 0x113) {
    if (param_6 == 0xaaaa) {
      uVar18 = FUN_100067f8(0);
      if ((uVar18 & 1) == 0) {
        return 0;
      }
      if (cVar8 != '\0') {
        (*pcVar4)();
        cVar8 = (*extraout_w11_10)(param_1);
        if ((cVar8 == '\0') || (*(char *)((int)param_3 + 0x2d) == '\0')) {
          iVar12 = 0;
        }
        else {
          iVar12 = 1;
        }
        bVar10 = FUN_10005fb0(param_1);
        if (((iVar12 != 0) && ((bVar10 & 1) == 0)) && (*(char *)(param_2 + 0x788) != '\0')) {
          FUN_1008f888(param_2,param_4,param_3,0,0,1);
        }
        goto LAB_10004df8;
      }
      goto LAB_100059cc;
    }
    goto LAB_10005464;
  }
LAB_10005004:
  if (param_5 < 0x200) {
LAB_10004b58:
    if (param_5 != 0x20) goto switchD_10005028_caseD_203;
    pcVar1 = (char *)((int)param_3 + 0x45);
    local_f0 = pcVar1;
    if (*pcVar1 != '\0') goto LAB_10005464;
    local_100 = 1;
    uVar18 = FUN_100067f8(0);
    if ((uVar18 & 1) == 0) {
      return 1;
    }
    *pcVar1 = '\x01';
    if ((((uint)param_7 & 0xffff) == 1) || (*(char *)(param_1 + 0x27) != '\0')) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    (*pcVar4)();
    iVar12 = (*extraout_w11_19)(param_1);
    iVar13 = FUN_10006740();
    if ((iVar12 == 0) || (!bVar7)) {
      if (((uint)param_7 & 0xffff) != 0) {
        local_100 = (*(code *)PTR_FUN_100ba1a0)(param_3[5],param_4,0x20,param_6,param_7);
      }
      if (iVar12 != 0) goto LAB_100057dc;
    }
    else {
LAB_100057dc:
      if (bVar7) {
        iVar17 = (*(code *)PTR_FUN_100ba1f0)();
        (*pcVar4)();
        uVar18 = (*extraout_w11_20)(param_1);
        iVar20 = iVar13;
        if ((uVar18 & 0xff) != 0) {
          (*pcVar4)();
          uVar18 = (*extraout_w11_21)(param_1,0);
          iVar20 = iVar12;
        }
        if (iVar17 != iVar13) {
          FUN_100067a0(uVar18,iVar20);
        }
        goto LAB_10005970;
      }
    }
    (*pcVar4)();
    uVar18 = (*extraout_w11_22)(param_1);
    iVar12 = *(int *)(param_1 + 0x18);
    if ((uVar18 & 0xff) == 0) {
      if (iVar12 == -1) {
        uVar18 = (*(code *)PTR_FUN_100ba1f0)();
        iVar12 = (int)uVar18;
      }
      if (iVar12 == iVar13) {
        (*pcVar4)();
        (*extraout_w11_24)(param_1);
      }
      else {
        FUN_100067a0(uVar18,iVar13);
        (*pcVar4)();
        (*extraout_w11_23)(param_1,iVar12);
      }
      uVar11 = FUN_100066b8();
    }
    else {
      uVar11 = 0;
      if (iVar12 != -1) {
        FUN_100067a0(uVar18,iVar12);
        *(int *)(param_1 + 0x18) = -1;
      }
    }
    (*pcVar4)();
    (*extraout_w11_25)(param_1,uVar11);
LAB_10005970:
    DAT_100be0e0 = DAT_100be0e0 + -1;
    *local_f0 = '\0';
    (*(code *)PTR_FUN_100ba0f0)(DAT_100be0e4);
    return local_100;
  }
  switch(param_5) {
  case 0x200:
    if (*(char *)((int)param_3 + 0x45) != '\0') {
      return 0;
    }
  case 0x201:
  case 0x202:
  case 0x204:
  case 0x205:
  case 0x207:
  case 0x208:
  case 0x20a:
  case 0x20b:
  case 0x20c:
    pcVar1 = (char *)((int)param_3 + 0x43);
    if (*pcVar1 != '\0') {
      return 0;
    }
    uVar18 = FUN_100067f8(0);
    if ((uVar18 & 1) == 0) goto switchD_10005028_caseD_203;
    bVar7 = false;
    *pcVar1 = '\x01';
    local_f0 = pcVar1;
    (*pcVar4)();
    cVar8 = (*extraout_w11_14)(param_1,&local_90);
    if (cVar8 != '\0') {
      local_110 = '\x01';
      uVar22 = (uint)(short)param_7;
      uVar21 = (int)param_7 >> 0x10;
      if (*(char *)(param_3 + 0x10) == '\0') {
        cVar8 = '\0';
      }
      else {
        bVar7 = false;
        puVar3 = &local_90;
        if (*(char *)(param_2 + 0x84a) == '\0') {
          puVar3 = auStack_70;
        }
        if (((*(char *)(param_2 + 0x787) == '\0') || (*(char *)(param_1 + 0x24) == '\0')) &&
           (iVar12 = (*(code *)PTR_FUN_100ba280)(puVar3,CONCAT44(uVar21,uVar22)), iVar12 == 0)) {
          if (*(char *)((int)param_3 + 0x41) == '\0') {
            uVar2 = *puVar3;
            if ((int)uVar22 < (int)*puVar3) {
LAB_10005350:
              uVar22 = uVar2;
              bVar7 = true;
            }
            else if ((int)puVar3[2] <= (int)uVar22) {
              uVar2 = puVar3[2] - 1;
              goto LAB_10005350;
            }
            uVar2 = puVar3[1];
            if ((int)puVar3[1] <= (int)uVar21) {
              if ((int)uVar21 < (int)puVar3[3]) goto LAB_10005384;
              uVar2 = puVar3[3] - 1;
            }
            uVar21 = uVar2;
            bVar7 = true;
          }
          else {
            uVar14 = (*(code *)PTR_FUN_100ba1fc)(0,0,3);
            if ((int)*puVar3 < (int)uVar22) {
              if ((int)(puVar3[2] - 1) <= (int)uVar22) {
                local_c8 = local_88;
                uStack_c4 = uVar21;
                (*(code *)PTR_FUN_100ba260)(*param_3,0,&local_c8,1);
                iVar12 = (*(code *)PTR_FUN_100ba04c)(uVar14,local_c8,uStack_c4);
                uVar2 = puVar3[2];
                if (iVar12 != 0) {
                  uVar2 = (uVar22 - uVar2) + local_88 + 1;
                  goto LAB_10005210;
                }
                uVar2 = uVar2 - 1;
                goto LAB_1000521c;
              }
            }
            else {
              local_d0 = local_90 - 1;
              uStack_cc = uVar21;
              (*(code *)PTR_FUN_100ba260)(*param_3,0,&local_d0,1);
              iVar12 = (*(code *)PTR_FUN_100ba04c)(uVar14,local_d0,uStack_cc);
              uVar2 = *puVar3;
              if (iVar12 != 0) {
                uVar2 = ((uVar22 - *puVar3) + local_90) - 1;
LAB_10005210:
                local_110 = '\0';
              }
LAB_1000521c:
              uVar22 = uVar2;
              bVar7 = true;
            }
            if ((int)puVar3[1] < (int)uVar21) {
              if ((int)puVar3[3] <= (int)uVar21) {
                iStack_b4 = local_84;
                local_b8 = uVar22;
                (*(code *)PTR_FUN_100ba260)(*param_3,0,&local_b8,1);
                iVar12 = (*(code *)PTR_FUN_100ba04c)(uVar14,local_b8,iStack_b4);
                uVar2 = puVar3[3];
                if (iVar12 != 0) {
                  uVar2 = (local_84 - uVar2) + uVar21;
                  goto LAB_10005300;
                }
                uVar2 = uVar2 - 1;
                goto LAB_1000530c;
              }
            }
            else {
              iStack_bc = local_8c + -1;
              local_c0 = uVar22;
              (*(code *)PTR_FUN_100ba260)(*param_3,0,&local_c0,1);
              iVar12 = (*(code *)PTR_FUN_100ba04c)(uVar14,local_c0,iStack_bc);
              uVar2 = puVar3[1];
              if (iVar12 != 0) {
                uVar2 = ((local_8c - uVar2) + uVar21) - 1;
LAB_10005300:
                local_110 = '\0';
              }
LAB_1000530c:
              uVar21 = uVar2;
              bVar7 = true;
            }
            (*(code *)PTR_FUN_100ba290)(0,uVar14);
          }
        }
LAB_10005384:
        cVar8 = local_110;
        if (bVar7) {
          local_b0 = uVar22;
          uStack_ac = uVar21;
          (*(code *)PTR_FUN_100ba260)(*param_3,0,&local_b0,1);
          (*(code *)PTR_FUN_100ba2ac)(local_b0,uStack_ac);
          iVar12 = (*(code *)PTR_FUN_100ba270)(auStack_60,*param_3,0x200,0x200,1);
          while (iVar12 != 0) {
            iVar12 = (*(code *)PTR_FUN_100ba270)(auStack_60,*param_3,0x200,0x200,1);
          }
        }
      }
      *(char *)((int)param_3 + 0x41) = cVar8;
      param_7 = (int *)(uVar22 & 0xffff | uVar21 << 0x10);
      bVar7 = local_110 == '\0';
    }
    *local_f0 = '\0';
    DAT_100be0e0 = DAT_100be0e0 + -1;
    (*(code *)PTR_FUN_100ba0f0)(DAT_100be0e4);
    if (bVar7) {
      return 0;
    }
    goto LAB_10005464;
  case 0x203:
  case 0x206:
  case 0x209:
    goto switchD_10005028_caseD_203;
  }
  if ((param_5 == 0x401) && (param_6 == 0x44454745)) {
    uVar18 = FUN_100067f8(0);
    iVar12 = DAT_100be0c0;
    if ((uVar18 & 1) == 0) {
      uVar6 = 0x401;
      goto LAB_100059f8;
    }
    (*pcVar4)();
    uVar6 = (*extraout_w11_15)(param_1);
    iVar13 = (int)uVar6;
    uVar14 = (&DAT_100be150)[iVar13 * 0x8a];
    if ((*(char *)(iVar12 + 0x7e6) == '\0') &&
       (uVar6 = FUN_10005fb0(param_1), (uint)*(byte *)(iVar12 + 0x56c) != (((uint)uVar6 ^ 1) & 0xff)
       )) {
      uVar6 = FUN_10005d28(param_1,1);
    }
    if (*(int *)(iVar12 + 0x76c) != *(int *)(iVar12 + 0x554)) {
      *(int *)(param_1 + 8) = *(int *)(iVar12 + 0x554);
    }
    (*pcVar4)(uVar6,iVar12 + 0x54c);
    (*extraout_w11_16)(uVar14,extraout_x1,param_7);
    *(uint *)(param_1 + 0xc) = *(uint *)(DAT_100be0c0 + 0x826) >> 2 & 1;
    *(uint *)(param_1 + 0x10) = *(uint *)(DAT_100be0c0 + 0x82a) & 1;
    iVar20 = *(int *)(DAT_100be0c0 + 0x780);
    if ((iVar20 == 6 || iVar20 < 3) || 8 < iVar20) {
      (*(code *)PTR_FUN_100ba2bc)(&DAT_100be300 + iVar13 * 0x228);
    }
    else {
      uVar22 = *(uint *)(&DAT_100be2e8 + iVar13 * 0x228);
      uVar2 = *(uint *)(&DAT_100be2ec + iVar13 * 0x228);
      uVar24 = *(uint *)(DAT_100be0c0 + 0x81a);
      uVar21 = *(uint *)(DAT_100be0c0 + 0x81e);
      uVar25 = *(uint *)(DAT_100be0c0 + 0x816);
      uVar19 = *(uint *)(DAT_100be0c0 + 0x812);
      uVar23 = uVar21;
      if (uVar24 == 0xffffffff) {
        uVar5 = uVar21 >> 0x10;
        uVar24 = 0;
        uVar23 = 0;
        if ((uVar5 != 0) && (uVar21 = uVar21 & 0xffff, uVar21 != 0)) {
          uVar23 = 0;
          if (uVar5 != 0) {
            uVar23 = (uVar22 * uVar21) / uVar5;
          }
          uVar24 = uVar22;
          if (uVar2 <= uVar23) {
            if (uVar21 == 0) {
                    /* WARNING: Does not return */
              uVar6 = SoftwareBreakpoint(0xf004,0x1000564c);
              (*(code *)uVar6)();
            }
            uVar24 = 0;
            uVar23 = uVar2;
            if (uVar21 != 0) {
              uVar24 = (uVar2 * uVar5) / uVar21;
            }
          }
        }
      }
      if (uVar19 == 0xffffffff && uVar25 == 0xffffffff) {
        uVar19 = uVar22 - uVar24 >> 1;
        uVar25 = uVar2 - uVar23 >> 1;
      }
      iVar20 = uVar24 + uVar19;
      if ((iVar20 <= (int)uVar19) || (iVar17 = uVar23 + uVar25, iVar17 <= (int)uVar25)) {
        iVar17 = 0;
        uVar25 = 0;
        iVar20 = 0;
        uVar19 = 0;
      }
      (*(code *)PTR_FUN_100ba2b8)(&DAT_100be300 + iVar13 * 0x228,uVar19,uVar25,iVar20,iVar17);
    }
    (*pcVar4)();
    (*extraout_w11_17)(param_1);
    *(undefined1 *)(iVar12 + 0x759) = 0;
    goto LAB_100059cc;
  }
switchD_10005028_caseD_203:
  if (param_5 == 0x404) {
    if ((param_6 & 0xffffff00) != 0x44454700) goto LAB_10005a10;
    uVar18 = FUN_100067f8(0);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    (*pcVar4)();
    (*extraout_w11_18)(param_1);
  }
  else {
LAB_10005464:
    if (param_5 == 0x405) {
      pcVar4 = (code *)PTR_FUN_100ba2b4;
      if ((param_6 & 0xffffff00) != 0x44454700) {
LAB_10005a10:
        *local_a8 = 1;
        return 0;
      }
      goto LAB_10005484;
    }
    if (param_5 != 0x400 || (param_6 & 0xffffff00) != 0x44454700) goto LAB_10005a10;
    uVar18 = FUN_100067f8(1);
    if ((uVar18 & 1) == 0) {
      uVar6 = 0x400;
LAB_100059f8:
      (*(code *)PTR_FUN_100ba278)(param_4,uVar6,0x44454745,param_7);
      return 0;
    }
    FUN_10005d28(param_1,param_7 != (int *)0x0);
  }
LAB_100059cc:
  DAT_100be0e0 = DAT_100be0e0 + -1;
  pcVar4 = (code *)PTR_FUN_100ba0f0;
  param_4 = DAT_100be0e4;
LAB_10005484:
  (*pcVar4)(param_4);
  return 0;
}

