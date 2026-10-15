/*
 * FUN_1800f84e0 at 1800f84e0
 * undefined FUN_1800f84e0(void)
 * Address ranges: 1800f84e0-1800f89cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f84e0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  longlong lVar9;
  longlong lVar10;
  
  uVar4 = (ulonglong)param_2;
  lVar10 = param_1 + uVar4 * 0x1ac0;
  uVar3 = *(uint *)(param_1 + uVar4 * 0x20 + 0x6e4);
  uVar2 = uVar3 & 4;
  uVar3 = uVar3 & 1;
  if ((uVar3 != 0) || (uVar2 != 0)) {
    lVar9 = 0;
    if (param_1 != 0) {
      lVar9 = param_1 + 0x6d0;
    }
    uVar6 = FUN_1800fbd78(lVar9,uVar4);
    *(undefined8 *)(lVar10 + 0x2258) = uVar6;
  }
  lVar9 = 0;
  if (param_1 != 0) {
    lVar9 = param_1 + 0x6d0;
  }
  lVar7 = FUN_1800eedb0(lVar9,uVar4,0,u__Adapter_GrCQ_autoflush__18023c460);
  *(longlong *)(lVar10 + 0x1e00) = lVar7;
  if (lVar7 != 0) {
    if (uVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar10 + 0x2258);
    }
    lVar7 = FUN_1800e8140(lVar9,uVar4,lVar7,0,*(undefined8 *)(param_1 + 0x1b500),in_x5,in_x6,
                          s__Global_graphics_queue_with_auto_18023c4c0,uVar6);
    *(longlong *)(lVar10 + 0x1e08) = lVar7;
    if (lVar7 != 0) {
      lVar7 = FUN_1800eedb0(lVar9,uVar4,3,u__Adapter_CoCQ_autoflush__18023c4e8);
      *(longlong *)(lVar10 + 0x1e10) = lVar7;
      if (lVar7 != 0) {
        if (uVar2 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(lVar10 + 0x2258);
        }
        lVar7 = FUN_1800e8140(lVar9,uVar4,lVar7,3,*(undefined8 *)(param_1 + 0x1b500),in_x5,in_x6,
                              s__Global_copy_queue_with_autoflus_18023c498,uVar6);
        *(longlong *)(lVar10 + 0x1e18) = lVar7;
        if (lVar7 != 0) {
          uVar8 = FUN_1800f63a8(param_1,uVar4);
          if ((uVar8 & 1) != 0) {
            lVar7 = FUN_1800e7150(lVar9,uVar4,0);
            *(longlong *)(lVar10 + 0x2230) = lVar7;
            if (lVar7 != 0) {
              lVar7 = FUN_1800e7150(lVar9,uVar4,2);
              *(longlong *)(lVar10 + 0x2238) = lVar7;
              if (lVar7 != 0) {
                lVar7 = FUN_1800e7150(lVar9,uVar4,3);
                *(longlong *)(lVar10 + 0x2240) = lVar7;
                if (lVar7 != 0) {
                  lVar7 = FUN_1800e7150(lVar9,uVar4,1);
                  *(longlong *)(lVar10 + 0x2248) = lVar7;
                  if (lVar7 != 0) {
                    lVar7 = FUN_1800f2970(lVar9,uVar4,0,0x100,1);
                    *(longlong *)(lVar10 + 0x2250) = lVar7;
                    if (lVar7 != 0) {
                      puVar1 = (undefined8 *)(lVar10 + 0x22d8);
                      uVar6 = *(undefined8 *)(param_1 + 0x1b500);
                      *(longlong *)(lVar10 + 0x22e0) = lVar9;
                      *(uint *)(lVar10 + 0x22e8) = param_2;
                      *puVar1 = uVar6;
                      uVar6 = *(undefined8 *)(param_1 + 0x1b500);
                      *(uint *)(lVar10 + 9000) = param_2;
                      *(undefined8 *)(lVar10 + 0x2318) = uVar6;
                      *(longlong *)(lVar10 + 0x2320) = lVar9;
                      *(longlong *)(lVar10 + 0x1e20) = lVar9;
                      *(uint *)(lVar10 + 0x1e28) = param_2;
                      *(undefined4 *)(lVar10 + 0x1e2c) = 0;
                      *(undefined8 *)(lVar10 + 0x1e60) = 0x20000000000800;
                      *(undefined8 *)(lVar10 + 0x1e68) = 0xc00000;
                      *(undefined4 *)(lVar10 + 0x1e70) = 0;
                      pcVar5 = __imp_KERNEL32_dll_InitializeCriticalSection;
                      *(undefined1 *)(lVar10 + 0x1ea8) = 0;
                      (*pcVar5)(lVar10 + 0x1e30);
                      *(uint *)(lVar10 + 0x1eb8) = param_2;
                      *(undefined4 *)(lVar10 + 0x1ebc) = 0;
                      *(longlong *)(lVar10 + 0x1eb0) = lVar9;
                      pcVar5 = __imp_KERNEL32_dll_InitializeCriticalSection;
                      *(undefined4 *)(lVar10 + 0x1f00) = 0;
                      *(undefined1 *)(lVar10 + 0x1f38) = 0;
                      *(undefined8 *)(lVar10 + 0x1ef0) = 0x80000000000400;
                      *(undefined8 *)(lVar10 + 0x1ef8) = 0x8000000;
                      (*pcVar5)(lVar10 + 0x1ec0);
                      *(longlong *)(lVar10 + 8000) = lVar9;
                      *(undefined8 *)(lVar10 + 0x1f80) = 0x40000000000400;
                      *(undefined8 *)(lVar10 + 0x1f88) = 0x4000000;
                      *(undefined4 *)(lVar10 + 0x1f90) = 0;
                      pcVar5 = __imp_KERNEL32_dll_InitializeCriticalSection;
                      *(undefined1 *)(lVar10 + 0x1fc8) = 0;
                      *(uint *)(lVar10 + 0x1f48) = param_2;
                      *(undefined4 *)(lVar10 + 0x1f4c) = 0;
                      (*pcVar5)(lVar10 + 0x1f50);
                      *(undefined8 *)(lVar10 + 0x2010) = 0x80000000000400;
                      *(undefined8 *)(lVar10 + 0x2018) = 0x4000000;
                      *(longlong *)(lVar10 + 0x1fd0) = lVar9;
                      pcVar5 = __imp_KERNEL32_dll_InitializeCriticalSection;
                      *(uint *)(lVar10 + 0x1fd8) = param_2;
                      *(undefined4 *)(lVar10 + 0x1fdc) = 0;
                      *(undefined4 *)(lVar10 + 0x2020) = 0;
                      *(undefined1 *)(lVar10 + 0x2058) = 0;
                      (*pcVar5)(lVar10 + 0x1fe0);
                      *(longlong *)(lVar10 + 0x2060) = lVar9;
                      *(undefined4 *)(lVar10 + 0x20b0) = 0;
                      *(undefined1 *)(lVar10 + 0x20e8) = 0;
                      *(uint *)(lVar10 + 0x2068) = param_2;
                      *(undefined4 *)(lVar10 + 0x206c) = 1;
                      *(undefined8 *)(lVar10 + 0x20a0) = 0x80000000000400;
                      *(undefined8 *)(lVar10 + 0x20a8) = 0x8000000;
                      (*__imp_KERNEL32_dll_InitializeCriticalSection)(lVar10 + 0x2070);
                      *(undefined8 *)(lVar10 + 0x2148) = 0x2000000;
                      (*__imp_KERNEL32_dll_InitializeCriticalSection)(lVar10 + 0x2158);
                      *(undefined8 *)(lVar10 + 0x21b0) = 0xffffffffffffffff;
                      *(undefined8 *)(lVar10 + 0x21c0) = 0x4000000;
                      (*__imp_KERNEL32_dll_InitializeCriticalSection)(lVar10 + 0x21d0);
                      *(undefined8 *)(lVar10 + 0x2228) = 0xffffffffffffffff;
                      *(undefined8 *)(lVar10 + 0x2118) = 0x80000000000400;
                      pcVar5 = __imp_KERNEL32_dll_InitializeCriticalSection;
                      *(undefined4 *)(lVar10 + 0x2120) = 0;
                      (*pcVar5)(lVar10 + 0x20f0);
                      *(undefined8 **)(lVar10 + 0x2270) = puVar1;
                      *(undefined8 **)(lVar10 + 0x2288) = puVar1;
                      *(undefined8 **)(lVar10 + 0x22a0) = puVar1;
                      *(undefined8 **)(lVar10 + 0x22b8) = puVar1;
                      *(undefined8 *)(lVar10 + 0x2358) = *(undefined8 *)(lVar10 + 0x2248);
                      *(undefined4 *)(lVar10 + 0x958) = 0xffffffff;
                      *(undefined8 *)(lVar10 + 0x978) = 0x300000000;
                      *(undefined8 *)(lVar10 + 0x9a8) = 1;
                      *(undefined8 *)(lVar10 + 0x9b0) = 1;
                      *(undefined8 **)(lVar10 + 0x22d0) = puVar1;
                      *(undefined8 *)(lVar10 + 0x9c8) = 1;
                      *(undefined1 *)(param_1 + 0x67c) = 1;
                      return 1;
                    }
                    lVar9 = *(longlong *)(lVar10 + 0x2248);
                    if (lVar9 != 0) {
                      FUN_1800e6ee0(lVar9);
                      FUN_180102fc0(lVar9,0x78);
                    }
                    *(undefined8 *)(lVar10 + 0x2248) = 0;
                  }
                  lVar9 = *(longlong *)(lVar10 + 0x2240);
                  if (lVar9 != 0) {
                    FUN_1800e6ee0(lVar9);
                    FUN_180102fc0(lVar9,0x78);
                  }
                  *(undefined8 *)(lVar10 + 0x2240) = 0;
                }
                lVar9 = *(longlong *)(lVar10 + 0x2238);
                if (lVar9 != 0) {
                  FUN_1800e6ee0(lVar9);
                  FUN_180102fc0(lVar9,0x78);
                }
                *(undefined8 *)(lVar10 + 0x2238) = 0;
              }
              lVar9 = *(longlong *)(lVar10 + 0x2230);
              if (lVar9 != 0) {
                FUN_1800e6ee0(lVar9);
                FUN_180102fc0(lVar9,0x78);
              }
              *(undefined8 *)(lVar10 + 0x2230) = 0;
            }
            if (*(longlong *)(lVar10 + 0x908) != 0) {
              FUN_1800380e0(*(longlong *)(lVar10 + 0x908),1);
            }
            *(undefined8 *)(lVar10 + 0x908) = 0;
            if (*(longlong *)(lVar10 + 0x910) != 0) {
              FUN_1800380e0(*(longlong *)(lVar10 + 0x910),1);
            }
            *(undefined8 *)(lVar10 + 0x910) = 0;
          }
          lVar9 = *(longlong *)(lVar10 + 0x1e18);
          if (lVar9 != 0) {
            FUN_1800e7eb0(lVar9);
            FUN_180102fc0(lVar9,3000);
          }
          *(undefined8 *)(lVar10 + 0x1e18) = 0;
        }
        lVar9 = *(longlong *)(lVar10 + 0x1e10);
        if (lVar9 != 0) {
          FUN_1800eec40(lVar9);
          FUN_180102fc0(lVar9,0x40);
        }
        *(undefined8 *)(lVar10 + 0x1e10) = 0;
      }
      lVar9 = *(longlong *)(lVar10 + 0x1e08);
      if (lVar9 != 0) {
        FUN_1800e7eb0(lVar9);
        FUN_180102fc0(lVar9,3000);
      }
      *(undefined8 *)(lVar10 + 0x1e08) = 0;
    }
    lVar9 = *(longlong *)(lVar10 + 0x1e00);
    if (lVar9 != 0) {
      FUN_1800eec40(lVar9);
      FUN_180102fc0(lVar9,0x40);
    }
    *(undefined8 *)(lVar10 + 0x1e00) = 0;
  }
  return 0;
}

