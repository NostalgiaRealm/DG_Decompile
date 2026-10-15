/*
 * FUN_1009f8f8 at 1009f8f8
 * undefined FUN_1009f8f8(void)
 * Address ranges: 1009f8f8-1009fa27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009f8f8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint extraout_w15;
  undefined4 local_70;
  int iStack_6c;
  undefined4 local_68;
  uint uStack_64;
  int *local_60;
  undefined4 *puStack_5c;
  uint local_58;
  uint uStack_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  
  piVar1 = (int *)(param_2 + 0x474);
  iVar2 = *piVar1;
  if ((iVar2 == -1) || (iVar2 == 0)) {
    local_58 = 0;
    local_60 = (int *)(param_2 + 0x310);
    puStack_5c = (undefined4 *)(param_2 + 0x3c0);
    uStack_64 = 0x1b;
    if (*local_60 != *(int *)(param_2 + 0x224)) {
      uStack_64 = 0x36;
    }
    uStack_64 = uStack_64 | *(uint *)(param_2 + 0x470);
    local_70 = param_1;
    iStack_6c = param_2;
    local_68 = param_3;
    FUN_100a25f0(&local_70,0x1c);
  }
  else {
    local_30 = *(undefined4 *)(param_2 + 0x2b0);
    uStack_18 = 0xffffffffffffffff;
    local_20 = 0xffffffffffffffff;
    local_2c = (undefined1)((uint)iVar2 >> 0x10);
    uVar3 = FUN_10123210(0xe4,*(undefined1 *)(param_2 + 0x314));
    local_58 = param_2 + 0x3c0;
    uStack_54 = uVar3 & 0xff | 0x100;
    uStack_64 = *(uint *)(param_2 + 0x470) | 0x37;
    puStack_5c = &local_30;
    local_70 = param_1;
    iStack_6c = param_2;
    local_68 = param_3;
    if ((extraout_w15 & 0xf000000) == 0xd000000) {
      uStack_4c = 0;
      local_50 = local_58;
      local_58 = uStack_54;
      FUN_100a25f0(&local_70,0x28);
    }
    else {
      uStack_4c = 0;
      FUN_100a25f0(&local_70,0x28);
    }
  }
  *piVar1 = -1;
  return;
}

