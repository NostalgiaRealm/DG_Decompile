/*
 * FUN_1000f4c7 at 1000f4c7
 * uint __thiscall FUN_1000f4c7(void * this, undefined4 param_1, char param_2)
 * Address ranges: 1000f4c7-1000f8cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000f4c7(void *this,undefined4 param_1,char param_2)

{
  HWND pHVar1;
  void *pvVar2;
  char cVar3;
  undefined1 uVar4;
  EXECUTION_STATE EVar5;
  uint3 uVar13;
  int iVar6;
  uint uVar7;
  LONG LVar8;
  uint uVar9;
  BOOL BVar10;
  undefined4 uVar11;
  HWND pHVar12;
  undefined4 extraout_ECX;
  undefined4 *puVar14;
  undefined4 *puVar15;
  byte local_61;
  void *local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 auStack_40 [6];
  uint local_28 [6];
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_1000ef03(&local_61);
  pvVar2 = DAT_100ba2b4;
  local_60 = DAT_100ba2b4;
  local_54 = 1;
  *(uint *)((int)this + 0xc) = *(uint *)((int)DAT_100ba2b4 + 0x826) >> 2 & 1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)pvVar2 + 0x82a) & 1;
  iVar6 = *(int *)((int)pvVar2 + 0xf8);
  *(int *)((int)pvVar2 + 0xf8) = iVar6 + 1;
  if ((iVar6 == 0) && (*(char *)((int)pvVar2 + 0x789) != '\0')) {
    EVar5 = SetThreadExecutionState(0x80000002);
    *(EXECUTION_STATE *)((int)pvVar2 + 0xf4) = EVar5;
    local_60 = DAT_100ba2b4;
  }
  uVar9 = *(uint *)((int)this + 0x9c);
  local_4c = *(undefined4 *)((int)this + 0x4c);
  local_44 = *(undefined4 *)((int)this + 0x50);
  local_61 = 1;
  local_28[1] = 1;
  local_50 = *(undefined4 *)((int)this + 100);
  local_48 = *(undefined4 *)((int)this + 0x68);
  local_28[4] = 0;
  local_28[3] = 0;
  local_28[2] = 1;
  local_5c = 0;
  local_58 = uVar9;
  local_28[5] = uVar9;
  local_10 = local_4c;
  local_c = local_44;
  if (*(int *)((int)this + 0x88) == -1) {
LAB_1000f62d:
    uVar9 = *(uint *)((int)this + 0x98);
    if (uVar9 != 0) {
      if (param_2 != '\0') {
        local_28[2] = local_28[2] | 2;
        if ((uVar9 == 0x46) && (local_58 == 0)) {
          uVar7 = 1;
        }
        else {
          uVar7 = uVar9 & 0xffffff00;
        }
        local_28[0] = uVar9;
        iVar6 = (**(code **)(*(int *)this + 0x54))
                          (local_28,&local_50,*(undefined4 *)((int)this + 0x90),uVar7,0xffffffff);
        local_60 = DAT_100ba2b4;
        local_61 = iVar6 != 0;
        *(int *)((int)this + 0x40) = iVar6;
      }
      if (local_61 == 0) goto LAB_1000f86d;
    }
    pvVar2 = local_60;
    FUN_100aa533(local_60,*(HWND *)((int)this + 0x48));
    cVar3 = (**(code **)(**(int **)((int)this + 0x44) + 0x60))
                      (*(undefined4 *)((int)this + 0x48),*(undefined4 *)((int)this + 0x7c),
                       *(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0xc),
                       *(undefined4 *)((int)this + 0xa8),*(undefined4 *)((int)this + 0xac),
                       *(char *)((int)this + 0xb5) == '\0');
    if (cVar3 != '\0') {
      (**(code **)(**(int **)((int)this + 0x44) + 0x70))
                (*(undefined4 *)((int)this + 0x48),*(undefined4 *)((int)this + 0x74),
                 *(undefined4 *)((int)this + 0x78));
      *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0xac);
      FUN_100aa66c(pvVar2,*(HWND *)((int)this + 0x48),extraout_ECX,this);
      if ((*(char *)((int)this + 0xb5) == '\0') && (*(char *)((int)pvVar2 + 0x7e6) == '\0')) {
        LVar8 = GetWindowLongW(*(HWND *)((int)this + 0x48),-0x14);
        if (LVar8 != 0x40300) {
          SetWindowLongW(*(HWND *)((int)this + 0x48),-0x14,0x40300);
        }
        uVar9 = GetWindowLongW(*(HWND *)((int)this + 0x48),-0x10);
        if ((uVar9 & 0xcf0000) != 0xcf0000) {
          SetWindowLongW(*(HWND *)((int)this + 0x48),-0x10,0xcf0000);
        }
      }
      iVar6 = (**(code **)(**(int **)((int)this + 0x44) + 0x30))
                        (*(undefined4 *)((int)this + 0x48),*(undefined4 *)((int)this + 100),
                         *(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 0x7c),
                         *(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0xc),
                         *(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),0);
      *(int *)((int)this + 0xb8) = iVar6;
      if (iVar6 != 0) {
        if (*(char *)((int)this + 0xb5) == '\0') {
          BVar10 = IsWindowVisible(*(HWND *)((int)this + 0x48));
          if (BVar10 == 0) {
            ShowWindow(*(HWND *)((int)this + 0x48),1);
          }
          uVar11 = *(undefined4 *)((int)this + 100);
          puVar14 = (undefined4 *)((int)this + 0x4c);
          puVar15 = auStack_40;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar15 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          }
          auStack_40[1] = *(undefined4 *)((int)this + 0x68);
          auStack_40[2] = *(undefined4 *)((int)this + 0x6c);
          auStack_40[3] = *(undefined4 *)((int)this + 0x70);
          *(undefined1 *)((int)this + 0x24) = 1;
          auStack_40[0] = uVar11;
          FUN_10024b7d(this);
          pvVar2 = local_60;
          if ((*(char *)((int)local_60 + 0x95a) != '\0') ||
             (local_58 = local_58 & 0xffffff00, *(char *)((int)this + 0xb6) != '\0')) {
            local_58 = CONCAT31(local_58._1_3_,1);
          }
          cVar3 = (**(code **)(**(int **)((int)this + 0x44) + 0x74))
                            (*(undefined4 *)((int)this + 0x48),auStack_40,local_58);
          local_61 = -(cVar3 != '\0') & local_61;
          FUN_10024ba9(this);
          FUN_10024bd7(this);
          if ((*(char *)((int)pvVar2 + 0x95a) != '\0') && (*(char *)((int)this + 0xb6) == '\0')) {
            PostMessageW(*(HWND *)((int)this + 0x48),0x400,0x44454745,0);
          }
          if (local_61 == 0) {
            (**(code **)(**(int **)((int)this + 0xb8) + 0x10))();
            *(undefined4 *)((int)this + 0xb8) = 0;
            goto LAB_1000f862;
          }
        }
        FUN_10023a5f();
        if (DAT_100ba2bc != 0) {
          FUN_100221b0(-(uint)(this != (void *)0x0) & (int)this + 0x28U);
        }
        if ((*(char *)((int)this + 0xb5) == '\0') ||
           (pHVar1 = *(HWND *)((int)this + 0x48), pHVar12 = GetActiveWindow(), pHVar12 == pHVar1)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
        *(undefined1 *)((int)this + 0xd5) = uVar4;
        goto LAB_1000f877;
      }
LAB_1000f862:
      (**(code **)(**(int **)((int)this + 0x44) + 100))(*(undefined4 *)((int)this + 0x48));
    }
  }
  else {
    do {
      if (local_61 == 0) goto LAB_1000f86d;
      local_28[0] = *(uint *)((int)this + 0x94);
      uVar13 = (uint3)(local_28[0] >> 8);
      if (((*(char *)((int)this + 0xb4) == '\0') || (uVar9 != 0)) && (local_5c != 0)) {
        iVar6 = (uint)uVar13 << 8;
      }
      else {
        iVar6 = CONCAT31(uVar13,1);
      }
      iVar6 = (**(code **)(*(int *)this + 0x54))
                        (local_28,&local_50,*(undefined4 *)((int)this + 0x8c),iVar6,local_5c);
      if (iVar6 == 0) {
        local_61 = 0;
      }
      else {
        *(int *)((int)this + local_5c * 4 + 0x30) = iVar6;
      }
      local_5c = local_5c + 1;
    } while (local_5c < *(int *)((int)this + 0x88) + 1U);
    if (local_61 != 0) {
      local_60 = DAT_100ba2b4;
      goto LAB_1000f62d;
    }
  }
LAB_1000f86d:
  FUN_10024b4c();
  local_54 = local_54 & 0xffffff00;
LAB_1000f877:
  uVar11 = FUN_1000ef6a();
  return CONCAT31((int3)((uint)uVar11 >> 8),(undefined1)local_54);
}

