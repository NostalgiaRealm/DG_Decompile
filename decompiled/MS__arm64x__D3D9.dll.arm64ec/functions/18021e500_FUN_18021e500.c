/*
 * FUN_18021e500 at 18021e500
 * undefined FUN_18021e500(void)
 * Address ranges: 18021e500-18021ea07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18021e500(longlong param_1,uint param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  longlong lVar8;
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
  
  lVar8 = param_1 + (ulonglong)param_2 * 0x1ac0;
  iVar3 = FUN_18020c7c8(*(undefined8 *)(lVar8 + 0x2230),2);
  *(int *)(lVar8 + 0x2368) = iVar3;
  if (iVar3 != -1) {
    iVar3 = FUN_18020c7c8(*(undefined8 *)(lVar8 + 0x2238),2);
    *(int *)(lVar8 + 0x236c) = iVar3;
    if (iVar3 != -1) {
      lVar4 = FUN_18020d430(param_1 + 0x6d0,param_2,0x400,0,0);
      *(longlong *)(lVar8 + 0x2380) = lVar4;
      if (lVar4 != 0) {
        cVar2 = FUN_18020b0b8(*(undefined8 *)(lVar8 + 0x1e08),lVar4,lVar8 + 0x1fd0,0,0x400,
                              &DAT_180239a90,0,0);
        puVar1 = __hybrid_os_arm64x_dispatch_icall;
        if (cVar2 != '\0') {
          lVar4 = FUN_18020d430(param_1 + 0x6d0,param_2,84000,4,0);
          *(longlong *)(lVar8 + 0x2388) = lVar4;
          if (lVar4 != 0) {
            lVar4 = FUN_18020d430(param_1 + 0x6d0,param_2,0x20000,4,0);
            if (lVar4 != 0) {
              lVar5 = FUN_18020d430(param_1 + 0x6d0,param_2,84000,0,0);
              *(longlong *)(lVar8 + 0x2390) = lVar5;
              if (lVar5 != 0) {
                uVar6 = FUN_18020d430(param_1 + 0x6d0,param_2,0x20000,0,0);
                local_40 = 0;
                local_68[0] = 3;
                local_60 = 0;
                local_58 = 0xa0;
                *(undefined8 *)(lVar8 + 0x2398) = uVar6;
                local_50 = 0x10001000000c8;
                uStack_48 = 0x10000001b;
                local_38 = 1;
                lVar5 = FUN_18020d528(param_1 + 0x6d0,param_2,local_68);
                *(longlong *)(lVar8 + 0x2370) = lVar5;
                if (lVar5 != 0) {
                  local_58 = 400;
                  local_50 = CONCAT44(local_50._4_4_,0x11c);
                  lVar5 = FUN_18020d528(param_1 + 0x6d0,param_2,local_68);
                  *(longlong *)(lVar8 + 0x2378) = lVar5;
                  if (lVar5 != 0) {
                    local_b0 = 0x40000001e;
                    local_a8 = 0x1688;
                    local_a0 = 0xffffffff00000000;
                    uStack_98 = 0;
                    local_90 = 0;
                    puVar7 = (undefined8 *)
                             FUN_18020d168(*(undefined8 *)(lVar8 + 0x2230),auStack_c0,
                                           *(undefined4 *)(lVar8 + 0x2368),0);
                    FUN_18020d3a0(param_1 + 0x6d0,param_2,*(undefined8 *)(lVar8 + 0x2370),&local_b0,
                                  *puVar7);
                    local_b0 = CONCAT44(local_b0._4_4_,0x1c);
                    puVar7 = (undefined8 *)
                             FUN_18020d168(*(undefined8 *)(lVar8 + 0x2230),auStack_c0,
                                           *(int *)(lVar8 + 0x2368) + 1,0);
                    FUN_18020d3a0(param_1 + 0x6d0,param_2,*(undefined8 *)(lVar8 + 0x2378),&local_b0,
                                  *puVar7);
                    local_80 = 0x40000001c;
                    uStack_78 = 0;
                    local_70 = 0;
                    puVar7 = (undefined8 *)
                             FUN_18020d168(*(undefined8 *)(lVar8 + 0x2238),auStack_c0,
                                           *(undefined4 *)(lVar8 + 0x236c),0);
                    FUN_18020d3e8(param_1 + 0x6d0,param_2,*(undefined8 *)(lVar8 + 0x2370),&local_80,
                                  *puVar7);
                    puVar7 = (undefined8 *)
                             FUN_18020d168(*(undefined8 *)(lVar8 + 0x2238),auStack_c0,
                                           *(int *)(lVar8 + 0x236c) + 1,0);
                    FUN_18020d3e8(param_1 + 0x6d0,param_2,*(undefined8 *)(lVar8 + 0x2378),&local_80,
                                  *puVar7);
                    *(undefined8 *)(lVar8 + 0x9c0) = *(undefined8 *)(lVar8 + 0x1a20);
                    FUN_180207a10(*(undefined8 *)(lVar8 + 0x1e08),*(undefined8 *)(lVar8 + 0x9b8));
                    FUN_180208b78(*(undefined8 *)(lVar8 + 0x1e08),*(undefined8 *)(lVar8 + 0x9b8));
                    uVar6 = FUN_18021ca50(lVar8 + 0x2308,lVar8 + 0x9b8);
                    FUN_180207a10(*(undefined8 *)(lVar8 + 0x1e08),uVar6);
                    FUN_180208c00(*(undefined8 *)(lVar8 + 0x1e08),uVar6);
                    (*(code *)puVar1)(0x180224000);
                    uVar6 = (*extraout_x11)(lVar4);
                    FUN_1802091d8(*(undefined8 *)(lVar8 + 0x1e08),3,uVar6);
                    (*(code *)puVar1)(0x180224000);
                    uVar6 = (*extraout_x11_00)();
                    FUN_180209160(*(undefined8 *)(lVar8 + 0x1e08),1,uVar6);
                    FUN_180207cd0(*(undefined8 *)(lVar8 + 0x1e08),lVar4,0,1,0x40);
                    FUN_180207cd0(*(undefined8 *)(lVar8 + 0x1e08),*(undefined8 *)(lVar8 + 0x2380),0,
                                  1,0x40);
                    FUN_180209dc0(*(undefined8 *)(lVar8 + 0x1e08),0x80,0x100,1);
                    uVar6 = *(undefined8 *)(lVar8 + 0x2398);
                    FUN_180207cd0(*(undefined8 *)(lVar8 + 0x1e08),lVar4,0,1,0x800);
                    FUN_180207cd0(*(undefined8 *)(lVar8 + 0x1e08),uVar6,0,1,0x400);
                    FUN_1802099e0(*(undefined8 *)(lVar8 + 0x1e08),uVar6,lVar4);
                    FUN_180207560(*(longlong *)(lVar8 + 0x1e08) + 8,0);
                    lVar8 = *(longlong *)(lVar8 + 0x1e08);
                    if (*(longlong *)(lVar8 + 0xb10) != 0) {
                      *(longlong *)(lVar8 + (ulonglong)*(uint *)(lVar8 + 0xb54) * 8 + 0x810) = lVar4
                      ;
                      *(int *)(lVar8 + 0xb54) = *(int *)(lVar8 + 0xb54) + 1;
                    }
                    return 1;
                  }
                  (*(code *)puVar1)(0x180224000);
                  (*extraout_x11_01)();
                  *(undefined8 *)(lVar8 + 0x2370) = 0;
                }
                (*(code *)puVar1)(0x180224000);
                (*extraout_x11_02)();
                *(undefined8 *)(lVar8 + 0x2398) = 0;
              }
              (*(code *)puVar1)(0x180224000);
              (*extraout_x11_03)();
              *(undefined8 *)(lVar8 + 0x2390) = 0;
            }
            (*(code *)puVar1)(0x180224000);
            (*extraout_x11_04)();
            *(undefined8 *)(lVar8 + 0x2388) = 0;
          }
        }
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_05)();
        *(undefined8 *)(lVar8 + 0x2380) = 0;
      }
      iVar3 = *(int *)(lVar8 + 0x236c);
      if (iVar3 != -1) {
        lVar4 = *(longlong *)(lVar8 + 0x2238);
        thunk_FUN_1802236f8(lVar4 + 0x28);
        FUN_18020c678(lVar4,iVar3,2);
        thunk_FUN_18022370c(lVar4 + 0x28);
      }
    }
    iVar3 = *(int *)(lVar8 + 0x2368);
    if (iVar3 != -1) {
      lVar8 = *(longlong *)(lVar8 + 0x2230);
      thunk_FUN_1802236f8(lVar8 + 0x28);
      FUN_18020c678(lVar8,iVar3,2);
      thunk_FUN_18022370c(lVar8 + 0x28);
    }
  }
  return 0;
}

