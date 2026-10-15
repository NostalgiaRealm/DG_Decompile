/*
 * FUN_18001d9f0 at 18001d9f0
 * LRESULT __fastcall FUN_18001d9f0(undefined8 * param_1, longlong param_2, longlong param_3, HWND param_4, uint param_5, WPARAM param_6, LONG * param_7)
 * Address ranges: 18001d9f0-18001debb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

LRESULT FUN_18001d9f0(undefined8 *param_1,longlong param_2,longlong param_3,HWND param_4,
                     uint param_5,WPARAM param_6,LONG *param_7)

{
  int *piVar1;
  LONG LVar2;
  LONG LVar3;
  LONG LVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  HWND pHVar9;
  LRESULT LVar10;
  longlong lVar11;
  LPRECT ptVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  tagRECT local_58;
  
  cVar5 = *(char *)(param_2 + 0xa0c);
  cVar6 = '\x01';
  lVar11 = param_2;
  lVar13 = param_3;
  pHVar9 = param_4;
  if (param_5 == 6) {
    if (param_6 != 0) {
LAB_18001dad8:
      if (*(char *)(param_1 + 0xd) == '\0') {
LAB_18001dade:
        cVar5 = '\x01';
        goto LAB_18001daa3;
      }
    }
LAB_18001daa0:
    cVar5 = '\0';
  }
  else {
    if (param_5 == 0x1c) {
      if (param_6 == 1) goto LAB_18001dad8;
      goto LAB_18001daa0;
    }
    if (param_5 == 0x21) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    else if (param_5 == 0x46) {
      if ((*(longlong *)(param_3 + 0x30) == 0) &&
         (cVar7 = (**(code **)(*(longlong *)param_1[3] + 0x40))(), cVar7 != '\0')) {
        cVar7 = (**(code **)(*(longlong *)param_1[3] + 0x48))();
        param_7[8] = param_7[8] | (-(uint)(cVar7 != '\0') & 0xfffffdfc) + 0x207;
      }
    }
    else if (((param_5 == 0x201) || (param_5 == 0x204)) && (cVar5 == '\0')) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      goto LAB_18001dade;
    }
  }
LAB_18001daa3:
  uVar14 = (uint)pHVar9;
  if (*(char *)(param_2 + 0xa0c) != cVar5) {
    *(char *)(param_2 + 0xa0c) = cVar5;
    iVar8 = *(int *)(param_3 + 0x40);
    if (cVar5 == '\0') {
      *(int *)(param_3 + 0x40) = iVar8 + 1;
      iVar8 = ShowCursor(1);
      while (uVar14 = (uint)pHVar9, iVar8 < 0) {
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
        iVar8 = ShowCursor(1);
      }
    }
    else {
      while (iVar8 != 0) {
        ShowCursor(0);
        uVar14 = (uint)pHVar9;
        piVar1 = (int *)(param_3 + 0x40);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
      }
    }
  }
  cVar5 = '\0';
  if (param_5 < 0xa3) {
    if (param_5 == 0xa2) goto LAB_18001dbca;
    if (0x20 < param_5) {
      if (param_5 == 0x21) {
        if ((*(char *)(param_2 + 0x857) == '\0') && (*(longlong *)(param_3 + 0x30) == 0)) {
          lVar11 = DefWindowProcW(param_4,0x21,param_6,(LPARAM)param_7);
          uVar14 = (uint)param_7;
        }
        else {
          lVar11 = CallWindowProcW(*(WNDPROC *)(param_3 + 0x20),param_4,0x21,param_6,(LPARAM)param_7
                                  );
          uVar14 = (uint)param_6;
        }
        if (*(char *)(param_3 + 0x45) == '\0') {
          if (lVar11 == 1 || lVar11 == 2) {
            cVar5 = (**(code **)(*(longlong *)param_1[3] + 0x40))();
            cVar6 = (**(code **)(param_1[1] + 8))();
            FUN_18001e278((longlong)param_1,cVar6,cVar5,uVar14);
            return lVar11;
          }
          return lVar11;
        }
        return lVar11;
      }
      if (((param_5 != 0x46) && (param_5 != 0x47)) && ((param_5 != 0x85 && (param_5 != 0xa1))))
      goto LAB_18001dc01;
      goto LAB_18001dbca;
    }
    if (param_5 == 0x20) goto LAB_18001dbda;
    if ((param_5 == 3) || (param_5 == 5)) goto LAB_18001dbca;
    if (param_5 != 6) {
      if ((param_5 == 0xf) || (param_5 == 0x14)) goto LAB_18001dbca;
      if (param_5 != 0x1c) goto LAB_18001dc01;
      if (param_6 == 0) {
        pHVar9 = GetCapture();
        *(HWND *)(param_2 + 0x120) = pHVar9;
        ReleaseCapture();
      }
      else {
        SetCapture(*(HWND *)(param_2 + 0x120));
      }
      *(undefined1 *)((longlong)param_1 + 0x67) = 1;
    }
    if (*(char *)(param_3 + 0x45) == '\0') {
      cVar5 = (**(code **)(*(longlong *)param_1[3] + 0x40))();
      cVar6 = (**(code **)(param_1[1] + 8))();
      FUN_18001e278((longlong)param_1,cVar6,cVar5,uVar14);
    }
    if (*(char *)(param_2 + 0x857) != '\0') goto LAB_18001dc01;
    bVar15 = *(longlong *)(param_3 + 0x30) == 0;
  }
  else {
    if (param_5 < 0x114) {
      if (param_5 == 0x113) {
        if (param_6 != 0xaaaa) goto LAB_18001dc01;
        cVar7 = (**(code **)(param_1[1] + 8))();
        if (cVar7 != '\0') {
          cVar5 = (**(code **)(*(longlong *)param_1[3] + 0x40))();
          if (*(char *)((longlong)param_1 + 0x67) != '\0') {
            *(undefined1 *)((longlong)param_1 + 0x67) = 0;
            *(bool *)(param_2 + 0x820) = cVar5 == '\0';
            (**(code **)*param_1)(param_1);
          }
          if ((cVar5 == '\0') && (*(char *)(param_2 + 0x820) != '\0')) {
            FUN_1800056b0(param_2,param_4,param_3,(char)uVar14);
          }
          (**(code **)(*(longlong *)param_1[3] + 0x28))();
          if (*(char *)(param_3 + 0x45) != '\0') goto LAB_18001dd90;
        }
        cVar6 = '\0';
LAB_18001dd90:
        FUN_18001e278((longlong)param_1,cVar6,cVar5,uVar14);
        return 0;
      }
      if ((((param_5 == 0xa3) || (param_5 == 0xa4)) || (param_5 == 0xa5)) || (param_5 == 0xa6))
      goto LAB_18001dbca;
      if (((param_5 == 0x104) && (param_6 == 0xd)) && (((ulonglong)param_7 >> 0x1d & 1) != 0)) {
LAB_18001dd03:
        FUN_18001e2f0((longlong)param_1,lVar11,lVar13,uVar14);
        return 0;
      }
      goto LAB_18001dc01;
    }
    if (param_5 != 0x200) {
      if (param_5 == 0x214) {
        ptVar12 = FUN_1800054f4(param_2,&local_58,param_4,*(longlong **)(param_3 + 0x10),param_7,
                                param_6);
        LVar2 = ptVar12->top;
        LVar3 = ptVar12->right;
        LVar4 = ptVar12->bottom;
        param_7[0] = ptVar12->left;
        param_7[1] = LVar2;
        param_7[2] = LVar3;
        param_7[3] = LVar4;
        *(LONG *)(param_3 + 0x18) = param_7[2] - *param_7;
        *(LONG *)(param_3 + 0x1c) = param_7[3] - param_7[1];
      }
      else if (param_5 == 0x216) {
        *(undefined1 *)(param_3 + 0x44) = 1;
      }
      else if ((param_5 != 0x231) && (param_5 != 0x232)) {
        if ((param_5 == 0x400) && (param_6 == 0x44454745)) {
          LOCK();
          piVar1 = (int *)((longlong)param_1 + 0x5c);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          if (iVar8 != 0) {
            Sleep(1000);
            PostMessageW(param_4,0x400,0x44454745,(LPARAM)param_7);
            LOCK();
            *(int *)((longlong)param_1 + 0x5c) = *(int *)((longlong)param_1 + 0x5c) + -1;
            UNLOCK();
            return 0;
          }
          if (param_7 == (LONG *)0x0) {
            cVar5 = (**(code **)(*(longlong *)param_1[3] + 0x40))();
            if (cVar5 != '\0') {
              return 0;
            }
          }
          else {
            if (param_7 != (LONG *)0x1) {
              return 0;
            }
            cVar5 = (**(code **)(*(longlong *)param_1[3] + 0x40))();
            if (cVar5 == '\0') {
              return 0;
            }
          }
          goto LAB_18001dd03;
        }
        goto LAB_18001dc01;
      }
      goto LAB_18001dbca;
    }
LAB_18001dbda:
    bVar15 = *(char *)(param_2 + 0xa0c) == '\0';
  }
  if (bVar15) {
LAB_18001dbca:
    LVar10 = DefWindowProcW(param_4,param_5,param_6,(LPARAM)param_7);
    return LVar10;
  }
LAB_18001dc01:
  LVar10 = CallWindowProcW(*(WNDPROC *)(param_3 + 0x20),param_4,param_5,param_6,(LPARAM)param_7);
  return LVar10;
}

