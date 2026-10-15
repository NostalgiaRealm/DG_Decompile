/*
 * FUN_100322e0 at 100322e0
 * undefined FUN_100322e0(void)
 * Address ranges: 100322e0-100336ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_100322e0(int param_1,int param_2,undefined4 *param_3,int param_4,uint param_5,uint param_6,
            int *param_7,undefined1 *param_8)

{
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 extraout_x1;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
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
  uint uVar24;
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
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_a8 = param_8;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar8 = (*extraout_w11)(param_1);
  if (param_5 == 0x216) {
    *(undefined1 *)(param_3 + 0xb) = 1;
  }
  else if (((param_5 - 0x46 < 2) && (param_3[7] == 0)) &&
          (uVar17 = FUN_100343d8(0), (uVar17 & 1) != 0)) {
    iVar11 = FUN_10033b80(param_1);
    if (iVar11 == 1) {
      uVar20 = 0x207;
      if (*(char *)(param_1 + 0x25) == '\0') {
        uVar20 = 0x204;
      }
    }
    else if (iVar11 == 2) {
      uVar20 = 3;
    }
    else {
      uVar20 = 0;
    }
    param_7[6] = uVar20 | param_7[6];
    FUN_100344d0();
  }
  if (*(char *)(DAT_1013ceec + 0x7e6) == '\0') {
    if (param_5 == 0x113 && param_6 == 0xaaaa) {
      uVar17 = FUN_100343d8(0);
      if ((uVar17 & 1) == 0) {
        return 0;
      }
      (*pcVar5)();
      cVar9 = (*extraout_w11_00)(param_1);
      bVar7 = false;
      if (cVar9 != '\0') {
        iVar11 = FUN_10033b80(param_1);
        bVar7 = iVar11 != 0;
        *(bool *)(param_1 + 0x27) = bVar7;
        *(char *)(param_2 + 0x784) = iVar11 == 0;
        (*pcVar5)();
        iVar11 = (*extraout_w11_01)(param_1);
        (*pcVar5)();
        iVar12 = (*extraout_w11_02)(param_1);
        if ((iVar11 != 0) && ((&DAT_101387c0)[iVar12 * 0x8a] != 0)) {
          uVar13 = (*pcVar5)();
          iVar11 = (*extraout_w11_03)(uVar13,iVar11,0,0,4,2,2,0,0);
          if (iVar11 != 0) {
            (*pcVar5)();
            (*extraout_w11_04)(iVar11);
            (*pcVar5)();
            (*extraout_w11_05)(iVar11);
          }
        }
        if (*(int *)(DAT_1013ceec + 0x330) != 0) {
          (*(code *)PTR_FUN_10134240)(*(int *)(DAT_1013ceec + 0x330),0x408,0,0);
        }
        if (*(char *)(param_2 + 0x784) != '\0') {
          FUN_100fc5f8(param_2,param_4,param_3,1);
        }
      }
      if (((cVar8 == '\0') || (cVar9 == '\0')) || (*(char *)((int)param_3 + 0x2d) == '\0')) {
        iVar11 = 0;
      }
      else {
        iVar11 = 1;
      }
LAB_10032ae0:
      FUN_10033cf8(param_1,iVar11,bVar7);
      FUN_10033fd0(param_1);
      goto LAB_10033698;
    }
    if (cVar8 == '\0') {
      if (param_5 == 0x14) {
        return 1;
      }
LAB_10032978:
      if (param_5 != 0x104) goto LAB_10032cec;
      if ((param_6 == 0xd) && (((uint)param_7 >> 0x1d & 1) != 0)) {
        uVar17 = FUN_100343d8(1);
        if ((uVar17 & 1) == 0) {
          (*(code *)PTR_FUN_10134240)(param_4,0x400,0x44454745,1);
        }
        else {
          (*pcVar5)();
          uVar10 = (*extraout_w11_08)(param_1,param_4);
          FUN_100338f8(param_1,uVar10);
          FUN_100344d0();
        }
        (*pcVar5)();
        (*extraout_w11_09)(param_1,param_4);
        return 0;
      }
      goto switchD_10032d10_caseD_203;
    }
    if (param_5 < 0xa1) {
      if (param_5 < 0x14) {
        if ((param_5 - 3 & 0xfffffffd) == 0) goto LAB_1003294c;
        if (param_5 != 6) goto LAB_1003312c;
      }
      else {
        if (param_5 == 0x14) {
          return 1;
        }
        if (param_5 != 0x1c) {
          if (param_5 - 0x46 < 2) goto LAB_1003294c;
          goto LAB_10032864;
        }
      }
      uVar17 = FUN_100343d8(5);
      if ((uVar17 & 1) != 0) {
        (*pcVar5)();
        cVar8 = (*extraout_w11_07)(param_1);
        if ((cVar8 == '\0') || (*(char *)((int)param_3 + 0x2d) == '\0')) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        iVar11 = FUN_10033b80(param_1);
        *(bool *)(param_1 + 0x27) = iVar11 != 0;
        FUN_10033cf8(param_1,uVar6,iVar11 != 0);
        FUN_100344d0();
      }
      goto LAB_10032864;
    }
    if ((param_5 < 0xa7) ||
       ((param_5 - 0x216 < 0x1d && ((0x18000001U >> (ulonglong)(param_5 - 0x216 & 0x1f) & 1) != 0)))
       ) {
LAB_1003294c:
      uVar13 = (*(code *)PTR_FUN_1013418c)(param_4,param_5,param_6,param_7);
      return uVar13;
    }
    if (param_5 != 0x214) goto LAB_10032978;
    uStack_d8 = *(undefined8 *)(param_7 + 2);
    local_e0 = *(undefined8 *)param_7;
    if (*(char *)(param_2 + 0x785) == '\0') goto LAB_10032804;
    local_f8 = 0;
    local_f4 = 0;
    uVar13 = (*pcVar5)();
    (*extraout_w11_06)(uVar13,&local_f8,&local_f4);
    if ((local_f8 == 0) || (local_f4 == 0)) goto LAB_10032804;
    local_a0 = 0;
    local_98 = 0;
    uVar13 = (*(code *)PTR_FUN_101341f4)(param_4,0xfffffff0);
    uVar14 = (*(code *)PTR_FUN_101341f4)(param_4,0xffffffec);
    (*(code *)PTR_FUN_1013416c)(&local_a0,uVar13,0,uVar14);
    local_e0._4_4_ = local_e0._4_4_ - local_a0._4_4_;
    local_e0._0_4_ = (int)local_e0 - (int)local_a0;
    uStack_d8._4_4_ = uStack_d8._4_4_ - local_98._4_4_;
    uStack_d8._0_4_ = (int)uStack_d8 - (int)local_98;
    if (local_f4 == 0) {
                    /* WARNING: Does not return */
      uVar6 = SoftwareBreakpoint(0xf004,0x10032710);
      (*(code *)uVar6)();
    }
    uVar20 = 0;
    if (local_f4 != 0) {
      uVar20 = ((uStack_d8._4_4_ - local_e0._4_4_) * local_f8) / local_f4;
    }
    if (local_f8 == 0) {
                    /* WARNING: Does not return */
      uVar6 = SoftwareBreakpoint(0xf004,0x10032724);
      (*(code *)uVar6)();
    }
    uVar21 = 0;
    if (local_f8 != 0) {
      uVar21 = (((int)uStack_d8 - (int)local_e0) * local_f4) / local_f8;
    }
    if (param_6 < 4) {
LAB_10032794:
      if (param_6 != 0) goto switchD_1003275c_caseD_6;
    }
    else {
      if (param_6 < 9) {
        uVar2 = (uVar20 - (int)uStack_d8) + (int)local_e0;
        uVar23 = (uVar21 - uStack_d8._4_4_) + local_e0._4_4_;
        switch(param_6) {
        case 4:
          param_6 = 3;
          uVar24 = 1;
          goto LAB_1003278c;
        case 5:
          uVar24 = 1;
          break;
        case 6:
          goto switchD_1003275c_caseD_6;
        case 7:
          param_6 = 2;
          if (uVar2 < uVar23) {
            param_6 = 3;
          }
          goto LAB_10032794;
        case 8:
          uVar24 = 2;
        }
        param_6 = 6;
LAB_1003278c:
        if (uVar23 <= uVar2) {
          param_6 = uVar24;
        }
        goto LAB_10032794;
      }
switchD_1003275c_caseD_6:
      switch(param_6) {
      case 1:
        local_e0 = CONCAT44(uStack_d8._4_4_ - uVar21,(int)local_e0);
        break;
      case 2:
        uStack_d8 = CONCAT44(uVar21 + local_e0._4_4_,(int)uStack_d8);
        break;
      case 3:
        local_e0 = CONCAT44(local_e0._4_4_,(int)uStack_d8 - uVar20);
        break;
      case 6:
        uVar21 = uVar20 + (int)local_e0;
      case 0:
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar21);
      }
    }
    (*(code *)PTR_FUN_1013416c)(&local_e0,uVar13,0,uVar14);
