/*
 * FUN_1000cb44 at 1000cb44
 * LRESULT __fastcall FUN_1000cb44(undefined4 * param_1, void * param_2, int param_3, HWND param_4, uint param_5, WPARAM param_6, LONG * param_7)
 * Address ranges: 1000cb44-1000cfd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT __fastcall
FUN_1000cb44(undefined4 *param_1,void *param_2,int param_3,HWND param_4,uint param_5,WPARAM param_6,
            LONG *param_7)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  HWND pHVar4;
  LRESULT LVar5;
  int iVar6;
  LPRECT ptVar7;
  bool bVar8;
  tagRECT local_18;
  
  cVar2 = *(char *)((int)param_2 + 0x970);
  if (param_5 == 6) {
    if (param_6 != 0) {
LAB_1000cbe0:
      if (*(char *)(param_1 + 0x10) == '\0') {
        cVar2 = '\x01';
        goto LAB_1000cc10;
      }
    }
LAB_1000cbed:
    cVar2 = '\0';
  }
  else {
    if (param_5 == 0x1c) {
      if (param_6 == 1) goto LAB_1000cbe0;
      goto LAB_1000cbed;
    }
    if (param_5 == 0x21) {
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    else if (param_5 == 0x46) {
      if ((*(int *)(param_3 + 0x1c) == 0) &&
         (cVar3 = (**(code **)(*(int *)param_1[3] + 0x24))(), cVar3 != '\0')) {
        cVar3 = (**(code **)(*(int *)param_1[3] + 0x28))();
        param_7[6] = param_7[6] | (-(uint)(cVar3 != '\0') & 0xfffffdfc) + 0x207;
      }
    }
    else if (((param_5 == 0x201) || (param_5 == 0x204)) && (cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x10) = 0;
      cVar2 = '\x01';
    }
  }
LAB_1000cc10:
  if (*(char *)((int)param_2 + 0x970) != cVar2) {
    *(char *)((int)param_2 + 0x970) = cVar2;
    iVar6 = *(int *)(param_3 + 0x28);
    if (cVar2 == '\0') {
      *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
      iVar6 = ShowCursor(1);
      while (iVar6 < 0) {
        *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
        iVar6 = ShowCursor(1);
      }
    }
    else {
      while (iVar6 != 0) {
        ShowCursor(0);
        piVar1 = (int *)(param_3 + 0x28);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
      }
    }
  }
  if (param_5 < 0xa3) {
    if (param_5 == 0xa2) goto LAB_1000cd2f;
    if (0x20 < param_5) {
      if (param_5 == 0x21) {
        if ((*(char *)((int)param_2 + 0x7bb) == '\0') && (*(int *)(param_3 + 0x1c) == 0)) {
          iVar6 = DefWindowProcW(param_4,0x21,param_6,(LPARAM)param_7);
        }
        else {
          iVar6 = CallWindowProcW(*(WNDPROC *)(param_3 + 0x14),param_4,0x21,param_6,(LPARAM)param_7)
          ;
        }
        if (*(char *)(param_3 + 0x2d) == '\0') {
          if ((iVar6 != 1) && (iVar6 != 2)) {
            return iVar6;
          }
          cVar2 = (**(code **)(*(int *)param_1[3] + 0x24))();
          cVar3 = (**(code **)(param_1[1] + 4))();
          FUN_1000d244(param_1,cVar3,cVar2);
          return iVar6;
        }
        return iVar6;
      }
      if ((((param_5 != 0x46) && (param_5 != 0x47)) && (param_5 != 0x85)) && (param_5 != 0xa1))
      goto LAB_1000cd63;
      goto LAB_1000cd2f;
    }
    if (param_5 == 0x20) goto LAB_1000cd3f;
    if ((param_5 == 3) || (param_5 == 5)) goto LAB_1000cd2f;
    if (param_5 != 6) {
      if ((param_5 == 0xf) || (param_5 == 0x14)) goto LAB_1000cd2f;
      if (param_5 != 0x1c) goto LAB_1000cd63;
      if (param_6 == 0) {
        pHVar4 = GetCapture();
        *(HWND *)((int)param_2 + 200) = pHVar4;
        ReleaseCapture();
      }
      else {
        SetCapture(*(HWND *)((int)param_2 + 200));
      }
      *(undefined1 *)((int)param_1 + 0x3f) = 1;
    }
    if (*(char *)(param_3 + 0x2d) == '\0') {
      cVar2 = (**(code **)(*(int *)param_1[3] + 0x24))();
      cVar3 = (**(code **)(param_1[1] + 4))();
      FUN_1000d244(param_1,cVar3,cVar2);
    }
    if (*(char *)((int)param_2 + 0x7bb) != '\0') goto LAB_1000cd63;
    bVar8 = *(int *)(param_3 + 0x1c) == 0;
  }
  else {
    if (param_5 < 0x114) {
      if (param_5 == 0x113) {
        if (param_6 != 0xaaaa) goto LAB_1000cd63;
        cVar3 = (**(code **)(param_1[1] + 4))();
        cVar2 = '\0';
        if (cVar3 != '\0') {
          cVar2 = (**(code **)(*(int *)param_1[3] + 0x24))();
          if (*(char *)((int)param_1 + 0x3f) != '\0') {
            *(undefined1 *)((int)param_1 + 0x3f) = 0;
            *(char *)((int)param_2 + 0x784) = cVar2 == '\0';
            (**(code **)*param_1)();
          }
          if ((cVar2 == '\0') && (*(char *)((int)param_2 + 0x784) != '\0')) {
            FUN_10003bc5(param_2,param_4,param_3);
          }
          (**(code **)(*(int *)param_1[3] + 0x18))();
          if (*(char *)(param_3 + 0x2d) != '\0') {
            cVar3 = '\x01';
            goto LAB_1000cecf;
          }
        }
        cVar3 = '\0';
LAB_1000cecf:
        FUN_1000d244(param_1,cVar3,cVar2);
        return 0;
      }
      if ((((param_5 == 0xa3) || (param_5 == 0xa4)) || (param_5 == 0xa5)) || (param_5 == 0xa6))
      goto LAB_1000cd2f;
      if (((param_5 == 0x104) && (param_6 == 0xd)) && (((uint)param_7 & 0x20000000) != 0)) {
LAB_1000ce45:
        FUN_1000d2a3(param_1);
        return 0;
      }
      goto LAB_1000cd63;
    }
    if (param_5 != 0x200) {
      if (param_5 == 0x214) {
        ptVar7 = FUN_10003a4f(param_2,&local_18,param_4,*(int **)(param_3 + 8),param_7,param_6);
        *param_7 = ptVar7->left;
        param_7[1] = ptVar7->top;
        param_7[2] = ptVar7->right;
        param_7[3] = ptVar7->bottom;
        *(LONG *)(param_3 + 0xc) = param_7[2] - *param_7;
        *(LONG *)(param_3 + 0x10) = param_7[3] - param_7[1];
      }
      else if (param_5 == 0x216) {
        *(undefined1 *)(param_3 + 0x2c) = 1;
      }
      else if ((param_5 != 0x231) && (param_5 != 0x232)) {
        if ((param_5 == 0x400) && (param_6 == 0x44454745)) {
          piVar1 = param_1 + 0xd;
          LOCK();
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          if (iVar6 != 0) {
            Sleep(1000);
            PostMessageW(param_4,0x400,0x44454745,(LPARAM)param_7);
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            return 0;
          }
          if (param_7 == (LONG *)0x0) {
            cVar2 = (**(code **)(*(int *)param_1[3] + 0x24))();
            if (cVar2 != '\0') {
              return 0;
            }
          }
          else {
            if (param_7 != (LONG *)0x1) {
              return 0;
            }
            cVar2 = (**(code **)(*(int *)param_1[3] + 0x24))();
            if (cVar2 == '\0') {
              return 0;
            }
          }
          goto LAB_1000ce45;
        }
        goto LAB_1000cd63;
      }
      goto LAB_1000cd2f;
    }
LAB_1000cd3f:
    bVar8 = *(char *)((int)param_2 + 0x970) == '\0';
  }
  if (bVar8) {
LAB_1000cd2f:
    LVar5 = DefWindowProcW(param_4,param_5,param_6,(LPARAM)param_7);
    return LVar5;
  }
LAB_1000cd63:
  LVar5 = CallWindowProcW(*(WNDPROC *)(param_3 + 0x14),param_4,param_5,param_6,(LPARAM)param_7);
  return LVar5;
}

