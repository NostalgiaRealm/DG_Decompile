/*
 * FUN_18017d488 at 18017d488
 * undefined FUN_18017d488(void)
 * Address ranges: 18017d488-18017dcb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18017d488(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  byte local_70;
  byte local_6f [3];
  undefined4 local_6c;
  uint local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  
  local_6c = param_7;
  local_60 = param_6;
  local_5c = param_5;
  local_58 = param_1;
  local_50 = param_3;
  uVar1 = FUN_180213760(param_4 + 0x20,1,1);
  uVar2 = uStack_64;
  if (*(char *)(param_4 + 0x540) == '\0') {
    uStack_64 = uStack_64 & 0xffffff00;
    *(ulonglong *)(param_4 + 0x230) = CONCAT44(uVar2,uVar1) & 0xffffff00ffffffff;
    local_68 = uVar1;
  }
  else {
    *(uint *)(param_4 + 0xe4) = uVar1 | 0x10000000;
  }
  local_d0 = 0;
  local_d8._0_4_ = 1;
  local_e0 = 0;
  local_f0 = 0;
  local_e8._0_4_ = *(uint *)(param_4 + 0x498) | 0x10000000;
  local_100 = CONCAT44(local_100._4_4_,1);
  local_f8._0_4_ = local_6c;
  FUN_180214c88(param_4 + 0x20,param_2,0x2a,uVar1,&local_100,0x38);
  local_c0 = 0;
  local_d0 = CONCAT44(local_d0._4_4_,0xe4);
  local_e0 = 0;
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_4 + 0x52c));
  local_d8._0_4_ = *(undefined4 *)(param_4 + 0x498);
  local_f0 = CONCAT44(local_f0._4_4_,1);
  local_100 = 0;
  local_e8._0_4_ = uVar1;
  local_f8._0_4_ = uVar1;
  FUN_180214c88(param_4 + 0x20,param_2,0x26,*(undefined4 *)(param_4 + 0x4a0),&local_100,0x48);
  auVar8 = FUN_180213760(param_4 + 0x20,1,1);
  uVar2 = FUN_180213760(param_4 + 0x20,auVar8._8_8_,0);
  local_e8._0_4_ = *(undefined4 *)(param_4 + 0x498);
  local_d0 = 0;
  local_d8 = CONCAT44(local_d8._4_4_,1);
  local_f8._0_4_ = local_6c;
  local_e0 = 0;
  local_f0 = 0;
  local_100._0_4_ = 1;
  local_68 = uVar2;
  FUN_180214c88(param_4 + 0x20,param_2,1,auVar8._0_8_ & 0xffffffff,&local_100,0x38);
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_f8._0_4_ = param_9;
  local_100._0_4_ = 1;
  local_e8._0_4_ = param_8;
  FUN_180214c88(param_4 + 0x20,param_2,1,uVar2,&local_100,0x30);
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_100._0_4_ = 1;
  local_e8._0_4_ = param_8;
  local_f8._0_4_ = uVar2;
  FUN_180214c88(param_4 + 0x20,param_2,0x57,uVar2,&local_100,0x30);
  local_e0 = 0;
  local_d8 = 0;
  uVar7 = auVar8._0_4_;
  local_f0 = 0;
  local_f8 = CONCAT44(local_f8._4_4_,uVar2);
  local_100._0_4_ = 1;
  local_e8._0_4_ = uVar7;
  FUN_180214c88(param_4 + 0x20,param_2,0x3c,uVar2,&local_100,0x30);
  local_100._0_4_ = uVar2 | 0x10000000;
  local_f8 = 0;
  local_f0 = 0;
  FUN_180214c88(param_4 + 0x20,param_2,0x4001f,0xffffffff,&local_100,0x18);
  local_c0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(param_4 + 0x498));
  local_f0 = 0;
  local_100._0_4_ = 1;
  local_e8._0_4_ = param_8;
  local_f8._0_4_ = uVar7;
  FUN_180214c88(param_4 + 0x20,param_2,0x37,uVar2,&local_100,0x48);
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_f8._0_4_ = param_9;
  local_100._0_4_ = 1;
  local_e8._0_4_ = uVar2;
  FUN_180214c88(param_4 + 0x20,param_2,0x3c,param_9,&local_100,0x30);
  local_e8._0_4_ = uVar7 | 0x10000000;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_100._0_4_ = 1;
  local_f8._0_4_ = param_8;
  FUN_180214c88(param_4 + 0x20,param_2,0x29,param_8,&local_100,0x30);
  uVar3 = FUN_180213760(param_4 + 0x20,3,1);
  local_e8._0_4_ = uVar7 | 0x80000000;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_f8._0_4_ = local_60;
  local_100._0_4_ = 1;
  FUN_180214c88(param_4 + 0x20,param_2,0x1e,uVar3,&local_100,0x30);
  local_d8 = CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_100._0_4_ = 2;
  local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(param_4 + 0x498)) | 0x10000000;
  local_f8._0_4_ = local_6c;
  FUN_180214c88(param_4 + 0x20,param_2,0x2a,uVar3,&local_100,0x38);
  local_e8 = 0;
  local_f0._0_4_ = 0x150;
  local_100._0_4_ = 6;
  local_f8._0_4_ = uVar3;
  FUN_180214c88(param_4 + 0x20,param_2,0x56,uVar3,&local_100,0x20);
  local_d8 = 0;
  local_f0 = CONCAT44(local_f0._4_4_,0xaa);
  local_e0._0_4_ = 0x55;
  local_100._0_4_ = 2;
  local_e8._0_4_ = uVar3;
  local_f8._0_4_ = uVar3;
  FUN_180214c88(param_4 + 0x20,param_2,0xe,uVar3,&local_100,0x30);
  FUN_180213800(param_4 + 0x20,uVar3);
  uVar4 = FUN_180213760(param_4 + 0x20,4,1);
  *(undefined4 *)(param_4 + 0x4b0) = uVar4;
  local_c0 = 0;
  local_c8 = local_c8 & 0xffffffff00000000;
  local_d0 = 0;
  local_e0._0_4_ = 0x55;
  local_f0 = 0;
  local_100._0_4_ = 2;
  local_d8._0_4_ = *(undefined4 *)(param_4 + 0x498);
  local_e8._0_4_ = uVar3;
  local_f8._0_4_ = uVar3;
  FUN_180214c88(param_4 + 0x20,param_2,0x37,uVar4,&local_100,0x48);
  local_d0 = 0;
  local_c8 = 0;
  local_d8._0_4_ = local_5c;
  local_e8._0_4_ = local_5c;
  local_e0._0_4_ = 0x55;
  local_f0 = 0;
  local_100._0_4_ = 1;
  local_f8._0_4_ = uVar7;
  FUN_180214c88(param_4 + 0x20,param_2,0x37,*(undefined4 *)(param_4 + 0x4b0),&local_100,0x40);
  FUN_180213800(param_4 + 0x20,auVar8._0_8_ & 0xffffffff);
  local_b8 = *(undefined4 *)(param_4 + 0x49c);
  local_f8._0_4_ = *(undefined4 *)(param_4 + 0x4b0);
  local_88 = 0;
  local_90 = 0x3f800000;
  local_f0._0_4_ = 0x50;
  local_98 = 0;
  local_a0 = 0x3f800000;
  local_a8 = 0;
  local_b0 = 0xe4;
  local_c0 = CONCAT44(local_c0._4_4_,0xbf800000);
  local_c8 = CONCAT44(local_c8._4_4_,0x3f800000);
  local_d0 = CONCAT44(local_d0._4_4_,0xbf800000);
  local_d8 = CONCAT44(local_d8._4_4_,0x3f800000);
  local_e0._0_4_ = 0xe4;
  local_100._0_4_ = 0xf;
  local_e8._0_4_ = local_b8;
  FUN_180214c88(param_4 + 0x20,param_2,0x32,(uint)local_f8,&local_100,0x80);
  local_e8._0_4_ = *(undefined4 *)(param_4 + 0x4b0);
  local_d8 = 0;
  local_e0._0_4_ = 0x11;
  local_f0._0_4_ = 0xaf;
  local_100._0_4_ = 0xf;
  local_f8._0_4_ = (uint)local_e8;
  FUN_180214c88(param_4 + 0x20,param_2,0x38,(uint)local_e8,&local_100,0x30);
  local_e8._0_4_ = *(undefined4 *)(param_4 + 0x4b0);
  local_d8 = 0;
  local_e0._0_4_ = 0x55;
  local_f0._0_4_ = 0xff;
  local_100._0_4_ = 2;
  local_f8._0_4_ = (uint)local_e8;
  FUN_180214c88(param_4 + 0x20,param_2,0,(uint)local_e8,&local_100,0x30);
  if ((*(char *)(param_4 + 0x53e) != '\0') || (*(char *)(param_4 + 0x53f) != '\0')) {
    uVar3 = FUN_180213760(param_4 + 0x20,3,1);
    local_e8._0_4_ = *(undefined4 *)(param_4 + 0x4b0);
    *(undefined4 *)(param_4 + 0x4b4) = uVar3;
    local_d8 = 0;
    local_e0._0_4_ = 0xa4;
    local_f0._0_4_ = 0xa4;
    local_100._0_4_ = 7;
    local_f8._0_4_ = (uint)local_e8;
    FUN_180214c88(param_4 + 0x20,param_2,0x38,uVar3,&local_100,0x30);
  }
  if (*(char *)(param_4 + 0x53e) != '\0') {
    uVar3 = FUN_180213760(param_4 + 0x20,3,1);
    local_e8._0_4_ = *(undefined4 *)(param_4 + 0x4b0);
    local_f8._0_4_ = *(undefined4 *)(param_4 + 0x4b4);
    *(undefined4 *)(param_4 + 0x4b8) = uVar3;
    local_d8 = 0;
    local_e0._0_4_ = 0xa4;
    local_f0._0_4_ = 0xa4;
    local_100._0_4_ = 7;
    FUN_180214c88(param_4 + 0x20,param_2,0x38,uVar3,&local_100,0x30);
  }
  uVar2 = *(uint *)(param_4 + 0x70);
  *(uint *)(param_4 + 0x70) = uVar2 + 1;
  *(uint *)(param_4 + (ulonglong)uVar2 * 4 + 0x60) =
       *(int *)(param_4 + 0x52c) +
       ((uint)*(undefined8 *)(param_4 + 0x520) >> 0xc & 0xf) * *(int *)(param_4 + 0x52c);
  if (*(char *)(param_4 + 0x540) == '\0') {
    FUN_1801801f8(local_58,param_2,local_50,param_4,uVar2);
  }
  else {
    *(uint *)(param_4 + 0xe8) = uVar2;
    FUN_18018a780(local_58,param_2,param_4,*(undefined1 *)(param_4 + 0x541));
  }
  if (*(int *)(param_4 + 0x4b8) != 0) {
    FUN_180213800(param_4 + 0x20);
    *(undefined4 *)(param_4 + 0x4b8) = 0;
  }
  piVar6 = (int *)(param_4 + 0x4b4);
  if (*piVar6 != 0) {
    FUN_180213800(param_4 + 0x20);
    *piVar6 = 0;
  }
  FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4b0));
  *(undefined4 *)(param_4 + 0x4b0) = 0;
  FUN_180214c88(param_4 + 0x20,param_2,0x15,0,&local_100,0);
  uVar7 = 0;
  do {
    local_e0 = 0;
    local_d8 = 0;
    local_f8._0_4_ = uVar7 | uVar2 << 0xe | 0x40420300;
    local_f0._0_4_ = 0xe4;
    local_100._0_4_ = 0xf;
    local_e8._0_4_ = uVar1;
    uVar5 = FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar7 | 0x410200,&local_100,0x30);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0xd);
  local_70 = 0;
  local_6f[0] = 0;
  FUN_180181498(uVar5,param_4,&local_70,local_6f);
  if (local_70 != 0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f8._0_4_ = uVar2 << 0xe | 0x4042030d;
    local_100._0_4_ = (uint)local_70;
    local_f0._0_4_ = (uint)(byte)(&DAT_18022c458)[(uint)local_70];
    local_e8._0_4_ = uVar1;
    FUN_180214c88(param_4 + 0x20,param_2,0x36,0x41020d,&local_100,0x30);
  }
  if (local_6f[0] != 0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f8._0_4_ = uVar2 << 0xe | 0x4042030e;
    local_100._0_4_ = (uint)local_6f[0];
    local_f0._0_4_ = (uint)(byte)(&DAT_18022c458)[(uint)local_6f[0]];
    local_e8._0_4_ = uVar1;
    FUN_180214c88(param_4 + 0x20,param_2,0x36,0x41020e,&local_100,0x30);
  }
  FUN_180213800(param_4 + 0x20,uVar1);
  local_f8 = 0;
  local_f0 = 0;
  local_100 = CONCAT44(local_100._4_4_,0x20011000);
  FUN_180214c88(param_4 + 0x20,param_2,0x75,0xffffffff,&local_100,0x18);
  return;
}

