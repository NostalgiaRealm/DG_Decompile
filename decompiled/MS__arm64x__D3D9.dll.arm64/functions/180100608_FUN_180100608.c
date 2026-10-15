/*
 * FUN_180100608 at 180100608
 * undefined FUN_180100608(void)
 * Address ranges: 180100608-180100af7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180100608(undefined8 param_1,undefined4 param_2,ulonglong param_3,longlong param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_710 [2];
  ulonglong local_708;
  undefined **local_700;
  undefined8 uStack_6f8;
  undefined1 local_6f0;
  undefined **local_6e8;
  undefined8 uStack_6e0;
  undefined4 local_6d8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined1 local_698;
  undefined4 local_694;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined4 local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  ulonglong local_640;
  wchar_t awStack_638 [4];
  wchar_t awStack_630 [4];
  wchar_t awStack_628 [4];
  wchar_t local_620 [496];
  undefined1 auStack_240 [528];
  
  lVar6 = FUN_1800ff988();
  iVar4 = (*__imp_USER32_dll_IsWindow)(*(undefined8 *)(lVar6 + 0x3b0));
  bVar2 = iVar4 == 1;
  if (iVar4 == 1) {
    local_708 = local_708 & 0xffffffff00000000;
    (*__imp_USER32_dll_GetWindowThreadProcessId)(*(undefined8 *)(lVar6 + 0x3b0),&local_708);
    bVar2 = (int)local_708 == *(int *)(lVar6 + 0x3b8);
  }
  if ((*(longlong *)(lVar6 + 0x3b0) == 0) || (bVar2)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_180100588(lVar6,1);
    uVar5 = uVar5 & 0xff;
  }
  local_710[0] = 0;
  (*__imp_USER32_dll_GetWindowThreadProcessId)(param_4,local_710);
  switch(param_2) {
  case 0x401:
    if ((*(longlong *)(lVar6 + 0x3b0) == 0) && (param_4 != 0)) {
      if ((uVar5 == 0) &&
         (iVar4 = (*__imp_KERNEL32_dll_CreatePipe)(lVar6 + 0x3c0,lVar6 + 0x3c8,0,0), iVar4 != 0)) {
        *(longlong *)(lVar6 + 0x3b0) = param_4;
        *(int *)(lVar6 + 0x3b8) = local_710[0];
        thunk_FUN_180001218(lVar6 + 0x5dc,lVar6 + 0x800,0x20c);
        thunk_FUN_180001218(lVar6 + 0x3d0,lVar6 + 0x800,0x20c);
        *(undefined1 *)(lVar6 + 0x7e9) = 0;
      }
      uVar10 = (ulonglong)uVar5 ^ 1;
      goto LAB_180100ad4;
    }
    break;
  case 0x402:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
      FUN_180100588(lVar6,param_3 == 0);
      goto LAB_180100788;
    }
    break;
  case 0x403:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
      uVar12 = (*__imp_KERNEL32_dll_OpenProcess)(0x40,0,param_3 & 0xffffffff);
      uVar11 = *(undefined8 *)(lVar6 + 0x3c0);
LAB_1801007c8:
      local_708 = 0;
      uVar7 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
      (*__imp_KERNEL32_dll_DuplicateHandle)(uVar7,uVar11,uVar12,&local_708,0,0,2);
      (*__imp_KERNEL32_dll_CloseHandle)(uVar12);
      uVar10 = local_708;
      goto LAB_180100ad4;
    }
    break;
  case 0x404:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
      uVar12 = (*__imp_KERNEL32_dll_OpenProcess)(0x40,0,param_3 & 0xffffffff);
      uVar11 = *(undefined8 *)(lVar6 + 0x3c8);
      goto LAB_1801007c8;
    }
    break;
  case 0x405:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
      uStack_6f8 = *(undefined8 *)(lVar6 + 0x3c8);
      local_6f0 = 0;
      local_700 = &PTR_FUN_18023c868;
      FUN_1800d72c8(lVar6 + 0x800,&local_700);
      FUN_180101f20(&local_700);
      goto LAB_180100788;
    }
    break;
  case 0x406:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x388);
      uVar12 = *(undefined8 *)(lVar6 + 0x3c0);
      FUN_1800d14a0(auStack_240);
      local_700 = &PTR_FUN_18023c868;
      local_6f0 = 0;
      uStack_6f8 = uVar12;
      uVar10 = FUN_1800d5090(lVar6 + 0x5dc,&local_700,0);
      if ((uVar10 & 1) == 0) {
        local_6e8 = &PTR_FUN_18023af30;
        uStack_6e0 = 0;
        local_6d8 = 0;
        local_6d0 = 0;
        local_6c8 = 0;
        local_6c0 = 0;
        uStack_6b8 = 0;
        local_6b0 = 0;
        uStack_6a8 = 0;
        local_6a0 = 0;
        local_698 = 1;
        local_694 = 0;
        local_690 = 0;
        uStack_688 = 0;
        local_680 = 0;
        local_678 = 0;
        uStack_670 = 0;
        local_668 = 0;
        local_660 = 0;
        local_658 = 0;
        uStack_650 = 0;
        local_648 = 0;
        uVar10 = FUN_1800d74a0(&local_6e8,&local_700,1);
        if ((uVar10 & 1) != 0) {
          uVar10 = FUN_1800d4998(auStack_240,&local_6e8,0);
          if ((uVar10 & 1) == 0) {
            func_0x000180222c50(&local_640,0,0x20c);
            puVar8 = (ulonglong *)FUN_1800d14a0(&local_640);
          }
          else {
            thunk_FUN_180001218(&local_640,auStack_240,0x20c);
            puVar8 = &local_640;
          }
          thunk_FUN_180001218(lVar6 + 0x5dc,puVar8,0x20c);
        }
        FUN_1800d73d0(&local_6e8);
      }
      FUN_180101f20(&local_700);
      pcVar1 = __imp_KERNEL32_dll_LeaveCriticalSection;
      *(undefined1 *)(lVar6 + 0x7e9) = 1;
      (*pcVar1)(lVar6 + 0x388);
      goto LAB_180100788;
    }
    break;
  case 0x407:
    local_640 = local_640 & 0xffffffffffff0000;
    if (*(int *)(lVar6 + 0x138) == 0) {
      awStack_638[0] = u__Unknown__inactive__18023c7b8[4];
      awStack_638[1] = u__Unknown__inactive__18023c7b8[5];
      awStack_638[2] = u__Unknown__inactive__18023c7b8[6];
      awStack_638[3] = u__Unknown__inactive__18023c7b8[7];
      local_640._0_2_ = u__Unknown__inactive__18023c7b8[0];
      local_640._2_2_ = u__Unknown__inactive__18023c7b8[1];
      local_640._4_2_ = u__Unknown__inactive__18023c7b8[2];
      local_640._6_2_ = u__Unknown__inactive__18023c7b8[3];
      awStack_628[0] = u__Unknown__inactive__18023c7b8[0xc];
      awStack_628[1] = u__Unknown__inactive__18023c7b8[0xd];
      awStack_628[2] = u__Unknown__inactive__18023c7b8[0xe];
      awStack_628[3] = u__Unknown__inactive__18023c7b8[0xf];
      awStack_630[0] = u__Unknown__inactive__18023c7b8[8];
      awStack_630[1] = u__Unknown__inactive__18023c7b8[9];
      awStack_630[2] = u__Unknown__inactive__18023c7b8[10];
      awStack_630[3] = u__Unknown__inactive__18023c7b8[0xb];
      local_620[0] = u__Unknown__inactive__18023c7b8[0x10];
      local_620[1] = u__Unknown__inactive__18023c7b8[0x11];
      local_620[2] = u__Unknown__inactive__18023c7b8[0x12];
      local_620[3] = u__Unknown__inactive__18023c7b8[0x13];
    }
    else {
      uVar10 = 0;
      do {
        cVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x130) + uVar10 * 0x60 + 0x10) +
                            8))();
        if (cVar3 != '\0') goto LAB_180100a20;
        uVar5 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar6 + 0x138));
      uVar10 = 0;
LAB_180100a20:
      plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x130) + uVar10 * 0x60 + 0x10);
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_640,0x200);
    }
    (*__imp_USER32_dll_SetWindowTextW)(param_1,&local_640);
LAB_180100788:
    uVar10 = 1;
    goto LAB_180100ad4;
  default:
    uVar10 = (*__imp_USER32_dll_DefWindowProcW)(param_1,param_2,param_3,param_4);
    goto LAB_180100ad4;
  case 0x409:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
      thunk_FUN_180001218(lVar6 + 0x3d0,lVar6 + 0x5dc,0x20c);
      goto LAB_180100788;
    }
    break;
  case 0x40a:
    uVar10 = *(ulonglong *)(lVar6 + 0x3b0);
    goto LAB_180100ad4;
  }
  uVar10 = 0;
LAB_180100ad4:
  FUN_180100178(lVar6);
  return uVar10;
}

