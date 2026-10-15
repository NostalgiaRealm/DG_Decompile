/*
 * FUN_1009a5e0 at 1009a5e0
 * undefined FUN_1009a5e0(void)
 * Address ranges: 1009a5e0-1009b17b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009a5e0(ulonglong param_1,undefined4 param_2,int param_3,int param_4,char param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined *puVar13;
  int *piVar14;
  code *extraout_w11;
  undefined4 *extraout_w11_00;
  undefined4 *extraout_w11_01;
  uint uVar15;
  undefined4 extraout_s16;
  undefined4 extraout_s17;
  undefined4 extraout_s18;
  uint extraout_s19;
  int *local_c0;
  int iStack_bc;
  undefined4 local_b8;
  int *local_b4;
  uint *local_b0;
  int *local_ac;
  int *local_a8;
  int *local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  int *local_94;
  uint local_90;
  int *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  char local_60;
  uint local_5c;
  uint *local_58;
  uint *local_54;
  int *local_50;
  uint *local_4c;
  int *local_48;
  char *local_44;
  
  local_4c = (uint *)(param_3 + 0x1a0);
  uVar8 = *local_4c;
  local_48 = (int *)(param_4 * 3);
  local_54 = (uint *)(param_3 + 0x184);
  piVar10 = (int *)*local_54;
  local_44 = (char *)(param_3 + 0x189);
  uVar4 = (*(uint *)(uVar8 + 0x1c) & *(uint *)(uVar8 + 8)) >> (ulonglong)((uint)local_48 & 0x1f) & 7
  ;
  if ((uVar4 != 0) == (bool)*local_44) {
    uVar15 = 4;
  }
  else {
    uVar15 = (uint)*(byte *)(param_3 + 0x188);
  }
  uVar8 = (*(uint *)(uVar8 + 0x20) & *(uint *)(uVar8 + 0xc)) >> (ulonglong)((uint)local_48 & 0x1f) &
          7;
  local_60 = param_5;
  if (uVar8 << 0x10 < 0x30000) {
    if (uVar8 == 1) {
      if (piVar10 != (int *)0x0) goto LAB_1009a9bc;
      piVar10 = *(int **)(param_3 + 0x158);
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)FUN_1009a498(param_1,param_2,param_3,0);
        *(int **)(param_3 + 0x158) = piVar10;
      }
    }
    else {
      if ((uVar8 != 2) || (piVar10 != (int *)0x0)) goto LAB_1009a9bc;
      piVar10 = *(int **)(param_3 + 0x154);
    }
  }
  else if (uVar8 << 0x10 < 0x30001) {
    if (piVar10 != (int *)0x0) goto LAB_1009a9bc;
    puVar1 = (uint *)(param_3 + 0x15c);
    if (*puVar1 == 0) {
      local_58 = (uint *)(param_3 + 0x158);
      if (*local_58 == 0) {
        uVar8 = FUN_1009a498(param_1,param_2,param_3,0);
        *local_58 = uVar8;
      }
      piVar10 = (int *)(param_3 + 0x18);
      uVar12 = 1;
      uVar8 = FUN_10121590(piVar10,3,1);
      *puVar1 = uVar8;
      piVar9 = (int *)FUN_10121590(piVar10,1,uVar12 & 0xffffffff);
      local_c0 = piVar10;
      local_b4 = piVar9;
      local_50 = piVar9;
      if ((*(uint *)(*local_4c + 0x44) >> 0x1d & 1) == 0) {
        local_b8 = 0;
        local_ac = *(int **)(param_3 + 0x150);
        local_a0 = 0xaa;
        local_9c = 0;
        local_a8 = (int *)0xaa;
        local_b0 = (uint *)0x1;
        iStack_bc = param_2;
        local_a4 = local_ac;
        FUN_10122a88(&local_c0,0x28);
        local_9c = *(uint *)(param_3 + 0xac);
        local_88 = 0;
        local_84 = 0;
        local_94 = (int *)0x0;
        local_90 = 0;
        local_8c = (int *)0xbf800000;
        local_98 = 0x1e4;
        local_a0 = 0x1a4;
        local_a4 = (int *)*local_58;
        local_a8 = (int *)0x0;
        local_b0 = (uint *)0x7;
        local_b4 = (int *)*puVar1;
        local_b8 = 0x32;
        local_c0 = piVar10;
        iStack_bc = param_2;
        local_ac = piVar9;
        FUN_10122a88(&local_c0,0x40);
      }
      else {
        uVar11 = FUN_10121590(piVar10,3,1);
        local_5c = (uint)uVar11;
        FUN_10099120(uVar11,param_2,param_3,*(uint *)(param_3 + 0x154) | 0x80000000);
        local_a0 = 0xa4;
        local_9c = 0;
        local_a4 = (int *)*local_58;
        local_a8 = (int *)0xa4;
        local_b0 = (uint *)0x1;
        local_ac = (int *)local_5c;
        local_b8 = 0x10;
        iStack_bc = param_2;
        FUN_10122a88(&local_c0,0x28);
        local_a0 = 0;
        local_9c = 0;
        local_b0 = (uint *)0x1;
        local_a8 = (int *)0x0;
        local_b8 = 0;
        local_c0 = piVar10;
        iStack_bc = param_2;
        local_b4 = piVar9;
        local_ac = piVar9;
        local_a4 = piVar9;
        FUN_10122a88(&local_c0,0x28);
        local_98 = 0x1a4;
        local_94 = (int *)0x0;
        local_9c = local_5c | 0x80000000;
        local_a0 = 0x1a4;
        local_a4 = (int *)*local_58;
        local_a8 = (int *)0x0;
        local_b0 = (uint *)0x7;
        local_b4 = (int *)*puVar1;
        local_b8 = 0x32;
        local_c0 = piVar10;
        iStack_bc = param_2;
        local_ac = piVar9;
        FUN_10122a88(&local_c0,0x30);
        FUN_10121648(piVar10,local_5c);
      }
      FUN_10121648(piVar10,local_50);
    }
    piVar10 = (int *)*puVar1;
  }
  else {
    if ((uVar8 != 4) || (piVar10 != (int *)0x0)) goto LAB_1009a9bc;
    puVar1 = (uint *)(param_3 + 0x160);
    if (*puVar1 == 0) {
      puVar2 = (uint *)(param_3 + 0x158);
      if (*puVar2 == 0) {
        uVar8 = FUN_1009a498(param_1,param_2,param_3,0);
        *puVar2 = uVar8;
      }
      piVar10 = (int *)(param_3 + 0x18);
      local_b4 = (int *)FUN_10121590(piVar10,3,1);
      local_a4 = *(int **)(param_3 + 0xac);
      *puVar1 = (uint)local_b4;
      local_74 = 0;
      local_7c = 0;
      local_78 = 0;
      local_90 = 0;
      local_a0 = 0x1e4;
      local_a8 = (int *)0x1a4;
      local_ac = (int *)*puVar2;
      local_84 = 0x3f000000;
      local_80 = 0x3f000000;
      local_88 = 0x1e4;
      local_94 = (int *)0x3f800000;
      local_b0 = (uint *)0x7;
      local_b8 = 0x32;
      local_9c = 0x3f000000;
      local_98 = 0x3f000000;
      local_c0 = piVar10;
      iStack_bc = param_2;
      local_8c = local_a4;
      FUN_10122a88(&local_c0,0x50);
    }
    piVar10 = (int *)*puVar1;
  }
  uVar15 = 3;
LAB_1009a9bc:
  uVar8 = 0xf;
  puVar1 = (uint *)*local_4c;
  if (((puVar1[0x11] >> 0x1e & 1) == 0) &&
     (((puVar1[7] & puVar1[2]) >> (ulonglong)(param_4 + 0x18U & 0x1f) & 1) != 0)) {
    local_58 = (uint *)CONCAT31(local_58._1_3_,1);
  }
  else {
    local_58 = (uint *)((uint)local_58._1_3_ << 8);
  }
  if ((piVar10 == (int *)0x0) &&
     (uVar3 = (puVar1[5] & puVar1[4] & *puVar1) >> (ulonglong)((uint)local_48 & 0x1f) & 7,
     (8 << (ulonglong)uVar3 & *(uint *)(param_3 + 0x19c)) != 0)) {
    uVar15 = (puVar1[6] & puVar1[1]) >> (ulonglong)(uVar3 * 3) & 7;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    piVar10 = (int *)(*extraout_w11)(param_1 & 0xffffffff,param_2,param_3);
    *(int **)(param_3 + 0x18c) = piVar10;
  }
  piVar9 = (int *)param_1;
  cVar7 = (char)uVar15;
  if (uVar4 == 0) {
    if (piVar10 != (int *)0x0) {
      puVar13 = &DAT_101624b4;
      puVar5 = (undefined *)0x101624b8;
      if ((char)local_58 == '\0') {
        puVar5 = &DAT_101624b4;
      }
      if (local_60 != '\0') {
        local_60 = cVar7;
        if (uVar15 != 4) {
          uVar4 = *local_54;
          if (((uVar4 & 0x3f00) == 0) && (uVar4 != *(uint *)(param_3 + 0x18c))) {
            puVar13 = &DAT_101624b4;
            FUN_10121648(param_3 + 0x18,uVar4);
            *extraout_w11_01 = 0;
          }
          piVar14 = (int *)(param_3 + 0x18);
          local_50 = piVar14;
          local_b4 = (int *)FUN_10121590(piVar14,4,1);
          bVar6 = puVar13[uVar15 - 1];
          local_4c = (uint *)(param_3 + 0xac);
          local_c0 = piVar14;
          local_48 = local_b4;
          if (*piVar14 == 0x10040) {
            local_b8 = 0x36;
            local_a4 = (int *)0x0;
            iStack_bc = param_2;
            local_b0 = (uint *)(uint)bVar6;
            local_ac = piVar10;
            local_a8 = (int *)(uint)*(byte *)(uVar15 + 0x101624af);
            FUN_10122a88(&local_c0,0x20);
            local_a8 = (int *)0xe4;
            local_a4 = (int *)0x0;
            local_b0 = (uint *)(bVar6 ^ 0xf);
            local_94 = (int *)0x0;
            local_ac = (int *)*local_4c;
            local_98 = 0x3f800000;
            local_b8 = 0x36;
            local_b4 = local_48;
            local_a0 = 0;
            local_9c = 0;
            local_c0 = local_50;
            iStack_bc = param_2;
            FUN_10122a88(&local_c0,0x30);
          }
          else {
            local_ac = (int *)*local_4c;
            local_a4 = (int *)(bVar6 & 1);
            local_88 = 0xe4;
            local_84 = 0;
            local_a8 = (int *)0xe4;
            local_98 = bVar6 >> 3 & 1;
            local_9c = bVar6 >> 2 & 1;
            local_74 = 0;
            local_b8 = 0x37;
            local_a0 = bVar6 >> 1 & 1;
            local_78 = 0x3f800000;
            local_80 = 0;
            local_7c = 0;
            local_b0 = (uint *)0xf;
            iStack_bc = param_2;
            local_94 = piVar10;
            local_90 = (uint)*(byte *)(uVar15 + 0x101624af);
            local_8c = local_ac;
            FUN_10122a88(&local_c0,0x50);
          }
          uVar15 = 4;
          piVar10 = local_48;
        }
        if (*local_54 == 0) {
          *local_54 = (uint)piVar10;
          *(char *)(param_3 + 0x188) = local_60;
          *local_44 = '\0';
        }
      }
      local_b0 = (uint *)(param_4 + 5);
      local_a0 = 0x12345678;
      local_a4 = (int *)(uint)*(byte *)(uVar15 + 0x101624af);
      local_b4 = (int *)0x36;
      local_ac = (int *)CONCAT31(local_ac._1_3_,puVar5[uVar15 - 1]);
      local_c0 = piVar9;
      iStack_bc = param_3;
      local_b8 = param_2;
      local_a8 = piVar10;
      FUN_10098b60(&local_c0,0x24);
      uVar8 = (byte)puVar5[uVar15 - 1] ^ 0xf;
    }
  }
  else {
    local_5c = param_4 * 0x40 + 0x2e0;
    uVar8 = (uint)(byte)(&DAT_101624bb)[uVar4] & ((uint)local_58 & 0xff ^ 1) * 8 + 7;
    if (piVar10 == (int *)0x0) {
      local_50 = (int *)(param_3 + 0xc0);
      local_b0 = (uint *)(param_4 + 5);
      local_a4 = (int *)0xff;
      local_a8 = (int *)*local_50;
      local_9c = 0x12345678;
      local_b4 = (int *)0x36;
      local_ac = (int *)CONCAT31(local_ac._1_3_,1);
      local_c0 = piVar9;
      iStack_bc = param_3;
      local_b8 = param_2;
      local_a0 = local_5c;
      local_54 = local_b0;
      FUN_10098b60(&local_c0,0x28);
      if (1 < uVar4) {
        local_b4 = (int *)0x36;
        local_a0 = local_5c + 0x10;
        local_9c = 0x12345678;
        local_a4 = (int *)0xff;
        local_a8 = (int *)*local_50;
        local_b0 = local_54;
        local_ac = (int *)CONCAT31(local_ac._1_3_,2);
        local_c0 = piVar9;
        iStack_bc = param_3;
        local_b8 = param_2;
        FUN_10098b60(&local_c0,0x28);
      }
      if (2 < uVar4) {
        local_b4 = (int *)0x36;
        local_a0 = local_5c + 0x20;
        local_9c = 0x12345678;
        local_a4 = (int *)0xff;
        local_a8 = (int *)*local_50;
        local_b0 = local_54;
        local_ac = (int *)CONCAT31(local_ac._1_3_,2);
        local_c0 = piVar9;
        iStack_bc = param_3;
        local_b8 = param_2;
        FUN_10098b60(&local_c0,0x28);
      }
      if (3 < uVar4 || (char)local_58 != '\0') {
        local_ac = (int *)CONCAT31(local_ac._1_3_,4);
        local_b4 = (int *)0x36;
        local_a0 = local_5c + uVar4 * 0x10 + -0x10;
        local_b0 = local_54;
        local_9c = 0x12345678;
        local_a4 = (int *)0xff;
        local_a8 = (int *)*local_50;
        local_c0 = piVar9;
        iStack_bc = param_3;
        local_b8 = param_2;
        FUN_10098b60(&local_c0,0x28);
      }
    }
    else {
      if (uVar15 != 4) {
        uVar3 = *local_54;
        if (((uVar3 & 0x3f00) == 0) && (uVar3 != *(uint *)(param_3 + 0x18c))) {
          FUN_10121648(param_3 + 0x18,uVar3);
          *extraout_w11_00 = 0;
        }
        piVar14 = (int *)(param_3 + 0x18);
        local_b4 = (int *)FUN_10121590(piVar14,4,1);
        local_a4 = *(int **)(param_3 + 0xac);
        local_74 = 0;
        local_88 = 0xe4;
        local_a0 = 0xe4;
        local_84 = 0;
        local_a8 = (int *)(uint)*(byte *)(uVar15 + 0x101624af);
        local_b8 = 0x32;
        local_9c = 0x3f800000;
        local_b0 = (uint *)0xf;
        local_c0 = piVar14;
        iStack_bc = param_2;
        local_ac = piVar10;
        local_90 = extraout_s19;
        local_8c = local_a4;
        local_80 = extraout_s18;
        local_7c = extraout_s17;
        local_78 = extraout_s16;
        local_48 = local_b4;
        FUN_10122a88(&local_c0,0x50);
        piVar10 = local_48;
      }
      if (*local_54 == 0) {
        *(char *)(param_3 + 0x188) = cVar7;
        *local_54 = (uint)piVar10;
        *local_44 = '\x01';
      }
      local_54 = (uint *)(param_3 + 0xc0);
      local_b0 = (uint *)(param_4 + 5);
      local_a0 = *local_54;
      local_a4 = (int *)0xe4;
      local_98 = local_5c;
      local_94 = (int *)0x12345678;
      local_9c = 0xe4;
      local_ac = (int *)CONCAT31(local_ac._1_3_,1);
      local_b4 = (int *)0x11;
      local_c0 = piVar9;
      iStack_bc = param_3;
      local_b8 = param_2;
      local_a8 = piVar10;
      local_50 = (int *)local_b0;
      FUN_10098b60(&local_c0,0x30);
      if (1 < uVar4) {
        local_a4 = (int *)0xe4;
        local_98 = local_5c + 0x10;
        local_94 = (int *)0x12345678;
        local_a0 = *local_54;
        local_b0 = (uint *)local_50;
        local_9c = 0xe4;
        local_ac = (int *)CONCAT31(local_ac._1_3_,2);
        local_b4 = (int *)0x11;
        local_c0 = piVar9;
        iStack_bc = param_3;
        local_b8 = param_2;
        local_a8 = piVar10;
        FUN_10098b60(&local_c0,0x30);
      }
      if (2 < uVar4) {
        local_a4 = (int *)0xe4;
        local_98 = local_5c + 0x20;
        local_94 = (int *)0x12345678;
        local_a0 = *local_54;
        local_b0 = (uint *)local_50;
        local_9c = 0xe4;
        local_ac = (int *)CONCAT31(local_ac._1_3_,4);
        local_b4 = (int *)0x11;
        local_c0 = piVar9;
        iStack_bc = param_3;
        local_b8 = param_2;
        local_a8 = piVar10;
        FUN_10098b60(&local_c0,0x30);
      }
      if (3 < uVar4 || (char)local_58 != '\0') {
        local_ac = (int *)CONCAT31(local_ac._1_3_,8);
        local_a4 = (int *)0xe4;
        local_98 = (local_5c + uVar4 * 0x10) - 0x10;
        local_b0 = (uint *)local_50;
        local_94 = (int *)0x12345678;
        local_a0 = *local_54;
        local_9c = 0xe4;
        local_b4 = (int *)0x11;
        local_c0 = piVar9;
        iStack_bc = param_3;
        local_b8 = param_2;
        local_a8 = piVar10;
        FUN_10098b60(&local_c0,0x30);
      }
    }
  }
  local_b0 = (uint *)(param_4 + 5);
  switch(uVar8) {
  case 0:
    break;
  case 1:
  case 2:
  case 4:
  case 8:
    uVar4 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    local_ac = (int *)CONCAT31(local_ac._1_3_,(char)uVar8);
    local_a0 = *(uint *)(&DAT_10162400 +
                        (int)LZCOUNT((uVar4 >> 4 | (uVar4 & 0xf0f0f0f) << 4) << 0x18) * 4);
    local_b0 = (uint *)(param_4 + 5);
    local_9c = 0x12345678;
    local_a8 = *(int **)(param_3 + 0xa8);
    local_b4 = (int *)0x36;
    local_a4 = (int *)0x1e4;
    local_c0 = piVar9;
    iStack_bc = param_3;
    local_b8 = param_2;
    FUN_10098b60(&local_c0,0x28);
    break;
  default:
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_94 = (int *)0x3f800000;
    local_a8 = *(int **)(param_3 + 0xac);
    local_ac = (int *)CONCAT31(local_ac._1_3_,(char)uVar8);
    local_90 = 0x12345678;
    local_b4 = (int *)0x36;
    local_a4 = (int *)0x1e4;
    local_c0 = piVar9;
    iStack_bc = param_3;
    local_b8 = param_2;
    FUN_10098b60(&local_c0,0x34);
  }
  return;
}

