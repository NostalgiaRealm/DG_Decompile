/*
 * FUN_10013290 at 10013290
 * uint __thiscall FUN_10013290(void * this, byte param_1, char param_2)
 * Address ranges: 10013290-100136af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10013290(void *this,byte param_1,char param_2)

{
  HWND pHVar1;
  void *pvVar2;
  char cVar3;
  undefined1 uVar4;
  EXECUTION_STATE EVar5;
  uint3 uVar14;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  LONG LVar9;
  uint uVar10;
  BOOL BVar11;
  undefined4 uVar12;
  HWND pHVar13;
  undefined4 extraout_ECX;
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
  uint local_28 [5];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_10012ccc(&local_61);
  pvVar2 = DAT_100dea74;
  local_60 = DAT_100dea74;
  local_54 = 1;
  *(uint *)((int)this + 0xc) = *(uint *)((int)DAT_100dea74 + 0x826) >> 2 & 1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)pvVar2 + 0x82a) & 1;
  iVar7 = *(int *)((int)pvVar2 + 0xf8);
  *(int *)((int)pvVar2 + 0xf8) = iVar7 + 1;
  if ((iVar7 == 0) && (*(char *)((int)pvVar2 + 0x789) != '\0')) {
    EVar5 = SetThreadExecutionState(0x80000002);
    *(EXECUTION_STATE *)((int)pvVar2 + 0xf4) = EVar5;
    local_60 = DAT_100dea74;
  }
  uVar10 = *(uint *)((int)this + 0x9c);
  local_4c = *(undefined4 *)((int)this + 0x4c);
  local_44 = *(undefined4 *)((int)this + 0x50);
  local_14 = *(undefined4 *)((int)this + 0xa0);
  local_28[1] = 1;
  local_50 = *(undefined4 *)((int)this + 100);
  local_48 = *(undefined4 *)((int)this + 0x68);
  local_61 = 1;
  local_28[3] = 0;
  local_28[2] = 1;
  local_5c = 0;
  local_58 = uVar10;
  local_28[4] = uVar10;
  local_10 = local_4c;
  local_c = local_44;
  if (*(int *)((int)this + 0x88) == -1) {
LAB_10013401:
    uVar10 = *(uint *)((int)this + 0x98);
    if (uVar10 != 0) {
      if (param_2 != '\0') {
        local_28[2] = local_28[2] | 2;
        if ((uVar10 == 0x46) && (local_58 == 0)) {
          uVar8 = 1;
        }
        else {
          uVar8 = uVar10 & 0xffffff00;
        }
        puVar6 = &local_50;
        if (param_1 != 0) {
          puVar6 = (undefined4 *)0x0;
        }
        local_28[0] = uVar10;
        iVar7 = (**(code **)(*(int *)this + 0x54))
                          (local_28,puVar6,*(undefined4 *)((int)this + 0x90),uVar8,0xffffffff);
        local_60 = DAT_100dea74;
        local_61 = iVar7 != 0;
        *(int *)((int)this + 0x40) = iVar7;
      }
      if (local_61 == 0) goto LAB_1001364d;
    }
    pvVar2 = local_60;
    FUN_100cce02(local_60,*(HWND *)((int)this + 0x48));
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
      FUN_100ccf3b(pvVar2,*(HWND *)((int)this + 0x48),extraout_ECX,this);
      if ((*(char *)((int)this + 0xb5) == '\0') && (*(char *)((int)pvVar2 + 0x7e6) == '\0')) {
        LVar9 = GetWindowLongW(*(HWND *)((int)this + 0x48),-0x14);
        if (LVar9 != 0x40300) {
          SetWindowLongW(*(HWND *)((int)this + 0x48),-0x14,0x40300);
        }
        uVar10 = GetWindowLongW(*(HWND *)((int)this + 0x48),-0x10);
        if ((uVar10 & 0xcf0000) != 0xcf0000) {
          SetWindowLongW(*(HWND *)((int)this + 0x48),-0x10,0xcf0000);
        }
      }
      iVar7 = (**(code **)(**(int **)((int)this + 0x44) + 0x30))
                        (*(undefined4 *)((int)this + 0x48),*(undefined4 *)((int)this + 100),
                         *(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 0x7c),
                         *(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0xc),
                         *(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),0);
      *(int *)((int)this + 0xb8) = iVar7;
      if (iVar7 != 0) {
        if (*(char *)((int)this + 0xb5) == '\0') {
          BVar11 = IsWindowVisible(*(HWND *)((int)this + 0x48));
          if (BVar11 == 0) {
            ShowWindow(*(HWND *)((int)this + 0x48),1);
          }
          uVar12 = *(undefined4 *)((int)this + 100);
          puVar6 = (undefined4 *)((int)this + 0x4c);
          puVar15 = auStack_40;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar15 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar15 = puVar15 + 1;
          }
          auStack_40[1] = *(undefined4 *)((int)this + 0x68);
          auStack_40[2] = *(undefined4 *)((int)this + 0x6c);
          auStack_40[3] = *(undefined4 *)((int)this + 0x70);
          *(byte *)((int)this + 0x24) = param_1 ^ 1;
          auStack_40[0] = uVar12;
          FUN_1002c1ef(this);
          pvVar2 = local_60;
          if ((*(char *)((int)local_60 + 0x95a) != '\0') ||
             (local_58 = local_58 & 0xffffff00, *(char *)((int)this + 0xb6) != '\0')) {
            local_58 = CONCAT31(local_58._1_3_,1);
          }
          cVar3 = (**(code **)(**(int **)((int)this + 0x44) + 0x74))
                            (*(undefined4 *)((int)this + 0x48),auStack_40,local_58);
          local_61 = -(cVar3 != '\0') & local_61;
          FUN_1002c21b(this);
          FUN_1002c249(this);
          if ((*(char *)((int)pvVar2 + 0x95a) != '\0') && (*(char *)((int)this + 0xb6) == '\0')) {
            PostMessageW(*(HWND *)((int)this + 0x48),0x400,0x44454745,0);
          }
          if (local_61 == 0) {
            (**(code **)(**(int **)((int)this + 0xb8) + 0x10))();
            *(undefined4 *)((int)this + 0xb8) = 0;
            goto LAB_10013642;
          }
        }
        FUN_1002b0d1();
        if (DAT_100dea7c != 0) {
          FUN_10029848(-(uint)(this != (void *)0x0) & (int)this + 0x28U);
        }
        if ((*(char *)((int)this + 0xb5) == '\0') ||
           (pHVar1 = *(HWND *)((int)this + 0x48), pHVar13 = GetActiveWindow(), pHVar13 == pHVar1)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
        *(undefined1 *)((int)this + 0xd5) = uVar4;
        goto LAB_10013657;
      }
LAB_10013642:
      (**(code **)(**(int **)((int)this + 0x44) + 100))(*(undefined4 *)((int)this + 0x48));
    }
  }
  else {
    do {
      if (local_61 == 0) goto LAB_1001364d;
      local_28[0] = *(uint *)((int)this + 0x94);
      uVar14 = (uint3)(local_28[0] >> 8);
      if (((*(char *)((int)this + 0xb4) == '\0') || (uVar10 != 0)) && (local_5c != 0)) {
        iVar7 = (uint)uVar14 << 8;
      }
      else {
        iVar7 = CONCAT31(uVar14,1);
      }
      puVar6 = &local_50;
      if (param_1 != 0) {
        puVar6 = (undefined4 *)0x0;
      }
      iVar7 = (**(code **)(*(int *)this + 0x54))
                        (local_28,puVar6,*(undefined4 *)((int)this + 0x8c),iVar7,local_5c);
      if (iVar7 == 0) {
        local_61 = 0;
      }
      else {
        *(int *)((int)this + local_5c * 4 + 0x30) = iVar7;
      }
      local_5c = local_5c + 1;
    } while (local_5c < *(int *)((int)this + 0x88) + 1U);
    if (local_61 != 0) {
      local_60 = DAT_100dea74;
      goto LAB_10013401;
    }
  }
LAB_1001364d:
  FUN_1002c1be();
  local_54 = local_54 & 0xffffff00;
LAB_10013657:
  uVar12 = FUN_10012d33();
  return CONCAT31((int3)((uint)uVar12 >> 8),(undefined1)local_54);
}

