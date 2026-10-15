/*
 * FUN_1800e50b0 at 1800e50b0
 * undefined FUN_1800e50b0(void)
 * Address ranges: 1800e50b0-1800e546b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e50b0(longlong *param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 local_250;
  int local_248;
  int iStack_244;
  int local_240;
  int iStack_23c;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  int local_220;
  int iStack_21c;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  int local_1e0;
  int iStack_1dc;
  undefined8 uStack_1d8;
  ulonglong local_1d0;
  undefined4 local_1c8;
  undefined1 auStack_190 [88];
  undefined8 local_138;
  undefined1 auStack_130 [68];
  undefined4 local_ec;
  int local_84;
  int iStack_80;
  undefined4 local_78;
  
  (**(code **)(*(longlong *)param_2[1] + 0x60))((longlong *)param_2[1],&local_1e0);
  uStack_218 = uStack_1d8;
  uStack_238 = uStack_1d8;
  if ((*(int *)((longlong)param_2 + 0x3c) == 1) ||
     ((*(int *)((longlong)param_2 + 0x3c) - 2U < 2 && (*(int *)(param_2 + 6) - 1U < 2)))) {
    local_250 = param_3;
    if (param_3 == (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[1] + 0x78))((longlong *)param_2[1],&local_250);
    }
    plVar1 = local_250;
    if (local_250 != (longlong *)0x0) {
      (**(code **)(*local_250 + 8))(local_250);
    }
    local_ec = 0xdc;
    if (plVar1 == (longlong *)0x0) {
      (*__imp_USER32_dll_EnumDisplaySettingsW)(0,0xffffffff,auStack_130);
    }
    else {
      (**(code **)(*plVar1 + 0x38))(plVar1,auStack_190);
      (*__imp_USER32_dll_EnumDisplaySettingsW)(auStack_190,0xffffffff,auStack_130);
      uStack_22c = 1;
      local_228 = 0;
      uStack_238 = CONCAT44(1,local_78);
      local_230 = *(undefined4 *)(&DAT_180232e48 + (ulonglong)*(uint *)(param_1 + 0xcf) * 4);
      (**(code **)(*plVar1 + 0x48))(plVar1,&local_240,&local_210,0);
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    if (((int)param_1[0xcd] == 0) ||
       (iVar8 = *(int *)((longlong)param_1 + 0x66c), iVar4 = (int)param_1[0xcd],
       *(int *)((longlong)param_1 + 0x66c) == 0)) {
      iVar8 = iStack_80;
      iVar4 = local_84;
    }
    uVar7 = 0;
    uStack_238 = uStack_218;
    local_220 = iVar4;
    iStack_21c = iVar8;
    local_240 = iVar4;
    iStack_23c = iVar8;
    if (local_250 != param_3) {
      (**(code **)(*local_250 + 0x10))();
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 3);
    iVar8 = *(int *)((longlong)param_2 + 0x1c);
    uVar7 = local_1c8;
    local_220 = iVar4;
    iStack_21c = iVar8;
    local_240 = iVar4;
    iStack_23c = iVar8;
  }
  iVar3 = iStack_21c;
  iVar2 = local_220;
  if ((local_1e0 != iVar4) || (iStack_1dc != iVar8 || param_4 != '\0')) {
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    uVar6 = FUN_1800e5040(uVar5,param_2);
    if ((uVar6 & 1) == 0) {
      (*__imp_USER32_dll_GetWindowRect)(*param_2,&local_250);
      (*__imp_USER32_dll_GetClientRect)(*param_2,&local_220);
      (*__imp_USER32_dll_SetWindowPos)
                (*param_2,0,0,0,((local_248 - (int)local_250) - (int)uStack_218) + local_220 + iVar2
                 ,((iStack_244 - local_250._4_4_) - uStack_218._4_4_) + iStack_21c + iVar3,0x216);
    }
    else {
      local_230 = (undefined4)local_1d0;
      uStack_22c = (undefined4)(local_1d0 >> 0x20);
      local_250 = (longlong *)0x0;
      uStack_238 = uStack_218;
      local_240 = local_220;
      iStack_23c = iStack_21c;
      local_228 = uVar7;
      iVar4 = (**(code **)(*(longlong *)param_2[1] + 0x78))((longlong *)param_2[1],&local_250);
      if (-1 < iVar4) {
        iVar4 = (**(code **)(*local_250 + 0x38))(local_250,auStack_190);
        if (-1 < iVar4) {
          uStack_208 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          local_210 = 0x28;
          local_1f0 = 0;
          iVar4 = (*__imp_USER32_dll_GetMonitorInfoW)(local_138,&local_210);
          if (iVar4 != 0) {
            local_240 = uStack_208._4_4_ - local_210._4_4_;
            iStack_23c = (int)uStack_200 - (int)uStack_208;
          }
        }
        (**(code **)(*local_250 + 0x10))();
      }
      (**(code **)(*(longlong *)param_2[1] + 0x70))((longlong *)param_2[1],&local_240);
    }
    uVar7 = 0x802;
    if (*(char *)((longlong)param_2 + 0xd6c) == '\0') {
      uVar7 = 2;
    }
    (**(code **)(*(longlong *)param_2[1] + 0x68))
              ((longlong *)param_2[1],2,iVar2,iVar3,local_1d0 & 0xffffffff,uVar7);
    (**(code **)(*param_1 + 0x18))(param_1,param_2,0);
    (**(code **)(*(longlong *)param_1[0xd1] + 0x40))((longlong *)param_1[0xd1],*param_2,1);
  }
  return;
}

