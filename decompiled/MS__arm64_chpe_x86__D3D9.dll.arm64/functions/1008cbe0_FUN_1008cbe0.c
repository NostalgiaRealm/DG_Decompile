/*
 * FUN_1008cbe0 at 1008cbe0
 * undefined FUN_1008cbe0(void)
 * Address ranges: 1008cbe0-1008ccdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008cbe0(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int extraout_w15;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int iStack_84;
  uint local_80;
  int iStack_7c;
  undefined4 *local_78;
  undefined4 uStack_74;
  undefined4 local_60;
  undefined1 local_5c;
  int local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  int local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  if ((param_4 & 1) != 0) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 0x60);
    local_60 = *puVar1;
    local_5c = 0xe4;
    local_4c = 0xffffffffffffffff;
    local_44 = 0xffffffff;
    local_50 = param_3 * 0x20 + 0x2c0;
    local_40 = *puVar1;
    local_3c = 0xe4;
    local_2c = 0xffffffffffffffff;
    local_24 = 0xffffffff;
    local_30 = param_3 * 0x20 + 0x2d0;
    uVar2 = FUN_10123210(0xe4,*(undefined1 *)(param_2 + 4));
    uVar2 = uVar2 & 0xff | 0x100;
    local_78 = &local_60;
    uStack_74 = 0;
    local_88 = 1;
    uStack_8c = *(undefined4 *)(extraout_w15 + 8);
    iStack_84 = param_2;
    local_80 = uVar2;
    iStack_7c = param_2;
    FUN_10122c20(&local_90,0x20);
    local_90 = *(int *)(param_1 + 4);
    local_78 = &local_40;
    uStack_74 = 0;
    iStack_84 = local_90 + 0x330;
    local_88 = 0x3c;
    uStack_8c = *(undefined4 *)(extraout_w15 + 8);
    local_80 = uVar2;
    iStack_7c = param_2;
    FUN_10122c20(&local_90,0x20);
  }
  return;
}

