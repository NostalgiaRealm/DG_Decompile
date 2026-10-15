/*
 * FUN_18016d538 at 18016d538
 * undefined FUN_18016d538(void)
 * Address ranges: 18016d538-18016d803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016d538(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 extraout_x1;
  ulonglong uVar4;
  int local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_48 [2];
  
  if ((param_4 >> 0x38 & 1) != 0) {
    uVar2 = FUN_180213760(param_2,4,1);
    local_48[0] = uVar2;
    uVar3 = FUN_180213760(param_2,extraout_x1,0);
    uVar4 = 0;
    local_48[1] = uVar3;
    do {
      local_90 = 0xe4;
      local_88 = (uVar4 & 0x3fffffff) * 0x10 + 0x10;
      local_a0 = CONCAT44(local_a0._4_4_,0xe4);
      local_80 = 0;
      local_b0[0] = 1 << (ulonglong)((uint)uVar4 & 3);
      local_98 = *(undefined4 *)(param_2 + 0x68);
      local_a8 = CONCAT44(local_a8._4_4_,0x410101);
      FUN_180214c88(param_2,param_3,0x11,
                    *(undefined4 *)((longlong)local_48 + (uVar4 & 0xfffffffffffffffc)),local_b0,0x38
                   );
      uVar1 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < 6);
    local_98 = *(undefined4 *)(param_2 + 0xac);
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_80 = local_80 & 0xffffffff00000000;
    local_88 = local_88 & 0xffffffff00000000;
    local_90 = 0xe4;
    local_a0._0_4_ = 0xe4;
    local_b0[0] = 0xf;
    local_a8._0_4_ = uVar2;
    FUN_180214c88(param_2,param_3,0x31,uVar2,local_b0,0x50);
    local_98 = *(undefined4 *)(param_2 + 0xac);
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_80 = local_80 & 0xffffffff00000000;
    local_88 = local_88 & 0xffffffff00000000;
    local_90 = 0xe4;
    local_a0._0_4_ = 0x54;
    local_b0[0] = 3;
    local_a8._0_4_ = uVar3;
    FUN_180214c88(param_2,param_3,0x31,uVar3,local_b0,0x50);
    local_88 = 0x70;
    local_80 = 0;
    local_98 = *(undefined4 *)(param_2 + 0x68);
    local_90 = 0xe4;
    local_a0._0_4_ = 0xe4;
    local_a8._0_4_ = 0x410000;
    local_b0[0] = 0xf;
    FUN_180214c88(param_2,param_3,1,0x410000,local_b0,0x38);
    local_90 = 0xe4;
    local_88 = 0x80;
    local_80 = 0;
    local_98 = *(undefined4 *)(param_2 + 0x68);
    local_a0._0_4_ = 0x54;
    local_a8._0_4_ = 0x410001;
    local_b0[0] = 3;
    FUN_180214c88(param_2,param_3,1,0x410001,local_b0,0x38);
    local_88 = 0;
    local_90 = 0xfe;
    local_98 = 0x410000;
    local_a0._0_4_ = 0xe4;
    local_a8._0_4_ = 0x410000;
    local_b0[0] = 3;
    FUN_180214c88(param_2,param_3,0x3c,0x410000,local_b0,0x30);
    local_88 = 0;
    local_90 = 0x54;
    local_98 = 0x410001;
    local_a0._0_4_ = 0xe4;
    local_a8._0_4_ = 0x410000;
    local_b0[0] = 3;
    FUN_180214c88(param_2,param_3,0x3c,0x410000,local_b0,0x30);
    local_88 = 0;
    local_90 = 0x55;
    local_b0[0] = 1;
    local_98 = 0x410000;
    local_a0 = CONCAT44(local_a0._4_4_,0xe4);
    local_a8 = CONCAT44(local_a8._4_4_,0x410000);
    FUN_180214c88(param_2,param_3,0x3c,0x410000,local_b0,0x30);
    local_a8 = 0;
    local_a0 = 0;
    local_b0[0] = 0x10410000;
    FUN_180214c88(param_2,param_3,0x4000d,0xffffffff,local_b0,0x18);
  }
  return;
}

