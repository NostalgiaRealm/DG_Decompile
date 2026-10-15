/*
 * FUN_10026cef at 10026cef
 * undefined4 __thiscall FUN_10026cef(void * this, HWND param_1, uint param_2, char param_3)
 * Address ranges: 10026cef-1002725a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10026cef(void *this,HWND param_1,uint param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  HWND hWnd;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar8;
  int iVar9;
  int *extraout_EDX;
  byte bVar10;
  uint uVar11;
  bool bVar12;
  ushort in_FPUControlWord;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 *local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined1 local_5;
  
  FUN_10023df9(&local_5);
  local_c = (uint)in_FPUControlWord;
  local_2c = local_c | 0x80000000;
  if ((local_c & 0xf3f) != 0x23f) {
    local_2c = local_c;
  }
  local_c = 0x80070057;
  uVar7 = param_2 >> 7;
  uVar11 = param_2 & 0x18;
  local_24 = param_2 >> 9 & 0xffffff01;
  bVar6 = (byte)uVar7 & 1;
  if ((((((param_2 & 0x40) != 0) && (((byte)param_2 & 0x11) != 0x11)) ||
       (((uVar7 & 1) != 0 && ((param_2 & 0x100) != 0)))) ||
      (((bVar10 = (byte)local_24, bVar10 != 0 && ((param_2 & 0x100) != 0)) ||
       ((param_2 & 0x1800) == 0x1800)))) ||
     ((((uVar11 == 0 && (bVar6 = bVar10, (uVar7 & 1) == 0)) || (bVar6 != 0)) &&
      (((uVar11 != 0x10 || ((uVar7 & 1) == 0)) || (bVar10 == 0)))))) goto LAB_10027231;
  local_14 = *(uint *)((int)this + 0x104) >> 4 & 0xffffff01;
  if (uVar11 == 0) {
    local_c = 0x8876023b;
    if ((char)local_14 != '\0') goto LAB_10027231;
    if ((uVar7 & 1) != 0) {
      *(HWND *)((int)this + 0xf8) = param_1;
      *(HWND *)((int)this + 0x24) = param_1;
    }
  }
  else {
    if (bVar10 == 0) {
      local_c = 0x8876025a;
      if ((((param_2 & 0x100) != 0) && (*(int *)((int)this + 0xf8) == 0)) ||
         ((local_c = 0x80070057, param_1 == (HWND)0x0 && (uVar11 != 8)))) goto LAB_10027231;
LAB_10026e48:
      local_c = 0x80070057;
      bVar12 = true;
    }
    else if ((uVar7 & 1) == 0) {
      if (param_1 == (HWND)0x0) {
        if (*(HWND *)((int)this + 0xf8) == (HWND)0x0) goto LAB_10027231;
        goto LAB_10026e48;
      }
      bVar12 = param_1 == *(HWND *)((int)this + 0xf8);
    }
    else {
      bVar12 = param_1 != (HWND)0x0;
      local_c = 0x88760239;
    }
    if ((!bVar12) ||
       (((local_c = 0x88760245, (&DAT_1006c49c)[*(int *)((int)this + 0x11c) * 0x228] != '\0' &&
         ((char)local_14 == '\0')) && ((param_2 & 0x10) != 0)))) goto LAB_10027231;
    local_10 = param_2 >> 4 & 0xffffff01;
    local_c = 0x80004005;
    local_20 = CONCAT31(local_20._1_3_,(char)local_10);
    if (bVar10 != 0) {
      if ((uVar7 & 1) != 0) {
        *(HWND *)((int)this + 0xf8) = param_1;
        *(HWND *)((int)this + 0x24) = param_1;
      }
      if (*(char *)((int)this + 0x36) == '\0') {
        FUN_100043bf();
        *(undefined1 *)((int)this + 0x36) = 1;
      }
      iVar9 = *(int *)((int)this + 0x11c) * 0x228;
      param_1 = CreateWindowExA(0,(LPCSTR)(uint)DAT_1006c220,"DirectDrawDeviceWnd",0x90000000,
                                *(int *)(&DAT_1006c470 + iVar9),*(int *)(&DAT_1006c474 + iVar9),0x80
                                ,0x80,*(HWND *)((int)this + 0xf8),(HMENU)0x0,DAT_1006c250,
                                (LPVOID)(-(uint)(this != (void *)0x0) & (int)this + 0x10U));
    }
    if (param_1 != (HWND)0x0) {
      FUN_1005e343(param_1);
    }
    cVar1 = '\x01';
    if (*(HWND *)((int)this + 0xfc) == param_1) goto LAB_10027108;
    uVar11 = *(uint *)((int)this + 0x110);
    uVar7 = 0;
    if (uVar11 != 0) {
      do {
        if (*(HWND *)(*(int *)((int)this + 0x10c) + uVar7 * 4) == param_1) goto LAB_10026f3f;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar11);
    }
    uVar7 = 0xffffffff;
LAB_10026f3f:
    if (uVar7 == 0xffffffff) {
      uVar8 = *(undefined4 *)((int)this + 0x18);
      uVar5 = *(undefined4 *)((int)this + 0x120);
      uVar14 = *(undefined4 *)((int)this + 0x1c);
      uVar13 = *(undefined4 *)((int)this + 0x20);
      uVar15 = local_20;
      uVar2 = FUN_1005d9c9((int *)(*(int *)((int)this + 0x118) + 4));
      cVar1 = (**(code **)(*extraout_EDX + 0x60))(param_1,uVar2,uVar13,uVar14,uVar5,uVar8,uVar15);
      if (cVar1 == '\0') goto LAB_10027231;
      (**(code **)(**(int **)((int)this + 0x118) + 0x70))(param_1,1,1);
      if (((param_3 != '\0') && ((char)local_10 == '\0')) && ((char)local_14 != '\0')) {
        FUN_10026bb9(this);
        param_3 = '\0';
      }
      (**(code **)(**(int **)((int)this + 0x118) + 0x70))(*(undefined4 *)((int)this + 0xfc),1,1);
      (**(code **)(**(int **)((int)this + 0x118) + 100))(*(undefined4 *)((int)this + 0xfc));
      iVar9 = *(int *)((int)this + 0x11c);
      local_1c = &DAT_1006c2b0 + iVar9 * 0x8a;
      local_28 = &DAT_100698c0 + iVar9 * 0x29;
      if ((((&DAT_1006c49a)[iVar9 * 0x228] != '\0') && (param_1 != (HWND)0x0)) &&
         ((char)local_10 != '\0')) {
        hWnd = GetActiveWindow();
        DVar4 = 0;
        if (hWnd != (HWND)0x0) {
          DVar4 = GetWindowThreadProcessId(hWnd,(LPDWORD)0x0);
        }
        DVar3 = GetWindowThreadProcessId(param_1,(LPDWORD)0x0);
        if (DVar3 == DVar4) {
          if (*(char *)(DAT_1006c210 + 0x7e5) == '\0') {
            local_18 = CONCAT31(local_18._1_3_,1);
            if (*(char *)(DAT_1006c210 + 0x784) == '\0') goto LAB_1002707f;
          }
          else {
LAB_1002707f:
            local_18 = local_18 & 0xffffff00;
          }
          local_44 = local_1c[0x66];
          local_40 = local_1c[0x67];
          local_3c = local_1c[0x68];
          local_38 = local_1c[0x69];
          local_34 = local_28[10];
          local_30 = local_28[0x19];
          FUN_10004493((int *)((int)this + 0x10));
          (**(code **)(**(int **)((int)this + 0x118) + 0x74))(param_1,&local_44,local_18);
          (**(code **)(**(int **)((int)this + 0x118) + 0x70))(param_1,local_1c[0x6a],local_1c[0x6b])
          ;
          FUN_100044bf((int *)((int)this + 0x10));
          SetActiveWindow(param_1);
          SetFocus(param_1);
        }
      }
LAB_10027108:
      if (cVar1 == '\0') goto LAB_10027231;
    }
    else if (uVar7 < uVar11) {
      uVar7 = uVar7 + 1;
      if (uVar7 < uVar11) {
        do {
          *(undefined4 *)(*(int *)((int)this + 0x10c) + -4 + uVar7 * 4) =
               *(undefined4 *)(*(int *)((int)this + 0x10c) + uVar7 * 4);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)((int)this + 0x110));
      }
      *(int *)((int)this + 0x110) = *(int *)((int)this + 0x110) + -1;
    }
    if (((param_3 != '\0') && ((char)local_10 == '\0')) && ((char)local_14 != '\0')) {
      FUN_10026bb9(this);
    }
    if (((*(HWND *)((int)this + 0xfc) != (HWND)0x0) &&
        (FUN_1005e6d5(*(HWND *)((int)this + 0xfc),-(uint)(this != (void *)0x0) & (int)this + 0x10U),
        *(char *)((int)this + 0x10a) != '\0')) && (*(HWND *)((int)this + 0xfc) != param_1)) {
      DestroyWindow(*(HWND *)((int)this + 0xfc));
    }
    (**(code **)(**(int **)((int)this + 0x118) + 0x6c))(param_1,local_20);
    *(HWND *)((int)this + 0xfc) = param_1;
    DVar4 = GetWindowThreadProcessId(param_1,(LPDWORD)0x0);
    *(DWORD *)((int)this + 0x100) = DVar4;
    *(uint *)((int)this + 0x104) = param_2;
    *(char *)((int)this + 0x10a) = (char)local_24;
    *(undefined1 *)((int)this + 0x108) = 1;
    if ((char)local_10 == '\0') {
      uVar8 = extraout_ECX;
      if ((char)local_14 != '\0') {
        (&DAT_1006c49c)[*(int *)((int)this + 0x11c) * 0x228] = 0;
      }
    }
    else {
      (&DAT_1006c49c)[*(int *)((int)this + 0x11c) * 0x228] = 1;
      FUN_10026aeb((int)this);
      uVar8 = extraout_ECX_00;
    }
    if (((&DAT_1006c49a)[*(int *)((int)this + 0x11c) * 0x228] == '\0') &&
       (uVar5 = FUN_10024b65(this,*(undefined4 *)((int)this + 0x120)), uVar8 = extraout_ECX_01,
       (char)uVar5 == '\0')) goto LAB_10027231;
    if (param_1 != (HWND)0x0) {
      FUN_1005e480(param_1,uVar8,-(uint)(this != (void *)0x0) & (int)this + 0x10U);
    }
  }
  local_c = 0;
LAB_10027231:
  FUN_10023e27();
  return local_c;
}

