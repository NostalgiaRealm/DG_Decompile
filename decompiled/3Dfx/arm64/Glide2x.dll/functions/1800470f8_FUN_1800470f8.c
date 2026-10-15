/*
 * FUN_1800470f8 at 1800470f8
 * undefined8 __cdecl FUN_1800470f8(longlong param_1, uint param_2)
 * Address ranges: 1800470f8-1800475ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800470f8(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uVar7;
  LPVOID pvVar8;
  longlong lVar9;
  
  lVar9 = param_1 + (ulonglong)param_2 * 0x1ac0;
  uVar3 = *(uint *)(param_1 + (ulonglong)param_2 * 0x20 + 0x6e4);
  uVar1 = uVar3 & 4;
  uVar3 = uVar3 & 1;
  if ((uVar3 != 0) || (uVar1 != 0)) {
    lVar2 = 0;
    if (param_1 != 0) {
      lVar2 = param_1 + 0x6d0;
    }
    plVar4 = FUN_18005b948(lVar2,param_2);
    *(longlong **)(lVar9 + 0x2258) = plVar4;
  }
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + 0x6d0;
  }
  plVar4 = FUN_180043cf0(lVar2,param_2,0,0x180064ed0);
  *(longlong **)(lVar9 + 0x1e00) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar9 + 0x2258);
    }
    puVar5 = FUN_18004a898(lVar2,param_2,plVar4,0,*(undefined8 *)(param_1 + 0x1b500),in_x5,in_x6,
                           "[Global graphics queue with autoflush]",uVar7);
    *(undefined8 **)(lVar9 + 0x1e08) = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      plVar4 = FUN_180043cf0(lVar2,param_2,3,0x180064f30);
      *(longlong **)(lVar9 + 0x1e10) = plVar4;
      if (plVar4 != (longlong *)0x0) {
        if (uVar1 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar9 + 0x2258);
        }
        puVar5 = FUN_18004a898(lVar2,param_2,plVar4,3,*(undefined8 *)(param_1 + 0x1b500),in_x5,in_x6
                               ,"[Global copy queue with autoflush]",uVar7);
        *(undefined8 **)(lVar9 + 0x1e18) = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          uVar6 = FUN_1800538e0(param_1,param_2);
          if ((uVar6 & 1) != 0) {
            puVar5 = FUN_1800499f8(lVar2,param_2,0);
            *(undefined8 **)(lVar9 + 0x2230) = puVar5;
            if (puVar5 != (undefined8 *)0x0) {
              puVar5 = FUN_1800499f8(lVar2,param_2,2);
              *(undefined8 **)(lVar9 + 0x2238) = puVar5;
              if (puVar5 != (undefined8 *)0x0) {
                puVar5 = FUN_1800499f8(lVar2,param_2,3);
                *(undefined8 **)(lVar9 + 0x2240) = puVar5;
                if (puVar5 != (undefined8 *)0x0) {
                  puVar5 = FUN_1800499f8(lVar2,param_2,1);
                  *(undefined8 **)(lVar9 + 0x2248) = puVar5;
                  if (puVar5 != (undefined8 *)0x0) {
                    puVar5 = FUN_1800494e8(lVar2,param_2,0,0x100,1);
                    *(undefined8 **)(lVar9 + 0x2250) = puVar5;
                    if (puVar5 != (undefined8 *)0x0) {
                      puVar5 = (undefined8 *)(lVar9 + 0x22d8);
                      uVar7 = *(undefined8 *)(param_1 + 0x1b500);
                      *(longlong *)(lVar9 + 0x22e0) = lVar2;
                      *(uint *)(lVar9 + 0x22e8) = param_2;
                      *puVar5 = uVar7;
                      uVar7 = *(undefined8 *)(param_1 + 0x1b500);
                      *(uint *)(lVar9 + 9000) = param_2;
                      *(undefined8 *)(lVar9 + 0x2318) = uVar7;
                      *(longlong *)(lVar9 + 0x2320) = lVar2;
                      *(longlong *)(lVar9 + 0x1e20) = lVar2;
                      *(uint *)(lVar9 + 0x1e28) = param_2;
                      *(undefined4 *)(lVar9 + 0x1e2c) = 0;
                      *(undefined8 *)(lVar9 + 0x1e60) = 0x20000000000800;
                      *(undefined8 *)(lVar9 + 0x1e68) = 0xc00000;
                      *(undefined4 *)(lVar9 + 0x1e70) = 0;
                      *(undefined1 *)(lVar9 + 0x1ea8) = 0;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x1e30));
                      *(uint *)(lVar9 + 0x1eb8) = param_2;
                      *(undefined4 *)(lVar9 + 0x1ebc) = 0;
                      *(longlong *)(lVar9 + 0x1eb0) = lVar2;
                      *(undefined4 *)(lVar9 + 0x1f00) = 0;
                      *(undefined1 *)(lVar9 + 0x1f38) = 0;
                      *(undefined8 *)(lVar9 + 0x1ef0) = 0x80000000000400;
                      *(undefined8 *)(lVar9 + 0x1ef8) = 0x8000000;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x1ec0));
                      *(longlong *)(lVar9 + 8000) = lVar2;
                      *(undefined8 *)(lVar9 + 0x1f80) = 0x40000000000400;
                      *(undefined8 *)(lVar9 + 0x1f88) = 0x4000000;
                      *(undefined4 *)(lVar9 + 0x1f90) = 0;
                      *(undefined1 *)(lVar9 + 0x1fc8) = 0;
                      *(uint *)(lVar9 + 0x1f48) = param_2;
                      *(undefined4 *)(lVar9 + 0x1f4c) = 0;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x1f50));
                      *(undefined8 *)(lVar9 + 0x2010) = 0x80000000000400;
                      *(undefined8 *)(lVar9 + 0x2018) = 0x4000000;
                      *(longlong *)(lVar9 + 0x1fd0) = lVar2;
                      *(uint *)(lVar9 + 0x1fd8) = param_2;
                      *(undefined4 *)(lVar9 + 0x1fdc) = 0;
                      *(undefined4 *)(lVar9 + 0x2020) = 0;
                      *(undefined1 *)(lVar9 + 0x2058) = 0;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x1fe0));
                      *(longlong *)(lVar9 + 0x2060) = lVar2;
                      *(undefined4 *)(lVar9 + 0x20b0) = 0;
                      *(undefined1 *)(lVar9 + 0x20e8) = 0;
                      *(uint *)(lVar9 + 0x2068) = param_2;
                      *(undefined4 *)(lVar9 + 0x206c) = 1;
                      *(undefined8 *)(lVar9 + 0x20a0) = 0x80000000000400;
                      *(undefined8 *)(lVar9 + 0x20a8) = 0x8000000;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x2070));
                      *(undefined8 *)(lVar9 + 0x2148) = 0x2000000;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x2158));
                      *(undefined8 *)(lVar9 + 0x21b0) = 0xffffffffffffffff;
                      *(undefined8 *)(lVar9 + 0x21c0) = 0x4000000;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x21d0));
                      *(undefined8 *)(lVar9 + 0x2228) = 0xffffffffffffffff;
                      *(undefined8 *)(lVar9 + 0x2118) = 0x80000000000400;
                      *(undefined4 *)(lVar9 + 0x2120) = 0;
                      InitializeCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x20f0));
                      *(undefined8 **)(lVar9 + 0x2270) = puVar5;
                      *(undefined8 **)(lVar9 + 0x2288) = puVar5;
                      *(undefined8 **)(lVar9 + 0x22a0) = puVar5;
                      *(undefined8 **)(lVar9 + 0x22b8) = puVar5;
                      *(undefined8 *)(lVar9 + 0x2358) = *(undefined8 *)(lVar9 + 0x2248);
                      *(undefined4 *)(lVar9 + 0x958) = 0xffffffff;
                      *(undefined8 *)(lVar9 + 0x978) = 0x300000000;
                      *(undefined8 *)(lVar9 + 0x9a8) = 1;
                      *(undefined8 *)(lVar9 + 0x9b0) = 1;
                      *(undefined8 **)(lVar9 + 0x22d0) = puVar5;
                      *(undefined8 *)(lVar9 + 0x9c8) = 1;
                      *(undefined1 *)(param_1 + 0x67c) = 1;
                      return 1;
                    }
                    puVar5 = *(undefined8 **)(lVar9 + 0x2248);
                    if (puVar5 != (undefined8 *)0x0) {
                      FUN_180049788(puVar5);
                      FUN_18005fbc8(puVar5);
                    }
                    *(undefined8 *)(lVar9 + 0x2248) = 0;
                  }
                  puVar5 = *(undefined8 **)(lVar9 + 0x2240);
                  if (puVar5 != (undefined8 *)0x0) {
                    FUN_180049788(puVar5);
                    FUN_18005fbc8(puVar5);
                  }
                  *(undefined8 *)(lVar9 + 0x2240) = 0;
                }
                puVar5 = *(undefined8 **)(lVar9 + 0x2238);
                if (puVar5 != (undefined8 *)0x0) {
                  FUN_180049788(puVar5);
                  FUN_18005fbc8(puVar5);
                }
                *(undefined8 *)(lVar9 + 0x2238) = 0;
              }
              puVar5 = *(undefined8 **)(lVar9 + 0x2230);
              if (puVar5 != (undefined8 *)0x0) {
                FUN_180049788(puVar5);
                FUN_18005fbc8(puVar5);
              }
              *(undefined8 *)(lVar9 + 0x2230) = 0;
            }
            puVar5 = *(undefined8 **)(lVar9 + 0x908);
            if (puVar5 != (undefined8 *)0x0) {
              FUN_180044f00(puVar5);
              FUN_18005fbc8(puVar5);
            }
            puVar5 = *(undefined8 **)(lVar9 + 0x910);
            *(undefined8 *)(lVar9 + 0x908) = 0;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_180044f00(puVar5);
              FUN_18005fbc8(puVar5);
            }
            *(undefined8 *)(lVar9 + 0x910) = 0;
          }
          puVar5 = *(undefined8 **)(lVar9 + 0x1e18);
          if (puVar5 != (undefined8 *)0x0) {
            FUN_18004a608(puVar5);
            FUN_18005fbc8(puVar5);
          }
          *(undefined8 *)(lVar9 + 0x1e18) = 0;
        }
        pvVar8 = *(LPVOID *)(lVar9 + 0x1e10);
        if (pvVar8 != (LPVOID)0x0) {
          FUN_180043b80((longlong)pvVar8);
          FUN_18005fbc8(pvVar8);
        }
        *(undefined8 *)(lVar9 + 0x1e10) = 0;
      }
      puVar5 = *(undefined8 **)(lVar9 + 0x1e08);
      if (puVar5 != (undefined8 *)0x0) {
        FUN_18004a608(puVar5);
        FUN_18005fbc8(puVar5);
      }
      *(undefined8 *)(lVar9 + 0x1e08) = 0;
    }
    pvVar8 = *(LPVOID *)(lVar9 + 0x1e00);
    if (pvVar8 != (LPVOID)0x0) {
      FUN_180043b80((longlong)pvVar8);
      FUN_18005fbc8(pvVar8);
    }
    *(undefined8 *)(lVar9 + 0x1e00) = 0;
  }
  return 0;
}

