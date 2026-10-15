/*
 * FUN_1007f9b0 at 1007f9b0
 * undefined FUN_1007f9b0(void)
 * Address ranges: 1007f9b0-1007fc1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1007f9b0(undefined8 param_1,int param_2,undefined4 param_3,uint param_4,byte param_5,
                 uint param_6)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  int iVar9;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint uVar7;
  
  uVar5 = param_4 | 0x410100;
  bVar1 = (&DAT_1012c931)[(uint)param_5 * 2];
  uVar7 = (uint)bVar1;
  uVar6 = (uint)bVar1;
  uVar2 = (&DAT_1012c930)[(uint)param_5 * 2];
  bVar3 = *(byte *)(param_2 + param_4 + 0xda);
  uStack_7c = param_3;
  if (bVar3 < 5) {
    bVar4 = *(byte *)(param_5 + 0x1012c920);
    uVar8 = (uint)bVar4;
    local_6c = uVar5;
    switch(bVar3) {
    case 0:
      if (param_6 != 0) {
        local_68 = bVar4 | 0x100;
        local_70 = (uint)bVar1;
        local_64 = 0;
        local_80 = param_2 + 0x18;
        local_78 = 0x36;
        uStack_74 = param_6;
        FUN_100ef510(&local_80,0x20);
      }
      break;
    case 2:
      if (param_6 == 0) {
        uVar8 = (uint)bVar4;
        uVar6 = uVar7;
        param_6 = FUN_100ee580(param_2 + 0x18,uVar2,1);
      }
      local_68 = uVar8 | 0x100;
      local_64 = 0;
      local_78 = 0x56;
      local_80 = param_2 + 0x18;
      uStack_74 = param_6;
      local_70 = uVar6;
      FUN_100ef510(&local_80,0x20);
      break;
    case 3:
      if (param_6 == 0) {
        uVar8 = (uint)bVar4;
        uVar6 = uVar7;
        param_6 = FUN_100ee580(param_2 + 0x18,uVar2,1);
      }
      local_68 = uVar8 | 0x100;
      local_64 = 0;
      local_78 = 0x2b;
      local_80 = param_2 + 0x18;
      uStack_74 = param_6;
      local_70 = uVar6;
      FUN_100ef510(&local_80,0x20);
      break;
    case 4:
      iVar9 = param_2 + 0x18;
      if (param_6 == 0) {
        uVar6 = uVar7;
        uVar8 = (uint)bVar4;
        param_6 = FUN_100ee580(iVar9,uVar2,1);
      }
      if ((param_5 & 7) != 0) {
        local_70 = uVar6 & 7;
        local_68 = uVar8 | 0x100;
        local_64 = 0;
        local_78 = 0x2b;
        local_80 = iVar9;
        uStack_74 = param_6;
        FUN_100ef510(&local_80,0x20);
      }
      if ((param_5 >> 3 & 1) != 0) {
        local_68 = 0xe4;
        local_6c = *(undefined4 *)(param_2 + 0xa8);
        local_60 = 0;
        local_64 = 0x3f800000;
        local_70 = 8;
        local_78 = 0x36;
        local_80 = iVar9;
        uStack_7c = param_3;
        uStack_74 = param_6;
        FUN_100ef510(&local_80,0x24);
      }
    }
  }
  else if (bVar3 == 0xff) {
    iVar9 = param_2 + 0x18;
    if (param_6 == 0) {
      uVar6 = uVar7;
      param_6 = FUN_100ee580(iVar9,uVar2,1);
    }
    local_54 = 0;
    local_68 = 0x1e4;
    local_64 = 0;
    local_6c = *(undefined4 *)(param_2 + 0xac);
    local_60 = 0;
    uStack_5c = 0;
    local_58 = 0x3f800000;
    local_78 = 0x36;
    local_80 = iVar9;
    uStack_74 = param_6;
    local_70 = uVar6;
    FUN_100ef510(&local_80,0x30);
  }
  if (param_6 == 0) {
    param_6 = uVar5;
  }
  *(uint *)(param_2 + param_4 * 4 + 0xec) = param_6;
  return param_6 == uVar5;
}

