/*
 * FUN_10080ba0 at 10080ba0
 * undefined FUN_10080ba0(void)
 * Address ranges: 10080ba0-10080e73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10080ba0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 ulonglong param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  uint uStack_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  
  if ((param_5 >> 0x39 & 1) != 0) {
    uVar3 = (uint)(param_5 >> 0x3a) & 3;
    uVar2 = FUN_10121590(param_2,4,0);
    puVar1 = (uint *)(param_2 + 0x60);
    local_90 = param_2;
    uStack_8c = param_3;
    uStack_84 = uVar2;
    if (uVar3 == 0) {
      local_74 = 0;
      local_7c = 0x410104;
      local_78 = 0;
      local_80 = 8;
      local_88 = 0x2036;
      FUN_10122a88(&local_90,0x20);
    }
    else {
      local_60 = 0;
      local_68 = 0x410100;
      local_64 = 0xff;
      local_70 = 0x410100;
      local_6c = 0xaa;
      local_78 = 0xff;
      local_74 = 0xc;
      local_7c = *puVar1;
      local_80 = 8;
      local_88 = 0x37;
      FUN_10122a88(&local_90,0x34);
      switch(uVar3) {
      case 1:
      case 2:
        local_68 = 0;
        local_70 = 0;
        local_6c = 0x90;
        local_74 = *puVar1;
        local_80 = 8;
        local_78 = 0xff;
        local_88 = 0x38;
        local_90 = param_2;
        uStack_8c = param_3;
        uStack_84 = uVar2;
        local_7c = uVar2;
        FUN_10122a88(&local_90,0x2c);
        if (uVar3 == 2) {
          local_70 = 0xff;
          local_6c = 0;
          local_88 = 0x38;
          local_78 = 0xff;
          local_80 = 8;
          local_90 = param_2;
          uStack_8c = param_3;
          uStack_84 = uVar2;
          local_7c = uVar2;
          local_74 = uVar2;
          FUN_10122a88(&local_90,0x28);
        }
        local_5c = 0;
        local_74 = *(undefined4 *)(param_2 + 0xa4);
        local_70 = 0xe4;
        local_64 = 0x3fb8aa3b;
        local_60 = 0x3fb8aa3b;
        local_6c = 0x3fb8aa3b;
        local_68 = 0x3fb8aa3b;
        local_78 = 0xff;
        local_88 = 0x38;
        local_80 = 8;
        local_90 = param_2;
        uStack_8c = param_3;
        uStack_84 = uVar2;
        local_7c = uVar2;
        FUN_10122a88(&local_90,0x38);
        local_88 = 0x19;
        local_78 = 0xff;
        local_74 = 0;
        local_80 = 8;
        local_90 = param_2;
        uStack_8c = param_3;
        uStack_84 = uVar2;
        local_7c = uVar2;
        FUN_10122a88(&local_90,0x20);
        local_7c = *(undefined4 *)(param_2 + 0xa4);
        local_5c = 0;
        local_60 = 0xff;
        local_78 = 0xe4;
        local_80 = 8;
        local_88 = 0x200e;
        local_6c = 0x3f800000;
        local_68 = 0x3f800000;
        local_74 = 0x3f800000;
        local_70 = 0x3f800000;
        local_90 = param_2;
        uStack_8c = param_3;
        uStack_84 = uVar2;
        local_64 = uVar2;
        FUN_10122a88(&local_90,0x38);
        break;
      case 3:
        local_88 = 0;
        local_6c = 0x94;
        local_68 = 0;
        local_70 = 0x55;
        local_74 = *puVar1;
        local_7c = uVar2 | 0x80000000;
        local_80 = 8;
        local_78 = 0xff;
        local_90 = param_2;
        uStack_8c = param_3;
        uStack_84 = uVar2;
        FUN_10122a88(&local_90,0x2c);
        local_6c = 0x98;
        local_68 = 0;
        local_70 = 0xaa;
        local_74 = *puVar1;
        local_80 = 8;
        local_78 = 0xff;
        local_88 = 0x200e;
        local_90 = param_2;
        uStack_8c = param_3;
        uStack_84 = uVar2;
        local_7c = uVar2;
        FUN_10122a88(&local_90,0x2c);
      }
    }
    local_68 = 0;
    local_70 = 0xe4;
    local_6c = 0;
    local_80 = 7;
    local_88 = 0;
    local_74 = *puVar1 | 0x80000000;
    local_78 = 0xe4;
    local_90 = param_2;
    uStack_8c = param_3;
    uStack_84 = uVar2;
    local_7c = param_4;
    FUN_10122a88(&local_90,0x2c);
    local_6c = *puVar1;
    local_60 = 0;
    local_68 = 0xe4;
    local_64 = 0;
    local_78 = 0xff;
    local_70 = 0xe4;
    local_88 = 0x32;
    local_80 = 7;
    local_90 = param_2;
    uStack_8c = param_3;
    uStack_84 = param_4;
    local_7c = uVar2;
    local_74 = uVar2;
    FUN_10122a88(&local_90,0x34);
  }
  return;
}

