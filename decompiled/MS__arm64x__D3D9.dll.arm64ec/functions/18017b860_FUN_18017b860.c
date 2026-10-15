/*
 * FUN_18017b860 at 18017b860
 * undefined FUN_18017b860(void)
 * Address ranges: 18017b860-18017c143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18017b860(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined1 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint local_d0 [2];
  uint local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  
  puVar1 = (uint *)(param_4 + 0x4d4);
  cVar5 = *(char *)(param_4 + 0x540);
  *(undefined4 *)(param_4 + 0x4dc) = 0;
  puVar2 = (uint *)(param_4 + 0x4c4);
  puVar3 = (uint *)(param_4 + 0x4bc);
  puVar2[0] = 0;
  puVar2[1] = 0;
  puVar4 = (uint *)(param_4 + 0x4cc);
  puVar3[0] = 0;
  puVar3[1] = 0;
  puVar4[0] = 0;
  puVar4[1] = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  if (cVar5 == '\0') {
    uVar10 = FUN_180180138(param_1,param_4);
  }
  else {
    uVar12 = 0;
    uVar10 = param_1;
    if (*(uint *)(param_4 + 0x158) != 0) {
      do {
        cVar5 = *(char *)(param_4 + 0x146 + uVar12);
        uVar13 = (uint)uVar12;
        if (cVar5 == '\0') {
          *puVar3 = uVar13 | 0x320100;
          *(uint *)(param_4 + 0x4c0) = uVar13 | 0x324100;
          *puVar2 = uVar13 | 0x328100;
        }
        else if (cVar5 == '\x03') {
          *(uint *)(param_4 + 0x4c8) = uVar13 | 0x320100;
          *puVar4 = uVar13 | 0x324100;
          *(uint *)(param_4 + 0x4d0) = uVar13 | 0x328100;
        }
        else if (cVar5 == '\x11') {
          *puVar1 = uVar13 | 0x320100;
          *(uint *)(param_4 + 0x4d8) = uVar13 | 0x324100;
          *(uint *)(param_4 + 0x4dc) = uVar13 | 0x328100;
        }
        uVar12 = (ulonglong)(uVar13 + 1);
      } while (uVar13 + 1 < *(uint *)(param_4 + 0x158));
    }
  }
  *(undefined8 *)(param_4 + 0x4a0) = 0x11040020000d00;
  *(undefined4 *)(param_4 + 0x4a8) = 0x110400;
  *(undefined8 *)(param_4 + 0x498) = 0x41040000110400;
  *(undefined8 *)(param_4 + 0x490) = 0x11080300410803;
  if ((*(char *)(param_4 + 0x53d) == '\0') || (*puVar3 == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    uVar8 = FUN_180213760(param_4 + 0x20,1,1);
    *(undefined4 *)(param_4 + 0x4a4) = uVar8;
    uVar8 = FUN_180213760(param_4 + 0x20,3,1);
    uVar9 = FUN_180213760(param_4 + 0x20,extraout_x1,1);
    local_a8 = 0x80;
    local_a0 = 0;
    local_b8._0_4_ = *(undefined4 *)(param_4 + 0x490);
    local_b0._0_4_ = 0xe4;
    local_d0[0] = 1;
    local_c0._0_4_ = 0xa4;
    local_c8 = *puVar3;
    FUN_180214c88(param_4 + 0x20,param_2,0x10,uVar8,local_d0,0x38);
    local_a8 = 0x80;
    local_a0 = 0;
    local_b8._0_4_ = *(undefined4 *)(param_4 + 0x490);
    local_b0._0_4_ = 0xe4;
    local_c0._0_4_ = 0xa4;
    local_c8 = *(undefined4 *)(param_4 + 0x4c0);
    local_d0[0] = 2;
    FUN_180214c88(param_4 + 0x20,param_2,0x10,uVar8,local_d0,0x38);
    local_a8 = 0x80;
    local_a0 = 0;
    local_b0 = CONCAT44(local_b0._4_4_,0xe4);
    local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_4 + 0x490));
    local_c0._0_4_ = 0xa4;
    local_c8 = *puVar2;
    local_d0[0] = 4;
    FUN_180214c88(param_4 + 0x20,param_2,0x10,uVar8,local_d0,0x38);
    local_b8 = 8;
    local_b0 = 0;
    local_c8 = *(undefined4 *)(param_4 + 0x494);
    local_c0._0_4_ = 0xe4;
    local_d0[0] = 7;
    FUN_180214c88(param_4 + 0x20,param_2,0x56,uVar9,local_d0,0x28);
    local_a8 = 0;
    local_b0._0_4_ = 0x1a4;
    local_c0._0_4_ = 0x1a4;
    local_d0[0] = 7;
    local_c8 = uVar9;
    local_b8._0_4_ = uVar8;
    FUN_180214c88(param_4 + 0x20,param_2,0xe,uVar9,local_d0,0x30);
    local_b8._0_4_ = *(undefined4 *)(param_4 + 0x49c);
    local_c0 = CONCAT44(local_c0._4_4_,0x1a4);
    local_88 = 0;
    local_90 = CONCAT44(local_90._4_4_,0x3eaaaaab);
    local_98 = CONCAT44(local_98._4_4_,0x3eaaaaab);
    local_a0 = CONCAT44(local_a0._4_4_,0x3eaaaaab);
    local_a8._0_4_ = 0x3eaaaaab;
    local_b0._0_4_ = 0xe4;
    local_d0[0] = 1;
    local_c8 = uVar9;
    FUN_180214c88(param_4 + 0x20,param_2,0x10,uVar9,local_d0,0x50);
    local_b8._0_4_ = *(undefined4 *)(param_4 + 0x498);
    local_a0 = 0;
    local_a8._0_4_ = 0;
    local_b0 = CONCAT44(local_b0._4_4_,0xe4);
    local_c0 = 0;
    local_d0[0] = 1;
    local_c8 = uVar9;
    FUN_180214c88(param_4 + 0x20,param_2,0x1d,*(undefined4 *)(param_4 + 0x4a4),local_d0,0x38);
    local_98 = 0x94;
    local_90 = 0;
    local_a0 = CONCAT44(local_a0._4_4_,0xe4);
    local_c8 = *(undefined4 *)(param_4 + 0x4a4);
    local_b0 = 0;
    local_c0 = 0;
    local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(param_4 + 0x494));
    local_d0[0] = 1;
    local_b8._0_4_ = uVar9;
    FUN_180214c88(param_4 + 0x20,param_2,0x37,local_c8,local_d0,0x48);
    local_a8 = 0x94;
    local_a0 = 0;
    local_c8 = *(undefined4 *)(param_4 + 0x4a4);
    local_b8._0_4_ = *(undefined4 *)(param_4 + 0x494);
    local_b0._0_4_ = 0xe4;
    local_c0 = 0;
    local_d0[0] = 1;
    FUN_180214c88(param_4 + 0x20,param_2,0x33,local_c8,local_d0,0x38);
    local_c8 = *(undefined4 *)(param_4 + 0x4a4);
    local_a8 = 0x90;
    local_a0 = 0;
    local_b0 = CONCAT44(local_b0._4_4_,0xe4);
    local_c0 = 0;
    local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_4 + 0x494));
    local_d0[0] = 1;
    FUN_180214c88(param_4 + 0x20,param_2,0x34,local_c8,local_d0,0x38);
    local_c8 = *(undefined4 *)(param_4 + 0x4a4);
    local_c0 = 0;
    local_b8 = 0;
    local_d0[0] = 1;
    FUN_180214c88(param_4 + 0x20,param_2,0x1c,local_c8,local_d0,0x20);
    FUN_180213800(param_4 + 0x20,uVar9);
    uVar10 = FUN_180213800(param_4 + 0x20,uVar8);
  }
  if (1 < *(uint *)(param_4 + 0x538)) {
    uVar8 = FUN_180213760(param_4 + 0x20,3,1);
    *(undefined4 *)(param_4 + 0x4ac) = uVar8;
    if (bVar7) {
      local_90._0_4_ = 0xfffffffa;
      local_a8 = CONCAT44(local_a8._4_4_,6);
      local_c8 = *(undefined4 *)(param_4 + 0x4a4);
      local_88 = 0;
      local_98._0_4_ = 0xe4;
      local_b0 = CONCAT44(local_b0._4_4_,0xe4);
      local_c0 = 0;
      local_d0[0] = 1;
      local_b8._0_4_ = *(undefined4 *)(param_4 + 0x498);
      local_a0._0_4_ = *(undefined4 *)(param_4 + 0x498);
      FUN_180214c88(param_4 + 0x20,param_2,0x23,uVar8,local_d0,0x50);
      local_c8 = *(undefined4 *)(param_4 + 0x4ac);
      local_b8 = CONCAT44(local_b8._4_4_,0x102500);
      local_c0 = CONCAT44(local_c0._4_4_,0x100);
      local_b0 = 0;
      local_a8 = 0;
      local_d0[0] = 1;
      FUN_180214c88(param_4 + 0x20,param_2,0x1e,local_c8,local_d0,0x30);
      local_90 = CONCAT44(local_90._4_4_,0xffffffff);
      local_88 = 0;
      local_98 = CONCAT44(local_98._4_4_,0xe4);
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_4 + 0x4ac));
      local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(param_4 + 0x498));
      local_a8 = CONCAT44(local_a8._4_4_,0x100);
      local_c8 = 0x40400900;
      local_d0[0] = 2;
      local_c0 = 0;
      local_b8 = 0;
      FUN_180214c88(param_4 + 0x20,param_2,0x27,*(undefined4 *)(param_4 + 0x4ac),local_d0,0x50);
      local_c0 = 0;
      local_c8 = 1;
      local_d0[0] = *(uint *)(param_4 + 0x4ac) | 0x10000000;
      FUN_180214c88(param_4 + 0x20,param_2,0x4001f,0xffffffff,local_d0,0x18);
    }
    else {
      local_c0 = 0;
      local_b8 = 0;
      local_c8 = 0x102500;
      local_d0[0] = 1;
      FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar8,local_d0,0x20);
    }
    local_88 = 0;
    local_90 = CONCAT44(local_90._4_4_,0xffffffff);
    local_98 = CONCAT44(local_98._4_4_,0xe4);
    local_b8 = 0;
    local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_4 + 0x4ac));
    local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(param_4 + 0x498));
    local_a8 = CONCAT44(local_a8._4_4_,0x100);
    local_c0 = CONCAT44(local_c0._4_4_,0x1e4);
    local_c8 = 0x40400900;
    local_d0[0] = 7;
    uVar10 = FUN_180214c88(param_4 + 0x20,param_2,0x36,*(undefined4 *)(param_4 + 0x4ac),local_d0,
                           0x50);
  }
  uVar13 = (uint)*(undefined8 *)(param_4 + 0x520);
  if ((((uVar13 >> 9 & 1) == 0) || (*puVar3 == 0)) || (*puVar1 == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  *(bool *)(param_4 + 0x53e) = bVar6;
  if (((uVar13 >> 10 & 1) == 0) || (*(int *)(param_4 + 0x4c8) == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  *(undefined1 *)(param_4 + 0x53f) = uVar11;
  if (bVar6) {
    *(uint *)(param_4 + 0x4e0) = *puVar3;
    *(undefined4 *)(param_4 + 0x4e4) = *(undefined4 *)(param_4 + 0x4c0);
    *(uint *)(param_4 + 0x4e8) = *puVar2;
    uVar8 = FUN_180213760(param_4 + 0x20,3,1);
    *(undefined4 *)(param_4 + 0x4ec) = uVar8;
    uVar8 = FUN_180213760(param_4 + 0x20,extraout_x1_00,1);
    *(undefined4 *)(param_4 + 0x4f0) = uVar8;
    uVar8 = FUN_180213760(param_4 + 0x20,extraout_x1_01,1);
    *(undefined4 *)(param_4 + 0x4f4) = uVar8;
    uVar8 = FUN_180213760(param_4 + 0x20,extraout_x1_02,1);
    *(undefined4 *)(param_4 + 0x4f8) = uVar8;
    uVar8 = FUN_180213760(param_4 + 0x20,extraout_x1_03,1);
    *(undefined4 *)(param_4 + 0x4fc) = uVar8;
    uVar8 = FUN_180213760(param_4 + 0x20,extraout_x1_04,1);
    *(undefined4 *)(param_4 + 0x500) = uVar8;
    uVar10 = FUN_180213760(param_4 + 0x20,extraout_x1_05,1);
    *(int *)(param_4 + 0x504) = (int)uVar10;
  }
  if (*(char *)(param_4 + 0x53f) != '\0') {
    *(undefined4 *)(param_4 + 0x508) = *(undefined4 *)(param_4 + 0x4c8);
    *(uint *)(param_4 + 0x50c) = *puVar4;
    *(undefined4 *)(param_4 + 0x510) = *(undefined4 *)(param_4 + 0x4d0);
    uVar8 = FUN_180213760(param_4 + 0x20,3,1);
    *(undefined4 *)(param_4 + 0x514) = uVar8;
    uVar8 = FUN_180213760(param_4 + 0x20,extraout_x1_06,1);
    *(undefined4 *)(param_4 + 0x518) = uVar8;
    uVar10 = FUN_180213760(param_4 + 0x20,extraout_x1_07,1);
    *(int *)(param_4 + 0x51c) = (int)uVar10;
  }
  uVar10 = FUN_18017c180(uVar10,param_2,param_4);
  if (*(char *)(param_4 + 0x53f) != '\0') {
    uVar10 = FUN_18017c7f8(uVar10,param_2,param_4,*(undefined4 *)(param_4 + 0x514),*puVar3,*puVar2,
                           *(undefined4 *)(param_4 + 0x4c8),*(undefined4 *)(param_4 + 0x4d0));
    uVar10 = FUN_18017c7f8(uVar10,param_2,param_4,*(undefined4 *)(param_4 + 0x518),
                           *(undefined4 *)(param_4 + 0x4c0),*puVar2,*puVar4,
                           *(undefined4 *)(param_4 + 0x4d0));
    FUN_18017c7f8(uVar10,param_2,param_4,*(undefined4 *)(param_4 + 0x51c),
                  *(undefined4 *)(param_4 + 0x4c0),*puVar3,*puVar4,*(undefined4 *)(param_4 + 0x4c8))
    ;
  }
  FUN_18017caf8(param_1,param_2,param_3,param_4);
  if (*(char *)(param_4 + 0x53e) != '\0') {
    FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4ec));
    FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4f0));
    FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4f4));
    FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4f8));
    FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4fc));
    FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x500));
    FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x504));
  }
  *(undefined4 *)(param_4 + 0x500) = 0;
  *(undefined4 *)(param_4 + 0x504) = 0;
  *(undefined4 *)(param_4 + 0x4f8) = 0;
  *(undefined4 *)(param_4 + 0x4fc) = 0;
  *(undefined4 *)(param_4 + 0x4f0) = 0;
  *(undefined4 *)(param_4 + 0x4f4) = 0;
  *(undefined4 *)(param_4 + 0x4e8) = 0;
  *(undefined4 *)(param_4 + 0x4ec) = 0;
  *(undefined4 *)(param_4 + 0x4e0) = 0;
  *(undefined4 *)(param_4 + 0x4e4) = 0;
  if (*(char *)(param_4 + 0x53f) != '\0') {
    FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x514));
    FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x518));
    FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x51c));
  }
  *(undefined4 *)(param_4 + 0x518) = 0;
  *(undefined4 *)(param_4 + 0x51c) = 0;
  *(undefined4 *)(param_4 + 0x510) = 0;
  *(undefined4 *)(param_4 + 0x514) = 0;
  *(undefined4 *)(param_4 + 0x508) = 0;
  *(undefined4 *)(param_4 + 0x50c) = 0;
  FUN_180213800(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4ac));
  *(undefined4 *)(param_4 + 0x4ac) = 0;
  if ((*(uint *)(param_4 + 0x4a4) & 0x3f00) == 0) {
    FUN_180213800(param_4 + 0x20);
    *(undefined4 *)(param_4 + 0x4a4) = 0;
  }
  if ((bVar7) && (1 < *(uint *)(param_4 + 0x538))) {
    FUN_180214c88(param_4 + 0x20,param_2,0x15,0,local_d0,0);
  }
  return;
}

