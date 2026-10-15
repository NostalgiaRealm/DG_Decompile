/*
 * FUN_1004c5f8 at 1004c5f8
 * undefined FUN_1004c5f8(void)
 * Address ranges: 1004c5f8-1004cd83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c5f8(int param_1,int param_2,int *param_3,undefined4 param_4,char param_5,char param_6,
                 byte param_7)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  int *local_b4;
  undefined4 local_b0;
  int *local_ac;
  undefined4 local_a8;
  int *local_a4;
  uint local_a0;
  int *local_9c;
  uint local_98;
  undefined4 local_94;
  int local_90;
  undefined4 uStack_8c;
  char local_70;
  uint *local_6c;
  char local_68;
  int *local_64;
  uint *local_60;
  uint local_5c;
  int *local_58;
  int local_54;
  uint local_50;
  
  uVar7 = (uint)param_7;
  local_68 = param_6;
  local_54 = param_1;
  local_b4 = (int *)FUN_1006e7b0(param_3,(uVar7 + 1) * 2,1);
  param_3[0x18] = (int)local_b4;
  local_ac = (int *)(param_2 + 3U | 0x410100);
  local_a0 = 0xaa;
  local_9c = (int *)0x0;
  local_a8 = 0x1a4;
  local_b0 = 3;
  local_b8 = 0xe;
  local_c0 = param_3;
  uStack_bc = param_4;
  local_a4 = local_ac;
  FUN_1006f920(&local_c0,0x28);
  if (param_5 != '\0') {
    FUN_1004b258(param_2,param_3,param_4);
  }
  iVar1 = param_2 * 0x180;
  local_5c = iVar1 + local_54;
  local_60 = *(uint **)(local_5c + 0x144);
  bVar3 = *(int *)(local_5c + 0x13c) != *(int *)(local_5c + 0x140);
  local_70 = bVar3 && uVar7 != 0;
  if ((local_60 == (uint *)0x0) ||
     (((local_68 == '\0' && (!bVar3 || uVar7 == 0)) &&
      (*(float *)(local_5c + 0x120) == *(float *)(local_5c + 0x124) || param_7 == 0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((param_7 != 0) || (bVar3)) {
    piVar4 = (int *)FUN_1006e7b0(param_3,1,1);
  }
  else {
    piVar4 = (int *)0x0;
  }
  local_58 = param_3 + 0x1a;
  *local_58 = (int)piVar4;
  if (local_60 == (uint *)0x0) {
    if (param_7 == 0) goto LAB_1004cd34;
    local_a4 = (int *)(iVar1 + 300);
    local_a0 = 0;
    local_a8 = 0xe4;
    local_ac = (int *)param_3[0x10];
    local_b0 = 1;
    local_b8 = 0x36;
    local_c0 = param_3;
    uStack_bc = param_4;
    local_b4 = piVar4;
    FUN_1006f920(&local_c0,0x24);
LAB_1004cd1c:
    FUN_1004b400(local_54,param_2,param_3,param_4);
  }
  else {
    if (bVar3) {
      if (local_70 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_1006e7b0(param_3,1,1);
      }
      local_64 = param_3 + 0x17;
      piVar4 = param_3 + 0x19;
      *local_64 = iVar5;
      if (*param_3 == 0x40) {
        iVar5 = FUN_1006e7b0(param_3,1,1);
        local_6c = (uint *)(param_3 + 0x10);
        *piVar4 = iVar5;
        if (local_70 != '\0') {
          local_ac = (int *)*local_6c;
          local_a4 = (int *)(iVar1 + 0x11c);
          local_94 = 0;
          local_98 = iVar1 + 0x120;
          local_9c = (int *)0xe4;
          local_a8 = 0xe4;
          local_b4 = (int *)*local_64;
          local_b0 = 1;
          local_b8 = 0x1d;
          local_c0 = param_3;
          uStack_bc = param_4;
          local_a0 = (uint)local_ac;
          local_60 = local_6c;
          FUN_1006f920(&local_c0,0x30);
          local_6c = local_60;
        }
        local_ac = (int *)*local_6c;
        local_98 = iVar1 + 0x120;
        local_94 = 0;
        local_9c = (int *)0xe4;
        local_a4 = (int *)(param_2 * 0x180 + 0x11c);
        local_b4 = (int *)*piVar4;
        local_a8 = 0xe4;
        local_b0 = 1;
        local_b8 = 0x34;
        local_c0 = param_3;
        uStack_bc = param_4;
        local_a0 = (uint)local_ac;
        FUN_1006f920(&local_c0,0x30);
      }
      else {
        FUN_1004b120(param_2,param_3,param_4);
        local_6c = (uint *)(param_3 + 0x10);
        local_b4 = (int *)*piVar4;
        local_a4 = (int *)*local_6c;
        local_9c = (int *)(iVar1 + 0x11c);
        local_98 = 0;
        local_a0 = 0xe4;
        local_b0 = 1;
        local_a8 = 0;
        local_b8 = 0;
        local_c0 = param_3;
        uStack_bc = param_4;
        local_ac = local_b4;
        FUN_1006f920(&local_c0,0x2c);
        if (local_70 != '\0') {
          local_9c = (int *)(iVar1 + 0x120);
          local_98 = 0;
          local_a4 = (int *)*local_6c;
          local_a0 = 0xe4;
          local_ac = (int *)*piVar4;
          local_a8 = 0;
          local_b4 = (int *)*local_64;
          local_b0 = 1;
          local_b8 = 0x1d;
          local_c0 = param_3;
          uStack_bc = param_4;
          FUN_1006f920(&local_c0,0x2c);
        }
        local_9c = (int *)(iVar1 + 0x120);
        local_b4 = (int *)*piVar4;
        local_98 = 0;
        local_a0 = 0xe4;
        local_b0 = 1;
        local_a4 = (int *)*local_6c;
        local_a8 = 0;
        local_b8 = 0x34;
        local_c0 = param_3;
        uStack_bc = param_4;
        local_ac = local_b4;
        FUN_1006f920(&local_c0,0x2c);
      }
      local_9c = (int *)(param_2 * 0x180 + 0x124);
      local_b4 = (int *)*piVar4;
      local_98 = 0;
      local_a0 = 0xe4;
      local_a4 = (int *)*local_6c;
      local_b0 = 1;
      local_a8 = 0;
      local_b8 = 0x33;
      local_c0 = param_3;
      uStack_bc = param_4;
      local_ac = local_b4;
      FUN_1006f920(&local_c0,0x2c);
      if ((param_7 != 0) && (local_b4 = (int *)*local_64, local_b4 != (int *)0x0)) {
        local_90 = iVar1 + 0x140;
        uStack_8c = 0;
        local_b0 = 1;
        local_a4 = (int *)*local_6c;
        local_9c = (int *)(iVar1 + 0x13c);
        local_a0 = 0xe4;
        local_a8 = 0x100;
        local_b8 = 0x37;
        local_94 = 0xe4;
        local_c0 = param_3;
        uStack_bc = param_4;
        local_ac = local_b4;
        local_98 = (uint)local_a4;
        FUN_1006f920(&local_c0,0x38);
      }
      local_ac = (int *)*piVar4;
      local_a4 = (int *)0x0;
      local_a8 = 0;
      local_b4 = (int *)*local_58;
      local_b0 = 1;
      local_b8 = 0x1c;
      local_c0 = param_3;
      uStack_bc = param_4;
      FUN_1006f920(&local_c0,0x20);
      piVar6 = (int *)*piVar4;
      local_50 = *(uint *)(local_5c + 0x148) >> 1 & 1;
      uVar7 = *(uint *)(local_5c + 0x148) & 1;
      local_5c = CONCAT31(local_5c._1_3_,(char)uVar7);
      if (local_68 == '\0') {
        FUN_1006e870(param_3,piVar6);
        puVar2 = (uint *)(param_3 + 0x14);
      }
      else {
        local_a8 = 0;
        local_a4 = (int *)0x0;
        local_6c = (uint *)(param_3 + param_2 + 0x1b);
        *local_6c = (uint)piVar6;
        local_ac = (int *)*piVar4;
        local_b0 = 1;
        local_b8 = 0x1a;
        local_c0 = param_3;
        uStack_bc = param_4;
        local_b4 = piVar6;
        FUN_1006f920(&local_c0,0x20);
        if (uVar7 == 0) {
          puVar2 = (uint *)(param_3 + 0x14);
        }
        else {
          local_64 = (int *)FUN_1006e7b0(param_3,1,1);
          piVar6 = (int *)FUN_1006e7b0(param_3,1,1);
          local_60 = (uint *)(param_3 + 0x14);
          local_a4 = (int *)*local_60;
          local_98 = 0;
          local_a0 = 0;
          local_b8 = 0;
          local_b4 = local_64;
          local_9c = (int *)0x3f800000;
          local_a8 = 0;
          local_ac = (int *)(*local_6c | 0x80000000);
          local_b0 = 1;
          local_c0 = param_3;
          uStack_bc = param_4;
          FUN_1006f920(&local_c0,0x2c);
          local_98 = 0;
          local_a0 = 0;
          local_9c = (int *)0x1;
          local_b8 = 1;
          local_a4 = (int *)*local_60;
          local_a8 = 0;
          local_ac = (int *)*local_58;
          local_b0 = 1;
          local_c0 = param_3;
          uStack_bc = param_4;
          local_b4 = piVar6;
          FUN_1006f920(&local_c0,0x2c);
          local_94 = 0;
          local_a8 = 0;
          local_b4 = (int *)*local_6c;
          local_a4 = local_64;
          local_a0 = 0;
          local_98 = 0;
          local_b0 = 1;
          local_b8 = 0x37;
          local_c0 = param_3;
          uStack_bc = param_4;
          local_ac = piVar6;
          local_9c = local_b4;
          FUN_1006f920(&local_c0,0x30);
          FUN_1006e870(param_3,local_64);
          FUN_1006e870(param_3,piVar6);
          puVar2 = local_60;
        }
      }
      *piVar4 = 0;
      if (param_7 != 0) {
        uVar7 = local_50 & 0xfffffffc | local_50 & 1 | (local_5c & 1) << 1;
        if (uVar7 == 3) {
          local_a4 = (int *)*puVar2;
          local_98 = 0;
          local_b4 = (int *)param_3[0x1a];
          local_a0 = 0;
          local_9c = (int *)0x1;
          local_a8 = 0;
          local_b8 = 0x3c;
          local_b0 = 1;
          local_c0 = param_3;
          uStack_bc = param_4;
          local_ac = local_b4;
          FUN_1006f920(&local_c0,0x2c);
LAB_1004ccd8:
          if (uVar7 == 0) goto LAB_1004cd1c;
        }
        else {
          if (1 < uVar7 - 1) goto LAB_1004ccd8;
          local_98 = 0;
          local_b4 = (int *)param_3[0x1a];
          local_a0 = 0;
          local_9c = (int *)0x1;
          local_a4 = (int *)param_3[0x14];
          local_b0 = 1;
          local_a8 = 0;
          local_b8 = 0x1e;
          local_c0 = param_3;
          uStack_bc = param_4;
          local_ac = local_b4;
          FUN_1006f920(&local_c0,0x2c);
          if (uVar7 != 2) goto LAB_1004ccd8;
          local_98 = 0;
          local_b4 = (int *)param_3[0x1a];
          local_a0 = 0;
          local_9c = (int *)0xfffffffe;
          local_a4 = (int *)param_3[0x14];
          local_b0 = 1;
          local_a8 = 0;
          local_b8 = 1;
          local_c0 = param_3;
          uStack_bc = param_4;
          local_ac = local_b4;
          FUN_1006f920(&local_c0,0x2c);
        }
        local_98 = 0;
        local_b4 = (int *)param_3[0x1a];
        local_a4 = (int *)param_3[0x10];
        local_9c = (int *)(iVar1 + 0x128);
        local_a0 = 0xe4;
        local_b0 = 1;
        local_a8 = 0;
        local_b8 = 0x54;
        local_c0 = param_3;
        uStack_bc = param_4;
        local_ac = local_b4;
        FUN_1006f920(&local_c0,0x2c);
        goto LAB_1004cd1c;
      }
    }
    else if (param_7 != 0) {
      local_a4 = (int *)(iVar1 + 0x120);
      local_a0 = 0;
      local_a8 = 0xe4;
      local_ac = (int *)param_3[0x10];
      local_b0 = 1;
      local_b8 = 0x1c;
      local_c0 = param_3;
      uStack_bc = param_4;
      local_b4 = piVar4;
      FUN_1006f920(&local_c0,0x24);
      goto LAB_1004cd1c;
    }
LAB_1004cd34:
    FUN_1006e870(param_3,param_3[0x18]);
    FUN_1006e870(param_3,param_3[0x1a]);
    param_3[0x18] = 0;
    param_3[0x1a] = 0;
  }
  return;
}

