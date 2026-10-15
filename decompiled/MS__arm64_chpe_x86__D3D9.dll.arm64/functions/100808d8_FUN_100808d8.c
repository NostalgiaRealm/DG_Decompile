/*
 * FUN_100808d8 at 100808d8
 * undefined FUN_100808d8(void)
 * Address ranges: 100808d8-10080b87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100808d8(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar2 = (uint)((ulonglong)param_5 >> 0x34) & 7;
  if (uVar2 == 0) {
switchD_100809a0_caseD_0:
    local_64 = 0;
    local_70 = *(uint *)(param_2 + 0xa0) | 0x10000000;
    local_6c = 0;
    local_68 = 1;
    local_74 = 0xffffffff;
    local_78 = 0x4000d;
    local_80 = param_2;
    uStack_7c = param_3;
    FUN_10122a88(&local_80,0x20);
  }
  else {
    if (uVar2 == 7) {
      return;
    }
    uVar1 = FUN_10121590(param_2,4,0);
    local_64 = *(undefined4 *)(param_2 + 0xa0);
    local_60 = 0xe4;
    local_4c = 0;
    local_50 = 0x38d1b717;
    uStack_54 = 0xe4;
    local_78 = 0x32;
    local_5c = 0x437f0000;
    local_68 = 0xff;
    local_70 = 8;
    local_80 = param_2;
    uStack_7c = param_3;
    local_74 = uVar1;
    local_6c = param_4;
    local_58 = local_64;
    FUN_10122a88(&local_80,0x38);
    local_78 = 0x1c;
    local_68 = 0xff;
    local_64 = 0;
    local_70 = 8;
    local_80 = param_2;
    uStack_7c = param_3;
    local_74 = uVar1;
    local_6c = uVar1;
    FUN_10122a88(&local_80,0x20);
    switch(uVar2) {
    case 0:
      goto switchD_100809a0_caseD_0;
    case 1:
      local_70 = 8;
      local_5c = 0x88;
      local_58 = 0;
      local_60 = 0xaa;
      local_64 = *(undefined4 *)(param_2 + 0x60);
      local_68 = 0xff;
      local_78 = 0x50;
      local_80 = param_2;
      uStack_7c = param_3;
      local_74 = uVar1;
      local_6c = uVar1;
      FUN_10122a88(&local_80,0x2c);
      break;
    case 2:
      local_70 = 8;
      local_5c = 0x88;
      local_58 = 0;
      local_60 = 0xaa;
      local_64 = *(undefined4 *)(param_2 + 0x60);
      local_68 = 0xff;
      local_78 = 0x27;
      local_80 = param_2;
      uStack_7c = param_3;
      local_74 = uVar1;
      local_6c = uVar1;
      FUN_10122a88(&local_80,0x2c);
      break;
    case 3:
      local_5c = 0xff;
      local_58 = 0;
      local_64 = 0x88;
      local_68 = 0xaa;
      local_6c = *(undefined4 *)(param_2 + 0x60);
      local_70 = 8;
      local_78 = 0x4f;
      local_80 = param_2;
      uStack_7c = param_3;
      local_74 = uVar1;
      local_60 = uVar1;
      FUN_10122a88(&local_80,0x2c);
      break;
    case 4:
      local_5c = 0xff;
      local_58 = 0;
      local_64 = 0x88;
      local_68 = 0xaa;
      local_6c = *(undefined4 *)(param_2 + 0x60);
      local_70 = 8;
      local_78 = 0x50;
      local_80 = param_2;
      uStack_7c = param_3;
      local_74 = uVar1;
      local_60 = uVar1;
      FUN_10122a88(&local_80,0x2c);
      break;
    case 5:
      local_70 = 8;
      local_5c = 0x88;
      local_58 = 0;
      local_60 = 0xaa;
      local_64 = *(undefined4 *)(param_2 + 0x60);
      local_68 = 0xff;
      local_78 = 0x20;
      local_80 = param_2;
      uStack_7c = param_3;
      local_74 = uVar1;
      local_6c = uVar1;
      FUN_10122a88(&local_80,0x2c);
      break;
    case 6:
      local_70 = 8;
      local_5c = 0x88;
      local_58 = 0;
      local_60 = 0xaa;
      local_64 = *(undefined4 *)(param_2 + 0x60);
      local_68 = 0xff;
      local_78 = 0x4f;
      local_80 = param_2;
      uStack_7c = param_3;
      local_74 = uVar1;
      local_6c = uVar1;
      FUN_10122a88(&local_80,0x2c);
    }
    local_6c = 3;
    local_68 = 0;
    local_70 = uVar1 | 0x10000000;
    local_74 = 0xffffffff;
    local_78 = 0x4000d;
    local_80 = param_2;
    uStack_7c = param_3;
    FUN_10122a88(&local_80,0x1c);
  }
  return;
}

