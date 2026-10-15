/*
 * FUN_18016db68 at 18016db68
 * undefined FUN_18016db68(void)
 * Address ranges: 18016db68-18016dec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016db68(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_a0 [2];
  uint local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined8 local_70;
  uint local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((param_5 >> 0x39 & 1) != 0) {
    uVar2 = (uint)(param_5 >> 0x3a) & 3;
    uVar1 = FUN_180213760(param_2,4,0);
    if (uVar2 == 0) {
      local_90 = 0;
      uStack_8c = 0;
      local_88._0_4_ = 0;
      local_88._4_4_ = 0;
      local_98 = 0x410104;
      local_a0[0] = 8;
      FUN_180214c88(param_2,param_3,0x2036,uVar1,local_a0,0x20);
    }
    else {
      local_60 = 0;
      local_78 = CONCAT44(local_78._4_4_,0xaa);
      local_88._0_4_ = 0xc;
      local_98 = *(undefined4 *)(param_2 + 0x68);
      local_68 = 0xff;
      local_70 = CONCAT44(local_70._4_4_,0x410100);
      local_80 = 0x410100;
      local_90 = 0xff;
      local_a0[0] = 8;
      FUN_180214c88(param_2,param_3,0x37,uVar1,local_a0,0x48);
      if (uVar2 - 1 < 2) {
        local_70 = 0;
        local_78 = CONCAT44(local_78._4_4_,0x90);
        local_88._0_4_ = *(undefined4 *)(param_2 + 0x68);
        local_80 = 0;
        local_90 = 0xff;
        local_a0[0] = 8;
        local_98 = uVar1;
        FUN_180214c88(param_2,param_3,0x38,uVar1,local_a0,0x38);
        if (uVar2 == 2) {
          local_78 = 0;
          local_80 = 0xff;
          local_90 = 0xff;
          local_a0[0] = 8;
          local_98 = uVar1;
          local_88._0_4_ = uVar1;
          FUN_180214c88(param_2,param_3,0x38,uVar1,local_a0,0x30);
        }
        local_58 = 0;
        local_80 = 0xe4;
        local_60._0_4_ = 0x3fb8aa3b;
        local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_2 + 0xac));
        local_68 = 0x3fb8aa3b;
        local_70._0_4_ = 0x3fb8aa3b;
        local_78._0_4_ = 0x3fb8aa3b;
        local_90 = 0xff;
        local_a0[0] = 8;
        local_98 = uVar1;
        FUN_180214c88(param_2,param_3,0x38,uVar1,local_a0,0x50);
        local_88 = 0;
        local_90 = 0xff;
        local_a0[0] = 8;
        local_98 = uVar1;
        FUN_180214c88(param_2,param_3,0x19,uVar1,local_a0,0x20);
        local_98 = *(undefined4 *)(param_2 + 0xac);
        local_58 = 0;
        local_60 = CONCAT44(local_60._4_4_,0xff);
        local_70 = CONCAT44(local_70._4_4_,0x3f800000);
        local_78 = CONCAT44(local_78._4_4_,0x3f800000);
        local_80 = 0x3f800000;
        local_88._0_4_ = 0x3f800000;
        local_90 = 0xe4;
        local_a0[0] = 8;
        local_68 = uVar1;
        FUN_180214c88(param_2,param_3,0x200e,uVar1,local_a0,0x50);
      }
      else if (uVar2 == 3) {
        local_70 = 0;
        local_78._0_4_ = 0x94;
        local_80 = 0x55;
        local_88._0_4_ = *(undefined4 *)(param_2 + 0x68);
        local_98 = uVar1 | 0x80000000;
        local_90 = 0xff;
        local_a0[0] = 8;
        FUN_180214c88(param_2,param_3,0,uVar1,local_a0,0x38);
        local_70 = 0;
        local_78 = CONCAT44(local_78._4_4_,0x98);
        local_80 = 0xaa;
        local_88._0_4_ = *(undefined4 *)(param_2 + 0x68);
        local_90 = 0xff;
        local_a0[0] = 8;
        local_98 = uVar1;
        FUN_180214c88(param_2,param_3,0x200e,uVar1,local_a0,0x38);
      }
    }
    local_70 = 0;
    local_78 = local_78 & 0xffffffff00000000;
    local_80 = 0xe4;
    local_90 = 0xe4;
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_2 + 0x68)) | 0x80000000;
    local_a0[0] = 7;
    local_98 = param_4;
    FUN_180214c88(param_2,param_3,0,uVar1,local_a0,0x38);
    local_60 = 0;
    local_68 = 0;
    local_70 = CONCAT44(local_70._4_4_,0xe4);
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0x68));
    local_a0[0] = 7;
    local_80 = 0xe4;
    local_88 = CONCAT44(local_88._4_4_,uVar1);
    _local_90 = CONCAT44(uStack_8c,0xff);
    local_98 = uVar1;
    FUN_180214c88(param_2,param_3,0x32,param_4,local_a0,0x48);
  }
  return;
}

