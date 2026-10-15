/*
 * FUN_10080658 at 10080658
 * undefined FUN_10080658(void)
 * Address ranges: 10080658-100808c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10080658(undefined8 param_1,int param_2,undefined4 param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong extraout_x1;
  uint uVar3;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 *local_58;
  undefined4 local_50 [4];
  
  if ((param_4 >> 0x38 & 1) != 0) {
    uVar2 = FUN_10121590(param_2,4,1);
    local_50[0] = uVar2;
    uStack_5c = FUN_10121590(param_2,extraout_x1 & 0xffffffff,0);
    uVar3 = 0;
    local_60 = uVar2;
    local_58 = (undefined4 *)(param_2 + 0x60);
    local_50[1] = uStack_5c;
    do {
      local_88 = 0;
      local_8c = (uVar3 + 1) * 0x10;
      local_90 = 0xe4;
      local_a0 = 1 << (ulonglong)(uVar3 & 3);
      uStack_9c = 0x410101;
      local_94 = *(undefined4 *)(param_2 + 0x60);
      local_98 = 0xe4;
      local_a4 = *(undefined4 *)((int)local_50 + (uVar3 & 0xfffffffc));
      local_a8 = 0x11;
      local_b0 = param_2;
      uStack_ac = param_3;
      FUN_10122a88(&local_b0,0x2c);
      puVar1 = local_58;
      uVar2 = uStack_5c;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 6);
    local_94 = *(undefined4 *)(param_2 + 0xa4);
    local_80 = 0;
    local_7c = 0;
    local_88 = 0;
    local_84 = 0;
    local_90 = 0xe4;
    local_8c = 0;
    local_98 = 0xe4;
    local_a0 = 0xf;
    uStack_9c = local_60;
    local_a8 = 0x31;
    local_a4 = local_60;
    local_b0 = param_2;
    uStack_ac = param_3;
    FUN_10122a88(&local_b0,0x38);
    local_94 = *(undefined4 *)(param_2 + 0xa4);
    local_7c = 0;
    local_84 = 0;
    local_80 = 0;
    local_8c = 0;
    local_88 = 0;
    local_90 = 0xe4;
    local_98 = 0x54;
    local_a8 = 0x31;
    local_a4 = uVar2;
    local_a0 = 3;
    uStack_9c = uVar2;
    local_b0 = param_2;
    uStack_ac = param_3;
    FUN_10122a88(&local_b0,0x38);
    local_90 = 0xe4;
    local_8c = 0x70;
    local_94 = *puVar1;
    local_88 = 0;
    local_a8 = 1;
    local_a4 = 0x410000;
    local_98 = 0xe4;
    local_a0 = 0xf;
    uStack_9c = 0x410000;
    local_b0 = param_2;
    uStack_ac = param_3;
    FUN_10122a88(&local_b0,0x2c);
    local_8c = 0x80;
    local_88 = 0;
    local_94 = *puVar1;
    local_a0 = 3;
    uStack_9c = 0x410001;
    local_a8 = 1;
    local_a4 = 0x410001;
    local_90 = 0xe4;
    local_98 = 0x54;
    local_b0 = param_2;
    uStack_ac = param_3;
    FUN_10122a88(&local_b0,0x2c);
    local_90 = 0xfe;
    local_8c = 0;
    local_a8 = 0x3c;
    local_a4 = 0x410000;
    local_98 = 0xe4;
    local_94 = 0x410000;
    local_a0 = 3;
    uStack_9c = 0x410000;
    local_b0 = param_2;
    uStack_ac = param_3;
    FUN_10122a88(&local_b0,0x28);
    local_90 = 0x54;
    local_8c = 0;
    local_98 = 0xe4;
    local_94 = 0x410001;
    local_a0 = 3;
    uStack_9c = 0x410000;
    local_a8 = 0x3c;
    local_a4 = 0x410000;
    local_b0 = param_2;
    uStack_ac = param_3;
    FUN_10122a88(&local_b0,0x28);
    local_90 = 0x55;
    local_8c = 0;
    local_98 = 0xe4;
    local_94 = 0x410000;
    local_a0 = 1;
    uStack_9c = 0x410000;
    local_a8 = 0x3c;
    local_a4 = 0x410000;
    local_b0 = param_2;
    uStack_ac = param_3;
    FUN_10122a88(&local_b0,0x28);
    local_98 = 0;
    local_a0 = 0x10410000;
    uStack_9c = 0;
    local_a4 = 0xffffffff;
    local_a8 = 0x4000d;
    local_b0 = param_2;
    uStack_ac = param_3;
    FUN_10122a88(&local_b0,0x1c);
  }
  return;
}

