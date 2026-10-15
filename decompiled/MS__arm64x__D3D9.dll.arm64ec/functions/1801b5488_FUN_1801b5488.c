/*
 * FUN_1801b5488 at 1801b5488
 * undefined FUN_1801b5488(void)
 * Address ranges: 1801b5488-1801b576b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b5488(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5,uint param_6,int param_7)

{
  undefined4 uVar1;
  uint local_b0 [2];
  int local_a8;
  undefined8 local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_a8 = param_3;
  if (*(uint *)(param_2 + 0x10) < 0x50) {
    uVar1 = FUN_180213760(param_2 + 0x10,2,0);
    local_80 = 0;
    local_88._0_4_ = 0x18;
    local_98 = *(undefined4 *)(param_2 + 0x60);
    local_a0 = 0;
    local_90._0_4_ = 0xe4;
    local_b0[0] = 1;
    FUN_180214c88(param_2 + 0x10,param_1,0x29,uVar1,local_b0,0x38);
    local_80 = 0;
    local_88._0_4_ = 0x10;
    local_98 = *(undefined4 *)(param_2 + 0x60);
    local_90._0_4_ = 0xe4;
    local_a0._0_4_ = 0x55;
    local_b0[0] = 2;
    local_a8 = param_3;
    FUN_180214c88(param_2 + 0x10,param_1,0x29,uVar1,local_b0,0x38);
    local_80 = 0;
    local_88 = CONCAT44(local_88._4_4_,8);
    local_98 = *(undefined4 *)(param_2 + 0x60);
    local_90._0_4_ = 0xe4;
    local_a0._0_4_ = 0xaa;
    local_b0[0] = param_5 & 0xff;
    local_a8 = param_3;
    FUN_180214c88(param_2 + 0x10,param_1,0x29,param_4,local_b0,0x38);
    local_88 = 0;
    local_90 = CONCAT44(local_90._4_4_,0xff);
    local_b0[0] = param_5 & 0xff;
    local_a8 = param_4;
    local_98 = param_3;
    local_a0._0_4_ = param_6 & 0xff;
    FUN_180214c88(param_2 + 0x10,param_1,0x3c,param_4,local_b0,0x30);
    local_90 = 0;
    local_88 = 0;
    local_b0[0] = param_5 & 0xff;
    local_a8 = param_4;
    local_98 = uVar1;
    local_a0._0_4_ = param_6 & 0xff;
    FUN_180214c88(param_2 + 0x10,param_1,0x3c,param_4,local_b0,0x30);
    local_88 = 0;
    local_90 = CONCAT44(local_90._4_4_,0x55);
    local_a0 = CONCAT44(local_a0._4_4_,param_6) & 0xffffffff000000ff;
    local_b0[0] = param_5 & 0xff;
    local_a8 = param_4;
    local_98 = uVar1;
    FUN_180214c88(param_2 + 0x10,param_1,0x3c,param_4,local_b0,0x30);
  }
  else {
    if (param_7 == 0) {
      param_7 = FUN_180213760(param_2 + 0x10,4,0);
    }
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 8;
    local_80 = CONCAT44(local_80._4_4_,0x10);
    local_88 = CONCAT44(local_88._4_4_,0x18);
    local_98 = *(undefined4 *)(param_2 + 100);
    local_90._0_4_ = 0xe4;
    local_a0._0_4_ = 0xe4;
    local_b0[0] = 0xf;
    FUN_180214c88(param_2 + 0x10,param_1,0x29,param_7,local_b0,0x50);
    local_88 = 0;
    local_90._0_4_ = 0xfe;
    local_a0 = CONCAT44(local_a0._4_4_,0x54);
    local_b0[0] = 3;
    local_a8 = param_7;
    local_98 = param_7;
    FUN_180214c88(param_2 + 0x10,param_1,0x3c,param_7,local_b0,0x30);
    local_88 = 0;
    local_b0[0] = param_5 & 0xff;
    local_90 = CONCAT44(local_90._4_4_,0x55);
    local_a0 = 0;
    local_a8 = param_7;
    local_98 = param_7;
    FUN_180214c88(param_2 + 0x10,param_1,0x3c,param_4,local_b0,0x30);
  }
  return;
}

