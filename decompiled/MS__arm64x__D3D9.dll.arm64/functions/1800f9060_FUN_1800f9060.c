/*
 * FUN_1800f9060 at 1800f9060
 * undefined FUN_1800f9060(void)
 * Address ranges: 1800f9060-1800f994f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f9060(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  param_2 = param_2 & 0xffffffff;
  lVar2 = param_1 + param_2 * 0x28;
  iVar3 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar3;
  if (iVar3 == 0) {
    lVar2 = param_1 + param_2 * 0x20;
    lVar5 = param_1 + param_2 * 0x1ac0;
    if (*(char *)(lVar5 + 0x1dc7) != '\0') {
      *(undefined1 *)(lVar5 + 0x1dc6) = 1;
      (*__imp_KERNEL32_dll_SignalObjectAndWait)
                (*(undefined8 *)(lVar5 + 0x1c40),*(undefined8 *)(lVar5 + 0x1c38),0xffffffff,0);
      (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(lVar5 + 0x1c38));
      (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(lVar5 + 0x1c40));
      lVar6 = 0;
      do {
        (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(lVar5 + 0x1c68 + lVar6 * 0x28));
        thunk_FUN_180102fc0(*(undefined8 *)(lVar5 + 0x1c60 + lVar6 * 0x28));
        puVar8 = (undefined8 *)(lVar5 + 0x1c48 + lVar6 * 0x28);
        lVar6 = lVar6 + 1;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[4] = 0;
      } while (lVar6 != 8);
      *(undefined8 *)(lVar5 + 0x1c38) = 0;
      *(undefined8 *)(lVar5 + 0x1c40) = 0;
      (*__imp_KERNEL32_dll_FreeLibrary)(*(undefined8 *)(lVar5 + 0x1c00));
      *(undefined8 *)(lVar5 + 0x1c10) = 0;
      *(undefined8 *)(lVar5 + 0x1c18) = 0;
      (*__imp_KERNEL32_dll_FreeLibrary)(*(undefined8 *)(lVar5 + 0x1c08));
      *(undefined8 *)(lVar5 + 0x1c20) = 0;
      *(undefined8 *)(lVar5 + 0x1c00) = 0;
      *(undefined8 *)(lVar5 + 0x1c08) = 0;
      thunk_FUN_180102fc0(*(undefined8 *)(lVar5 + 0x1da0));
      *(undefined8 *)(lVar5 + 0x1d90) = 0;
      *(undefined8 *)(lVar5 + 0x1d88) = 0;
      *(undefined8 *)(lVar5 + 0x1da0) = 0;
      *(undefined8 *)(lVar5 + 0x1d98) = 0;
      *(undefined8 *)(lVar5 + 0x1da8) = 0;
      *(undefined1 *)(lVar5 + 0x1dc7) = 0;
    }
    FUN_1800e8548(*(longlong *)(lVar5 + 0x1e08) + 8,0);
    FUN_1800e8548(*(longlong *)(lVar5 + 0x1e18) + 8,0);
    uVar7 = 0;
    if (*(int *)(param_1 + 0x6c8) != 0) {
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar7 * 8);
        (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x6c8));
    }
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x2354) != 0) {
      do {
        FUN_1800ed6e8(lVar5 + 0x2348,
                      *(undefined8 *)(*(longlong *)(lVar5 + 0x2348) + uVar7 * 0x48 + 0x40));
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar5 + 0x2354));
    }
    *(undefined4 *)(lVar5 + 0x2354) = 0;
    if (*(longlong *)(lVar5 + 0x2250) != 0) {
      FUN_180038230();
    }
    lVar6 = *(longlong *)(lVar5 + 0x2248);
    *(undefined8 *)(lVar5 + 0x2250) = 0;
    if (lVar6 != 0) {
      FUN_1800e6ee0(lVar6);
      FUN_180102fc0(lVar6,0x78);
    }
    lVar6 = *(longlong *)(lVar5 + 0x2240);
    *(undefined8 *)(lVar5 + 0x2248) = 0;
    if (lVar6 != 0) {
      FUN_1800e6ee0(lVar6);
      FUN_180102fc0(lVar6,0x78);
    }
    lVar6 = *(longlong *)(lVar5 + 0x2238);
    *(undefined8 *)(lVar5 + 0x2240) = 0;
    if (lVar6 != 0) {
      FUN_1800e6ee0(lVar6);
      FUN_180102fc0(lVar6,0x78);
    }
    lVar6 = *(longlong *)(lVar5 + 0x2230);
    *(undefined8 *)(lVar5 + 0x2238) = 0;
    if (lVar6 != 0) {
      FUN_1800e6ee0(lVar6);
      FUN_180102fc0(lVar6,0x78);
    }
    *(undefined8 *)(lVar5 + 0x2230) = 0;
    if (*(longlong *)(lVar5 + 0x2378) != 0) {
      FUN_1800ed018(param_1);
      FUN_1800ed018(param_1,*(undefined8 *)(lVar5 + 0x2370));
      FUN_1800ed018(param_1,*(undefined8 *)(lVar5 + 0x2398));
      FUN_1800ed018(param_1,*(undefined8 *)(lVar5 + 0x2388));
      FUN_1800ed018(param_1,*(undefined8 *)(lVar5 + 0x2390));
      FUN_1800ed018(param_1,*(undefined8 *)(lVar5 + 0x2380));
      iVar3 = *(int *)(lVar5 + 0x236c);
      *(undefined8 *)(lVar5 + 0x2370) = 0;
      *(undefined8 *)(lVar5 + 0x2378) = 0;
      *(undefined8 *)(lVar5 + 0x2390) = 0;
      *(undefined8 *)(lVar5 + 0x2398) = 0;
      *(undefined8 *)(lVar5 + 0x2380) = 0;
      *(undefined8 *)(lVar5 + 0x2388) = 0;
      if (iVar3 != -1) {
        lVar6 = *(longlong *)(lVar5 + 0x2238);
        (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x28);
        FUN_1800e70e0(lVar6,iVar3,2);
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x28);
      }
      iVar3 = *(int *)(lVar5 + 0x2368);
      if (iVar3 != -1) {
        lVar6 = *(longlong *)(lVar5 + 0x2230);
        (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x28);
        FUN_1800e70e0(lVar6,iVar3,2);
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x28);
      }
      *(undefined4 *)(lVar5 + 0x2368) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0x236c) = 0xffffffff;
    }
    if (*(longlong *)(lVar5 + 0x908) != 0) {
      FUN_1800380e0(*(longlong *)(lVar5 + 0x908),1);
    }
    *(undefined8 *)(lVar5 + 0x908) = 0;
    if (*(longlong *)(lVar5 + 0x910) != 0) {
      FUN_1800380e0(*(longlong *)(lVar5 + 0x910),1);
    }
    *(undefined8 *)(lVar5 + 0x910) = 0;
    FUN_1800efb38(lVar5 + 0x1e20);
    FUN_1800efb38(lVar5 + 0x1eb0);
    FUN_1800efb38(lVar5 + 8000);
    FUN_1800efb38(lVar5 + 0x1fd0);
    FUN_1800efb38(lVar5 + 0x2060);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar5 + 0x20f0);
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x2138) != 0) {
      if (*(int *)(lVar5 + 0x2138) == 0) {
        puVar8 = (undefined8 *)&DAT_00000008;
        puVar12 = (undefined8 *)&DAT_00000018;
        puVar11 = (undefined8 *)&DAT_00000020;
        goto LAB_1800f9490;
      }
      do {
        lVar6 = *(longlong *)(lVar5 + 0x2130);
        uVar10 = uVar7 << 6;
        puVar8 = (undefined8 *)((uVar10 | 0x10) + lVar6);
        puVar12 = (undefined8 *)((uVar10 | 0x20) + lVar6);
        puVar11 = (undefined8 *)((uVar10 | 0x28) + lVar6);
LAB_1800f9490:
        thunk_FUN_180102fc0(*puVar8);
        thunk_FUN_180102fc0(*puVar12);
        thunk_FUN_180102fc0(*puVar11);
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar5 + 0x2138));
    }
    thunk_FUN_180102fc0(*(undefined8 *)(lVar5 + 0x2128));
    *(undefined8 *)(lVar5 + 0x2128) = 0;
    *(undefined8 *)(lVar5 + 0x2130) = 0;
    *(undefined4 *)(lVar5 + 0x2138) = 0;
    *(undefined4 *)(lVar5 + 0x213c) = 0;
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar5 + 0x20f0);
    (*__imp_KERNEL32_dll_DeleteCriticalSection)(lVar5 + 0x20f0);
    FUN_1800fdac0(lVar5 + 0x2140);
    FUN_1800fdac0(lVar5 + 0x21b8);
    lVar6 = *(longlong *)(param_1 + 0x1b500);
    uVar9 = *(undefined8 *)(lVar5 + 0x1e08);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x28);
    FUN_1800f1198(lVar6,0,uVar9);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x28);
    lVar6 = *(longlong *)(param_1 + 0x1b500);
    uVar9 = *(undefined8 *)(lVar5 + 0x1e18);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x28);
    FUN_1800f1198(lVar6,0,uVar9);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x28);
    lVar6 = *(longlong *)(param_1 + 0x1b500);
    uVar9 = *(undefined8 *)(lVar5 + 0x1e00);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x28);
    FUN_1800f1198(lVar6,uVar9,0);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x28);
    lVar6 = *(longlong *)(param_1 + 0x1b500);
    uVar9 = *(undefined8 *)(lVar5 + 0x1e10);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x28);
    FUN_1800f1198(lVar6,uVar9,0);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x28);
    uVar9 = FUN_180102fc0(*(undefined8 *)(lVar5 + 0x1ba8),0x10);
    *(undefined8 *)(lVar5 + 0x1ba8) = 0;
    *(undefined8 *)(lVar5 + 0x1bb0) = 0;
    uVar9 = FUN_1800ed150(uVar9,0x2b,lVar5 + 0x1a40);
    uVar9 = FUN_1800ed150(uVar9,2,lVar5 + 0x1b98);
    FUN_1800ed150(uVar9,4,lVar5 + 0x1a20);
    FUN_1800ee430(lVar5 + 0x22d8,*(undefined8 *)(lVar5 + 0x918));
    FUN_1800ee910(lVar5 + 0x2308,*(undefined8 *)(lVar5 + 0x9b8));
    if (*(longlong *)(lVar5 + 0x918) != 0) {
      FUN_1800f1380(*(undefined8 *)(param_1 + 0x1b500),*(longlong *)(lVar5 + 0x918),0,1);
    }
    if (*(longlong *)(lVar5 + 0x9b8) != 0) {
      FUN_1800f1380(*(undefined8 *)(param_1 + 0x1b500),*(longlong *)(lVar5 + 0x9b8),0,1);
    }
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x226c) != 0) {
      do {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 0x2260) + uVar7 * 0x48 + 0x40);
        FUN_1800ee780(*(undefined8 *)(lVar5 + 0x2270),uVar9);
        FUN_180102fc0(uVar9,0x34);
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar5 + 0x226c));
    }
    *(undefined4 *)(lVar5 + 0x226c) = 0;
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x2284) != 0) {
      do {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 0x2278) + uVar7 * 0x158 + 0x150);
        FUN_1800ee5f0(*(undefined8 *)(lVar5 + 0x2288),uVar9);
        FUN_180102fc0(uVar9,0x148);
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar5 + 0x2284));
    }
    *(undefined4 *)(lVar5 + 0x2284) = 0;
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x229c) != 0) {
      do {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 0x2290) + uVar7 * 0x158 + 0x150);
        FUN_1800ee5f0(*(undefined8 *)(lVar5 + 0x22a0),uVar9);
        FUN_180102fc0(uVar9,0x148);
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar5 + 0x229c));
    }
    *(undefined4 *)(lVar5 + 0x229c) = 0;
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x22b4) != 0) {
      do {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 0x22a8) + uVar7 * 0x40 + 0x38);
        FUN_1800ee6b8(*(undefined8 *)(lVar5 + 0x22b8),uVar9);
        FUN_180102fc0(uVar9,0x2c);
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar5 + 0x22b4));
    }
    *(undefined4 *)(lVar5 + 0x22b4) = 0;
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x22cc) != 0) {
      do {
        FUN_1800ed328(lVar5 + 0x22c0,
                      *(undefined8 *)(*(longlong *)(lVar5 + 0x22c0) + uVar7 * 0x18 + 0x10));
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar5 + 0x22cc));
    }
    *(undefined4 *)(lVar5 + 0x22cc) = 0;
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x22fc) != 0) {
      do {
        uVar10 = 0;
        plVar4 = *(longlong **)(*(longlong *)(lVar5 + 0x22f0) + uVar7 * 0x18 + 0x10);
        if ((int)plVar4[1] != 0) {
          do {
            FUN_1800f1380(*(undefined8 *)(lVar5 + 0x22d8),
                          *(undefined8 *)(*plVar4 + uVar10 * 0xa8 + 0xa0),0,1);
            (**(code **)(**(longlong **)(*plVar4 + uVar10 * 0xa8 + 0xa0) + 0x10))();
            uVar1 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(plVar4 + 1));
        }
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar5 + 0x22fc));
      uVar7 = 0;
      if (*(uint *)(lVar5 + 0x22fc) != 0) {
        do {
          puVar8 = *(undefined8 **)(*(longlong *)(lVar5 + 0x22f0) + uVar7 * 0x18 + 0x10);
          if (puVar8 != (undefined8 *)0x0) {
            thunk_FUN_180102fc0(*puVar8);
            FUN_180102fc0(puVar8,0x10);
          }
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar5 + 0x22fc));
      }
    }
    *(undefined8 *)(lVar5 + 0x22fc) = 0;
    (**(code **)(**(longlong **)(lVar5 + 0x9b8) + 0x10))();
    *(undefined8 *)(lVar5 + 0x9b8) = 0;
    (**(code **)(**(longlong **)(lVar5 + 0x918) + 0x10))();
    *(undefined8 *)(lVar5 + 0x918) = 0;
    *(undefined8 *)(lVar5 + 0x2270) = 0;
    *(undefined8 *)(lVar5 + 0x2288) = 0;
    *(undefined8 *)(lVar5 + 0x22a0) = 0;
    *(undefined8 *)(lVar5 + 0x22b8) = 0;
    *(undefined8 *)(lVar5 + 0x22d0) = 0;
    FUN_1800f8bc0(param_1,param_2);
    if (*(longlong *)(lVar2 + 0x6d0) != 0) {
      (**(code **)(**(longlong **)(lVar2 + 0x6d8) + 0x10))();
      *(undefined8 *)(lVar2 + 0x6d8) = 0;
      (**(code **)(**(longlong **)(lVar2 + 0x6d0) + 0x10))();
      *(undefined8 *)(lVar2 + 0x6d0) = 0;
    }
  }
  return;
}