LAB_10032804:
    *(undefined8 *)(param_7 + 2) = uStack_d8;
    *(undefined8 *)param_7 = local_e0;
    param_3[3] = param_7[2] - *param_7;
    param_3[4] = param_7[3] - param_7[1];
    return 1;
  }
  if (param_5 < 0x1c) {
    if (param_5 == 6) goto LAB_10032b0c;
    if (param_5 == 0x14) {
      return 1;
    }
    goto LAB_1003312c;
  }
  if (param_5 < 0x1d) {
LAB_10032b0c:
    if ((cVar8 != '\0') && (uVar17 = FUN_100343d8(5), (uVar17 & 1) != 0)) {
      if (param_6 == 0) {
        if (param_5 == 0x1c) {
          piVar15 = (int *)(*(code *)PTR_FUN_10134200)(param_4);
          bVar7 = piVar15 != param_7;
          piVar15 = param_7;
        }
        else {
          piVar15 = (int *)(*(code *)PTR_FUN_10134200)(param_7,0);
          iVar11 = (*(code *)PTR_FUN_101341ec)(param_7,4);
          if ((iVar11 == param_4) && ((*(uint *)(DAT_1013ceec + 0x82a) & 1) == 0)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
        }
        if (bVar7) {
          (*pcVar5)();
          cVar8 = (*extraout_w11_12)(param_1,piVar15);
          if (cVar8 == '\0') {
            (*(code *)PTR_FUN_1013425c)(param_4,0x405,0x44454745);
          }
          else {
            DAT_1013cf08 = 0;
            (*(code *)PTR_FUN_1013428c)(param_4,7);
            if (DAT_1013cf08 != param_1) {
              (*pcVar5)();
              (*extraout_w11_13)(param_1,param_4);
              FUN_10033cf8(param_1,0,0);
              iVar11 = FUN_10033b80(param_1);
              *(bool *)(param_1 + 0x27) = iVar11 != 0;
              if (iVar11 != 0) {
                FUN_100338f8(param_1,0);
              }
            }
          }
        }
      }
      else {
        pcVar1 = (char *)(param_3 + 0x11);
        if ((*pcVar1 == '\0') && (*(char *)((int)param_3 + 0x2d) == '\0')) {
          *pcVar1 = '\x01';
          (*pcVar5)();
          (*extraout_w11_11)(param_1,param_4);
          iVar11 = FUN_10033b80(param_1);
          *(bool *)(param_1 + 0x27) = iVar11 != 0;
          FUN_10033cf8(param_1,1,iVar11 != 0);
          *pcVar1 = '\0';
        }
      }
      FUN_100344d0();
    }
  }
  else if (param_5 == 0x113) {
    if (param_6 == 0xaaaa) {
      uVar17 = FUN_100343d8(0);
      if ((uVar17 & 1) == 0) {
        return 0;
      }
      if (cVar8 == '\0') goto LAB_10033698;
      (*pcVar5)();
      cVar8 = (*extraout_w11_10)(param_1);
      if ((cVar8 == '\0') || (*(char *)((int)param_3 + 0x2d) == '\0')) {
        iVar11 = 0;
      }
      else {
        iVar11 = 1;
      }
      iVar12 = FUN_10033b80(param_1);
      bVar7 = iVar12 != 0;
      *(bool *)(param_1 + 0x27) = bVar7;
      if (((iVar11 != 0) && (iVar12 == 0)) && (*(char *)(param_2 + 0x788) != '\0')) {
        FUN_100fc7a8(param_2,param_4,param_3,0,0,1);
      }
      goto LAB_10032ae0;
    }
    goto LAB_1003312c;
  }
LAB_10032cec:
  if (param_5 < 0x200) {
LAB_10032864:
    if (param_5 != 0x20) goto switchD_10032d10_caseD_203;
    pcVar1 = (char *)((int)param_3 + 0x45);
    local_f0 = pcVar1;
    if (*pcVar1 != '\0') goto LAB_1003312c;
    local_100 = 1;
    uVar17 = FUN_100343d8(0);
    if ((uVar17 & 1) == 0) {
      return 1;
    }
    *pcVar1 = '\x01';
    if ((((uint)param_7 & 0xffff) == 1) || (*(char *)(param_1 + 0x27) != '\0')) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    (*pcVar5)();
    iVar11 = (*extraout_w11_19)(param_1);
    iVar12 = FUN_10034310(param_1);
    if ((iVar11 == 0) || (!bVar7)) {
      if (((uint)param_7 & 0xffff) != 0) {
        local_100 = (*(code *)PTR_FUN_10134170)(param_3[5],param_4,0x20,param_6,param_7);
      }
      if (iVar11 != 0) goto LAB_100334b8;
    }
    else {
LAB_100334b8:
      if (bVar7) {
        iVar16 = (*(code *)PTR_FUN_101341bc)();
        (*pcVar5)();
        cVar8 = (*extraout_w11_20)(param_1);
        iVar19 = iVar12;
        if (cVar8 != '\0') {
          (*pcVar5)();
          (*extraout_w11_21)(param_1,0);
          iVar19 = iVar11;
        }
        if (iVar16 != iVar12) {
          FUN_10034380(param_1,iVar19);
        }
        goto LAB_1003365c;
      }
    }
    (*pcVar5)();
    cVar8 = (*extraout_w11_22)(param_1);
    iVar11 = *(int *)(param_1 + 0x18);
    if (cVar8 == '\0') {
      if (iVar11 == -1) {
        iVar11 = (*(code *)PTR_FUN_101341bc)();
      }
      if (iVar11 == iVar12) {
        (*pcVar5)();
        (*extraout_w11_24)(param_1);
      }
      else {
        FUN_10034380(param_1,iVar12);
        (*pcVar5)();
        (*extraout_w11_23)(param_1,iVar11);
      }
      uVar10 = FUN_10034270(param_1);
    }
    else {
      uVar10 = 0;
      if (iVar11 != -1) {
        FUN_10034380(param_1,iVar11);
        *(int *)(param_1 + 0x18) = -1;
      }
    }
    (*pcVar5)();
    (*extraout_w11_25)(param_1,uVar10);
LAB_1003365c:
    *local_f0 = '\0';
    FUN_100344d0();
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
    uVar17 = FUN_100343d8(0);
    if ((uVar17 & 1) == 0) goto switchD_10032d10_caseD_203;
    bVar7 = false;
    *pcVar1 = '\x01';
    local_f0 = pcVar1;
    (*pcVar5)();
    cVar8 = (*extraout_w11_14)(param_1,&local_90);
    if (cVar8 != '\0') {
      local_110 = '\x01';
      uVar21 = (uint)(short)param_7;
      uVar20 = (int)param_7 >> 0x10;
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
           (iVar11 = (*(code *)PTR_FUN_10134248)(puVar3,CONCAT44(uVar20,uVar21)), iVar11 == 0)) {
          if (*(char *)((int)param_3 + 0x41) == '\0') {
            uVar2 = *puVar3;
            if ((int)uVar21 < (int)*puVar3) {
LAB_10033038:
              uVar21 = uVar2;
              bVar7 = true;
            }
            else if ((int)puVar3[2] <= (int)uVar21) {
              uVar2 = puVar3[2] - 1;
              goto LAB_10033038;
            }
            uVar2 = puVar3[1];
            if ((int)puVar3[1] <= (int)uVar20) {
              if ((int)uVar20 < (int)puVar3[3]) goto LAB_1003306c;
              uVar2 = puVar3[3] - 1;
            }
            uVar20 = uVar2;
            bVar7 = true;
          }
          else {
            uVar13 = (*(code *)PTR_FUN_101341c8)(0,0,3);
            if ((int)*puVar3 < (int)uVar21) {
              if ((int)(puVar3[2] - 1) <= (int)uVar21) {
                local_c8 = local_88;
                uStack_c4 = uVar20;
                (*(code *)PTR_FUN_10134228)(*param_3,0,&local_c8,1);
                iVar11 = (*(code *)PTR_FUN_1013402c)(uVar13,local_c8,uStack_c4);
                uVar2 = puVar3[2];
                if (iVar11 != 0) {
                  uVar2 = (uVar21 - uVar2) + local_88 + 1;
                  goto LAB_10032ef8;
                }
                uVar2 = uVar2 - 1;
                goto LAB_10032f04;
              }
            }
            else {
              local_d0 = local_90 - 1;
              uStack_cc = uVar20;
              (*(code *)PTR_FUN_10134228)(*param_3,0,&local_d0,1);
              iVar11 = (*(code *)PTR_FUN_1013402c)(uVar13,local_d0,uStack_cc);
              uVar2 = *puVar3;
              if (iVar11 != 0) {
                uVar2 = ((uVar21 - *puVar3) + local_90) - 1;
LAB_10032ef8:
                local_110 = '\0';
              }
LAB_10032f04:
              uVar21 = uVar2;
              bVar7 = true;
            }
            if ((int)puVar3[1] < (int)uVar20) {
              if ((int)puVar3[3] <= (int)uVar20) {
                iStack_b4 = local_84;
                local_b8 = uVar21;
                (*(code *)PTR_FUN_10134228)(*param_3,0,&local_b8,1);
                iVar11 = (*(code *)PTR_FUN_1013402c)(uVar13,local_b8,iStack_b4);
                uVar2 = puVar3[3];
                if (iVar11 != 0) {
                  uVar2 = (local_84 - uVar2) + uVar20;
                  goto LAB_10032fe8;
                }
                uVar2 = uVar2 - 1;
                goto LAB_10032ff4;
              }
            }
            else {
              iStack_bc = local_8c + -1;
              local_c0 = uVar21;
              (*(code *)PTR_FUN_10134228)(*param_3,0,&local_c0,1);
              iVar11 = (*(code *)PTR_FUN_1013402c)(uVar13,local_c0,iStack_bc);
              uVar2 = puVar3[1];
              if (iVar11 != 0) {
                uVar2 = ((local_8c - uVar2) + uVar20) - 1;
LAB_10032fe8:
                local_110 = '\0';
              }
LAB_10032ff4:
              uVar20 = uVar2;
              bVar7 = true;
            }
            (*(code *)PTR_FUN_10134254)(0,uVar13);
          }
        }
LAB_1003306c:
        cVar8 = local_110;
        if (bVar7) {
          local_b0 = uVar21;
          uStack_ac = uVar20;
          (*(code *)PTR_FUN_10134228)(*param_3,0,&local_b0,1);
          (*(code *)PTR_FUN_10134264)(local_b0,uStack_ac);
          iVar11 = (*(code *)PTR_FUN_10134238)(auStack_60,*param_3,0x200,0x200,1);
          while (iVar11 != 0) {
            iVar11 = (*(code *)PTR_FUN_10134238)(auStack_60,*param_3,0x200,0x200,1);
          }
        }
      }
      *(char *)((int)param_3 + 0x41) = cVar8;
      param_7 = (int *)(uVar21 & 0xffff | uVar20 << 0x10);
      bVar7 = local_110 == '\0';
    }
    *local_f0 = '\0';
    FUN_100344d0();
    if (bVar7) {
      return 0;
    }
    goto LAB_1003312c;
  case 0x203:
  case 0x206:
  case 0x209:
    goto switchD_10032d10_caseD_203;
  }
  if ((param_5 == 0x401) && (param_6 == 0x44454745)) {
    uVar17 = FUN_100343d8(0);
    iVar11 = DAT_1013ceec;
    if ((uVar17 & 1) == 0) {
      uVar6 = 0x401;
      goto LAB_100336a8;
    }
    (*pcVar5)();
    uVar6 = (*extraout_w11_15)(param_1);
    iVar12 = (int)uVar6;
    uVar13 = (&DAT_101387c0)[iVar12 * 0x8a];
    if (*(char *)(iVar11 + 0x7e6) == '\0') {
      uVar6 = FUN_10033b80(param_1);
      bVar7 = (int)uVar6 == 0;
      *(bool *)(param_1 + 0x27) = !bVar7;
      if ((bool)*(char *)(iVar11 + 0x56c) != bVar7) {
        uVar6 = FUN_100338f8(param_1,1);
      }
    }
    if (*(int *)(iVar11 + 0x76c) != *(int *)(iVar11 + 0x554)) {
      *(int *)(param_1 + 8) = *(int *)(iVar11 + 0x554);
    }
    (*pcVar5)(uVar6,iVar11 + 0x54c);
    (*extraout_w11_16)(uVar13,extraout_x1,param_7);
    *(uint *)(param_1 + 0xc) = *(uint *)(DAT_1013ceec + 0x826) >> 2 & 1;
    *(uint *)(param_1 + 0x10) = *(uint *)(DAT_1013ceec + 0x82a) & 1;
    iVar19 = *(int *)(DAT_1013ceec + 0x780);
    if ((iVar19 == 6 || iVar19 < 3) || 8 < iVar19) {
      (*(code *)PTR_FUN_10134270)(&DAT_10138970 + iVar12 * 0x228);
    }
    else {
      uVar21 = *(uint *)(&DAT_10138958 + iVar12 * 0x228);
      uVar2 = *(uint *)(&DAT_1013895c + iVar12 * 0x228);
      uVar23 = *(uint *)(DAT_1013ceec + 0x81a);
      uVar20 = *(uint *)(DAT_1013ceec + 0x81e);
      uVar24 = *(uint *)(DAT_1013ceec + 0x816);
      uVar18 = *(uint *)(DAT_1013ceec + 0x812);
      uVar22 = uVar20;
      if (uVar23 == 0xffffffff) {
        uVar4 = uVar20 >> 0x10;
        uVar23 = 0;
        uVar22 = 0;
        if ((uVar4 != 0) && (uVar20 = uVar20 & 0xffff, uVar20 != 0)) {
          uVar22 = 0;
          if (uVar4 != 0) {
            uVar22 = (uVar20 * uVar21) / uVar4;
          }
          uVar23 = uVar21;
          if (uVar2 <= uVar22) {
            if (uVar20 == 0) {
                    /* WARNING: Does not return */
              uVar6 = SoftwareBreakpoint(0xf004,0x10033324);
              (*(code *)uVar6)();
            }
            uVar23 = 0;
            uVar22 = uVar2;
            if (uVar20 != 0) {
              uVar23 = (uVar4 * uVar2) / uVar20;
            }
          }
        }
      }
      if (uVar18 == 0xffffffff && uVar24 == 0xffffffff) {
        uVar18 = uVar21 - uVar23 >> 1;
        uVar24 = uVar2 - uVar22 >> 1;
      }
      iVar19 = uVar23 + uVar18;
      if ((iVar19 <= (int)uVar18) || (iVar16 = uVar22 + uVar24, iVar16 <= (int)uVar24)) {
        iVar16 = 0;
        uVar24 = 0;
        iVar19 = 0;
        uVar18 = 0;
      }
      (*(code *)PTR_FUN_1013426c)(&DAT_10138970 + iVar12 * 0x228,uVar18,uVar24,iVar19,iVar16);
    }
    (*pcVar5)();
    (*extraout_w11_17)(param_1);
    *(undefined1 *)(iVar11 + 0x759) = 0;
    goto LAB_10033698;
  }
switchD_10032d10_caseD_203:
  if (param_5 == 0x404) {
    if ((param_6 & 0xffffff00) == 0x44454700) {
      uVar17 = FUN_100343d8(0);
      if ((uVar17 & 1) == 0) {
        return 0;
      }
      (*pcVar5)();
      (*extraout_w11_18)(param_1);
LAB_10033698:
      FUN_100344d0();
      return 0;
    }
  }
  else {
LAB_1003312c:
    if (param_5 == 0x405) {
      if ((param_6 & 0xffffff00) == 0x44454700) {
        (*(code *)PTR_FUN_10134268)(param_4);
        return 0;
      }
    }
    else if (param_5 == 0x400 && (param_6 & 0xffffff00) == 0x44454700) {
      uVar17 = FUN_100343d8(1);
      if ((uVar17 & 1) == 0) {
        uVar6 = 0x400;
LAB_100336a8:
        (*(code *)PTR_FUN_10134240)(param_4,uVar6,0x44454745,param_7);
        return 0;
      }
      FUN_100338f8(param_1,param_7 != (int *)0x0);
      goto LAB_10033698;
    }
  }
  *local_a8 = 1;
  return 0;
}

