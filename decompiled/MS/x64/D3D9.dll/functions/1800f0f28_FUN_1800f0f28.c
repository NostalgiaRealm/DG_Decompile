/*
 * FUN_1800f0f28 at 1800f0f28
 * ulonglong __fastcall FUN_1800f0f28(undefined1 * param_1, uint param_2)
 * Address ranges: 1800f0f28-1800f15b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800f0f28(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined8 in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  
  uVar6 = 0;
  lVar8 = (ulonglong)param_2 * 0x1ac0;
  uVar1 = *(uint *)(param_1 + (ulonglong)param_2 * 0x20 + 0x6e4);
  if (((uVar1 & 1) != 0) || ((uVar1 & 4) != 0)) {
    plVar3 = FUN_1800f47bc(-(ulonglong)(param_1 != (undefined1 *)0x0) & (ulonglong)(param_1 + 0x6d0)
                           ,param_2);
    *(longlong **)(param_1 + lVar8 + 0x2258) = plVar3;
  }
  puVar9 = param_1 + 0x6d0;
  if (param_1 == (undefined1 *)0x0) {
    puVar9 = (undefined1 *)0x6d0;
  }
  plVar3 = FUN_1800e7f68(-(ulonglong)(param_1 != (undefined1 *)0x0) & (ulonglong)(param_1 + 0x6d0),
                         param_2,0,0x180107420);
  *(longlong **)(param_1 + lVar8 + 0x1e00) = plVar3;
  uVar5 = 0;
  if (plVar3 != (longlong *)0x0) {
    uVar7 = uVar6;
    if ((uVar1 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + lVar8 + 0x2258);
    }
    puVar4 = FUN_1800e2758(-(ulonglong)(param_1 != (undefined1 *)0x0) & (ulonglong)puVar9,param_2,
                           plVar3,0,*(undefined8 *)(param_1 + 0x1b500),in_stack_ffffffffffffffa0,
                           in_stack_ffffffffffffffa8,"[Global graphics queue with autoflush]",uVar7)
    ;
    *(undefined8 **)(param_1 + lVar8 + 0x1e08) = puVar4;
    uVar5 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar3 = FUN_1800e7f68((longlong)puVar9,param_2,3,0x180107480);
      *(longlong **)(param_1 + lVar8 + 0x1e10) = plVar3;
      uVar5 = 0;
      if (plVar3 != (longlong *)0x0) {
        if ((uVar1 & 4) != 0) {
          uVar6 = *(undefined8 *)(param_1 + lVar8 + 0x2258);
        }
        puVar4 = FUN_1800e2758((longlong)puVar9,param_2,plVar3,3,*(undefined8 *)(param_1 + 0x1b500),
                               in_stack_ffffffffffffffa0,in_stack_ffffffffffffffa8,
                               "[Global copy queue with autoflush]",uVar6);
        *(undefined8 **)(param_1 + lVar8 + 0x1e18) = puVar4;
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = FUN_1800ee784(param_1,param_2);
          if ((char)uVar5 != '\0') {
            puVar4 = FUN_1800e1634((longlong)puVar9,param_2,0);
            *(undefined8 **)(param_1 + lVar8 + 0x2230) = puVar4;
            if (puVar4 != (undefined8 *)0x0) {
              puVar4 = FUN_1800e1634((longlong)puVar9,param_2,2);
              *(undefined8 **)(param_1 + lVar8 + 0x2238) = puVar4;
              if (puVar4 != (undefined8 *)0x0) {
                puVar4 = FUN_1800e1634((longlong)puVar9,param_2,3);
                *(undefined8 **)(param_1 + lVar8 + 0x2240) = puVar4;
                if (puVar4 != (undefined8 *)0x0) {
                  puVar4 = FUN_1800e1634((longlong)puVar9,param_2,1);
                  *(undefined8 **)(param_1 + lVar8 + 0x2248) = puVar4;
                  if (puVar4 != (undefined8 *)0x0) {
                    puVar4 = FUN_1800eb524((longlong)puVar9,param_2,0,0x100,1);
                    *(undefined8 **)(param_1 + lVar8 + 0x2250) = puVar4;
                    if (puVar4 != (undefined8 *)0x0) {
                      uVar6 = *(undefined8 *)(param_1 + 0x1b500);
                      *(undefined1 **)(param_1 + lVar8 + 0x22e0) = puVar9;
                      *(uint *)(param_1 + lVar8 + 0x22e8) = param_2;
                      puVar4 = (undefined8 *)(param_1 + lVar8 + 0x22d8);
                      *puVar4 = uVar6;
                      *(undefined8 *)(param_1 + lVar8 + 0x2318) = *(undefined8 *)(param_1 + 0x1b500)
                      ;
                      *(undefined1 **)(param_1 + lVar8 + 0x2320) = puVar9;
                      *(uint *)(param_1 + lVar8 + 9000) = param_2;
                      *(undefined1 **)(param_1 + lVar8 + 0x1e20) = puVar9;
                      *(uint *)(param_1 + lVar8 + 0x1e28) = param_2;
                      *(undefined4 *)(param_1 + lVar8 + 0x1e2c) = 0;
                      *(undefined4 *)(param_1 + lVar8 + 0x1e60) = 0x800;
                      *(undefined4 *)(param_1 + lVar8 + 0x1e64) = 0x200000;
                      *(undefined8 *)(param_1 + lVar8 + 0x1e68) = 0xc00000;
                      *(undefined4 *)(param_1 + lVar8 + 0x1e70) = 0;
                      param_1[lVar8 + 0x1ea8] = 0;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + lVar8 + 0x1e30));
                      *(undefined4 *)(param_1 + lVar8 + 0x1ebc) = 0;
                      *(undefined1 **)(param_1 + lVar8 + 0x1eb0) = puVar9;
                      *(uint *)(param_1 + lVar8 + 0x1eb8) = param_2;
                      *(undefined4 *)(param_1 + lVar8 + 0x1ef0) = 0x400;
                      *(undefined4 *)(param_1 + lVar8 + 0x1ef4) = 0x800000;
                      *(undefined8 *)(param_1 + lVar8 + 0x1ef8) = 0x8000000;
                      *(undefined4 *)(param_1 + lVar8 + 0x1f00) = 0;
                      param_1[lVar8 + 0x1f38] = 0;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + lVar8 + 0x1ec0));
                      *(undefined4 *)(param_1 + lVar8 + 0x1f80) = 0x400;
                      *(undefined1 **)(param_1 + lVar8 + 8000) = puVar9;
                      *(uint *)(param_1 + lVar8 + 0x1f48) = param_2;
                      *(undefined4 *)(param_1 + lVar8 + 0x1f4c) = 0;
                      *(undefined4 *)(param_1 + lVar8 + 0x1f84) = 0x400000;
                      *(undefined8 *)(param_1 + lVar8 + 0x1f88) = 0x4000000;
                      *(undefined4 *)(param_1 + lVar8 + 0x1f90) = 0;
                      param_1[lVar8 + 0x1fc8] = 0;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + lVar8 + 0x1f50));
                      *(undefined1 **)(param_1 + lVar8 + 0x1fd0) = puVar9;
                      *(uint *)(param_1 + lVar8 + 0x1fd8) = param_2;
                      *(undefined4 *)(param_1 + lVar8 + 0x1fdc) = 0;
                      *(undefined4 *)(param_1 + lVar8 + 0x2010) = 0x400;
                      *(undefined4 *)(param_1 + lVar8 + 0x2014) = 0x800000;
                      *(undefined8 *)(param_1 + lVar8 + 0x2018) = 0x4000000;
                      *(undefined4 *)(param_1 + lVar8 + 0x2020) = 0;
                      param_1[lVar8 + 0x2058] = 0;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + lVar8 + 0x1fe0));
                      *(undefined1 **)(param_1 + lVar8 + 0x2060) = puVar9;
                      *(uint *)(param_1 + lVar8 + 0x2068) = param_2;
                      *(undefined4 *)(param_1 + lVar8 + 0x206c) = 1;
                      *(undefined4 *)(param_1 + lVar8 + 0x20a0) = 0x400;
                      *(undefined4 *)(param_1 + lVar8 + 0x20a4) = 0x800000;
                      *(undefined8 *)(param_1 + lVar8 + 0x20a8) = 0x8000000;
                      *(undefined4 *)(param_1 + lVar8 + 0x20b0) = 0;
                      param_1[lVar8 + 0x20e8] = 0;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + lVar8 + 0x2070));
                      *(undefined8 *)(param_1 + lVar8 + 0x2148) = 0x2000000;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + lVar8 + 0x2158));
                      *(undefined4 *)(param_1 + lVar8 + 0x21b4) = 0xffffffff;
                      *(undefined4 *)(param_1 + lVar8 + 0x21b0) = 0xffffffff;
                      *(undefined8 *)(param_1 + lVar8 + 0x21c0) = 0x4000000;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + lVar8 + 0x21d0));
                      *(undefined4 *)(param_1 + lVar8 + 0x222c) = 0xffffffff;
                      *(undefined4 *)(param_1 + lVar8 + 0x2228) = 0xffffffff;
                      *(undefined4 *)(param_1 + lVar8 + 0x2118) = 0x400;
                      *(undefined8 *)(param_1 + lVar8 + 0x211c) = 0x800000;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + lVar8 + 0x20f0));
                      *(undefined8 *)(param_1 + lVar8 + 0x2358) =
                           *(undefined8 *)(param_1 + lVar8 + 0x2248);
                      *(undefined8 *)(param_1 + lVar8 + 0x9a8) = 1;
                      *(undefined8 *)(param_1 + lVar8 + 0x9b0) = 1;
                      *(undefined8 *)(param_1 + lVar8 + 0x9c8) = 1;
                      *(undefined8 **)(param_1 + lVar8 + 0x2270) = puVar4;
                      *(undefined8 **)(param_1 + lVar8 + 0x2288) = puVar4;
                      *(undefined8 **)(param_1 + lVar8 + 0x22a0) = puVar4;
                      *(undefined8 **)(param_1 + lVar8 + 0x22b8) = puVar4;
                      *(undefined8 **)(param_1 + lVar8 + 0x22d0) = puVar4;
                      *(undefined4 *)(param_1 + lVar8 + 0x958) = 0xffffffff;
                      *(undefined4 *)(param_1 + lVar8 + 0x978) = 0;
                      *(undefined4 *)(param_1 + lVar8 + 0x97c) = 3;
                      param_1[0x67c] = 1;
                      return 1;
                    }
                    puVar4 = *(undefined8 **)(param_1 + lVar8 + 0x2248);
                    if (puVar4 != (undefined8 *)0x0) {
                      FUN_1800e1330(puVar4);
                      FUN_1800fbcf0(puVar4);
                    }
                    *(undefined8 *)(param_1 + lVar8 + 0x2248) = 0;
                  }
                  puVar4 = *(undefined8 **)(param_1 + lVar8 + 0x2240);
                  if (puVar4 != (undefined8 *)0x0) {
                    FUN_1800e1330(puVar4);
                    FUN_1800fbcf0(puVar4);
                  }
                  *(undefined8 *)(param_1 + lVar8 + 0x2240) = 0;
                }
                puVar4 = *(undefined8 **)(param_1 + lVar8 + 0x2238);
                if (puVar4 != (undefined8 *)0x0) {
                  FUN_1800e1330(puVar4);
                  FUN_1800fbcf0(puVar4);
                }
                *(undefined8 *)(param_1 + lVar8 + 0x2238) = 0;
              }
              puVar4 = *(undefined8 **)(param_1 + lVar8 + 0x2230);
              if (puVar4 != (undefined8 *)0x0) {
                FUN_1800e1330(puVar4);
                FUN_1800fbcf0(puVar4);
              }
              *(undefined8 *)(param_1 + lVar8 + 0x2230) = 0;
            }
            uVar5 = FUN_1800eeac8((longlong)param_1,(ulonglong)param_2);
          }
          puVar4 = *(undefined8 **)(param_1 + lVar8 + 0x1e18);
          if (puVar4 != (undefined8 *)0x0) {
            FUN_1800e2334(puVar4);
            uVar5 = FUN_1800fbcf0(puVar4);
          }
          *(undefined8 *)(param_1 + lVar8 + 0x1e18) = 0;
        }
        pvVar2 = *(LPVOID *)(param_1 + lVar8 + 0x1e10);
        if (pvVar2 != (LPVOID)0x0) {
          FUN_1800e7e34((longlong)pvVar2);
          uVar5 = FUN_1800fbcf0(pvVar2);
        }
        *(undefined8 *)(param_1 + lVar8 + 0x1e10) = 0;
      }
      puVar4 = *(undefined8 **)(param_1 + lVar8 + 0x1e08);
      if (puVar4 != (undefined8 *)0x0) {
        FUN_1800e2334(puVar4);
        uVar5 = FUN_1800fbcf0(puVar4);
      }
      *(undefined8 *)(param_1 + lVar8 + 0x1e08) = 0;
    }
    pvVar2 = *(LPVOID *)(param_1 + lVar8 + 0x1e00);
    if (pvVar2 != (LPVOID)0x0) {
      FUN_1800e7e34((longlong)pvVar2);
      uVar5 = FUN_1800fbcf0(pvVar2);
    }
    *(undefined8 *)(param_1 + lVar8 + 0x1e00) = 0;
  }
  return uVar5 & 0xffffffffffffff00;
}

