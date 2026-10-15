/*
 * FUN_180187030 at 180187030
 * undefined FUN_180187030(void)
 * Address ranges: 180187030-18018769b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180187030(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_a0 [2];
  uint local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  uVar1 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44);
  if ((uVar1 >> 0x1a & 1) == 0) {
    if ((*(uint *)(param_3 + 0x1ac) >> 1 & 1) == 0) {
      if (*(char *)(param_3 + 0x1c8) == '\0') {
        local_78 = CONCAT44(local_78._4_4_,0x12345678);
        local_80 = CONCAT44(local_80._4_4_,0x3f800000);
        local_88 = CONCAT44(local_88._4_4_,0xe4);
        local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(param_3 + 0xb8));
        local_98 = CONCAT31(local_98._1_3_,8);
        local_a0[0] = 3;
        FUN_180184ea8(param_1,param_3,param_2,0x36,local_a0,0x30);
      }
    }
    else {
      uVar4 = FUN_18018a6c8(param_1,param_2,param_3);
      local_80._0_4_ = 0x12345678;
      local_98._0_1_ = 1;
      local_a0[0] = 4;
      local_88._0_4_ = 0xff;
      local_90._0_4_ = uVar4;
      FUN_180184ea8(param_1,param_3,param_2,0x36,local_a0,0x28);
      uVar4 = FUN_18018a6c8(param_1,param_2,param_3);
      local_88 = CONCAT44(local_88._4_4_,0xff);
      local_80 = CONCAT44(local_80._4_4_,0x12345678);
      local_98 = CONCAT31(local_98._1_3_,8);
      local_90 = CONCAT44(local_90._4_4_,uVar4);
      local_a0[0] = 3;
      FUN_180184ea8(param_1,param_3,param_2,0x36,local_a0,0x28);
      *(byte *)(param_3 + 0x1c7) = *(byte *)(param_3 + 0x1c7) | 1;
    }
    goto LAB_180187674;
  }
  uVar5 = *(uint *)(param_3 + 0x164);
  uVar2 = 0;
  uVar4 = 0xaa;
  uVar6 = 0x8000000;
  if ((uVar1 >> 0x18 & 3) - 1 < 3) {
    uVar2 = param_4;
    if (param_4 == 0) {
      uVar2 = FUN_180213760(param_3 + 0x20,1,1);
    }
    uVar1 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44);
    if ((uVar1 >> 0x1b & 1) == 0) {
      if ((uVar1 >> 0x1c & 1) != 0) {
        local_98 = *(undefined4 *)(param_3 + 0x164);
        local_78 = 0;
        local_80 = CONCAT44(local_80._4_4_,0xa4);
        local_90 = CONCAT44(local_90._4_4_,0xa4);
        local_88 = CONCAT44(local_88._4_4_,local_98);
        local_a0[0] = 1;
        uVar4 = 0;
        uVar6 = 0;
        FUN_180214c88(param_3 + 0x20,param_2,0x10,uVar2,local_a0,0x30);
        local_90 = 0;
        local_88 = 0;
        local_a0[0] = 1;
        local_98 = uVar2;
        FUN_180214c88(param_3 + 0x20,param_2,0x4b,uVar2,local_a0,0x20);
        uVar5 = uVar2;
      }
    }
    else {
      uVar4 = 0;
      uVar6 = 0;
      uVar5 = param_4;
    }
  }
  uVar1 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44);
  if ((uVar1 >> 0x18 & 3) - 1 < 2) {
    local_70 = 0;
    local_80 = 0;
    local_78 = 0x68;
    local_98 = uVar6 | uVar5;
    local_90 = CONCAT44(local_90._4_4_,uVar4);
    local_a0[0] = 1;
    local_88._0_4_ = *(undefined4 *)(param_3 + 0xdc);
    FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar2,local_a0,0x38);
    if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x3000000) == 0x2000000) {
      local_80 = 0;
      local_78 = 0;
      local_90 = 0;
      local_a0[0] = 1;
      local_98 = uVar2;
      local_88._0_4_ = uVar2;
      FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar2,local_a0,0x30);
    }
    local_70 = 0;
    local_80 = CONCAT44(local_80._4_4_,0xe4);
    local_78 = CONCAT44(local_78._4_4_,0x3fb8aa3b);
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_3 + 0xb8));
    local_90 = 0;
    local_a0[0] = 1;
    local_98 = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar2,local_a0,0x38);
    local_90 = 0;
    local_88 = 0;
    local_a0[0] = 1;
    local_98 = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x19,uVar2,local_a0,0x20);
    if (*(int *)(param_3 + 0x20) == 0x10040) {
      local_98 = *(uint *)(param_3 + 0xb8);
      local_78 = 0;
      local_70 = 0;
      local_80 = CONCAT44(local_80._4_4_,uVar2);
      local_88 = CONCAT44(local_88._4_4_,0x3f800000);
      local_90 = CONCAT44(local_90._4_4_,0xe4);
      local_a0[0] = 1;
      FUN_180214c88(param_3 + 0x20,param_2,0xe,uVar2,local_a0,0x38);
    }
    else {
      local_90 = 0;
      local_88 = 0;
      local_a0[0] = 1;
      local_98 = uVar2;
      FUN_180214c88(param_3 + 0x20,param_2,0x81,uVar2,local_a0,0x20);
    }
LAB_18018737c:
    uVar4 = 0;
  }
  else {
    if (((uVar1 & 0x3000000) != 0) && ((uVar1 & 0x3000000) == 0x3000000)) {
      local_70 = 0;
      local_78 = CONCAT44(local_78._4_4_,uVar4);
      local_80 = CONCAT44(local_80._4_4_,uVar6 | uVar5) | 0x80000000;
      local_90 = 0;
      local_88 = 100;
      local_98 = *(undefined4 *)(param_3 + 0xdc);
      local_a0[0] = 1;
      FUN_180214c88(param_3 + 0x20,param_2,0,uVar2,local_a0,0x38);
      local_70 = 0;
      local_80 = 0;
      local_78 = 0x5c;
      local_90 = 0;
      local_a0[0] = 1;
      local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_3 + 0xdc));
      local_98 = uVar2;
      FUN_180214c88(param_3 + 0x20,param_2,0xe,uVar2,local_a0,0x38);
      goto LAB_18018737c;
    }
    if ((*(uint *)(param_3 + 0x1ac) >> 1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_18018a6c8(param_1,param_2,param_3);
    }
    uVar4 = 0xff;
  }
  if (uVar2 == 0) {
    local_78 = CONCAT44(local_78._4_4_,0x12345678);
    local_80 = CONCAT44(local_80._4_4_,0x3f800000);
    local_88 = CONCAT44(local_88._4_4_,0xe4);
    local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(param_3 + 0xb8));
    local_98 = CONCAT31(local_98._1_3_,8);
    local_a0[0] = 3;
    FUN_180184ea8(param_1,param_3,param_2,0x36,local_a0,0x30);
LAB_180187538:
    if (uVar2 != *(uint *)(param_3 + 0x1a8)) {
      FUN_180213800(param_3 + 0x20,uVar2);
    }
  }
  else {
    if (*(char *)(param_3 + 0x74) == '\0') {
      local_80._0_4_ = 0x12345678;
      local_98._0_1_ = 1;
      local_a0[0] = 4;
      local_88._0_4_ = uVar4;
      local_90._0_4_ = uVar2;
      FUN_180184ea8(param_1,param_3,param_2,0x2036,local_a0,0x28);
      local_88 = CONCAT44(local_88._4_4_,uVar4);
      local_80 = CONCAT44(local_80._4_4_,0x12345678);
      local_98 = CONCAT31(local_98._1_3_,8);
      local_a0[0] = 3;
      local_90 = CONCAT44(local_90._4_4_,uVar2);
      FUN_180184ea8(param_1,param_3,param_2,0x2036,local_a0,0x28);
    }
    else {
      uVar3 = FUN_180213760(param_3 + 0x20,1,1);
      local_88 = 0;
      local_a0[0] = 1;
      local_98 = uVar2;
      local_90._0_4_ = uVar4;
      FUN_180214c88(param_3 + 0x20,param_2,0x2036,uVar3,local_a0,0x20);
      local_80._0_4_ = 0x12345678;
      local_88 = 0;
      local_98._0_1_ = 1;
      local_a0[0] = 4;
      local_90._0_4_ = uVar3;
      FUN_180184ea8(param_1,param_3,param_2,0x36,local_a0,0x28);
      local_80 = CONCAT44(local_80._4_4_,0x12345678);
      local_98 = CONCAT31(local_98._1_3_,8);
      local_a0[0] = 3;
      local_90 = CONCAT44(local_90._4_4_,uVar3);
      local_88 = 0;
      FUN_180184ea8(param_1,param_3,param_2,0x36,local_a0,0x28);
      FUN_180213800(param_3 + 0x20,uVar3);
    }
    *(byte *)(param_3 + 0x1c7) = *(byte *)(param_3 + 0x1c7) | 1;
    if ((uVar2 & 0x3f00) == 0) goto LAB_180187538;
  }
  if (uVar5 != *(uint *)(param_3 + 0x164)) {
    FUN_180213800(param_3 + 0x20,uVar5);
  }
LAB_180187674:
  FUN_180213800(param_3 + 0x20,param_4);
  return;
}

