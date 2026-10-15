/*
 * FUN_1800e63a0 at 1800e63a0
 * undefined FUN_1800e63a0(void)
 * Address ranges: 1800e63a0-1800e69c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e63a0(longlong *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong *local_2d0;
  longlong *local_2c8 [3];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined4 local_278;
  undefined4 local_268;
  int local_254;
  undefined4 local_250;
  undefined4 local_240;
  int local_23c;
  int iStack_238;
  int local_234;
  int iStack_230;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [24];
  longlong local_98;
  undefined1 auStack_90 [88];
  longlong local_38;
  
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0xc4);
  uVar12 = *(uint *)(param_2 + 2);
  local_2d0 = (longlong *)0x0;
  if ((((param_3 == 0) || (param_4 == 0)) ||
      (cVar4 = (**(code **)(*param_1 + 8))(param_1), cVar4 != '\0')) ||
     (iVar6 = (**(code **)(*(longlong *)param_1[(ulonglong)uVar12 * 5 + 3] + 0x38))
                        ((longlong *)param_1[(ulonglong)uVar12 * 5 + 3],param_4 + -1,&local_2d0),
     iVar6 < 0)) {
    local_2d0 = (longlong *)0x0;
  }
  iVar6 = *(int *)((longlong)param_2 + 0x3c);
  if (param_3 - 2U < 2) {
    *(int *)((longlong)param_2 + 0x3c) = param_3;
    FUN_1800e50b0(param_1,param_2,local_2d0,0);
    if (*(int *)((longlong)param_2 + 0x3c) != 3) {
      iVar7 = (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],1,local_2d0);
      goto LAB_1800e6834;
    }
    uVar9 = (*__imp_USER32_dll_GetWindowLongPtrW)(*param_2,0xfffffff0);
    pcVar2 = __imp_USER32_dll_GetWindowLongPtrW;
    param_2[0x1a8] = uVar9;
    uVar9 = (*pcVar2)(*param_2,0xffffffec);
    pcVar2 = __imp_USER32_dll_GetWindowRect;
    param_2[0x1a9] = uVar9;
    (*pcVar2)(*param_2,param_2 + 0x1a6);
    if (local_2d0 == (longlong *)0x0) {
      lVar8 = (*__imp_USER32_dll_MonitorFromRect)(param_2 + 0x1a6,2);
    }
    else {
      (**(code **)(*local_2d0 + 0x38))(local_2d0,auStack_90);
      lVar8 = local_38;
    }
    pcVar2 = __imp_USER32_dll_GetMonitorInfoW;
    puVar1 = (undefined8 *)((longlong)param_2 + 0xc54);
    local_240 = 0x68;
    *(undefined8 *)((longlong)param_2 + 0xc5c) = 0;
    *puVar1 = 0;
    *(undefined8 *)((longlong)param_2 + 0xc6c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc64) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc7c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc74) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc8c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc84) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc9c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc94) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcac) = 0;
    *(undefined8 *)((longlong)param_2 + 0xca4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcbc) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcb4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xccc) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcc4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcdc) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcd4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcec) = 0;
    *(undefined8 *)((longlong)param_2 + 0xce4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcfc) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcf4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xd0c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xd04) = 0;
    *(undefined8 *)((longlong)param_2 + 0xd1c) = 0;
    *(undefined8 *)((longlong)param_2 + 0xd14) = 0;
    *(undefined8 *)((longlong)param_2 + 0xd24) = 0;
    *(undefined4 *)((longlong)param_2 + 0xd2c) = 0;
    iVar6 = (*pcVar2)(lVar8,&local_240);
    if ((iVar6 != 0) &&
       (iVar6 = (*__imp_USER32_dll_EnumDisplaySettingsW)(&local_218,0xffffffff,puVar1), iVar6 != 0))
    {
      *(undefined8 *)((longlong)param_2 + 0xc5c) = uStack_210;
      *puVar1 = local_218;
      *(undefined8 *)((longlong)param_2 + 0xc6c) = uStack_200;
      *(undefined8 *)((longlong)param_2 + 0xc64) = uStack_208;
      *(undefined8 *)((longlong)param_2 + 0xc7c) = uStack_1f0;
      *(undefined8 *)((longlong)param_2 + 0xc74) = local_1f8;
      *(undefined8 *)((longlong)param_2 + 0xc8c) = uStack_1e0;
      *(undefined8 *)((longlong)param_2 + 0xc84) = uStack_1e8;
      (**(code **)(*(longlong *)param_2[1] + 0x60))((longlong *)param_2[1],&local_290);
      uStack_1c8 = *(undefined8 *)((longlong)param_2 + 0xc5c);
      local_1d0 = *puVar1;
      uStack_1b8 = *(undefined8 *)((longlong)param_2 + 0xc6c);
      uStack_1c0 = *(undefined8 *)((longlong)param_2 + 0xc64);
      local_2c8[0] = (longlong *)0x0;
      local_100 = *(undefined8 *)((longlong)param_2 + 0xd24);
      uStack_1a8 = *(undefined8 *)((longlong)param_2 + 0xc7c);
      local_1b0 = *(undefined8 *)((longlong)param_2 + 0xc74);
      uStack_198 = *(undefined8 *)((longlong)param_2 + 0xc8c);
      uStack_1a0 = *(undefined8 *)((longlong)param_2 + 0xc84);
      local_f8 = *(undefined4 *)((longlong)param_2 + 0xd2c);
      uStack_188 = *(undefined8 *)((longlong)param_2 + 0xc9c);
      local_190 = *(undefined8 *)((longlong)param_2 + 0xc94);
      uStack_178 = *(undefined8 *)((longlong)param_2 + 0xcac);
      uStack_180 = *(undefined8 *)((longlong)param_2 + 0xca4);
      uStack_168 = *(undefined8 *)((longlong)param_2 + 0xcbc);
      local_170 = *(undefined8 *)((longlong)param_2 + 0xcb4);
      uStack_158 = *(undefined8 *)((longlong)param_2 + 0xccc);
      uStack_160 = *(undefined8 *)((longlong)param_2 + 0xcc4);
      uStack_148 = *(undefined8 *)((longlong)param_2 + 0xcdc);
      local_150 = *(undefined8 *)((longlong)param_2 + 0xcd4);
      uStack_138 = *(undefined8 *)((longlong)param_2 + 0xcec);
      uStack_140 = *(undefined8 *)((longlong)param_2 + 0xce4);
      uStack_128 = *(undefined8 *)((longlong)param_2 + 0xcfc);
      local_130 = *(undefined8 *)((longlong)param_2 + 0xcf4);
      local_118 = *(undefined8 *)((longlong)param_2 + 0xd0c);
      uStack_120 = *(undefined8 *)((longlong)param_2 + 0xd04);
      uStack_108 = *(undefined8 *)((longlong)param_2 + 0xd1c);
      local_110 = *(undefined8 *)((longlong)param_2 + 0xd14);
      if (local_2d0 == (longlong *)0x0) {
        iVar6 = 0;
        while (iVar7 = (**(code **)(*(longlong *)param_1[(ulonglong)uVar12 * 5 + 3] + 0x38))
                                 ((longlong *)param_1[(ulonglong)uVar12 * 5 + 3],iVar6,local_2c8),
              plVar3 = local_2d0, -1 < iVar7) {
          (**(code **)(*local_2c8[0] + 0x38))(local_2c8[0],auStack_f0);
          plVar3 = local_2c8[0];
          if (local_98 == lVar8) break;
          (**(code **)(*local_2c8[0] + 0x10))();
          iVar6 = iVar6 + 1;
        }
        local_2d0 = plVar3;
        if (local_2d0 != (longlong *)0x0) goto LAB_1800e66f0;
      }
      else {
LAB_1800e66f0:
        iVar6 = (**(code **)(*local_2d0 + 0x48))(local_2d0,&local_290,&local_2b0,0);
        if (iVar6 < 0) {
          local_2b0 = CONCAT44(uStack_28c,local_290);
          uStack_2a8 = uStack_288;
          local_298 = local_278;
        }
        if (uStack_2a8._4_4_ == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          if (uStack_2a8._4_4_ != 0) {
            uVar12 = (uint)uStack_2a8 / uStack_2a8._4_4_;
          }
        }
        local_118 = CONCAT44(local_118._4_4_,uVar12);
        uStack_128 = CONCAT44((undefined4)local_2b0,(undefined4)uStack_128);
        uStack_120 = CONCAT44(uStack_120._4_4_,local_2b0._4_4_);
        uVar11 = 0x580000;
        if (uVar12 == 0) {
          uVar11 = 0x180000;
        }
        uStack_188 = CONCAT44(uStack_188._4_4_,uVar11);
        (*__imp_USER32_dll_ChangeDisplaySettingsExW)(&local_218,&local_1d0,0,4,0);
        (*__imp_USER32_dll_GetMonitorInfoW)(lVar8,&local_240);
        (*__imp_USER32_dll_SetWindowLongPtrW)(*param_2,0xfffffff0,0x90000000);
        (*__imp_USER32_dll_SetWindowLongPtrW)(*param_2,0xffffffec,0x40000);
        (*__imp_USER32_dll_SetWindowPos)
                  (*param_2,0xfffffffffffffffe,local_23c,iStack_238,local_234 - local_23c,
                   iStack_230 - iStack_238,0x10);
      }
      if (local_2c8[0] != (longlong *)0x0) {
        (**(code **)(*local_2c8[0] + 0x10))();
        local_2d0 = (longlong *)0x0;
      }
    }
  }
  else {
    if (iVar6 == 3) {
      if (*(short *)(param_2 + 0x193) != 0) {
        (*__imp_USER32_dll_ChangeDisplaySettingsExW)
                  ((longlong)param_2 + 0xc54,(longlong)param_2 + 0xc54,0,0,0);
      }
      (*__imp_USER32_dll_SetWindowLongPtrW)(*param_2,0xfffffff0,param_2[0x1a8]);
      (*__imp_USER32_dll_SetWindowLongPtrW)(*param_2,0xffffffec,param_2[0x1a9]);
      (*__imp_USER32_dll_SetWindowPos)
                (*param_2,0,*(int *)(param_2 + 0x1a6),*(int *)((longlong)param_2 + 0xd34),
                 *(int *)(param_2 + 0x1a7) - *(int *)(param_2 + 0x1a6),
                 *(int *)((longlong)param_2 + 0xd3c) - *(int *)((longlong)param_2 + 0xd34),0x214);
    }
    iVar7 = (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],0,0);
    *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
    FUN_1800e50b0(param_1,param_2,local_2d0,0);
LAB_1800e6834:
    if (iVar7 < 0) {
      *(int *)((longlong)param_2 + 0x3c) = iVar6;
      if (((param_3 == 2) && (local_2d0 != (longlong *)0x0)) &&
         ((iVar6 = (**(code **)(*local_2d0 + 0x38))(local_2d0,auStack_f0), -1 < iVar6 &&
          (uVar10 = (*__imp_USER32_dll_GetWindowLongPtrW)(*param_2,0xfffffff0),
          (uVar10 & 0x80c80000) == 0x80000000)))) {
        (*__imp_USER32_dll_GetWindowRect)(*param_2,local_2c8);
        iVar6 = (*__imp_USER32_dll_EqualRect)(local_2c8,auStack_b0);
        if (iVar6 == 0) goto LAB_1800e695c;
      }
      else {
LAB_1800e695c:
        FUN_1800e50b0(param_1,param_2,local_2d0,0);
        (**(code **)(*param_1 + 0x70))(param_1,param_2);
      }
      uVar9 = 0;
      goto LAB_1800e6984;
    }
  }
  uVar9 = (**(code **)(*(longlong *)param_2[1] + 0x60))((longlong *)param_2[1],&local_290);
  if ((-1 < (int)uVar9) && (local_254 - 3U < 2)) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    (**(code **)(*(longlong *)param_2[1] + 0x68))
              ((longlong *)param_2[1],local_268,local_290,uStack_28c,local_280,local_250);
    uVar9 = (**(code **)(*param_1 + 0x18))(param_1,param_2,0);
  }
  uVar5 = FUN_1800e5040(uVar9,param_2);
  *(undefined1 *)((longlong)param_2 + 0xd6e) = 0;
  *(undefined1 *)((longlong)param_2 + 0xd6d) = uVar5;
  (**(code **)(*param_1 + 0x70))(param_1,param_2);
  uVar9 = 1;
LAB_1800e6984:
  if (local_2d0 != (longlong *)0x0) {
    (**(code **)(*local_2d0 + 0x10))();
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0xc4);
  return uVar9;
}

