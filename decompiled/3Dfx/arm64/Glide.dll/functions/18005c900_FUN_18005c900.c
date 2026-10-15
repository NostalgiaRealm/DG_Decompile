/*
 * FUN_18005c900 at 18005c900
 * undefined8 __cdecl FUN_18005c900(longlong param_1, ulonglong param_2)
 * Address ranges: 18005c900-18005cdef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005c900(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong alStack_c0 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar5 = param_2 & 0xffffffff;
  lVar7 = param_1 + uVar5 * 0x1ac0;
  uVar1 = FUN_18004a918(*(longlong *)(lVar7 + 0x2230),2);
  *(uint *)(lVar7 + 0x2368) = uVar1;
  if (uVar1 != 0xffffffff) {
    uVar1 = FUN_18004a918(*(longlong *)(lVar7 + 0x2238),2);
    *(uint *)(lVar7 + 0x236c) = uVar1;
    if (uVar1 != 0xffffffff) {
      plVar2 = FUN_180049ed8(param_1 + 0x6d0,uVar5,0x400,0,0);
      *(longlong **)(lVar7 + 0x2380) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        uVar1 = FUN_18004e2a0(*(ulonglong *)(lVar7 + 0x1e08),plVar2,(longlong *)(lVar7 + 0x1fd0),0,
                              0x400,(undefined8 *)&DAT_180063410,0,'\0');
        if ((uVar1 & 1) != 0) {
          plVar2 = FUN_180049ed8(param_1 + 0x6d0,uVar5,84000,4,0);
          *(longlong **)(lVar7 + 0x2388) = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar2 = FUN_180049ed8(param_1 + 0x6d0,uVar5,0x20000,4,0);
            if (plVar2 != (longlong *)0x0) {
              plVar3 = FUN_180049ed8(param_1 + 0x6d0,uVar5,84000,0,0);
              *(longlong **)(lVar7 + 0x2390) = plVar3;
              if (plVar3 != (longlong *)0x0) {
                plVar3 = FUN_180049ed8(param_1 + 0x6d0,uVar5,0x20000,0,0);
                local_40 = 0;
                local_68[0] = 3;
                local_60 = 0;
                local_58 = 0xa0;
                *(longlong **)(lVar7 + 0x2398) = plVar3;
                local_50 = 0x10001000000c8;
                uStack_48 = 0x10000001b;
                local_38 = 1;
                lVar4 = FUN_180049fc8(param_1 + 0x6d0,uVar5,local_68);
                *(longlong *)(lVar7 + 0x2370) = lVar4;
                if (lVar4 != 0) {
                  local_58 = 400;
                  local_50 = CONCAT44(local_50._4_4_,0x11c);
                  lVar4 = FUN_180049fc8(param_1 + 0x6d0,uVar5,local_68);
                  *(longlong *)(lVar7 + 0x2378) = lVar4;
                  if (lVar4 != 0) {
                    local_b0 = 0x40000001e;
                    local_a8 = 0x1688;
                    local_a0 = 0xffffffff00000000;
                    uStack_98 = 0;
                    local_90 = 0;
                    plVar3 = FUN_18004b248(*(longlong *)(lVar7 + 0x2230),alStack_c0,
                                           *(uint *)(lVar7 + 0x2368),0);
                    lVar4 = param_1 + uVar5 * 0x20;
                    (**(code **)(**(longlong **)(lVar4 + 0x6d0) + 0x90))
                              (*(longlong **)(lVar4 + 0x6d0),*(undefined8 *)(lVar7 + 0x2370),
                               &local_b0,*plVar3);
                    local_b0 = CONCAT44(local_b0._4_4_,0x1c);
                    plVar3 = FUN_18004b248(*(longlong *)(lVar7 + 0x2230),alStack_c0,
                                           *(int *)(lVar7 + 0x2368) + 1,0);
                    (**(code **)(**(longlong **)(lVar4 + 0x6d0) + 0x90))
                              (*(longlong **)(lVar4 + 0x6d0),*(undefined8 *)(lVar7 + 0x2378),
                               &local_b0,*plVar3);
                    local_80 = 0x40000001c;
                    uStack_78 = 0;
                    local_70 = 0;
                    plVar3 = FUN_18004b248(*(longlong *)(lVar7 + 0x2238),alStack_c0,
                                           *(uint *)(lVar7 + 0x236c),0);
                    (**(code **)(**(longlong **)(lVar4 + 0x6d0) + 0xa0))
                              (*(longlong **)(lVar4 + 0x6d0),*(undefined8 *)(lVar7 + 0x2370),
                               &local_80,*plVar3);
                    plVar3 = FUN_18004b248(*(longlong *)(lVar7 + 0x2238),alStack_c0,
                                           *(int *)(lVar7 + 0x236c) + 1,0);
                    (**(code **)(**(longlong **)(lVar4 + 0x6d0) + 0xa0))
                              (*(longlong **)(lVar4 + 0x6d0),*(undefined8 *)(lVar7 + 0x2378),
                               &local_80,*plVar3);
                    uVar5 = *(ulonglong *)(lVar7 + 0x1e08);
                    *(undefined8 *)(lVar7 + 0x9c0) = *(undefined8 *)(lVar7 + 0x1a20);
                    FUN_180046ef8(*(longlong *)(uVar5 + 0xb18),*(ulonglong *)(lVar7 + 0x9b8),
                                  *(ulonglong *)(uVar5 + 0xb10),uVar5,*(ulonglong *)(uVar5 + 0xb78))
                    ;
                    FUN_18004c408(*(longlong *)(lVar7 + 0x1e08),*(longlong *)(lVar7 + 0x9b8));
                    uVar5 = FUN_18005bcc0((longlong *)(lVar7 + 0x2308),(byte *)(lVar7 + 0x9b8));
                    uVar6 = *(ulonglong *)(lVar7 + 0x1e08);
                    FUN_180046ef8(*(longlong *)(uVar6 + 0xb18),uVar5,*(ulonglong *)(uVar6 + 0xb10),
                                  uVar6,*(ulonglong *)(uVar6 + 0xb78));
                    FUN_18004c478(*(longlong *)(lVar7 + 0x1e08),uVar5);
                    lVar4 = (**(code **)(*plVar2 + 0x58))(plVar2);
                    FUN_18004c918(*(longlong *)(lVar7 + 0x1e08),3,lVar4);
                    lVar4 = (**(code **)(**(longlong **)(lVar7 + 0x2380) + 0x58))();
                    FUN_18004c8b8(*(longlong *)(lVar7 + 0x1e08),1,lVar4);
                    FUN_18004bee8(*(ulonglong *)(lVar7 + 0x1e08),(ulonglong)plVar2,0,1,0x40);
                    FUN_18004bee8(*(ulonglong *)(lVar7 + 0x1e08),*(ulonglong *)(lVar7 + 0x2380),0,1,
                                  0x40);
                    FUN_18004d368(*(longlong *)(lVar7 + 0x1e08),0x80,0x100,1);
                    uVar5 = *(ulonglong *)(lVar7 + 0x2398);
                    FUN_18004bee8(*(ulonglong *)(lVar7 + 0x1e08),(ulonglong)plVar2,0,1,0x800);
                    FUN_18004bee8(*(ulonglong *)(lVar7 + 0x1e08),uVar5,0,1,0x400);
                    FUN_18004d030(*(longlong *)(lVar7 + 0x1e08),uVar5,plVar2);
                    FUN_18004baf0(*(longlong *)(lVar7 + 0x1e08) + 8,0);
                    lVar7 = *(longlong *)(lVar7 + 0x1e08);
                    if (*(longlong *)(lVar7 + 0xb10) != 0) {
                      *(longlong **)(lVar7 + (ulonglong)*(uint *)(lVar7 + 0xb54) * 8 + 0x810) =
                           plVar2;
                      *(int *)(lVar7 + 0xb54) = *(int *)(lVar7 + 0xb54) + 1;
                    }
                    return 1;
                  }
                  (**(code **)(**(longlong **)(lVar7 + 0x2370) + 0x10))();
                  *(undefined8 *)(lVar7 + 0x2370) = 0;
                }
                (**(code **)(**(longlong **)(lVar7 + 0x2398) + 0x10))();
                *(undefined8 *)(lVar7 + 0x2398) = 0;
              }
              (**(code **)(**(longlong **)(lVar7 + 0x2390) + 0x10))();
              *(undefined8 *)(lVar7 + 0x2390) = 0;
            }
            (**(code **)(**(longlong **)(lVar7 + 0x2388) + 0x10))();
            *(undefined8 *)(lVar7 + 0x2388) = 0;
          }
        }
        (**(code **)(**(longlong **)(lVar7 + 0x2380) + 0x10))();
        *(undefined8 *)(lVar7 + 0x2380) = 0;
      }
      uVar1 = *(uint *)(lVar7 + 0x236c);
      if (uVar1 != 0xffffffff) {
        lVar4 = *(longlong *)(lVar7 + 0x2238);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
        FUN_18004a7d8(lVar4,uVar1,2);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
      }
    }
    uVar1 = *(uint *)(lVar7 + 0x2368);
    if (uVar1 != 0xffffffff) {
      lVar7 = *(longlong *)(lVar7 + 0x2230);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
      FUN_18004a7d8(lVar7,uVar1,2);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
    }
  }
  return 0;
}

