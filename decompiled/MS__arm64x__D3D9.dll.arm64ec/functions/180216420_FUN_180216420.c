/*
 * FUN_180216420 at 180216420
 * undefined FUN_180216420(void)
 * Address ranges: 180216420-180216c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180216420(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  
  lVar1 = param_1 + (ulonglong)param_2 * 0x28;
  iVar2 = *(int *)(lVar1 + 0x28) + -1;
  *(int *)(lVar1 + 0x28) = iVar2;
  if (iVar2 == 0) {
    lVar1 = param_1 + (ulonglong)param_2 * 0x20;
    lVar5 = param_1 + (ulonglong)param_2 * 0x1ac0;
    FUN_180221760(lVar5 + 0x1bc0);
    FUN_180207560(*(longlong *)(lVar5 + 0x1e08) + 8,0);
    FUN_180207560(*(longlong *)(lVar5 + 0x1e18) + 8,0);
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
    uVar6 = 0;
    if (*(int *)(param_1 + 0x6c8) != 0) {
      do {
        uVar4 = (*(code *)puVar3)();
        (*extraout_x11)(uVar4,param_2);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x6c8));
    }
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x2354) != 0) {
      do {
        FUN_180204968(lVar5 + 0x2348,
                      *(undefined8 *)(*(longlong *)(lVar5 + 0x2348) + uVar7 * 0x48 + 0x40));
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar5 + 0x2354));
    }
    *(undefined4 *)(lVar5 + 0x2354) = 0;
    if (*(longlong *)(lVar5 + 0x2250) != 0) {
      FUN_180146600();
    }
    lVar8 = *(longlong *)(lVar5 + 0x2248);
    *(undefined8 *)(lVar5 + 0x2250) = 0;
    if (lVar8 != 0) {
      FUN_18020c468(lVar8);
      FUN_1802229d8(lVar8,0x78);
    }
    lVar8 = *(longlong *)(lVar5 + 0x2240);
    *(undefined8 *)(lVar5 + 0x2248) = 0;
    if (lVar8 != 0) {
      FUN_18020c468(lVar8);
      FUN_1802229d8(lVar8,0x78);
    }
    lVar8 = *(longlong *)(lVar5 + 0x2238);
    *(undefined8 *)(lVar5 + 0x2240) = 0;
    if (lVar8 != 0) {
      FUN_18020c468(lVar8);
      FUN_1802229d8(lVar8,0x78);
    }
    lVar8 = *(longlong *)(lVar5 + 0x2230);
    *(undefined8 *)(lVar5 + 0x2238) = 0;
    if (lVar8 != 0) {
      FUN_18020c468(lVar8);
      FUN_1802229d8(lVar8,0x78);
    }
    *(undefined8 *)(lVar5 + 0x2230) = 0;
    if (*(longlong *)(lVar5 + 0x2378) != 0) {
      FUN_180206a20(param_1);
      FUN_180206a20(param_1,*(undefined8 *)(lVar5 + 0x2370));
      FUN_180206a20(param_1,*(undefined8 *)(lVar5 + 0x2398));
      FUN_180206a20(param_1,*(undefined8 *)(lVar5 + 0x2388));
      FUN_180206a20(param_1,*(undefined8 *)(lVar5 + 0x2390));
      FUN_180206a20(param_1,*(undefined8 *)(lVar5 + 0x2380));
      iVar2 = *(int *)(lVar5 + 0x236c);
      *(undefined8 *)(lVar5 + 0x2370) = 0;
      *(undefined8 *)(lVar5 + 0x2378) = 0;
      *(undefined8 *)(lVar5 + 0x2390) = 0;
      *(undefined8 *)(lVar5 + 0x2398) = 0;
      *(undefined8 *)(lVar5 + 0x2380) = 0;
      *(undefined8 *)(lVar5 + 0x2388) = 0;
      if (iVar2 != -1) {
        lVar8 = *(longlong *)(lVar5 + 0x2238);
        thunk_FUN_1802236f8(lVar8 + 0x28);
        FUN_18020c678(lVar8,iVar2,2);
        thunk_FUN_18022370c(lVar8 + 0x28);
      }
      iVar2 = *(int *)(lVar5 + 0x2368);
      if (iVar2 != -1) {
        lVar8 = *(longlong *)(lVar5 + 0x2230);
        thunk_FUN_1802236f8(lVar8 + 0x28);
        FUN_18020c678(lVar8,iVar2,2);
        thunk_FUN_18022370c(lVar8 + 0x28);
      }
      *(undefined4 *)(lVar5 + 0x2368) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0x236c) = 0xffffffff;
    }
    if (*(longlong *)(lVar5 + 0x908) != 0) {
      FUN_180146480(*(longlong *)(lVar5 + 0x908),1);
    }
    *(undefined8 *)(lVar5 + 0x908) = 0;
    if (*(longlong *)(lVar5 + 0x910) != 0) {
      FUN_180146480(*(longlong *)(lVar5 + 0x910),1);
    }
    *(undefined8 *)(lVar5 + 0x910) = 0;
    FUN_18020f0a8(lVar5 + 0x1e20);
    FUN_18020f0a8(lVar5 + 0x1eb0);
    FUN_18020f0a8(lVar5 + 8000);
    FUN_18020f0a8(lVar5 + 0x1fd0);
    FUN_18020f0a8(lVar5 + 0x2060);
    thunk_FUN_1802236f8(lVar5 + 0x20f0);
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x2138) != 0) {
      if (*(int *)(lVar5 + 0x2138) == 0) {
        puVar11 = (undefined8 *)&DAT_00000008;
        puVar13 = (undefined8 *)&DAT_00000018;
        puVar9 = (undefined8 *)&DAT_00000020;
        goto LAB_180216740;
      }
      do {
        lVar8 = *(longlong *)(lVar5 + 0x2130);
        uVar12 = uVar7 << 6;
        puVar11 = (undefined8 *)((uVar12 | 0x10) + lVar8);
        puVar13 = (undefined8 *)((uVar12 | 0x20) + lVar8);
        puVar9 = (undefined8 *)((uVar12 | 0x28) + lVar8);
LAB_180216740:
        FUN_1802229d8(*puVar11);
        FUN_1802229d8(*puVar13);
        FUN_1802229d8(*puVar9);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar5 + 0x2138));
    }
    FUN_1802229d8(*(undefined8 *)(lVar5 + 0x2128));
    *(undefined8 *)(lVar5 + 0x2128) = 0;
    *(undefined8 *)(lVar5 + 0x2130) = 0;
    *(undefined4 *)(lVar5 + 0x2138) = 0;
    *(undefined4 *)(lVar5 + 0x213c) = 0;
    thunk_FUN_18022370c(lVar5 + 0x20f0);
    thunk_FUN_180223860(lVar5 + 0x20f0);
    FUN_18021d318(lVar5 + 0x2140);
    FUN_18021d318(lVar5 + 0x21b8);
    uVar4 = *(undefined8 *)(lVar5 + 0x1e08);
    lVar8 = *(longlong *)(param_1 + 0x1b500);
    thunk_FUN_1802236f8(lVar8 + 0x28);
    FUN_18020d7d0(lVar8,0,uVar4);
    thunk_FUN_18022370c(lVar8 + 0x28);
    lVar8 = *(longlong *)(param_1 + 0x1b500);
    uVar4 = *(undefined8 *)(lVar5 + 0x1e18);
    thunk_FUN_1802236f8(lVar8 + 0x28);
    FUN_18020d7d0(lVar8,0,uVar4);
    thunk_FUN_18022370c(lVar8 + 0x28);
    lVar8 = *(longlong *)(param_1 + 0x1b500);
    uVar4 = *(undefined8 *)(lVar5 + 0x1e00);
    thunk_FUN_1802236f8(lVar8 + 0x28);
    FUN_18020d7d0(lVar8,uVar4,0);
    thunk_FUN_18022370c(lVar8 + 0x28);
    lVar8 = *(longlong *)(param_1 + 0x1b500);
    uVar4 = *(undefined8 *)(lVar5 + 0x1e10);
    thunk_FUN_1802236f8(lVar8 + 0x28);
    FUN_18020d7d0(lVar8,uVar4,0);
    thunk_FUN_18022370c(lVar8 + 0x28);
    uVar4 = FUN_1802229d8(*(undefined8 *)(lVar5 + 0x1ba8),0x10);
    *(undefined8 *)(lVar5 + 0x1ba8) = 0;
    *(undefined8 *)(lVar5 + 0x1bb0) = 0;
    uVar4 = FUN_180206b80(uVar4,0x2b,lVar5 + 0x1a40);
    uVar4 = FUN_180206b80(uVar4,2,lVar5 + 0x1b98);
    FUN_180206b80(uVar4,4,lVar5 + 0x1a20);
    FUN_180205738(lVar5 + 0x22d8,*(undefined8 *)(lVar5 + 0x918));
    lVar8 = *(longlong *)(lVar5 + 0x9b8);
    if (*(uint *)(lVar5 + 0x2314) != 0) {
      uVar7 = (ulonglong)*(uint *)(lVar5 + 0x2314);
      do {
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x2308) + uVar7 * 0x28 + 8) == lVar8) {
          FUN_180205c80(lVar5 + 0x2308,uVar7);
        }
      } while (uVar6 != 0);
    }
    if (*(longlong *)(lVar5 + 0x918) != 0) {
      FUN_18020d9f8(*(undefined8 *)(param_1 + 0x1b500),*(longlong *)(lVar5 + 0x918),0,1);
    }
    if (*(longlong *)(lVar5 + 0x9b8) != 0) {
      FUN_18020d9f8(*(undefined8 *)(param_1 + 0x1b500),*(longlong *)(lVar5 + 0x9b8),0,1);
    }
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x226c) != 0) {
      do {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + 0x2260) + uVar7 * 0x48 + 0x40);
        FUN_180205aa8(*(undefined8 *)(lVar5 + 0x2270),uVar4);
        FUN_1802229d8(uVar4,0x34);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar5 + 0x226c));
    }
    *(undefined4 *)(lVar5 + 0x226c) = 0;
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x2284) != 0) {
      do {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + 0x2278) + uVar7 * 0x158 + 0x150);
        FUN_180205908(*(undefined8 *)(lVar5 + 0x2288),uVar4);
        FUN_1802229d8(uVar4,0x148);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar5 + 0x2284));
    }
    *(undefined4 *)(lVar5 + 0x2284) = 0;
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x229c) != 0) {
      do {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + 0x2290) + uVar7 * 0x158 + 0x150);
        FUN_180205908(*(undefined8 *)(lVar5 + 0x22a0),uVar4);
        FUN_1802229d8(uVar4,0x148);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar5 + 0x229c));
    }
    *(undefined4 *)(lVar5 + 0x229c) = 0;
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x22b4) != 0) {
      do {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + 0x22a8) + uVar7 * 0x40 + 0x38);
        FUN_1802059d8(*(undefined8 *)(lVar5 + 0x22b8),uVar4);
        FUN_1802229d8(uVar4,0x2c);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar5 + 0x22b4));
    }
    *(undefined4 *)(lVar5 + 0x22b4) = 0;
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x22cc) != 0) {
      do {
        FUN_180204598(lVar5 + 0x22c0,
                      *(undefined8 *)(*(longlong *)(lVar5 + 0x22c0) + uVar7 * 0x18 + 0x10));
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar5 + 0x22cc));
    }
    *(undefined4 *)(lVar5 + 0x22cc) = 0;
    uVar7 = 0;
    if (*(int *)(lVar5 + 0x22fc) != 0) {
      do {
        uVar12 = 0;
        plVar10 = *(longlong **)(*(longlong *)(lVar5 + 0x22f0) + uVar7 * 0x18 + 0x10);
        if ((int)plVar10[1] != 0) {
          do {
            FUN_18020d9f8(*(undefined8 *)(lVar5 + 0x22d8),
                          *(undefined8 *)(*plVar10 + uVar12 * 0xa8 + 0xa0),0,1);
            (*(code *)puVar3)();
            (*extraout_x11_00)();
            uVar6 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar6;
          } while (uVar6 < *(uint *)(plVar10 + 1));
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar5 + 0x22fc));
      uVar7 = 0;
      if (*(uint *)(lVar5 + 0x22fc) != 0) {
        do {
          puVar11 = *(undefined8 **)(*(longlong *)(lVar5 + 0x22f0) + uVar7 * 0x18 + 0x10);
          if (puVar11 != (undefined8 *)0x0) {
            FUN_1802229d8(*puVar11);
            FUN_1802229d8(puVar11,0x10);
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(lVar5 + 0x22fc));
      }
    }
    *(undefined8 *)(lVar5 + 0x22fc) = 0;
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_01)();
    *(undefined8 *)(lVar5 + 0x9b8) = 0;
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_02)();
    *(undefined8 *)(lVar5 + 0x918) = 0;
    *(undefined8 *)(lVar5 + 0x2270) = 0;
    *(undefined8 *)(lVar5 + 0x2288) = 0;
    *(undefined8 *)(lVar5 + 0x22a0) = 0;
    *(undefined8 *)(lVar5 + 0x22b8) = 0;
    *(undefined8 *)(lVar5 + 0x22d0) = 0;
    FUN_180215e50(param_1,param_2);
    if (*(longlong *)(lVar1 + 0x6d0) != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_03)();
      *(undefined8 *)(lVar1 + 0x6d8) = 0;
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_04)();
      *(undefined8 *)(lVar1 + 0x6d0) = 0;
    }
  }
  return;
}

