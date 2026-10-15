/*
 * FUN_10094c48 at 10094c48
 * undefined FUN_10094c48(void)
 * Address ranges: 10094c48-100955ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10094c48(undefined8 param_1,undefined4 param_2,int param_3,uint param_4,byte param_5,
                 uint param_6,byte param_7,char param_8,char param_9)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  char local_50;
  uint *local_4c;
  uint local_48;
  uint *local_44;
  
  uVar10 = (uint)param_5;
  local_48 = CONCAT31(local_48._1_3_,param_5);
  bVar1 = (&DAT_101623d1)[uVar10 * 2];
  uVar2 = (&DAT_101623d0)[uVar10 * 2];
  uVar9 = (uint)bVar1;
  local_50 = param_8;
  if (6 < param_7) {
    if (param_7 == 0xff) {
      puVar6 = (uint *)(param_3 + 0x18);
      if (param_6 == 0) {
        param_6 = FUN_10121590(puVar6,uVar2,1);
      }
      local_84 = 0;
      local_98 = 0x1e4;
      local_94 = 0;
      local_9c = *(undefined4 *)(param_3 + 0xac);
      local_90 = 0;
      local_8c = 0;
      local_88 = 0x3f800000;
      local_a8 = 0x36;
      local_b0 = puVar6;
      uStack_ac = param_2;
      uStack_a4 = param_6;
      local_a0 = uVar9;
      FUN_10122a88(&local_b0,0x30);
    }
    goto switchD_10094cd0_caseD_1;
  }
  bVar3 = *(byte *)(uVar10 + 0x101623c0);
  uVar4 = (uint)bVar3;
  uVar7 = (uint)bVar3;
  switch(param_7) {
  case 0:
    if (param_8 == '\0') {
      if ((param_9 != '\0') || (param_6 != 0)) {
        puVar6 = (uint *)(param_3 + 0x18);
        if (param_6 == 0) {
          uVar7 = uVar4;
          param_6 = FUN_10121590(puVar6,uVar2,1);
        }
        local_98 = uVar7 | 0x100;
        uStack_a4 = param_6;
        local_b0 = puVar6;
        if (param_9 == '\0') {
          local_94 = 0;
          local_a8 = 0x36;
          uStack_ac = param_2;
          local_a0 = uVar9;
          local_9c = param_4;
          FUN_10122a88(&local_b0,0x20);
        }
        else {
          local_90 = 0xe4;
          local_94 = *(undefined4 *)(param_3 + 0xac);
          local_7c = 0;
          local_84 = 0x7cf0bdc2;
          local_80 = 0x7cf0bdc2;
          local_8c = 0x7cf0bdc2;
          local_88 = 0x7cf0bdc2;
          local_a8 = 0x33;
          uStack_ac = param_2;
          local_a0 = uVar9;
          local_9c = param_4;
          FUN_10122a88(&local_b0,0x38);
        }
      }
    }
    else {
      puVar6 = (uint *)(param_3 + 0x18);
      if (param_6 == 0) {
        uVar7 = uVar4;
        param_6 = FUN_10121590(puVar6,uVar2,1);
      }
      local_98 = uVar7 | 0x100;
      local_a0 = (uint)bVar1;
      local_94 = 0;
      local_a8 = 0x42;
      local_b0 = puVar6;
      uStack_ac = param_2;
      uStack_a4 = param_6;
      local_9c = param_4;
      FUN_10122a88(&local_b0,0x20);
    }
    break;
  case 2:
    if (param_8 == '\0') {
      puVar6 = (uint *)(param_3 + 0x18);
      if (param_6 == 0) {
        uVar7 = uVar4;
        param_6 = FUN_10121590(puVar6,uVar2,1);
      }
      local_98 = uVar7 | 0x100;
      local_94 = 0;
      local_a8 = 0x56;
      local_b0 = puVar6;
      uStack_ac = param_2;
      uStack_a4 = param_6;
      local_a0 = uVar9;
      local_9c = param_4;
      FUN_10122a88(&local_b0,0x20);
    }
    else if (param_6 != 0) {
      local_98 = bVar3 | 0x100;
      local_94 = 0;
      local_b0 = (uint *)(param_3 + 0x18);
      local_a8 = 0x36;
      uStack_ac = param_2;
      uStack_a4 = param_6;
      local_a0 = uVar9;
      local_9c = param_4;
      FUN_10122a88(&local_b0,0x20);
    }
    break;
  case 3:
    if (param_8 == '\0') {
      puVar6 = (uint *)(param_3 + 0x18);
      if (param_6 == 0) {
        uVar7 = uVar4;
        param_6 = FUN_10121590(puVar6,uVar2,1);
      }
      local_98 = uVar7 | 0x100;
      local_94 = 0;
      local_a8 = 0x2b;
      local_b0 = puVar6;
      uStack_ac = param_2;
      uStack_a4 = param_6;
      local_a0 = uVar9;
      local_9c = param_4;
      FUN_10122a88(&local_b0,0x20);
    }
    else if (param_6 != 0) {
      local_98 = bVar3 | 0x100;
      local_94 = 0;
      local_b0 = (uint *)(param_3 + 0x18);
      local_a8 = 0x36;
      uStack_ac = param_2;
      uStack_a4 = param_6;
      local_a0 = uVar9;
      local_9c = param_4;
      FUN_10122a88(&local_b0,0x20);
    }
    break;
  case 4:
    if (param_8 == '\0') {
      puVar6 = (uint *)(param_3 + 0x18);
      if (param_6 == 0) {
        uVar7 = (uint)bVar3;
        param_6 = FUN_10121590(puVar6,uVar2,1);
      }
      if ((param_5 & 7) != 0) {
        local_98 = uVar7 | 0x100;
        local_94 = 0;
        local_a0 = uVar9 & 7;
        local_a8 = 0x2b;
        local_b0 = puVar6;
        uStack_ac = param_2;
        uStack_a4 = param_6;
        local_9c = param_4;
        FUN_10122a88(&local_b0,0x20);
      }
      if ((param_5 >> 3 & 1) != 0) {
        local_98 = 0xe4;
        local_9c = *(undefined4 *)(param_3 + 0xa8);
        local_90 = 0;
        local_94 = 0x3f800000;
        local_a0 = 8;
        local_a8 = 0x36;
        local_b0 = puVar6;
        uStack_ac = param_2;
        uStack_a4 = param_6;
        FUN_10122a88(&local_b0,0x24);
      }
    }
    else if ((param_5 >> 3 & 1) != 0) {
      puVar6 = (uint *)(param_3 + 0x18);
      if (param_6 == 0) {
        uVar7 = (uint)bVar3;
        param_6 = FUN_10121590(puVar6,uVar2,1);
      }
      if ((param_5 & 7) != 0) {
        local_98 = uVar7 | 0x100;
        local_94 = 0;
        local_a0 = uVar9 & 7;
        local_a8 = 0x36;
        local_b0 = puVar6;
        uStack_ac = param_2;
        uStack_a4 = param_6;
        local_9c = param_4;
        FUN_10122a88(&local_b0,0x20);
      }
      local_94 = 1;
      local_90 = 0;
      local_98 = 0xe4;
      local_9c = *(undefined4 *)(param_3 + 0xa8);
      local_a0 = 8;
      local_a8 = 0x36;
      local_b0 = puVar6;
      uStack_ac = param_2;
      uStack_a4 = param_6;
      FUN_10122a88(&local_b0,0x24);
    }
    break;
  case 5:
    puVar8 = (uint *)(param_3 + 0x18);
    if (param_6 == 0) {
      param_6 = FUN_10121590(puVar8,uVar2,1);
    }
    uVar4 = param_6;
    if ((param_5 & 7) != 0) {
      uVar10 = FUN_10122f60(*puVar8);
      if (uVar10 < 0x50) {
        if ((param_6 & 0x3f00) != 0) {
          uVar4 = FUN_10121590(puVar8,3,1);
        }
        if ((param_5 & 1) != 0) {
          local_98 = 0;
          local_94 = 0;
          local_a0 = 1;
          local_a8 = 0x36;
          local_b0 = puVar8;
          uStack_ac = param_2;
          uStack_a4 = uVar4;
          local_9c = param_4;
          FUN_10122a88(&local_b0,0x20);
        }
        local_4c = (uint *)(param_3 + 0xa8);
        if ((param_5 >> 1 & 1) != 0) {
          local_94 = *local_4c;
          local_88 = 0;
          local_90 = 0xe4;
          local_8c = 10;
          local_98 = 0;
          local_a0 = 2;
          local_a8 = 0x55;
          local_b0 = puVar8;
          uStack_ac = param_2;
          uStack_a4 = uVar4;
          local_9c = param_4;
          local_44 = local_4c;
          FUN_10122a88(&local_b0,0x2c);
          local_4c = local_44;
        }
        if ((param_5 >> 2 & 1) != 0) {
          local_88 = 0;
          local_90 = 0xe4;
          local_8c = 0x14;
          local_94 = *local_4c;
          local_98 = 0;
          local_a0 = 4;
          local_a8 = 0x55;
          local_b0 = puVar8;
          uStack_ac = param_2;
          uStack_a4 = uVar4;
          local_9c = param_4;
          FUN_10122a88(&local_b0,0x2c);
        }
        local_8c = 0x3ff;
        local_88 = 0;
        local_a0 = uVar9 & 7;
        uStack_a4 = uVar4;
        if (local_50 != '\0') {
          uStack_a4 = param_6;
        }
        local_94 = *local_4c;
        local_90 = 0xe4;
        local_98 = 0x1a4;
        local_a8 = 1;
        local_b0 = puVar8;
        uStack_ac = param_2;
        local_9c = uVar4;
        FUN_10122a88(&local_b0,0x2c);
      }
      else {
        if ((local_50 == '\0') && ((param_6 & 0x3f00) != 0)) {
          uVar4 = FUN_10121590(puVar8,3,1);
        }
        local_68 = 0;
        uStack_64 = 0;
        local_9c = *(uint *)(param_3 + 0xac);
        local_70 = 0;
        local_90 = 10;
        local_8c = 10;
        local_78 = 0x14;
        uStack_74 = 10;
        local_80 = 0x1e4;
        local_7c = 0;
        local_a0 = uVar9 & 7;
        local_98 = 0x1e4;
        local_94 = 0;
        local_a8 = 0x8a;
        local_88 = 10;
        local_b0 = puVar8;
        uStack_ac = param_2;
        uStack_a4 = uVar4;
        local_84 = local_9c;
        uStack_6c = param_4;
        FUN_10122a88(&local_b0,0x50);
      }
      if (local_50 == '\0') {
        local_98 = 0x1a4;
        local_94 = 0;
        local_a8 = 0x56;
        local_b0 = puVar8;
        uStack_ac = param_2;
        uStack_a4 = param_6;
        local_a0 = uVar9 & 7;
        local_9c = uVar4;
        FUN_10122a88(&local_b0,0x20);
      }
    }
    if (((byte)local_48 >> 3 & 1) != 0) {
      if (local_50 == '\0') {
        local_94 = 0x3f800000;
      }
      else {
        local_94 = 1;
      }
      local_90 = 0;
      local_9c = *(uint *)(param_3 + 0xa8);
      local_98 = 0xe4;
      local_a0 = 8;
      local_a8 = 0x36;
      local_b0 = puVar8;
      uStack_ac = param_2;
      uStack_a4 = param_6;
      FUN_10122a88(&local_b0,0x24);
    }
    if (uVar4 == param_6) break;
    goto LAB_10095240;
  case 6:
    puVar6 = (uint *)(param_3 + 0x18);
    if (param_6 == 0) {
      param_6 = FUN_10121590(puVar6,uVar2,1);
    }
    uVar7 = uVar10 & 7;
    uVar4 = param_6;
    if (((param_5 & 7) != 0) && ((param_6 & 0x3f00) != 0)) {
      uVar4 = FUN_10121590(puVar6,3,1);
    }
    uVar5 = FUN_10122f60(*puVar6);
    if (uVar5 < 0x50) {
      local_4c = (uint *)(param_3 + 0xa8);
      if ((param_5 & 1) != 0) {
        local_88 = 0;
        local_90 = 0xe4;
        local_8c = 0x16;
        local_94 = *local_4c;
        local_98 = 0;
        local_a0 = 1;
        local_a8 = 0x29;
        local_b0 = puVar6;
        uStack_ac = param_2;
        uStack_a4 = uVar4;
        local_9c = param_4;
        FUN_10122a88(&local_b0,0x2c);
        uVar10 = local_48 & 0xff;
      }
      local_48 = uVar10;
      local_44 = (uint *)(param_3 + 0x18);
      puVar8 = puVar6;
      if ((param_5 >> 1 & 1) != 0) {
        local_88 = 0;
        local_90 = 0xe4;
        local_8c = 0xc;
        local_94 = *local_4c;
        local_98 = 0;
        local_a0 = 2;
        local_a8 = 0x29;
        local_b0 = puVar6;
        uStack_ac = param_2;
        uStack_a4 = uVar4;
        local_9c = param_4;
        FUN_10122a88(&local_b0,0x2c);
        puVar8 = local_44;
      }
      local_44 = puVar8;
      puVar8 = local_44;
      uVar10 = local_48;
      if ((local_48 >> 2 & 1) != 0) {
        local_88 = 0;
        local_90 = 0xe4;
        local_8c = 2;
        local_94 = *local_4c;
        local_98 = 0;
        local_a0 = 4;
        local_a8 = 0x29;
        local_b0 = puVar6;
        uStack_ac = param_2;
        uStack_a4 = uVar4;
        local_9c = param_4;
        FUN_10122a88(&local_b0,0x2c);
        puVar8 = local_44;
        uVar10 = local_48;
      }
    }
    else {
      if (uVar7 != 0) {
        local_7c = 0;
        local_84 = 2;
        local_80 = 0;
        local_88 = 0xc;
        local_8c = 0x16;
        local_90 = 0x1e4;
        local_94 = *(uint *)(param_3 + 0xac);
        local_a0 = bVar1 & 7;
        local_98 = 0;
        local_a8 = 0x29;
        local_b0 = puVar6;
        uStack_ac = param_2;
        uStack_a4 = uVar4;
        local_9c = param_4;
        FUN_10122a88(&local_b0,0x38);
        uVar10 = local_48 & 0xff;
      }
      local_4c = (uint *)(param_3 + 0xa8);
      puVar8 = puVar6;
    }
    if ((uVar10 & 7) != 0) {
      local_8c = 0x16;
      local_88 = 0;
      uVar9 = uVar9 & 7;
      local_94 = *local_4c;
      local_90 = 0xe4;
      local_98 = 0x1a4;
      local_a8 = 0x2a;
      local_b0 = puVar8;
      uStack_ac = param_2;
      uStack_a4 = uVar4;
      local_a0 = uVar9;
      local_9c = uVar4;
      FUN_10122a88(&local_b0,0x2c);
      local_98 = 0x1a4;
      local_94 = 0;
      local_a8 = 0x2b;
      local_b0 = puVar8;
      uStack_ac = param_2;
      uStack_a4 = uVar4;
      local_a0 = uVar9;
      local_9c = uVar4;
      FUN_10122a88(&local_b0,0x20);
      local_88 = 0;
      local_94 = *local_4c;
      local_8c = 0x3b004020;
      uStack_a4 = uVar4;
      if (local_50 == '\0') {
        uStack_a4 = param_6;
      }
      local_90 = 0xe4;
      local_98 = 0x1a4;
      local_a8 = 0x38;
      local_b0 = puVar8;
      uStack_ac = param_2;
      local_a0 = uVar9;
      local_9c = uVar4;
      FUN_10122a88(&local_b0,0x2c);
      if (local_50 != '\0') {
        local_98 = 0x1a4;
        local_94 = 0;
        local_a8 = 0x1b;
        local_b0 = puVar8;
        uStack_ac = param_2;
        uStack_a4 = param_6;
        local_a0 = uVar9;
        local_9c = uVar4;
        FUN_10122a88(&local_b0,0x20);
      }
    }
    if ((uVar10 >> 3 & 1) != 0) {
      if (local_50 == '\0') {
        local_94 = 0x3f800000;
      }
      else {
        local_94 = 1;
      }
      local_90 = 0;
      local_9c = *local_4c;
      local_98 = 0xe4;
      local_a0 = 8;
      local_a8 = 0x36;
      local_b0 = puVar8;
      uStack_ac = param_2;
      uStack_a4 = param_6;
      FUN_10122a88(&local_b0,0x24);
      puVar8 = (uint *)(param_3 + 0x18);
    }
    if (uVar4 == param_6) break;
LAB_10095240:
    FUN_10121648(puVar8,uVar4);
  }
switchD_10094cd0_caseD_1:
  if (param_6 == 0) {
    param_6 = param_4;
  }
  return param_6;
}

