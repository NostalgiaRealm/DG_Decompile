/*
 * FUN_10025a40 at 10025a40
 * undefined FUN_10025a40(void)
 * Address ranges: 10025a40-1002638b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10025a40(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,uint param_5,
                int param_6,int *param_7)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  uint uVar16;
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
  code *pcVar17;
  int *piVar18;
  char *local_94;
  code *local_90;
  int local_8c;
  int *local_88;
  ulonglong local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  pcVar17 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_88 = param_1;
  if (*(int *)(param_1[2] + 0x94) == param_1[9]) {
    if (param_3 == (undefined4 *)0x0) goto switchD_10026238_caseD_106;
    if (param_5 < 0x100) {
      if (1 < param_5 - 7) goto switchD_10026238_caseD_106;
    }
    else {
      switch(param_5) {
      case 0x100:
      case 0x101:
      case 0x102:
      case 0x103:
      case 0x105:
      case 0x107:
      case 0x109:
        break;
      case 0x104:
        if ((param_6 == 0xd) && (((uint)param_7 >> 0x1d & 1) != 0)) {
          uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          pcVar17 = extraout_w11_08;
          goto LAB_10026268;
        }
        break;
      case 0x106:
      case 0x108:
        goto switchD_10026238_caseD_106;
      default:
        if (param_5 < 0x216) {
          if (param_5 == 0x113) {
            if (param_6 == 0xaaaa) {
              return 0;
            }
            goto switchD_10026238_caseD_106;
          }
          if (param_5 != 0x214) goto switchD_10026238_caseD_106;
          puVar2 = auStack_58;
LAB_100262a4:
          puVar13 = (undefined8 *)FUN_10007a08(param_2,puVar2,param_4,param_3[2],param_7,param_6);
          uVar15 = *puVar13;
          *(undefined8 *)(param_7 + 2) = puVar13[1];
          *(undefined8 *)param_7 = uVar15;
          param_3[3] = param_7[2] - *param_7;
          param_3[4] = param_7[3] - param_7[1];
          goto switchD_10026238_caseD_106;
        }
        if (0x216 < param_5) {
          if (param_5 != 0x312) goto switchD_10026238_caseD_106;
          break;
        }
LAB_10025ecc:
        *(undefined1 *)(param_3 + 0xb) = 1;
        goto switchD_10026238_caseD_106;
      }
    }
    if (param_3[1] != 0) {
      (*(code *)PTR_FUN_1009d1c4)(param_3[1],param_5,param_6,param_7);
    }
    goto switchD_10026238_caseD_106;
  }
  if (*(int *)(param_2 + 0x822) == 1) {
    if (param_5 != 0x104) {
      if ((param_5 == 0x113) && (param_6 == 0xaaaa)) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        cVar5 = (*extraout_w11)(param_1);
        if (cVar5 == '\0') {
          return 0;
        }
        uVar14 = FUN_10026b18(param_1 + -1);
        if ((uVar14 & 1) == 0) {
          (*(code *)PTR_FUN_1009d16c)(*param_3,&local_78);
          local_94 = (char *)0x0;
          local_90 = (code *)0x0;
          (*pcVar17)();
          uVar15 = (*extraout_w11_00)(param_1,&local_94,&local_90);
          if ((((char *)(local_70 - local_78) != local_94) ||
              ((code *)(local_6c - local_74) != local_90)) && ((char)param_1[0x22] == '\0')) {
            FUN_10007dd8(uVar15,*param_3,param_3,local_94,local_90,*(undefined1 *)(param_2 + 0x788))
            ;
            *(undefined1 *)(param_1 + 0x22) = 1;
          }
        }
        uVar10 = (*pcVar17)();
        pcVar17 = extraout_w11_01;
LAB_10026268:
        (*pcVar17)(uVar10);
        return 0;
      }
      goto LAB_10026070;
    }
  }
  else {
    if (*(int *)(param_2 + 0x822) == 2) {
      iVar12 = (*(code *)PTR_FUN_1009d134)(param_3[5],param_4,param_5,param_6,param_7);
      return iVar12;
    }
    local_94 = (char *)(param_2 + 0x970);
    local_80 = CONCAT44(local_80._4_4_,local_94);
    cVar5 = *local_94;
    local_90 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (param_5 < 0x46) {
      if (param_5 == 6) {
        if (param_6 != 0) {
LAB_10025d7c:
          if ((char)param_1[0xf] == '\0') {
            cVar5 = '\x01';
            goto LAB_10025d18;
          }
        }
      }
      else {
        if (param_5 != 0x1c) {
          if (param_5 == 0x21) {
            *(undefined1 *)(param_1 + 0xf) = 1;
          }
          goto LAB_10025d18;
        }
        if (param_6 == 1) goto LAB_10025d7c;
      }
      cVar5 = '\0';
    }
    else if (param_5 < 0x47) {
      if ((param_3[7] == 0) && (uVar14 = FUN_10026b18(param_1 + -1), (uVar14 & 1) != 0)) {
        uVar10 = (*local_90)();
        cVar6 = (*extraout_w11_02)(uVar10);
        uVar16 = 3;
        if (cVar6 == '\0') {
          uVar16 = 0x207;
        }
        param_7[6] = param_7[6] | uVar16;
      }
    }
    else if (((param_5 - 0x201 < 4) && ((9U >> (ulonglong)(param_5 - 0x201 & 0x1f) & 1) != 0)) &&
            (cVar5 == '\0')) {
      *(undefined1 *)(param_1 + 0xf) = 0;
      cVar5 = '\x01';
    }
LAB_10025d18:
    iVar12 = local_8c;
    if (*local_94 != cVar5) {
      piVar18 = param_3 + 10;
      *local_94 = cVar5;
      iVar11 = *piVar18;
      iVar3 = param_2;
      if (cVar5 == '\0') {
        *piVar18 = iVar11 + 1;
        iVar11 = (*(code *)PTR_FUN_1009d200)(1);
        iVar12 = local_8c;
        local_8c = param_2;
        while (param_2 = local_8c, iVar11 < 0) {
          *piVar18 = *piVar18 + 1;
          iVar11 = (*(code *)PTR_FUN_1009d200)(1);
          iVar12 = local_8c;
        }
      }
      else {
        while (local_8c = iVar3, param_2 = local_8c, iVar11 != 0) {
          (*(code *)PTR_FUN_1009d200)(0);
          iVar11 = *piVar18 + -1;
          *piVar18 = iVar11;
          iVar12 = local_8c;
          iVar3 = local_8c;
        }
      }
    }
    local_8c = iVar12;
    piVar18 = param_1 + -1;
    if (param_5 < 0xa1) {
      if (param_5 < 0x1c) {
        if (param_5 < 6) {
          bVar4 = (param_5 - 3 & 0xfffffffd) == 0;
          goto LAB_1002606c;
        }
        if (6 < param_5) {
          if ((0x14 < param_5) || ((0x108000U >> (ulonglong)(param_5 & 0x1f) & 1) == 0))
          goto LAB_10026070;
          goto switchD_10026238_caseD_106;
        }
      }
      else {
        if (0x1c < param_5) {
          if (param_5 < 0x46) {
            if (param_5 != 0x20) {
              if (param_5 == 0x21) {
                if ((*(char *)(param_2 + 0x7bb) == '\0') && (param_3[7] == 0)) {
                  iVar12 = (*(code *)PTR_FUN_1009d148)(param_4,0x21,param_6,param_7);
                }
                else {
                  iVar12 = (*(code *)PTR_FUN_1009d134)(param_3[5],param_4,0x21,param_6,param_7);
                }
                piVar1 = local_88;
                if (*(char *)((int)param_3 + 0x2d) == '\0') {
                  if (iVar12 - 1U < 2) {
                    uVar8 = FUN_10026b18(piVar18);
                    (*pcVar17)();
                    uVar9 = (*extraout_w11_06)(piVar1);
                    FUN_10026730(piVar18,uVar9,uVar8);
                    return iVar12;
                  }
                  return iVar12;
                }
                return iVar12;
              }
              goto LAB_10026070;
            }
            goto LAB_10025ef4;
          }
          if (param_5 < 0x48) goto switchD_10026238_caseD_106;
          bVar4 = param_5 == 0x85;
LAB_1002606c:
          if (bVar4) goto switchD_10026238_caseD_106;
          goto LAB_10026070;
        }
        if (param_6 == 0) {
          uVar10 = (*(code *)PTR_FUN_1009d164)();
          *(undefined4 *)(param_2 + 200) = uVar10;
          (*(code *)PTR_FUN_1009d1d4)();
        }
        else {
          (*(code *)PTR_FUN_1009d1e0)(*(undefined4 *)(param_2 + 200));
        }
        *(undefined1 *)((int)param_1 + 0x3b) = 1;
      }
      piVar1 = local_88;
      if (*(char *)((int)param_3 + 0x2d) == '\0') {
        local_80 = (ulonglong)*(uint *)(*local_88 + 4);
        uVar8 = FUN_10026b18(piVar18);
        (*pcVar17)();
        uVar9 = (*extraout_w11_07)(piVar1);
        FUN_10026730(piVar18,uVar9,uVar8);
      }
      if ((*(char *)(param_2 + 0x7bb) == '\0') && (param_3[7] == 0)) {
switchD_10026238_caseD_106:
        iVar12 = (*(code *)PTR_FUN_1009d148)(param_4,param_5,param_6,param_7);
        return iVar12;
      }
      goto LAB_10026070;
    }
    if (param_5 < 0xa7) goto switchD_10026238_caseD_106;
    if (0x213 < param_5) {
      if (param_5 < 0x215) {
        puVar2 = auStack_68;
        goto LAB_100262a4;
      }
      if (param_5 != 0x216) {
        if (param_5 - 0x231 < 2) goto switchD_10026238_caseD_106;
        if (param_5 != 0x400 || param_6 != 0x44454745) goto LAB_10026070;
        piVar1 = param_1 + 0xc;
        do {
          iVar12 = *piVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar12 + 1 != 1) {
          (*(code *)PTR_FUN_1009d0dc)(1000);
          (*(code *)PTR_FUN_1009d1c4)(param_4,0x400,0x44454745,param_7);
          do {
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          return 0;
        }
        if (param_7 == (int *)0x0) {
          uVar14 = FUN_10026b18(piVar18);
          if ((uVar14 & 1) != 0) {
            return 0;
          }
        }
        else {
          if (param_7 != (int *)0x1) {
            return 0;
          }
          uVar14 = FUN_10026b18(piVar18);
          if ((uVar14 & 1) == 0) {
            return 0;
          }
        }
        goto LAB_10025bdc;
      }
      goto LAB_10025ecc;
    }
    if (param_5 != 0x104) {
      if (param_5 == 0x113) {
        if (param_6 == 0xaaaa) {
          uVar10 = (*pcVar17)();
          cVar5 = (*extraout_w11_03)(uVar10);
          bVar7 = 0;
          if (cVar5 != '\0') {
            bVar7 = FUN_10026b18(piVar18);
            if (*(char *)((int)param_1 + 0x3b) != '\0') {
              *(char *)((int)param_1 + 0x3b) = '\0';
              *(byte *)(param_2 + 0x784) = bVar7 ^ 1;
              (*pcVar17)();
              (*extraout_w11_04)(piVar18);
            }
            if ((bVar7 == 0) && (*(byte *)(param_2 + 0x784) != 0)) {
              FUN_10007c38(param_2,param_4,param_3);
            }
            uVar10 = (*pcVar17)();
            (*extraout_w11_05)(uVar10);
            if (*(char *)((int)param_3 + 0x2d) != '\0') {
              uVar15 = 1;
              goto LAB_10025ff0;
            }
          }
          uVar15 = 0;
LAB_10025ff0:
          FUN_10026730(piVar18,uVar15,bVar7);
          return 0;
        }
        goto LAB_10026070;
      }
      if (param_5 != 0x200) goto LAB_10026070;
LAB_10025ef4:
      if (*(char *)local_80 == '\0') goto switchD_10026238_caseD_106;
      goto LAB_10026070;
    }
  }
  if ((param_6 == 0xd) && (((uint)param_7 >> 0x1d & 1) != 0)) {
LAB_10025bdc:
    FUN_100269d8(param_1 + -1);
    return 0;
  }
LAB_10026070:
  iVar12 = (*(code *)PTR_FUN_1009d134)(param_3[5],param_4,param_5,param_6,param_7);
  return iVar12;
}

