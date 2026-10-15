/*
 * FUN_1000385a at 1000385a
 * LRESULT __thiscall FUN_1000385a(void * this, void * param_1, undefined4 * param_2, HWND param_3, uint param_4, uint param_5, HWND param_6, undefined1 * param_7)
 * Address ranges: 1000385a-10003f7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

LRESULT __thiscall
FUN_1000385a(void *this,void *param_1,undefined4 *param_2,HWND param_3,uint param_4,uint param_5,
            HWND param_6,undefined1 *param_7)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  undefined3 extraout_var;
  uint uVar5;
  LPRECT ptVar6;
  HWND pHVar7;
  HWND pHVar8;
  LRESULT LVar9;
  undefined4 uVar10;
  UINT Msg;
  byte bStack_4d;
  HWND pHStack_4c;
  tagRECT tStack_48;
  RECT aRStack_38 [3];
  
  cVar1 = (**(code **)(*(int *)this + 0x1c))();
  if ((param_4 == 0x46) || (param_4 == 0x47)) {
    if ((param_2[7] == 0) && (bVar2 = FUN_10004949(0), bVar2)) {
      cVar3 = FUN_100041a5(this);
      if (CONCAT31(extraout_var,cVar3) == 1) {
        uVar5 = 0x204;
        if (*(char *)((int)this + 0x25) != '\0') {
          uVar5 = 0x207;
        }
      }
      else if (CONCAT31(extraout_var,cVar3) == 2) {
        uVar5 = 3;
      }
      else {
        uVar5 = 0;
      }
      param_6[6].unused = param_6[6].unused | uVar5;
      DAT_1006c240 = DAT_1006c240 + -1;
      LeaveCriticalSection(DAT_1006c230);
    }
  }
  else if (param_4 == 0x216) {
    *(undefined1 *)(param_2 + 0xb) = 1;
  }
  if (*(char *)(DAT_1006c210 + 0x7e6) == '\0') {
    if ((param_4 == 0x113) && (param_5 == 0xaaaa)) {
      bVar2 = FUN_10004949(0);
      if (!bVar2) {
        return 0;
      }
      cVar3 = (**(code **)(*(int *)this + 4))();
      pHStack_4c = (HWND)0x0;
      if (cVar3 != '\0') {
        bVar4 = FUN_10004193(this);
        *(byte *)((int)param_1 + 0x784) = bVar4 ^ 1;
        FUN_10004211(this);
        FUN_1005e2eb(DAT_1006c210);
        if (*(char *)((int)param_1 + 0x784) != '\0') {
          FUN_1005ec09(param_1,param_3,(int)param_2,1);
        }
        pHStack_4c = (HWND)(uint)bVar4;
      }
      if (((cVar1 == '\0') || (cVar3 == '\0')) || (*(char *)((int)param_2 + 0x2d) == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
LAB_10003c1e:
      FUN_1000431a(this,bVar2,(char)pHStack_4c);
      FUN_10004362(this);
      goto LAB_10003f4a;
    }
    if (cVar1 == '\0') {
      if (param_4 == 0x14) {
        return 1;
      }
LAB_10003b04:
      if (param_4 == 0x104) {
        if ((param_5 == 0xd) && (((uint)param_6 & 0x20000000) != 0)) {
          bVar2 = FUN_10004949(1);
          if (bVar2) {
            cVar1 = (**(code **)(*(int *)this + 0x2c))(param_3);
            FUN_100040b1(this,cVar1);
            DAT_1006c240 = DAT_1006c240 + -1;
            LeaveCriticalSection(DAT_1006c230);
          }
          else {
            PostMessageW(param_3,0x400,0x44454745,1);
          }
          (**(code **)(*(int *)this + 0x30))(param_3);
          return 0;
        }
        goto LAB_10003d9d;
      }
      goto LAB_10003d57;
    }
    if (param_4 < 0xa3) {
      if (param_4 == 0xa2) goto LAB_10003aea;
      if (param_4 < 0x1d) {
        if (param_4 != 0x1c) {
          if ((param_4 == 3) || (param_4 == 5)) goto LAB_10003aea;
          if (param_4 != 6) {
            if (param_4 == 0x14) {
              return 1;
            }
            goto LAB_10003d6a;
          }
        }
        bVar2 = FUN_10004949(5);
        if (bVar2) {
          cVar1 = (**(code **)(*(int *)this + 4))();
          if ((cVar1 == '\0') || (pHStack_4c._0_1_ = '\x01', *(char *)((int)param_2 + 0x2d) == '\0')
             ) {
            pHStack_4c._0_1_ = '\0';
          }
          cVar1 = FUN_10004193(this);
          FUN_1000431a(this,(char)pHStack_4c,cVar1);
          DAT_1006c240 = DAT_1006c240 + -1;
          LeaveCriticalSection(DAT_1006c230);
        }
      }
      else if (((param_4 == 0x46) || (param_4 == 0x47)) || (param_4 == 0xa1)) goto LAB_10003aea;
      goto LAB_10003d6a;
    }
    if (param_4 < 0x215) {
      if (param_4 == 0x214) {
        ptVar6 = FUN_1005ea93(param_1,&tStack_48,param_3,(int *)param_2[2],&param_6->unused,param_5)
        ;
        param_6->unused = ptVar6->left;
        param_6[1].unused = ptVar6->top;
        param_6[2].unused = ptVar6->right;
        param_6[3].unused = ptVar6->bottom;
        param_2[3] = param_6[2].unused - param_6->unused;
        param_2[4] = param_6[3].unused - param_6[1].unused;
        return 1;
      }
      if ((((param_4 == 0xa3) || (param_4 == 0xa4)) || (param_4 == 0xa5)) || (param_4 == 0xa6))
      goto LAB_10003aea;
      goto LAB_10003b04;
    }
    if (((param_4 == 0x216) || (param_4 == 0x231)) || (param_4 == 0x232)) {
LAB_10003aea:
      LVar9 = DefWindowProcW(param_3,param_4,param_5,(LPARAM)param_6);
      return LVar9;
    }
LAB_10003dec:
    if (((param_4 == 0x207) || (param_4 == 0x208)) ||
       ((param_4 == 0x20a || ((param_4 == 0x20b || (param_4 == 0x20c)))))) goto LAB_10003e11;
LAB_10003ea6:
    if (param_4 == 0x401) {
      if (param_5 == 0x44454745) {
        bVar2 = FUN_10004949(0);
        if (bVar2) {
          FUN_10004263(this,param_6);
          goto LAB_10003f4a;
        }
        Msg = 0x401;
        goto LAB_10003edd;
      }
    }
    else if ((param_4 == 0x404) && ((param_5 & 0xffffff00) == 0x44454700)) {
      bVar2 = FUN_10004949(0);
      if (!bVar2) {
        return 0;
      }
      (**(code **)(*(int *)this + 0x4c))();
      goto LAB_10003f4a;
    }
  }
  else {
    if (param_4 != 6) {
      if (param_4 == 0x14) {
        return 1;
      }
      if (param_4 == 0x1c) goto LAB_10003c31;
      if (param_4 != 0x113) goto LAB_10003d57;
      if (param_5 == 0xaaaa) {
        bVar2 = FUN_10004949(0);
        if (!bVar2) {
          return 0;
        }
        if (cVar1 == '\0') goto LAB_10003f4a;
        cVar1 = (**(code **)(*(int *)this + 4))();
        if ((cVar1 == '\0') || (bVar2 = true, *(char *)((int)param_2 + 0x2d) == '\0')) {
          bVar2 = false;
        }
        cVar1 = FUN_10004193(this);
        tStack_48.left = CONCAT31(tStack_48.left._1_3_,cVar1);
        pHStack_4c = (HWND)tStack_48.left;
        if (((bVar2) && (cVar1 == '\0')) && (*(char *)((int)param_1 + 0x788) != '\0')) {
          FUN_1005ed0c(param_3,(int)param_2,0,0,'\x01');
          pHStack_4c = (HWND)tStack_48.left;
        }
        goto LAB_10003c1e;
      }
      goto LAB_10003d9d;
    }
LAB_10003c31:
    if ((cVar1 == '\0') || (bVar2 = FUN_10004949(5), !bVar2)) goto LAB_10003d57;
    if (param_5 == 0) {
      if (param_4 == 0x1c) {
        pHVar7 = (HWND)GetWindowThreadProcessId(param_3,(LPDWORD)0x0);
        pHVar8 = param_6;
        if (pHVar7 != param_6) {
LAB_10003cdc:
          cVar1 = (**(code **)(*(int *)this + 0x20))(pHVar8);
          if (cVar1 == '\0') {
            SendNotifyMessageW(param_3,0x405,0x44454745,0x44454745);
          }
          else {
            DAT_1006c224 = (void *)0x0;
            ShowWindow(param_3,7);
            if (DAT_1006c224 != this) {
              (**(code **)(*(int *)this + 0x28))(param_3);
              FUN_1000431a(this,'\0','\0');
              cVar1 = FUN_10004193(this);
              if (cVar1 != '\0') {
                FUN_100040b1(this,'\0');
              }
            }
          }
        }
      }
      else {
        tStack_48.left = GetWindowThreadProcessId(param_6,(LPDWORD)0x0);
        pHVar8 = GetWindow(param_6,4);
        if ((pHVar8 == param_3) &&
           (pHVar8 = (HWND)tStack_48.left, (*(byte *)(DAT_1006c210 + 0x82a) & 1) == 0))
        goto LAB_10003cdc;
      }
    }
    else if ((*(char *)(param_2 + 0x11) == '\0') && (*(char *)((int)param_2 + 0x2d) == '\0')) {
      *(undefined1 *)(param_2 + 0x11) = 1;
      (**(code **)(*(int *)this + 0x24))(param_3);
      cVar1 = FUN_10004193(this);
      FUN_1000431a(this,'\x01',cVar1);
      *(undefined1 *)(param_2 + 0x11) = 0;
    }
    DAT_1006c240 = DAT_1006c240 + -1;
    LeaveCriticalSection(DAT_1006c230);
LAB_10003d57:
    if (0x205 < param_4) goto LAB_10003dec;
    if (param_4 == 0x205) {
LAB_10003e11:
      if (*(char *)((int)param_2 + 0x43) != '\0') {
        return 0;
      }
      bStack_4d = 0;
      bVar2 = FUN_10004949(0);
      if (bVar2) {
        *(undefined1 *)((int)param_2 + 0x43) = 1;
        cVar1 = (**(code **)(*(int *)this + 0x50))(aRStack_38);
        if (cVar1 != '\0') {
          uVar10 = FUN_1005f008(param_1,param_2,aRStack_38,(int)(short)param_6,
                                (int)(short)((uint)param_6 >> 0x10),(POINT *)&tStack_48,
                                *(char *)((int)this + 0x24) == '\0');
          bStack_4d = (byte)uVar10 ^ 1;
          param_6 = (HWND)CONCAT22((undefined2)tStack_48.top,(undefined2)tStack_48.left);
        }
        lpCriticalSection = DAT_1006c230;
        DAT_1006c240 = DAT_1006c240 + -1;
        *(undefined1 *)((int)param_2 + 0x43) = 0;
        LeaveCriticalSection(lpCriticalSection);
        if (bStack_4d != 0) {
          return 0;
        }
      }
      goto LAB_10003ea6;
    }
LAB_10003d6a:
    if (param_4 != 0x20) {
      if (param_4 == 0x200) {
        if (*(char *)((int)param_2 + 0x45) != '\0') {
          return 0;
        }
      }
      else if (((param_4 != 0x201) && (param_4 != 0x202)) && (param_4 != 0x204)) goto LAB_10003d9d;
      goto LAB_10003e11;
    }
    if (*(char *)((int)param_2 + 0x45) == '\0') {
      LVar9 = FUN_100047b4(this,(int)param_2,param_3,0x20,param_5,(LPARAM)param_6);
      return LVar9;
    }
  }
LAB_10003d9d:
  if (param_4 == 0x405) {
    if ((param_5 & 0xffffff00) == 0x44454700) {
      SetForegroundWindow(param_3);
      return 0;
    }
  }
  else if ((param_4 == 0x400) && ((param_5 & 0xffffff00) == 0x44454700)) {
    bVar2 = FUN_10004949(1);
    if (!bVar2) {
      Msg = 0x400;
LAB_10003edd:
      PostMessageW(param_3,Msg,0x44454745,(LPARAM)param_6);
      return 0;
    }
    FUN_100040b1(this,param_6 != (HWND)0x0);
LAB_10003f4a:
    DAT_1006c240 = DAT_1006c240 + -1;
    LeaveCriticalSection(DAT_1006c230);
    return 0;
  }
  *param_7 = 1;
  return 0;
}

