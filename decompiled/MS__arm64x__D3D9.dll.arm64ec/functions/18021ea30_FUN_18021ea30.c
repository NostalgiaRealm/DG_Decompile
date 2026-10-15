/*
 * FUN_18021ea30 at 18021ea30
 * undefined FUN_18021ea30(void)
 * Address ranges: 18021ea30-18021f10b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_18021ea30(longlong param_1,ulonglong param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5,undefined8 param_6,undefined8 param_7,longlong param_8,uint param_9,
             uint param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_b0;
  longlong local_a8 [2];
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  local_b0 = param_7;
  local_90 = param_8;
  if (*(char *)(param_1 + 0x23a0) == '\0') {
    FUN_18021e500();
    *(undefined1 *)(param_1 + 0x23a0) = 1;
  }
  if (*(longlong *)(param_1 + 0x2378) != 0) {
    local_88 = 0;
    local_78 = 0;
    local_60 = 0;
    uStack_58 = 0xc8000000a0;
    local_80 = 0x43200000;
    uStack_7c = 0x43480000;
    local_74 = 0x3f800000;
    FUN_180209840(*(undefined8 *)(param_1 + 0x1e08),1,&local_88);
    FUN_180209758(*(undefined8 *)(param_1 + 0x1e08),1,&local_60);
    local_70 = param_4[1] + (ulonglong)*(uint *)(param_4 + 3);
    local_a8[0] = local_90;
    local_98[0] = 2;
    FUN_18020d168(*(undefined8 *)(param_1 + 0x2230),local_a8 + 1,*(undefined4 *)(param_1 + 0x2368),0
                 );
    puVar1 = __hybrid_os_arm64x_dispatch_icall;
    local_90 = 0x100000001;
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
    (*extraout_x11)(uVar2,1,&local_70,local_98,2,local_a8,&local_90,0);
    uVar2 = FUN_1801a4da0(param_1 + 0x2278,&DAT_180239730);
    *(undefined8 *)(param_1 + 0x950) = uVar2;
    uVar2 = FUN_180150ee0(param_1 + 0x2260,&DAT_1802396c8);
    *(undefined8 *)(param_1 + 0x968) = uVar2;
    uVar2 = FUN_180150c00(param_1 + 0x22a8,&DAT_180239700);
    *(undefined8 *)(param_1 + 0x960) = uVar2;
    *(undefined8 *)(param_1 + 0x97c) = 0x100000003;
    *(undefined8 *)(param_1 + 0x970) = *(undefined8 *)(param_1 + 0x1bb0);
    *(undefined8 *)(param_1 + 0x920) = *(undefined8 *)(param_1 + 0x1ba0);
    *(undefined8 *)(param_1 + 0x928) = *(undefined8 *)(param_1 + 0x1a50);
    *(undefined4 *)(param_1 + 0x984) = 0x1c;
    FUN_180207a10(*(undefined8 *)(param_1 + 0x1e08),*(undefined8 *)(param_1 + 0x918));
    FUN_180208ae8(*(undefined8 *)(param_1 + 0x1e08),*(undefined8 *)(param_1 + 0x918));
    uVar2 = FUN_180205088(param_1 + 0x22d8,param_1 + 0x918);
    FUN_180208c00(*(undefined8 *)(param_1 + 0x1e08),uVar2);
    FUN_180208a18(*(undefined8 *)(param_1 + 0x1e08),1,param_4 + 2);
    FUN_180208c68(*(undefined8 *)(param_1 + 0x1e08),5);
    FUN_180208e88(*(undefined8 *)(param_1 + 0x1e08),0,*param_3);
    FUN_180208f00(*(undefined8 *)(param_1 + 0x1e08),1,*param_4 + (ulonglong)*(uint *)(param_4 + 3));
    FUN_18020d168(*(undefined8 *)(param_1 + 0x2238),auStack_68,*(undefined4 *)(param_1 + 0x236c),0);
    FUN_1802094f8(*(undefined8 *)(param_1 + 0x1e08),1,auStack_68,1,0);
    local_a8[0] = *param_5 + 0x40;
    local_a8[1] = 0x1000000080;
    FUN_180209250(*(undefined8 *)(param_1 + 0x1e08),0,1,local_a8);
    fVar6 = (float)param_9;
    fVar5 = (float)param_10;
    lVar3 = param_5[1];
    fVar7 = (fVar6 + 0.5) / fVar6;
    fVar8 = (fVar5 + 0.5) / fVar5;
    *(undefined4 *)(lVar3 + 0x40) = 0xbf800000;
    *(undefined4 *)(lVar3 + 0x44) = 0x3f800000;
    *(float *)(lVar3 + 0x48) = 0.5 / fVar6;
    *(float *)(lVar3 + 0x4c) = 0.5 / fVar5;
    *(undefined4 *)(lVar3 + 0x50) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x54) = 0x3f800000;
    *(float *)(lVar3 + 0x58) = fVar7;
    *(float *)(lVar3 + 0x5c) = 0.5 / fVar5;
    *(undefined4 *)(lVar3 + 0x60) = 0xbf800000;
    *(undefined4 *)(lVar3 + 100) = 0xbf800000;
    *(float *)(lVar3 + 0x68) = 0.5 / fVar6;
    *(float *)(lVar3 + 0x6c) = fVar8;
    *(undefined4 *)(lVar3 + 0x70) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x74) = 0xbf800000;
    *(float *)(lVar3 + 0x78) = fVar7;
    *(float *)(lVar3 + 0x7c) = fVar8;
    *(undefined4 *)(lVar3 + 0x80) = 0xbf800000;
    *(undefined4 *)(lVar3 + 0x84) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x88) = 0xc2200000;
    *(undefined4 *)(lVar3 + 0x8c) = 0xc2280000;
    *(undefined4 *)(lVar3 + 0x90) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x94) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x98) = 0x43480000;
    *(undefined4 *)(lVar3 + 0x9c) = 0xc2280000;
    *(undefined4 *)(lVar3 + 0xa0) = 0xbf800000;
    *(undefined4 *)(lVar3 + 0xa4) = 0xbf800000;
    *(undefined4 *)(lVar3 + 0xa8) = 0xc2200000;
    *(undefined4 *)(lVar3 + 0xac) = 0x43720000;
    *(undefined4 *)(lVar3 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0xb4) = 0xbf800000;
    *(undefined4 *)(lVar3 + 0xb8) = 0x43480000;
    *(undefined4 *)(lVar3 + 0xbc) = 0x43720000;
    FUN_180207cd0(*(undefined8 *)(param_1 + 0x1e08),*(undefined8 *)(param_1 + 0x2370),0,0,4);
    FUN_180207cd0(*(undefined8 *)(param_1 + 0x1e08),*(undefined8 *)(param_1 + 0x2378),0,0,4);
    FUN_180207cd0(*(undefined8 *)(param_1 + 0x1e08),local_b0,0,0,0x80);
    FUN_180209ca8(*(undefined8 *)(param_1 + 0x1e08),4,1,0,0);
    FUN_18020d168(*(undefined8 *)(param_1 + 0x2238),&local_b0,*(undefined4 *)(param_1 + 0x236c),1);
    FUN_1802094f8(*(undefined8 *)(param_1 + 0x1e08),1,&local_b0,1,0);
    FUN_180209ca8(*(undefined8 *)(param_1 + 0x1e08),4,1,0,0);
    FUN_180207a10(*(undefined8 *)(param_1 + 0x1e08),*(undefined8 *)(param_1 + 0x9b8));
    FUN_180208b78(*(undefined8 *)(param_1 + 0x1e08),*(undefined8 *)(param_1 + 0x9b8));
    *(undefined8 *)(param_1 + 0x9c0) = *(undefined8 *)(param_1 + 0x1a28);
    uVar2 = FUN_18021ca50(param_1 + 0x2308,param_1 + 0x9b8);
    FUN_180208c00(*(undefined8 *)(param_1 + 0x1e08),uVar2);
    FUN_1802090e8(*(undefined8 *)(param_1 + 0x1e08),0,
                  *param_4 + (ulonglong)(uint)((int)param_4[3] << 1));
    (*(code *)puVar1)(0x180224000);
    uVar2 = (*extraout_x11_00)();
    FUN_180209160(*(undefined8 *)(param_1 + 0x1e08),1,uVar2);
    (*(code *)puVar1)(0x180224000);
    uVar2 = (*extraout_x11_01)();
    FUN_180209160(*(undefined8 *)(param_1 + 0x1e08),2,uVar2);
    (*(code *)puVar1)(0x180224000);
    uVar2 = (*extraout_x11_02)();
    FUN_1802091d8(*(undefined8 *)(param_1 + 0x1e08),3,uVar2);
    FUN_180207cd0(*(undefined8 *)(param_1 + 0x1e08),*(undefined8 *)(param_1 + 0x2370),0,0,0x40);
    FUN_180207cd0(*(undefined8 *)(param_1 + 0x1e08),*(undefined8 *)(param_1 + 0x2398),0,1,0x40);
    FUN_180207cd0(*(undefined8 *)(param_1 + 0x1e08),*(undefined8 *)(param_1 + 0x2388),0,1,0x40);
    FUN_180209dc0(*(undefined8 *)(param_1 + 0x1e08),0x28,0x19,1);
    *(undefined8 *)(param_1 + 0x9c0) = *(undefined8 *)(param_1 + 0x1a30);
    uVar2 = FUN_18021ca50(param_1 + 0x2308,param_1 + 0x9b8);
    FUN_180208c00(*(undefined8 *)(param_1 + 0x1e08),uVar2);
    FUN_180209dc0(*(undefined8 *)(param_1 + 0x1e08),1,0x19,1);
    *(undefined8 *)(param_1 + 0x9c0) = *(undefined8 *)(param_1 + 0x1a38);
    uVar2 = FUN_18021ca50(param_1 + 0x2308,param_1 + 0x9b8);
    FUN_180208c00(*(undefined8 *)(param_1 + 0x1e08),uVar2);
    FUN_180209dc0(*(undefined8 *)(param_1 + 0x1e08),0x28,0x19,1);
    uVar2 = *(undefined8 *)(param_1 + 0x2388);
    uVar4 = *(undefined8 *)(param_1 + 0x2390);
    FUN_180207cd0(*(undefined8 *)(param_1 + 0x1e08),uVar2,0,1,0x800);
    FUN_180207cd0(*(undefined8 *)(param_1 + 0x1e08),uVar4,0,1,0x400);
    FUN_1802099e0(*(undefined8 *)(param_1 + 0x1e08),uVar4,uVar2);
    local_74 = 0x3f800000;
    local_88 = 0;
    local_80 = 0x43a00000;
    uStack_7c = 0x43480000;
    local_78 = 0;
    local_a8[0] = 0;
    local_a8[1] = 0xc800000140;
    FUN_180209840(*(undefined8 *)(param_1 + 0x1e08),1,&local_88);
    FUN_180209758(*(undefined8 *)(param_1 + 0x1e08),1,local_a8);
    *(undefined8 *)(param_1 + 0x928) = *(undefined8 *)(param_1 + 0x1b90);
    uVar2 = FUN_180205088(param_1 + 0x22d8,param_1 + 0x918);
    FUN_180208c00(*(undefined8 *)(param_1 + 0x1e08),uVar2);
    FUN_180207cd0(*(undefined8 *)(param_1 + 0x1e08),*(undefined8 *)(param_1 + 0x2370),0,0,0x80);
    FUN_180207cd0(*(undefined8 *)(param_1 + 0x1e08),*(undefined8 *)(param_1 + 0x2378),0,0,4);
    FUN_18020d168(*(undefined8 *)(param_1 + 0x2238),&local_b0,*(undefined4 *)(param_1 + 0x236c),1);
    FUN_1802094f8(*(undefined8 *)(param_1 + 0x1e08),1,&local_b0,1,0);
    FUN_180208e88(*(undefined8 *)(param_1 + 0x1e08),0,*param_3);
    FUN_180208f00(*(undefined8 *)(param_1 + 0x1e08),1,*param_4 + (ulonglong)*(uint *)(param_4 + 3));
    (*(code *)puVar1)(0x180224000);
    uVar2 = (*extraout_x11_03)();
    FUN_180208f80(*(undefined8 *)(param_1 + 0x1e08),2,uVar2);
    (*(code *)puVar1)(0x180224000);
    uVar2 = (*extraout_x11_04)();
    FUN_180208f80(*(undefined8 *)(param_1 + 0x1e08),3,uVar2);
    FUN_180209ca8(*(undefined8 *)(param_1 + 0x1e08),4,1,4,0);
  }
  return 1;
}

