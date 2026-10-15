/*
 * FUN_180050294 at 180050294
 * undefined8 __fastcall FUN_180050294(LPCRITICAL_SECTION param_1, undefined8 * param_2, int param_3, int param_4)
 * Address ranges: 180050294-180050848
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0001800503a9) */
/* WARNING: Removing unreachable block (ram,0x0001800503bb) */
/* WARNING: Removing unreachable block (ram,0x0001800503da) */
/* WARNING: Removing unreachable block (ram,0x000180050471) */

undefined8 FUN_180050294(LPCRITICAL_SECTION param_1,undefined8 *param_2,int param_3,int param_4)

{
  DEVMODEW *lpDevMode;
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  int iVar6;
  uint uVar7;
  LONG_PTR LVar8;
  HMONITOR hMonitor;
  undefined8 uVar9;
  undefined8 extraout_RAX;
  LPCRITICAL_SECTION p_Var10;
  undefined1 uVar11;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 in_stack_fffffffffffffd08;
  undefined4 uVar12;
  DWORD local_2d8;
  DWORD local_2d4;
  uint local_2d0;
  uint local_2cc;
  undefined4 local_2c0;
  LPCRITICAL_SECTION local_2b8;
  DWORD local_2a8;
  DWORD local_2a4;
  uint local_2a0;
  uint local_29c;
  undefined4 local_298;
  undefined4 local_290;
  undefined4 local_280;
  int local_26c;
  undefined4 local_268;
  tagMONITORINFO local_248;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  DEVMODEW local_1d8;
  undefined1 local_98 [88];
  HMONITOR local_40;
  
  p_Var10 = (LPCRITICAL_SECTION)&param_1[0x27].LockCount;
  local_2b8 = p_Var10;
  EnterCriticalSection(p_Var10);
  uVar7 = *(uint *)(param_2 + 2);
  if (((param_3 != 0) && (param_4 != 0)) &&
     (p_Var10 = param_1, cVar3 = (*(code *)param_1->DebugInfo->CriticalSection)(), cVar3 == '\0')) {
    p_Var10 = param_1[uVar7].LockSemaphore;
    (*(code *)p_Var10->DebugInfo[1].CriticalSection)(p_Var10,param_4 + -1);
  }
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
  local_res8 = (longlong *)0x0;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar11 = 1;
  if (param_3 - 2U < 2) {
    *(int *)((longlong)param_2 + 0x3c) = param_3;
    FUN_18004f2d8((longlong *)param_1,param_2,(longlong *)0x0,'\0');
    uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
    if (*(int *)((longlong)param_2 + 0x3c) != 3) {
      iVar4 = (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],1,0);
      goto LAB_18005038a;
    }
    LVar8 = GetWindowLongPtrW((HWND)*param_2,-0x10);
    param_2[0x1a8] = LVar8;
    LVar8 = GetWindowLongPtrW((HWND)*param_2,-0x14);
    param_2[0x1a9] = LVar8;
    GetWindowRect((HWND)*param_2,(LPRECT)(param_2 + 0x1a6));
    hMonitor = MonitorFromRect((LPRECT)(param_2 + 0x1a6),2);
    lpDevMode = (DEVMODEW *)((longlong)param_2 + 0xc54);
    FUN_18005f374((undefined1 *)lpDevMode,0,0xdc);
    local_248.cbSize = 0x68;
    BVar5 = GetMonitorInfoW(hMonitor,&local_248);
    uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
    if (BVar5 != 0) {
      BVar5 = EnumDisplaySettingsW((LPCWSTR)&local_220,0xffffffff,lpDevMode);
      uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
      if (BVar5 != 0) {
        plVar2 = (longlong *)param_2[1];
        *(undefined8 *)lpDevMode->dmDeviceName = local_220;
        *(undefined8 *)((longlong)param_2 + 0xc5c) = uStack_218;
        *(undefined8 *)((longlong)param_2 + 0xc64) = local_210;
        *(undefined8 *)((longlong)param_2 + 0xc6c) = uStack_208;
        *(undefined4 *)((longlong)param_2 + 0xc74) = local_200;
        *(undefined4 *)(param_2 + 399) = uStack_1fc;
        *(undefined4 *)((longlong)param_2 + 0xc7c) = uStack_1f8;
        *(undefined4 *)(param_2 + 400) = uStack_1f4;
        *(undefined4 *)((longlong)param_2 + 0xc84) = local_1f0;
        *(undefined4 *)(param_2 + 0x191) = uStack_1ec;
        *(undefined4 *)((longlong)param_2 + 0xc8c) = uStack_1e8;
        *(undefined4 *)(param_2 + 0x192) = uStack_1e4;
        (**(code **)(*plVar2 + 0x60))(plVar2,&local_2a8);
        local_1d8.dmDeviceName._0_8_ = *(undefined8 *)lpDevMode->dmDeviceName;
        local_1d8.dmDeviceName._8_8_ = *(undefined8 *)((longlong)param_2 + 0xc5c);
        local_res10 = (longlong *)0x0;
        local_1d8.dmDeviceName._16_8_ = *(undefined8 *)((longlong)param_2 + 0xc64);
        local_1d8.dmDeviceName._24_8_ = *(undefined8 *)((longlong)param_2 + 0xc6c);
        local_1d8.dmDeviceName._32_8_ = *(undefined8 *)((longlong)param_2 + 0xc74);
        local_1d8.dmDeviceName._40_8_ = *(undefined8 *)((longlong)param_2 + 0xc7c);
        local_1d8.dmDeviceName._48_8_ = *(undefined8 *)((longlong)param_2 + 0xc84);
        local_1d8.dmDeviceName._56_8_ = *(undefined8 *)((longlong)param_2 + 0xc8c);
        local_1d8._64_8_ = *(undefined8 *)((longlong)param_2 + 0xc94);
        local_1d8._72_8_ = *(undefined8 *)((longlong)param_2 + 0xc9c);
        local_1d8.field6_0x4c._4_8_ = *(undefined8 *)((longlong)param_2 + 0xca4);
        local_1d8._88_8_ = *(undefined8 *)((longlong)param_2 + 0xcac);
        local_1d8._96_8_ = *(undefined8 *)((longlong)param_2 + 0xcb4);
        local_1d8.dmFormName._2_8_ = *(undefined8 *)((longlong)param_2 + 0xcbc);
        local_1d8.dmFormName._10_8_ = *(undefined8 *)((longlong)param_2 + 0xcc4);
        local_1d8.dmFormName._18_8_ = *(undefined8 *)((longlong)param_2 + 0xccc);
        local_1d8.dmFormName._26_8_ = *(undefined8 *)((longlong)param_2 + 0xcd4);
        local_1d8.dmFormName._34_8_ = *(undefined8 *)((longlong)param_2 + 0xcdc);
        local_1d8.dmFormName._42_8_ = *(undefined8 *)((longlong)param_2 + 0xce4);
        local_1d8.dmFormName._50_8_ = *(undefined8 *)((longlong)param_2 + 0xcec);
        local_1d8._160_8_ = *(undefined8 *)((longlong)param_2 + 0xcf4);
        local_1d8._168_8_ = *(undefined8 *)((longlong)param_2 + 0xcfc);
        local_1d8._176_8_ = *(undefined8 *)((longlong)param_2 + 0xd04);
        local_1d8._184_8_ = *(undefined8 *)((longlong)param_2 + 0xd0c);
        local_1d8.dmICMIntent = *(DWORD *)((longlong)param_2 + 0xd14);
        local_1d8.dmMediaType = *(DWORD *)(param_2 + 0x1a3);
        local_1d8.dmDitherType = *(DWORD *)((longlong)param_2 + 0xd1c);
        local_1d8._204_8_ = param_2[0x1a4];
        local_1d8._212_8_ = param_2[0x1a5];
        iVar4 = 0;
        while( true ) {
          iVar6 = (**(code **)(*(longlong *)param_1[uVar7].LockSemaphore + 0x38))
                            (param_1[uVar7].LockSemaphore,iVar4,&local_res10);
          uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
          plVar2 = local_res8;
          if (iVar6 < 0) break;
          (**(code **)(*local_res10 + 0x38))(local_res10,local_98);
          uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
          plVar2 = local_res10;
          if (local_40 == hMonitor) break;
          (**(code **)(*local_res10 + 0x10))();
          iVar4 = iVar4 + 1;
        }
        local_res8 = plVar2;
        if (local_res8 != (longlong *)0x0) {
          iVar4 = (**(code **)(*local_res8 + 0x48))(local_res8,&local_2a8,&local_2d8,0);
          if (iVar4 < 0) {
            local_2d8 = local_2a8;
            local_2d4 = local_2a4;
            local_2d0 = local_2a0;
            local_2cc = local_29c;
            local_2c0 = local_290;
          }
          if (local_2cc == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = local_2d0 / local_2cc;
          }
          local_1d8.dmDisplayFrequency = uVar7;
          local_1d8.dmPelsWidth = local_2d8;
          local_1d8.dmPelsHeight = local_2d4;
          uVar12 = 0;
          local_1d8.dmFields = (-(uint)(uVar7 != 0) & 0x400000) + 0x180000;
          ChangeDisplaySettingsExW((LPCWSTR)&local_220,&local_1d8,(HWND)0x0,4,(LPVOID)0x0);
          GetMonitorInfoW(hMonitor,&local_248);
          SetWindowLongPtrW((HWND)*param_2,-0x10,0x90000000);
          SetWindowLongPtrW((HWND)*param_2,-0x14,0x40000);
          SetWindowPos((HWND)*param_2,(HWND)0xfffffffffffffffe,local_248.rcMonitor.left,
                       local_248.rcMonitor.top,local_248.rcMonitor.right - local_248.rcMonitor.left,
                       local_248.rcMonitor.bottom - local_248.rcMonitor.top,0x10);
        }
        if (local_res10 != (longlong *)0x0) {
          (**(code **)(*local_res10 + 0x10))();
          local_res8 = (longlong *)0x0;
        }
      }
    }
  }
  else {
    iVar4 = FUN_18004f418(p_Var10,param_2);
    FUN_18004f2d8((longlong *)param_1,param_2,(longlong *)0x0,'\0');
LAB_18005038a:
    if (iVar4 < 0) {
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar1;
      FUN_18004f2d8((longlong *)param_1,param_2,(longlong *)0x0,'\0');
      (*(code *)param_1->DebugInfo[2].ProcessLocksList.Flink)(param_1,param_2);
      uVar11 = 0;
      goto LAB_18005080e;
    }
  }
  p_Var10 = (LPCRITICAL_SECTION)param_2[1];
  iVar4 = (**(code **)(p_Var10->DebugInfo + 2))(p_Var10,&local_2a8);
  if ((-1 < iVar4) && (local_26c == 3 || local_26c == 4)) {
    (**(code **)&param_1->DebugInfo->EntryCount)(param_1,param_2);
    (**(code **)(*(longlong *)param_2[1] + 0x68))
              ((longlong *)param_2[1],local_280,local_2a8,local_2a4,CONCAT44(uVar12,local_298),
               local_268);
    p_Var10 = param_1;
    (*(code *)(param_1->DebugInfo->ProcessLocksList).Blink)(param_1,param_2,0);
  }
  uVar9 = FUN_18004f114((ulonglong)p_Var10,(longlong)param_2);
  *(char *)((longlong)param_2 + 0xd6d) = (char)uVar9;
  *(undefined1 *)((longlong)param_2 + 0xd6e) = 0;
  (*(code *)param_1->DebugInfo[2].ProcessLocksList.Flink)(param_1,param_2);
LAB_18005080e:
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x10))();
  }
  LeaveCriticalSection(local_2b8);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),uVar11);
}

