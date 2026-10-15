/*
 * FUN_1800c1d3c at 1800c1d3c
 * uint __fastcall FUN_1800c1d3c(longlong param_1, RECT * param_2, RECT * param_3, HWND param_4, longlong param_5, uint param_6)
 * Address ranges: 1800c1d3c-1800c20a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800c1d3c(longlong param_1,RECT *param_2,RECT *param_3,HWND param_4,longlong param_5,
                  uint param_6)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar12;
  RECT *pRVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar16;
  tagRECT local_68;
  tagRECT local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  uint7 uVar11;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  if ((param_6 & ~((-(uint)(*(char *)(param_1 + 0x180) != '\0') & 0x1fc) + 3)) != 0) {
    return 0x8876086c;
  }
  pRVar13 = (RECT *)0x0;
  if (param_5 != 0) {
    return 0x8876086c;
  }
  FUN_180015888(&local_res8);
  uVar14 = 0x88760868;
  if (*(char *)(*(longlong *)(param_1 + 0x58) + 0x6819) != '\0') goto LAB_1800c2084;
  uVar1 = *(uint *)(param_1 + 0xd4);
  uVar12 = (ulonglong)uVar1;
  uVar15 = 1;
  uVar14 = 0x8876086c;
  if (uVar1 != 0) {
    do {
      if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x60 + uVar15 * 8) + 8) + 0x100) >> 0xb &
          1) != 0) goto LAB_1800c2084;
      uVar9 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar9;
    } while (uVar9 <= uVar1);
  }
  FUN_1800080d8(*(longlong *)(param_1 + 0x58),*(longlong *)(param_1 + 0x68));
  iVar2 = *(int *)(param_1 + 0xcc);
  uVar11 = (uint7)(uVar15 >> 8);
  lVar10 = CONCAT71(uVar11,1);
  if (((param_6 & 0x104) == 0) || (bVar6 = false, iVar2 == 5)) {
    bVar6 = true;
  }
  if (iVar2 == 1) {
    if (*(char *)(param_1 + 0x101) == '\0') goto LAB_1800c1e39;
LAB_1800c1f30:
    lVar10 = (ulonglong)uVar11 << 8;
    bVar5 = bVar6;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) goto LAB_1800c1f30;
      if (iVar2 != 5) goto LAB_1800c2084;
    }
LAB_1800c1e39:
    bVar5 = false;
    if (param_3 == (RECT *)0x0 && param_2 == (RECT *)0x0) {
      bVar5 = bVar6;
    }
  }
  if (bVar5) {
    if ((char)lVar10 == '\0') {
      local_48 = 0;
      local_40 = 0;
      local_68.left = 0;
      local_68.top = 0;
      local_68.right = 0;
      local_68.bottom = 0;
      local_3c = 1;
      local_58.left = 0;
      local_58.top = 0;
      local_58.right = 0;
      local_58.bottom = 0;
      uVar15 = CONCAT44(uVar16,*(int *)(param_1 + 0x9c));
      SetRect(&local_58,0,0,*(int *)(param_1 + 0x98),*(int *)(param_1 + 0x9c));
      if (param_2 != (RECT *)0x0) {
        IntersectRect(&local_58,&local_58,param_2);
      }
      if (*(char *)(param_1 + 0x101) == '\0') {
        uVar15 = CONCAT44((int)(uVar15 >> 0x20),*(int *)(param_1 + 0x9c));
        SetRect(&local_68,0,0,*(int *)(param_1 + 0x98),*(int *)(param_1 + 0x9c));
        param_2 = pRVar13;
        if (param_3 != (RECT *)0x0) {
          IntersectRect(&local_68,&local_68,param_3);
        }
      }
      else {
        local_68.left = local_58.left;
        local_68.top = local_58.top;
        local_68.right = local_58.right;
        local_68.bottom = local_58.bottom;
        pRVar13 = param_3;
      }
      (**(code **)**(undefined8 **)(param_1 + 0x60))();
      (**(code **)**(undefined8 **)(param_1 + 0x68))();
      uVar12 = 0;
      lVar10 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x108))
                (*(longlong **)(param_1 + 0x88),0,0,0,uVar15 & 0xffffffff00000000,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x70),
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 8) + 0x70),&local_68)
      ;
      param_3 = pRVar13;
    }
    else {
      (**(code **)**(undefined8 **)(param_1 + 0x60))();
      uVar15 = 1;
      uVar14 = 1;
      local_res8 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x70);
      if (*(int *)(param_1 + 0xd4) != 0) {
        do {
          (**(code **)**(undefined8 **)(param_1 + 0x60 + uVar15 * 8))();
          uVar8 = (ulonglong)((int)uVar15 - 1);
          FUN_180014e88(*(longlong *)(param_1 + 0x60 + uVar8 * 8),
                        *(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x60 + uVar15 * 8) + 8) + 0x70));
          plVar3 = *(longlong **)(param_1 + 0x58);
          lVar4 = *(longlong *)(param_1 + 0x60 + uVar8 * 8);
          if ((((lVar4 == plVar3[6]) || (lVar4 == plVar3[7])) || (lVar4 == plVar3[8])) ||
             (lVar4 == plVar3[9])) {
            (**(code **)(*plVar3 + 0x48))();
          }
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
        } while (uVar14 <= *(uint *)(param_1 + 0xd4));
      }
      FUN_180014e88(*(longlong *)(param_1 + 0x60 + (ulonglong)(uVar14 - 1) * 8),local_res8);
      plVar3 = *(longlong **)(param_1 + 0x58);
      lVar4 = *(longlong *)(param_1 + 0x60 + (ulonglong)(uVar14 - 1) * 8);
      if (((lVar4 == plVar3[6]) || (lVar4 == plVar3[7])) ||
         ((lVar4 == plVar3[8] || (lVar4 == plVar3[9])))) {
        (**(code **)(*plVar3 + 0x48))();
      }
    }
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
    QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x110));
    uVar14 = 0;
    if ((param_6 & 0x100) == 0) {
      uVar14 = *(uint *)(param_1 + 0xd0);
    }
    cVar7 = FUN_180016afc((longlong *)(param_1 + 8),*(longlong *)(param_1 + 0x60),lVar10,uVar12,
                          param_2,param_3,uVar14,param_4);
    uVar14 = 0x80004005;
    if (cVar7 != '\0') {
      uVar14 = 0;
    }
  }
LAB_1800c2084:
  FUN_180015904();
  return uVar14;
}

