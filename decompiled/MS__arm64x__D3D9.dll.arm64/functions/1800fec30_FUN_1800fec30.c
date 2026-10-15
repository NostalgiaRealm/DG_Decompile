/*
 * FUN_1800fec30 at 1800fec30
 * undefined FUN_1800fec30(void)
 * Address ranges: 1800fec30-1800ff107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800fec30(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_c0 [16];
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
  
  param_2 = param_2 & 0xffffffff;
  lVar7 = param_1 + param_2 * 0x1ac0;
  iVar1 = FUN_1800e7220(*(undefined8 *)(lVar7 + 0x2230),2);
  *(int *)(lVar7 + 0x2368) = iVar1;
  if (iVar1 != -1) {
    iVar1 = FUN_1800e7220(*(undefined8 *)(lVar7 + 0x2238),2);
    *(int *)(lVar7 + 0x236c) = iVar1;
    if (iVar1 != -1) {
      lVar2 = FUN_1800e7bb8(param_1 + 0x6d0,param_2,0x400,0,0);
      *(longlong *)(lVar7 + 0x2380) = lVar2;
      if (lVar2 != 0) {
        uVar3 = FUN_1800eb698(*(undefined8 *)(lVar7 + 0x1e08),lVar2,lVar7 + 0x1fd0,0,0x400,
                              &DAT_180233160,0,0);
        if ((uVar3 & 1) != 0) {
          lVar2 = FUN_1800e7bb8(param_1 + 0x6d0,param_2,84000,4,0);
          *(longlong *)(lVar7 + 0x2388) = lVar2;
          if (lVar2 != 0) {
            plVar4 = (longlong *)FUN_1800e7bb8(param_1 + 0x6d0,param_2,0x20000,4,0);
            if (plVar4 != (longlong *)0x0) {
              lVar2 = FUN_1800e7bb8(param_1 + 0x6d0,param_2,84000,0,0);
              *(longlong *)(lVar7 + 0x2390) = lVar2;
              if (lVar2 != 0) {
                uVar5 = FUN_1800e7bb8(param_1 + 0x6d0,param_2,0x20000,0,0);
                local_40 = 0;
                local_68[0] = 3;
                local_60 = 0;
                local_58 = 0xa0;
                *(undefined8 *)(lVar7 + 0x2398) = uVar5;
                local_50 = 0x10001000000c8;
                uStack_48 = 0x10000001b;
                local_38 = 1;
                lVar2 = FUN_1800e7ca8(param_1 + 0x6d0,param_2,local_68);
                *(longlong *)(lVar7 + 0x2370) = lVar2;
                if (lVar2 != 0) {
                  local_58 = 400;
                  local_50 = CONCAT44(local_50._4_4_,0x11c);
                  lVar2 = FUN_1800e7ca8(param_1 + 0x6d0,param_2,local_68);
                  *(longlong *)(lVar7 + 0x2378) = lVar2;
                  if (lVar2 != 0) {
                    local_b0 = 0x40000001e;
                    local_a8 = 0x1688;
                    local_a0 = 0xffffffff00000000;
                    uStack_98 = 0;
                    local_90 = 0;
                    puVar6 = (undefined8 *)
                             FUN_1800e7b48(*(undefined8 *)(lVar7 + 0x2230),auStack_c0,
                                           *(undefined4 *)(lVar7 + 0x2368),0);
                    param_1 = param_1 + param_2 * 0x20;
                    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x90))
                              (*(longlong **)(param_1 + 0x6d0),*(undefined8 *)(lVar7 + 0x2370),
                               &local_b0,*puVar6);
                    local_b0 = CONCAT44(local_b0._4_4_,0x1c);
                    puVar6 = (undefined8 *)
                             FUN_1800e7b48(*(undefined8 *)(lVar7 + 0x2230),auStack_c0,
                                           *(int *)(lVar7 + 0x2368) + 1,0);
                    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x90))
                              (*(longlong **)(param_1 + 0x6d0),*(undefined8 *)(lVar7 + 0x2378),
                               &local_b0,*puVar6);
                    local_80 = 0x40000001c;
                    uStack_78 = 0;
                    local_70 = 0;
                    puVar6 = (undefined8 *)
                             FUN_1800e7b48(*(undefined8 *)(lVar7 + 0x2238),auStack_c0,
                                           *(undefined4 *)(lVar7 + 0x236c),0);
                    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0xa0))
                              (*(longlong **)(param_1 + 0x6d0),*(undefined8 *)(lVar7 + 0x2370),
                               &local_80,*puVar6);
                    puVar6 = (undefined8 *)
                             FUN_1800e7b48(*(undefined8 *)(lVar7 + 0x2238),auStack_c0,
                                           *(int *)(lVar7 + 0x236c) + 1,0);
                    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0xa0))
                              (*(longlong **)(param_1 + 0x6d0),*(undefined8 *)(lVar7 + 0x2378),
                               &local_80,*puVar6);
                    *(undefined8 *)(lVar7 + 0x9c0) = *(undefined8 *)(lVar7 + 0x1a20);
                    FUN_1800e8910(*(undefined8 *)(lVar7 + 0x1e08),*(undefined8 *)(lVar7 + 0x9b8));
                    FUN_1800e97f8(*(undefined8 *)(lVar7 + 0x1e08),*(undefined8 *)(lVar7 + 0x9b8));
                    uVar5 = FUN_1800fd698(lVar7 + 0x2308,lVar7 + 0x9b8);
                    FUN_1800e8910(*(undefined8 *)(lVar7 + 0x1e08),uVar5);
                    FUN_1800e9868(*(undefined8 *)(lVar7 + 0x1e08),uVar5);
                    uVar5 = (**(code **)(*plVar4 + 0x58))(plVar4);
                    FUN_1800e9d08(*(undefined8 *)(lVar7 + 0x1e08),3,uVar5);
                    uVar5 = (**(code **)(**(longlong **)(lVar7 + 0x2380) + 0x58))();
                    FUN_1800e9ca8(*(undefined8 *)(lVar7 + 0x1e08),1,uVar5);
                    FUN_1800e8bb8(*(undefined8 *)(lVar7 + 0x1e08),plVar4,0,1,0x40);
                    FUN_1800e8bb8(*(undefined8 *)(lVar7 + 0x1e08),*(undefined8 *)(lVar7 + 0x2380),0,
                                  1,0x40);
                    FUN_1800ea758(*(undefined8 *)(lVar7 + 0x1e08),0x80,0x100,1);
                    uVar5 = *(undefined8 *)(lVar7 + 0x2398);
                    FUN_1800e8bb8(*(undefined8 *)(lVar7 + 0x1e08),plVar4,0,1,0x800);
                    FUN_1800e8bb8(*(undefined8 *)(lVar7 + 0x1e08),uVar5,0,1,0x400);
                    FUN_1800ea420(*(undefined8 *)(lVar7 + 0x1e08),uVar5,plVar4);
                    FUN_1800e8548(*(longlong *)(lVar7 + 0x1e08) + 8,0);
                    lVar7 = *(longlong *)(lVar7 + 0x1e08);
                    if (*(longlong *)(lVar7 + 0xb10) != 0) {
                      *(longlong **)(lVar7 + (ulonglong)*(uint *)(lVar7 + 0xb54) * 8 + 0x810) =
                           plVar4;
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
      iVar1 = *(int *)(lVar7 + 0x236c);
      if (iVar1 != -1) {
        lVar2 = *(longlong *)(lVar7 + 0x2238);
        (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar2 + 0x28);
        FUN_1800e70e0(lVar2,iVar1,2);
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar2 + 0x28);
      }
    }
    iVar1 = *(int *)(lVar7 + 0x2368);
    if (iVar1 != -1) {
      lVar7 = *(longlong *)(lVar7 + 0x2230);
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar7 + 0x28);
      FUN_1800e70e0(lVar7,iVar1,2);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar7 + 0x28);
    }
  }
  return 0;
}

