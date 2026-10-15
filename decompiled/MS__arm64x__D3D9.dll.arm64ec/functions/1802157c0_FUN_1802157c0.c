/*
 * FUN_1802157c0 at 1802157c0
 * undefined FUN_1802157c0(void)
 * Address ranges: 1802157c0-180215c7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802157c0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 in_x5;
  undefined8 in_x6;
  longlong lVar8;
  longlong lVar9;
  
  uVar4 = (ulonglong)param_2;
  lVar9 = param_1 + uVar4 * 0x1ac0;
  uVar3 = *(uint *)(param_1 + uVar4 * 0x20 + 0x6e4);
  uVar2 = uVar3 & 4;
  uVar3 = uVar3 & 1;
  if ((uVar3 != 0) || (uVar2 != 0)) {
    lVar8 = 0;
    if (param_1 != 0) {
      lVar8 = param_1 + 0x6d0;
    }
    uVar5 = FUN_18021ce50(lVar8,uVar4);
    *(undefined8 *)(lVar9 + 0x2258) = uVar5;
  }
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + 0x6d0;
  }
  lVar6 = FUN_18020c320(lVar8,uVar4,0,u__Adapter_GrCQ_autoflush__1802391f8);
  *(longlong *)(lVar9 + 0x1e00) = lVar6;
  if (lVar6 != 0) {
    if (uVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar9 + 0x2258);
    }
    lVar6 = FUN_180207078(lVar8,uVar4,lVar6,0,*(undefined8 *)(param_1 + 0x1b500),in_x5,in_x6,
                          s__Global_graphics_queue_with_auto_1802391d0,uVar5);
    *(longlong *)(lVar9 + 0x1e08) = lVar6;
    if (lVar6 != 0) {
      lVar6 = FUN_18020c320(lVar8,uVar4,3,u__Adapter_CoCQ_autoflush__180239258);
      *(longlong *)(lVar9 + 0x1e10) = lVar6;
      if (lVar6 != 0) {
        if (uVar2 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(lVar9 + 0x2258);
        }
        lVar6 = FUN_180207078(lVar8,uVar4,lVar6,3,*(undefined8 *)(param_1 + 0x1b500),in_x5,in_x6,
                              s__Global_copy_queue_with_autoflus_180239230,uVar5);
        *(longlong *)(lVar9 + 0x1e18) = lVar6;
        if (lVar6 != 0) {
          uVar7 = FUN_180216e00(param_1,uVar4);
          if ((uVar7 & 1) != 0) {
            lVar6 = FUN_18020c6e8(lVar8,uVar4,0);
            *(longlong *)(lVar9 + 0x2230) = lVar6;
            if (lVar6 != 0) {
              lVar6 = FUN_18020c6e8(lVar8,uVar4,2);
              *(longlong *)(lVar9 + 0x2238) = lVar6;
              if (lVar6 != 0) {
                lVar6 = FUN_18020c6e8(lVar8,uVar4,3);
                *(longlong *)(lVar9 + 0x2240) = lVar6;
                if (lVar6 != 0) {
                  lVar6 = FUN_18020c6e8(lVar8,uVar4,1);
                  *(longlong *)(lVar9 + 0x2248) = lVar6;
                  if (lVar6 != 0) {
                    lVar6 = FUN_1802113d8(lVar8,uVar4,0,0x100,1);
                    *(longlong *)(lVar9 + 0x2250) = lVar6;
                    if (lVar6 != 0) {
                      puVar1 = (undefined8 *)(lVar9 + 0x22d8);
                      uVar5 = *(undefined8 *)(param_1 + 0x1b500);
                      *(longlong *)(lVar9 + 0x22e0) = lVar8;
                      *(uint *)(lVar9 + 0x22e8) = param_2;
                      *puVar1 = uVar5;
                      uVar5 = *(undefined8 *)(param_1 + 0x1b500);
                      *(uint *)(lVar9 + 9000) = param_2;
                      *(undefined8 *)(lVar9 + 0x2318) = uVar5;
                      *(longlong *)(lVar9 + 0x2320) = lVar8;
                      *(longlong *)(lVar9 + 0x1e20) = lVar8;
                      *(uint *)(lVar9 + 0x1e28) = param_2;
                      *(undefined4 *)(lVar9 + 0x1e2c) = 0;
                      *(undefined8 *)(lVar9 + 0x1e60) = 0x20000000000800;
                      *(undefined8 *)(lVar9 + 0x1e68) = 0xc00000;
                      *(undefined4 *)(lVar9 + 0x1e70) = 0;
                      *(undefined1 *)(lVar9 + 0x1ea8) = 0;
                      thunk_FUN_18022384c(lVar9 + 0x1e30);
                      *(uint *)(lVar9 + 0x1eb8) = param_2;
                      *(undefined4 *)(lVar9 + 0x1ebc) = 0;
                      *(longlong *)(lVar9 + 0x1eb0) = lVar8;
                      *(undefined8 *)(lVar9 + 0x1ef0) = 0x80000000000400;
                      *(undefined8 *)(lVar9 + 0x1ef8) = 0x8000000;
                      *(undefined4 *)(lVar9 + 0x1f00) = 0;
                      *(undefined1 *)(lVar9 + 0x1f38) = 0;
                      thunk_FUN_18022384c(lVar9 + 0x1ec0);
                      *(longlong *)(lVar9 + 8000) = lVar8;
                      *(uint *)(lVar9 + 0x1f48) = param_2;
                      *(undefined4 *)(lVar9 + 0x1f4c) = 0;
                      *(undefined8 *)(lVar9 + 0x1f80) = 0x40000000000400;
                      *(undefined8 *)(lVar9 + 0x1f88) = 0x4000000;
                      *(undefined4 *)(lVar9 + 0x1f90) = 0;
                      *(undefined1 *)(lVar9 + 0x1fc8) = 0;
                      thunk_FUN_18022384c(lVar9 + 0x1f50);
                      *(longlong *)(lVar9 + 0x1fd0) = lVar8;
                      *(undefined4 *)(lVar9 + 0x2020) = 0;
                      *(uint *)(lVar9 + 0x1fd8) = param_2;
                      *(undefined4 *)(lVar9 + 0x1fdc) = 0;
                      *(undefined8 *)(lVar9 + 0x2010) = 0x80000000000400;
                      *(undefined8 *)(lVar9 + 0x2018) = 0x4000000;
                      *(undefined1 *)(lVar9 + 0x2058) = 0;
                      thunk_FUN_18022384c(lVar9 + 0x1fe0);
                      *(longlong *)(lVar9 + 0x2060) = lVar8;
                      *(undefined4 *)(lVar9 + 0x20b0) = 0;
                      *(undefined1 *)(lVar9 + 0x20e8) = 0;
                      *(uint *)(lVar9 + 0x2068) = param_2;
                      *(undefined4 *)(lVar9 + 0x206c) = 1;
                      *(undefined8 *)(lVar9 + 0x20a0) = 0x80000000000400;
                      *(undefined8 *)(lVar9 + 0x20a8) = 0x8000000;
                      thunk_FUN_18022384c(lVar9 + 0x2070);
                      *(undefined8 *)(lVar9 + 0x2148) = 0x2000000;
                      thunk_FUN_18022384c(lVar9 + 0x2158);
                      *(undefined8 *)(lVar9 + 0x21b0) = 0xffffffffffffffff;
                      *(undefined8 *)(lVar9 + 0x21c0) = 0x4000000;
                      thunk_FUN_18022384c(lVar9 + 0x21d0);
                      *(undefined8 *)(lVar9 + 0x2228) = 0xffffffffffffffff;
                      *(undefined8 *)(lVar9 + 0x2118) = 0x80000000000400;
                      *(undefined4 *)(lVar9 + 0x2120) = 0;
                      thunk_FUN_18022384c(lVar9 + 0x20f0);
                      *(undefined8 *)(lVar9 + 0x9c8) = 1;
                      *(undefined8 *)(lVar9 + 0x2358) = *(undefined8 *)(lVar9 + 0x2248);
                      *(undefined4 *)(lVar9 + 0x958) = 0xffffffff;
                      *(undefined8 *)(lVar9 + 0x978) = 0x300000000;
                      *(undefined8 *)(lVar9 + 0x9a8) = 1;
                      *(undefined8 *)(lVar9 + 0x9b0) = 1;
                      *(undefined8 **)(lVar9 + 0x2270) = puVar1;
                      *(undefined8 **)(lVar9 + 0x2288) = puVar1;
                      *(undefined8 **)(lVar9 + 0x22a0) = puVar1;
                      *(undefined8 **)(lVar9 + 0x22b8) = puVar1;
                      *(undefined8 **)(lVar9 + 0x22d0) = puVar1;
                      *(undefined1 *)(param_1 + 0x67c) = 1;
                      return 1;
                    }
                    lVar8 = *(longlong *)(lVar9 + 0x2248);
                    if (lVar8 != 0) {
                      FUN_18020c468(lVar8);
                      FUN_1802229d8(lVar8,0x78);
                    }
                    *(undefined8 *)(lVar9 + 0x2248) = 0;
                  }
                  lVar8 = *(longlong *)(lVar9 + 0x2240);
                  if (lVar8 != 0) {
                    FUN_18020c468(lVar8);
                    FUN_1802229d8(lVar8,0x78);
                  }
                  *(undefined8 *)(lVar9 + 0x2240) = 0;
                }
                lVar8 = *(longlong *)(lVar9 + 0x2238);
                if (lVar8 != 0) {
                  FUN_18020c468(lVar8);
                  FUN_1802229d8(lVar8,0x78);
                }
                *(undefined8 *)(lVar9 + 0x2238) = 0;
              }
              lVar8 = *(longlong *)(lVar9 + 0x2230);
              if (lVar8 != 0) {
                FUN_18020c468(lVar8);
                FUN_1802229d8(lVar8,0x78);
              }
              *(undefined8 *)(lVar9 + 0x2230) = 0;
            }
            if (*(longlong *)(lVar9 + 0x908) != 0) {
              FUN_180146480(*(longlong *)(lVar9 + 0x908),1);
            }
            *(undefined8 *)(lVar9 + 0x908) = 0;
            if (*(longlong *)(lVar9 + 0x910) != 0) {
              FUN_180146480(*(longlong *)(lVar9 + 0x910),1);
            }
            *(undefined8 *)(lVar9 + 0x910) = 0;
          }
          lVar8 = *(longlong *)(lVar9 + 0x1e18);
          if (lVar8 != 0) {
            FUN_180206d90(lVar8);
            FUN_1802229d8(lVar8,3000);
          }
          *(undefined8 *)(lVar9 + 0x1e18) = 0;
        }
        lVar8 = *(longlong *)(lVar9 + 0x1e10);
        if (lVar8 != 0) {
          FUN_18020c138(lVar8);
          FUN_1802229d8(lVar8,0x40);
        }
        *(undefined8 *)(lVar9 + 0x1e10) = 0;
      }
      lVar8 = *(longlong *)(lVar9 + 0x1e08);
      if (lVar8 != 0) {
        FUN_180206d90(lVar8);
        FUN_1802229d8(lVar8,3000);
      }
      *(undefined8 *)(lVar9 + 0x1e08) = 0;
    }
    lVar8 = *(longlong *)(lVar9 + 0x1e00);
    if (lVar8 != 0) {
      FUN_18020c138(lVar8);
      FUN_1802229d8(lVar8,0x40);
    }
    *(undefined8 *)(lVar9 + 0x1e00) = 0;
  }
  return 0;
}

