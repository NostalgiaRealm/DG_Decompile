/*
 * FUN_1802183b8 at 1802183b8
 * undefined FUN_1802183b8(void)
 * Address ranges: 1802183b8-1802187c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802183b8(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined8 uVar6;
  longlong lVar7;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  int local_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [8];
  uint local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 auStack_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 auStack_70 [32];
  undefined4 local_50;
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_2 + 0xdb8) != 0) {
    lVar7 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,auStack_a8);
    *(int *)(*(longlong *)(lVar7 + 0x1e08) + 0x684) =
         *(int *)(*(longlong *)(lVar7 + 0x1e08) + 0x684) + 1;
    *(undefined8 *)(lVar7 + 0x9d0) = *(undefined8 *)(*(longlong *)(lVar7 + 0x1e08) + 0xb78);
    uVar3 = FUN_1802116e0(*(undefined8 *)(lVar7 + 0x2250),2,
                          *(undefined8 *)(*(longlong *)(lVar7 + 0x1e00) + 0x18),
                          *(undefined8 *)(*(longlong *)(lVar7 + 0x1e08) + 0xb78),&local_e0);
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_180210af8(*(longlong *)(lVar7 + 0x908) + 0x40,&local_c0,2,
                            *(undefined8 *)(*(longlong *)(lVar7 + 0x1e00) + 0x18),
                            *(undefined8 *)(lVar7 + 0x9d0));
      if (local_b8 != 0) {
        *(longlong *)(*(longlong *)(lVar7 + 0x1e08) + 0xb88) = param_1;
        FUN_180201e10(uVar2,param_2,param_3,local_98,local_90,local_b8,&local_130);
        uVar6 = *(undefined8 *)(param_2 + (ulonglong)*(uint *)(param_2 + 0xd78) * 8 + 0xd88);
        (*(code *)puVar5)(0x180224000);
        (*extraout_x11_00)(uVar6,auStack_70);
        FUN_18020d168(*(undefined8 *)(lVar7 + 0x2238),auStack_f8,*(undefined4 *)(param_2 + 0xd98),
                      *(undefined4 *)(param_2 + 0xd78));
        uVar2 = *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0);
        FUN_18020d168(*(undefined8 *)(lVar7 + 0x2230),&local_f0,*(undefined4 *)(param_2 + 0xdc8),0);
        puVar4 = (undefined8 *)(*(code *)puVar5)(0x180225000);
        (*extraout_x11_01)(uVar2,2,local_d8,*puVar4,0);
        *(undefined4 *)(lVar7 + 0x980) = 1;
        *(undefined4 *)(lVar7 + 0x984) = local_50;
        uVar2 = FUN_180150ee0(lVar7 + 0x2260,&DAT_1802396c8);
        *(undefined8 *)(lVar7 + 0x968) = uVar2;
        uVar2 = FUN_180150c00(lVar7 + 0x22a8,&DAT_180239700);
        *(undefined8 *)(lVar7 + 0x960) = uVar2;
        *(undefined8 *)(lVar7 + 0x920) = *(undefined8 *)(lVar7 + 0x1ba0);
        *(undefined8 *)(lVar7 + 0x928) = *(undefined8 *)(lVar7 + 0x1b80);
        *(undefined8 *)(lVar7 + 0x970) = *(undefined8 *)(lVar7 + 0x1bb0);
        FUN_180207a10(*(undefined8 *)(lVar7 + 0x1e08),*(undefined8 *)(lVar7 + 0x918));
        FUN_180208ae8(*(undefined8 *)(lVar7 + 0x1e08),*(undefined8 *)(lVar7 + 0x918));
        FUN_180208a18(*(undefined8 *)(lVar7 + 0x1e08),1,auStack_d0);
        FUN_180208c68(*(undefined8 *)(lVar7 + 0x1e08),5);
        local_f0 = local_c0;
        uStack_e8 = 0x1000000200;
        FUN_180209250(*(undefined8 *)(lVar7 + 0x1e08),0,1,&local_f0);
        FUN_1802094f8(*(undefined8 *)(lVar7 + 0x1e08),1,auStack_f8,0,0);
        local_100 = 0;
        local_fc = 0x3f800000;
        local_120 = (int)local_130;
        local_110 = local_130;
        fStack_10c = fStack_12c;
        iStack_11c = (int)fStack_12c;
        local_108 = local_128;
        fStack_104 = fStack_124;
        local_118 = (int)(local_128 + local_130);
        iStack_114 = (int)(fStack_124 + fStack_12c);
        FUN_180209840(*(undefined8 *)(lVar7 + 0x1e08),1,&local_110);
        FUN_180209758(*(undefined8 *)(lVar7 + 0x1e08),1,&local_120);
        FUN_180207cd0(*(undefined8 *)(lVar7 + 0x1e08),uVar6,0,0,4);
        if (*(longlong *)(param_2 + 0xdc0) == 0) {
          puVar5 = &DAT_1802392e0;
        }
        else {
          FUN_180208f00(*(undefined8 *)(lVar7 + 0x1e08),1,local_e0 + (ulonglong)local_c8);
          uVar2 = FUN_1801a4da0(lVar7 + 0x2278,&DAT_180239430);
          *(undefined8 *)(lVar7 + 0x950) = uVar2;
          uVar2 = FUN_180205088(lVar7 + 0x22d8,lVar7 + 0x918);
          FUN_180207a10(*(undefined8 *)(lVar7 + 0x1e08),uVar2);
          FUN_180208c00(*(undefined8 *)(lVar7 + 0x1e08),uVar2);
          FUN_180207cd0(*(undefined8 *)(lVar7 + 0x1e08),*(undefined8 *)(param_2 + 0xdc0),0,0,0x80);
          FUN_180209ca8(*(undefined8 *)(lVar7 + 0x1e08),4,1,0,0);
          puVar5 = &DAT_180239580;
        }
        uVar2 = FUN_1801a4da0(lVar7 + 0x2278,puVar5);
        *(undefined8 *)(lVar7 + 0x950) = uVar2;
        uVar2 = FUN_180205088(lVar7 + 0x22d8,lVar7 + 0x918);
        FUN_180208c00(*(undefined8 *)(lVar7 + 0x1e08),uVar2);
        FUN_180207a10(*(undefined8 *)(lVar7 + 0x1e08),uVar2);
        FUN_180208f00(*(undefined8 *)(lVar7 + 0x1e08),1,local_e0);
        FUN_180207cd0(*(undefined8 *)(lVar7 + 0x1e08),*(undefined8 *)(param_2 + 0xdb8),0,0,0x80);
        FUN_180209ca8(*(undefined8 *)(lVar7 + 0x1e08),4,1,0,0);
        if (*(int *)(*(longlong *)(lVar7 + 0x908) + 0x34) != 0) {
          *(undefined4 *)(*(longlong *)(lVar7 + 0x908) + 0x34) = 0;
        }
        lVar7 = *(longlong *)(lVar7 + 0x1e08);
        iVar1 = *(int *)(lVar7 + 0x684) + -1;
        *(int *)(lVar7 + 0x684) = iVar1;
        if ((iVar1 == 0) && (*(int *)(lVar7 + 0x680) <= *(int *)(lVar7 + 0x678))) {
          FUN_180207560(lVar7 + 8,0);
        }
      }
    }
  }
  return;
}

