/*
 * FUN_180046890 at 180046890
 * ulonglong __fastcall FUN_180046890(LPVOID param_1, uint param_2)
 * Address ranges: 180046890-180046f1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180046890(LPVOID param_1,uint param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  
  uVar6 = 0;
  lVar8 = (ulonglong)param_2 * 0x1ac0;
  uVar1 = *(uint *)((ulonglong)param_2 * 0x20 + 0x6e4 + (longlong)param_1);
  if (((uVar1 & 1) != 0) || ((uVar1 & 4) != 0)) {
    plVar3 = FUN_18005b168(-(ulonglong)(param_1 != (LPVOID)0x0) & (longlong)param_1 + 0x6d0U,param_2
                          );
    *(longlong **)(lVar8 + 0x2258 + (longlong)param_1) = plVar3;
  }
  uVar9 = (longlong)param_1 + 0x6d0U;
  if (param_1 == (LPVOID)0x0) {
    uVar9 = 0x6d0;
  }
  plVar3 = FUN_180042ee0(-(ulonglong)(param_1 != (LPVOID)0x0) & (longlong)param_1 + 0x6d0U,param_2,0
                         ,0x180066148);
  *(longlong **)(lVar8 + 0x1e00 + (longlong)param_1) = plVar3;
  uVar5 = 0;
  if (plVar3 != (longlong *)0x0) {
    uVar7 = uVar6;
    if ((uVar1 & 1) != 0) {
      uVar7 = *(undefined8 *)(lVar8 + 0x2258 + (longlong)param_1);
    }
    puVar4 = FUN_180049aa8(-(ulonglong)(param_1 != (LPVOID)0x0) & uVar9,param_2,plVar3,0,
                           *(undefined8 *)((longlong)param_1 + 0x1b500),in_stack_ffffffffffffffa0,
                           in_stack_ffffffffffffffa8,"[Global graphics queue with autoflush]",uVar7)
    ;
    *(undefined8 **)(lVar8 + 0x1e08 + (longlong)param_1) = puVar4;
    uVar5 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar3 = FUN_180042ee0(uVar9,param_2,3,0x1800661a8);
      *(longlong **)(lVar8 + 0x1e10 + (longlong)param_1) = plVar3;
      uVar5 = 0;
      if (plVar3 != (longlong *)0x0) {
        if ((uVar1 & 4) != 0) {
          uVar6 = *(undefined8 *)(lVar8 + 0x2258 + (longlong)param_1);
        }
        puVar4 = FUN_180049aa8(uVar9,param_2,plVar3,3,*(undefined8 *)((longlong)param_1 + 0x1b500),
                               in_stack_ffffffffffffffa0,in_stack_ffffffffffffffa8,
                               "[Global copy queue with autoflush]",uVar6);
        *(undefined8 **)(lVar8 + 0x1e18 + (longlong)param_1) = puVar4;
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = FUN_180053308(param_1,param_2);
          if ((char)uVar5 != '\0') {
            puVar4 = FUN_180048cdc(uVar9,param_2,0);
            *(undefined8 **)(lVar8 + 0x2230 + (longlong)param_1) = puVar4;
            if (puVar4 != (undefined8 *)0x0) {
              puVar4 = FUN_180048cdc(uVar9,param_2,2);
              *(undefined8 **)(lVar8 + 0x2238 + (longlong)param_1) = puVar4;
              if (puVar4 != (undefined8 *)0x0) {
                puVar4 = FUN_180048cdc(uVar9,param_2,3);
                *(undefined8 **)(lVar8 + 0x2240 + (longlong)param_1) = puVar4;
                if (puVar4 != (undefined8 *)0x0) {
                  puVar4 = FUN_180048cdc(uVar9,param_2,1);
                  *(undefined8 **)(lVar8 + 0x2248 + (longlong)param_1) = puVar4;
                  if (puVar4 != (undefined8 *)0x0) {
                    puVar4 = FUN_180048798(uVar9,param_2,0,0x100,1);
                    *(undefined8 **)(lVar8 + 0x2250 + (longlong)param_1) = puVar4;
                    if (puVar4 != (undefined8 *)0x0) {
                      uVar6 = *(undefined8 *)((longlong)param_1 + 0x1b500);
                      *(ulonglong *)(lVar8 + 0x22e0 + (longlong)param_1) = uVar9;
                      *(uint *)(lVar8 + 0x22e8 + (longlong)param_1) = param_2;
                      puVar4 = (undefined8 *)((longlong)param_1 + lVar8 + 0x22d8);
                      *puVar4 = uVar6;
                      *(undefined8 *)(lVar8 + 0x2318 + (longlong)param_1) =
                           *(undefined8 *)((longlong)param_1 + 0x1b500);
                      *(ulonglong *)(lVar8 + 0x2320 + (longlong)param_1) = uVar9;
                      *(uint *)(lVar8 + 9000 + (longlong)param_1) = param_2;
                      *(ulonglong *)(lVar8 + 0x1e20 + (longlong)param_1) = uVar9;
                      *(uint *)(lVar8 + 0x1e28 + (longlong)param_1) = param_2;
                      *(undefined4 *)(lVar8 + 0x1e2c + (longlong)param_1) = 0;
                      *(undefined4 *)(lVar8 + 0x1e60 + (longlong)param_1) = 0x800;
                      *(undefined4 *)(lVar8 + 0x1e64 + (longlong)param_1) = 0x200000;
                      *(undefined8 *)(lVar8 + 0x1e68 + (longlong)param_1) = 0xc00000;
                      *(undefined4 *)(lVar8 + 0x1e70 + (longlong)param_1) = 0;
                      *(undefined1 *)(lVar8 + 0x1ea8 + (longlong)param_1) = 0;
                      InitializeCriticalSection
                                ((LPCRITICAL_SECTION)((longlong)param_1 + lVar8 + 0x1e30));
                      *(undefined4 *)(lVar8 + 0x1ebc + (longlong)param_1) = 0;
                      *(ulonglong *)(lVar8 + 0x1eb0 + (longlong)param_1) = uVar9;
                      *(uint *)(lVar8 + 0x1eb8 + (longlong)param_1) = param_2;
                      *(undefined4 *)(lVar8 + 0x1ef0 + (longlong)param_1) = 0x400;
                      *(undefined4 *)(lVar8 + 0x1ef4 + (longlong)param_1) = 0x800000;
                      *(undefined8 *)(lVar8 + 0x1ef8 + (longlong)param_1) = 0x8000000;
                      *(undefined4 *)(lVar8 + 0x1f00 + (longlong)param_1) = 0;
                      *(undefined1 *)(lVar8 + 0x1f38 + (longlong)param_1) = 0;
                      InitializeCriticalSection
                                ((LPCRITICAL_SECTION)((longlong)param_1 + lVar8 + 0x1ec0));
                      *(undefined4 *)(lVar8 + 0x1f80 + (longlong)param_1) = 0x400;
                      *(ulonglong *)(lVar8 + 8000 + (longlong)param_1) = uVar9;
                      *(uint *)(lVar8 + 0x1f48 + (longlong)param_1) = param_2;
                      *(undefined4 *)(lVar8 + 0x1f4c + (longlong)param_1) = 0;
                      *(undefined4 *)(lVar8 + 0x1f84 + (longlong)param_1) = 0x400000;
                      *(undefined8 *)(lVar8 + 0x1f88 + (longlong)param_1) = 0x4000000;
                      *(undefined4 *)(lVar8 + 0x1f90 + (longlong)param_1) = 0;
                      *(undefined1 *)(lVar8 + 0x1fc8 + (longlong)param_1) = 0;
                      InitializeCriticalSection
                                ((LPCRITICAL_SECTION)((longlong)param_1 + lVar8 + 0x1f50));
                      *(ulonglong *)(lVar8 + 0x1fd0 + (longlong)param_1) = uVar9;
                      *(uint *)(lVar8 + 0x1fd8 + (longlong)param_1) = param_2;
                      *(undefined4 *)(lVar8 + 0x1fdc + (longlong)param_1) = 0;
                      *(undefined4 *)(lVar8 + 0x2010 + (longlong)param_1) = 0x400;
                      *(undefined4 *)(lVar8 + 0x2014 + (longlong)param_1) = 0x800000;
                      *(undefined8 *)(lVar8 + 0x2018 + (longlong)param_1) = 0x4000000;
                      *(undefined4 *)(lVar8 + 0x2020 + (longlong)param_1) = 0;
                      *(undefined1 *)(lVar8 + 0x2058 + (longlong)param_1) = 0;
                      InitializeCriticalSection
                                ((LPCRITICAL_SECTION)((longlong)param_1 + lVar8 + 0x1fe0));
                      *(ulonglong *)(lVar8 + 0x2060 + (longlong)param_1) = uVar9;
                      *(uint *)(lVar8 + 0x2068 + (longlong)param_1) = param_2;
                      *(undefined4 *)(lVar8 + 0x206c + (longlong)param_1) = 1;
                      *(undefined4 *)(lVar8 + 0x20a0 + (longlong)param_1) = 0x400;
                      *(undefined4 *)(lVar8 + 0x20a4 + (longlong)param_1) = 0x800000;
                      *(undefined8 *)(lVar8 + 0x20a8 + (longlong)param_1) = 0x8000000;
                      *(undefined4 *)(lVar8 + 0x20b0 + (longlong)param_1) = 0;
                      *(undefined1 *)(lVar8 + 0x20e8 + (longlong)param_1) = 0;
                      InitializeCriticalSection
                                ((LPCRITICAL_SECTION)((longlong)param_1 + lVar8 + 0x2070));
                      *(undefined8 *)(lVar8 + 0x2148 + (longlong)param_1) = 0x2000000;
                      InitializeCriticalSection
                                ((LPCRITICAL_SECTION)((longlong)param_1 + lVar8 + 0x2158));
                      *(undefined4 *)(lVar8 + 0x21b4 + (longlong)param_1) = 0xffffffff;
                      *(undefined4 *)(lVar8 + 0x21b0 + (longlong)param_1) = 0xffffffff;
                      *(undefined8 *)(lVar8 + 0x21c0 + (longlong)param_1) = 0x4000000;
                      InitializeCriticalSection
                                ((LPCRITICAL_SECTION)((longlong)param_1 + lVar8 + 0x21d0));
                      *(undefined4 *)(lVar8 + 0x222c + (longlong)param_1) = 0xffffffff;
                      *(undefined4 *)(lVar8 + 0x2228 + (longlong)param_1) = 0xffffffff;
                      *(undefined4 *)(lVar8 + 0x2118 + (longlong)param_1) = 0x400;
                      *(undefined8 *)(lVar8 + 0x211c + (longlong)param_1) = 0x800000;
                      InitializeCriticalSection
                                ((LPCRITICAL_SECTION)((longlong)param_1 + lVar8 + 0x20f0));
                      *(undefined8 *)(lVar8 + 0x2358 + (longlong)param_1) =
                           *(undefined8 *)(lVar8 + 0x2248 + (longlong)param_1);
                      *(undefined8 *)(lVar8 + 0x9a8 + (longlong)param_1) = 1;
                      *(undefined8 *)(lVar8 + 0x9b0 + (longlong)param_1) = 1;
                      *(undefined8 *)(lVar8 + 0x9c8 + (longlong)param_1) = 1;
                      *(undefined8 **)(lVar8 + 0x2270 + (longlong)param_1) = puVar4;
                      *(undefined8 **)(lVar8 + 0x2288 + (longlong)param_1) = puVar4;
                      *(undefined8 **)(lVar8 + 0x22a0 + (longlong)param_1) = puVar4;
                      *(undefined8 **)(lVar8 + 0x22b8 + (longlong)param_1) = puVar4;
                      *(undefined8 **)(lVar8 + 0x22d0 + (longlong)param_1) = puVar4;
                      *(undefined4 *)(lVar8 + 0x958 + (longlong)param_1) = 0xffffffff;
                      *(undefined4 *)(lVar8 + 0x978 + (longlong)param_1) = 0;
                      *(undefined4 *)(lVar8 + 0x97c + (longlong)param_1) = 3;
                      *(undefined1 *)((longlong)param_1 + 0x67c) = 1;
                      return 1;
                    }
                    puVar4 = *(undefined8 **)(lVar8 + 0x2248 + (longlong)param_1);
                    if (puVar4 != (undefined8 *)0x0) {
                      FUN_1800489d8(puVar4);
                      FUN_180060ac0(puVar4);
                    }
                    *(undefined8 *)(lVar8 + 0x2248 + (longlong)param_1) = 0;
                  }
                  puVar4 = *(undefined8 **)(lVar8 + 0x2240 + (longlong)param_1);
                  if (puVar4 != (undefined8 *)0x0) {
                    FUN_1800489d8(puVar4);
                    FUN_180060ac0(puVar4);
                  }
                  *(undefined8 *)(lVar8 + 0x2240 + (longlong)param_1) = 0;
                }
                puVar4 = *(undefined8 **)(lVar8 + 0x2238 + (longlong)param_1);
                if (puVar4 != (undefined8 *)0x0) {
                  FUN_1800489d8(puVar4);
                  FUN_180060ac0(puVar4);
                }
                *(undefined8 *)(lVar8 + 0x2238 + (longlong)param_1) = 0;
              }
              puVar4 = *(undefined8 **)(lVar8 + 0x2230 + (longlong)param_1);
              if (puVar4 != (undefined8 *)0x0) {
                FUN_1800489d8(puVar4);
                FUN_180060ac0(puVar4);
              }
              *(undefined8 *)(lVar8 + 0x2230 + (longlong)param_1) = 0;
            }
            uVar5 = FUN_180053654((longlong)param_1,(ulonglong)param_2);
          }
          puVar4 = *(undefined8 **)(lVar8 + 0x1e18 + (longlong)param_1);
          if (puVar4 != (undefined8 *)0x0) {
            FUN_180049684(puVar4);
            uVar5 = FUN_180060ac0(puVar4);
          }
          *(undefined8 *)(lVar8 + 0x1e18 + (longlong)param_1) = 0;
        }
        pvVar2 = *(LPVOID *)(lVar8 + 0x1e10 + (longlong)param_1);
        if (pvVar2 != (LPVOID)0x0) {
          FUN_180042dac((longlong)pvVar2);
          uVar5 = FUN_180060ac0(pvVar2);
        }
        *(undefined8 *)(lVar8 + 0x1e10 + (longlong)param_1) = 0;
      }
      puVar4 = *(undefined8 **)(lVar8 + 0x1e08 + (longlong)param_1);
      if (puVar4 != (undefined8 *)0x0) {
        FUN_180049684(puVar4);
        uVar5 = FUN_180060ac0(puVar4);
      }
      *(undefined8 *)(lVar8 + 0x1e08 + (longlong)param_1) = 0;
    }
    pvVar2 = *(LPVOID *)(lVar8 + 0x1e00 + (longlong)param_1);
    if (pvVar2 != (LPVOID)0x0) {
      FUN_180042dac((longlong)pvVar2);
      uVar5 = FUN_180060ac0(pvVar2);
    }
    *(undefined8 *)(lVar8 + 0x1e00 + (longlong)param_1) = 0;
  }
  return uVar5 & 0xffffffffffffff00;
}

