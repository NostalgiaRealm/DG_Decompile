/*
 * FUN_18002fe80 at 18002fe80
 * LRESULT __fastcall FUN_18002fe80(longlong * param_1, longlong param_2, undefined8 * param_3, HWND param_4, uint param_5, ulonglong param_6, HWND param_7, undefined1 * param_8)
 * Address ranges: 18002fe80-180030670
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

LRESULT FUN_18002fe80(longlong *param_1,longlong param_2,undefined8 *param_3,HWND param_4,
                     uint param_5,ulonglong param_6,HWND param_7,undefined1 *param_8)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  DWORD DVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  longlong lVar9;
  longlong *plVar10;
  LRESULT LVar11;
  undefined7 extraout_var_01;
  LPRECT ptVar12;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  HWND pHVar13;
  undefined7 extraout_var_04;
  undefined8 uVar14;
  UINT Msg;
  ulonglong uVar15;
  byte bVar16;
  undefined2 local_res8 [2];
  undefined2 local_resc;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar17;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar18;
  tagRECT local_78;
  RECT local_68 [3];
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  local_res10 = param_2;
  cVar1 = (**(code **)(*param_1 + 0x38))();
  cVar5 = '\x01';
  if ((param_5 == 0x46) || (param_5 == 0x47)) {
    if ((param_3[6] == 0) && (bVar2 = FUN_1800312b8(0), bVar2)) {
      uVar7 = 0;
      cVar3 = FUN_1800308a8(param_1);
      iVar6 = (int)CONCAT71(extraout_var,cVar3);
      if (iVar6 == 1) {
        uVar7 = (-(uint)(*(char *)((longlong)param_1 + 0x41) != '\0') & 3) + 0x204;
      }
      else if (iVar6 == 2) {
        uVar7 = 3;
      }
      param_7[8].unused = param_7[8].unused | uVar7;
      FUN_180031344();
    }
  }
  else if (param_5 == 0x216) {
    *(undefined1 *)((longlong)param_3 + 0x44) = 1;
  }
  if (*(char *)(DAT_180111f20 + 0x882) == '\0') {
    if ((param_5 == 0x113) && (param_6 == 0xaaaa)) {
      bVar2 = FUN_1800312b8(0);
      if (!bVar2) {
        return 0;
      }
      cVar3 = (**(code **)(*param_1 + 8))(param_1);
      bVar2 = false;
      if (cVar3 != '\0') {
        cVar4 = FUN_1800308a8(param_1);
        iVar6 = (int)CONCAT71(extraout_var_00,cVar4);
        bVar2 = iVar6 != 0;
        *(bool *)((longlong)param_1 + 0x43) = bVar2;
        *(bool *)(local_res10 + 0x820) = iVar6 == 0;
        lVar9 = (**(code **)(*param_1 + 0x28))(param_1);
        uVar7 = (**(code **)(*param_1 + 0x20))(param_1);
        if (((lVar9 != 0) &&
            (plVar10 = (longlong *)(&DAT_1801128e0)[(ulonglong)uVar7 * 0x4b],
            plVar10 != (longlong *)0x0)) &&
           (plVar10 = (longlong *)
                      (**(code **)(*plVar10 + 0x60))
                                (plVar10,lVar9,0,0,CONCAT44(uVar17,4),CONCAT44(uVar18,2),2,0,0,0),
           plVar10 != (longlong *)0x0)) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
        if (*(HWND *)(DAT_180111f20 + 0x3b0) != (HWND)0x0) {
          PostMessageW(*(HWND *)(DAT_180111f20 + 0x3b0),0x408,0,0);
        }
        if (*(char *)(local_res10 + 0x820) != '\0') {
          FUN_1800f95c0(local_res10,param_4,(longlong)param_3,'\x01');
        }
      }
      if (((cVar1 == '\0') || (cVar3 == '\0')) || (*(char *)((longlong)param_3 + 0x45) == '\0')) {
        cVar5 = '\0';
      }
LAB_1800302f1:
      FUN_180030a4c(param_1,cVar5,bVar2);
      FUN_180030c10(param_1);
      goto LAB_180030638;
    }
    if (cVar1 == '\0') {
      if (param_5 == 0x14) {
        return 1;
      }
LAB_1800301cd:
      if (param_5 == 0x104) {
        if ((param_6 == 0xd) && (((ulonglong)param_7 >> 0x1d & 1) != 0)) {
          bVar2 = FUN_1800312b8(1);
          if (bVar2) {
            cVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_4);
            FUN_180030750(param_1,cVar1);
            FUN_180031344();
          }
          else {
            PostMessageW(param_4,0x400,0x44454745,1);
          }
          (**(code **)(*param_1 + 0x60))(param_1,param_4);
          return 0;
        }
        goto LAB_1800305bf;
      }
      goto LAB_180030450;
    }
    if (0xa2 < param_5) {
      if ((((param_5 == 0xa3) || (param_5 == 0xa4)) || (param_5 == 0xa5)) || (param_5 == 0xa6)) {
LAB_1800300d9:
        LVar11 = DefWindowProcW(param_4,param_5,param_6,(LPARAM)param_7);
        return LVar11;
      }
      if (param_5 == 0x214) {
        ptVar12 = FUN_1800f9404(local_res10,&local_78,param_4,(longlong *)param_3[2],
                                &param_7->unused,param_6);
        uVar14 = *(undefined8 *)&ptVar12->right;
        *(undefined8 *)param_7 = *(undefined8 *)ptVar12;
        *(undefined8 *)(param_7 + 2) = uVar14;
        *(int *)(param_3 + 3) = param_7[2].unused - param_7->unused;
        *(int *)((longlong)param_3 + 0x1c) = param_7[3].unused - param_7[1].unused;
        return 1;
      }
      if (((param_5 == 0x216) || (param_5 == 0x231)) || (param_5 == 0x232)) goto LAB_1800300d9;
      goto LAB_1800301cd;
    }
    if (((param_5 == 0xa2) || (param_5 == 3)) || (param_5 == 5)) goto LAB_1800300d9;
    if (param_5 == 6) {
LAB_1800300ef:
      bVar2 = FUN_1800312b8(5);
      if (bVar2) {
        cVar1 = (**(code **)(*param_1 + 8))(param_1);
        if ((cVar1 == '\0') || (*(char *)((longlong)param_3 + 0x45) == '\0')) {
          cVar1 = '\0';
        }
        else {
          cVar1 = '\x01';
        }
        cVar5 = FUN_1800308a8(param_1);
        bVar2 = (int)CONCAT71(extraout_var_01,cVar5) != 0;
        *(bool *)((longlong)param_1 + 0x43) = bVar2;
        FUN_180030a4c(param_1,cVar1,bVar2);
        FUN_180031344();
      }
    }
    else {
      if (param_5 == 0x14) {
        return 1;
      }
      if (param_5 == 0x1c) goto LAB_1800300ef;
      if (((param_5 == 0x46) || (param_5 == 0x47)) || (param_5 == 0xa1)) goto LAB_1800300d9;
    }
LAB_18003045b:
    if (param_5 == 0x20) {
      if (*(char *)((longlong)param_3 + 0x5d) == '\0') {
        LVar11 = FUN_1800310e4(param_1,(longlong)param_3,param_4,0x20,param_6,(LPARAM)param_7);
        return LVar11;
      }
    }
    else {
      if (param_5 == 0x200) {
        if (*(char *)((longlong)param_3 + 0x5d) != '\0') {
          return 0;
        }
LAB_1800304d7:
        if (*(char *)((longlong)param_3 + 0x5b) != '\0') {
          return 0;
        }
        bVar2 = FUN_1800312b8(0);
        if (bVar2) {
          *(undefined1 *)((longlong)param_3 + 0x5b) = 1;
          bVar16 = 0;
          cVar1 = (**(code **)(*param_1 + 0xa0))(param_1,local_68);
          if (cVar1 != '\0') {
            uVar14 = FUN_1800f9900(local_res10,param_3,local_68,(int)(short)param_7,
                                   (int)(short)((ulonglong)param_7 >> 0x10),(tagPOINT)local_res8,
                                   (char)param_1[8] == '\0');
            bVar16 = (byte)uVar14 ^ 1;
            param_7 = (HWND)(ulonglong)CONCAT22(local_resc,local_res8[0]);
          }
          *(undefined1 *)((longlong)param_3 + 0x5b) = 0;
          FUN_180031344();
          if (bVar16 != 0) {
            return 0;
          }
        }
      }
      else if (((param_5 == 0x201) || (param_5 == 0x202)) || (param_5 == 0x204)) goto LAB_1800304d7;
LAB_180030579:
      if ((param_5 == 0x401) && (param_6 == 0x44454745)) {
        bVar2 = FUN_1800312b8(0);
        if (!bVar2) {
          Msg = 0x401;
          goto LAB_1800305a8;
        }
        FUN_180030964(param_1,param_7);
        goto LAB_180030638;
      }
    }
  }
  else {
    if (param_5 == 6) {
LAB_180030306:
      if ((cVar1 == '\0') || (bVar2 = FUN_1800312b8(5), !bVar2)) goto LAB_180030450;
      if (param_6 == 0) {
        if (param_5 == 0x1c) {
          DVar8 = GetWindowThreadProcessId(param_4,(LPDWORD)0x0);
          if ((HWND)(ulonglong)DVar8 != param_7) {
            uVar15 = (ulonglong)param_7 & 0xffffffff;
LAB_1800303ca:
            cVar1 = (**(code **)(*param_1 + 0x40))(param_1,uVar15);
            if (cVar1 == '\0') {
              SendNotifyMessageW(param_4,0x405,0x44454745,0x44454745);
            }
            else {
              DAT_180111f50 = (longlong *)0x0;
              ShowWindow(param_4,7);
              if (DAT_180111f50 != param_1) {
                (**(code **)(*param_1 + 0x50))(param_1);
                FUN_180030a4c(param_1,'\0','\0');
                cVar1 = FUN_1800308a8(param_1);
                iVar6 = (int)CONCAT71(extraout_var_04,cVar1);
                *(bool *)((longlong)param_1 + 0x43) = iVar6 != 0;
                if (iVar6 != 0) {
                  FUN_180030750(param_1,'\0');
                }
              }
            }
          }
        }
        else {
          DVar8 = GetWindowThreadProcessId(param_7,(LPDWORD)0x0);
          uVar15 = (ulonglong)DVar8;
          pHVar13 = GetWindow(param_7,4);
          if ((pHVar13 == param_4) && ((*(byte *)(DAT_180111f20 + 0x8c6) & 1) == 0))
          goto LAB_1800303ca;
        }
      }
      else if ((*(char *)((longlong)param_3 + 0x5c) == '\0') &&
              (*(char *)((longlong)param_3 + 0x45) == '\0')) {
        *(undefined1 *)((longlong)param_3 + 0x5c) = 1;
        (**(code **)(*param_1 + 0x48))(param_1,param_4);
        cVar1 = FUN_1800308a8(param_1);
        bVar2 = (int)CONCAT71(extraout_var_03,cVar1) != 0;
        *(bool *)((longlong)param_1 + 0x43) = bVar2;
        FUN_180030a4c(param_1,'\x01',bVar2);
        *(undefined1 *)((longlong)param_3 + 0x5c) = 0;
      }
      FUN_180031344();
LAB_180030450:
      if (param_5 < 0x206) {
        if (param_5 != 0x205) goto LAB_18003045b;
      }
      else if ((((param_5 != 0x207) && (param_5 != 0x208)) && (param_5 != 0x20a)) &&
              ((param_5 != 0x20b && (param_5 != 0x20c)))) goto LAB_180030579;
      goto LAB_1800304d7;
    }
    if (param_5 == 0x14) {
      return 1;
    }
    if (param_5 == 0x1c) goto LAB_180030306;
    if (param_5 != 0x113) goto LAB_180030450;
    if (param_6 == 0xaaaa) {
      bVar2 = FUN_1800312b8(0);
      if (!bVar2) {
        return 0;
      }
      if (cVar1 == '\0') goto LAB_180030638;
      cVar1 = (**(code **)(*param_1 + 8))(param_1);
      if ((cVar1 == '\0') || (cVar5 = '\x01', *(char *)((longlong)param_3 + 0x45) == '\0')) {
        cVar5 = '\0';
      }
      plVar10 = param_1;
      cVar1 = FUN_1800308a8(param_1);
      iVar6 = (int)CONCAT71(extraout_var_02,cVar1);
      bVar2 = iVar6 != 0;
      *(bool *)((longlong)param_1 + 0x43) = bVar2;
      if (((cVar5 != '\0') && (iVar6 == 0)) && (*(char *)(local_res10 + 0x824) != '\0')) {
        FUN_1800f9720(plVar10,param_4,(longlong)param_3,0,0,'\x01');
      }
      goto LAB_1800302f1;
    }
  }
LAB_1800305bf:
  uVar15 = param_6 & 0xffffff00;
  if (param_5 == 0x404) {
    if (uVar15 == 0x44454700) {
      bVar2 = FUN_1800312b8(0);
      if (!bVar2) {
        return 0;
      }
      (**(code **)(*param_1 + 0x98))(param_1);
LAB_180030638:
      FUN_180031344();
      return 0;
    }
  }
  else if (param_5 == 0x405) {
    if (uVar15 == 0x44454700) {
      SetForegroundWindow(param_4);
      return 0;
    }
  }
  else if ((param_5 == 0x400) && (uVar15 == 0x44454700)) {
    bVar2 = FUN_1800312b8(1);
    if (!bVar2) {
      Msg = 0x400;
LAB_1800305a8:
      PostMessageW(param_4,Msg,0x44454745,(LPARAM)param_7);
      return 0;
    }
    FUN_180030750(param_1,param_7 != (HWND)0x0);
    goto LAB_180030638;
  }
  *param_8 = 1;
  return 0;
}

