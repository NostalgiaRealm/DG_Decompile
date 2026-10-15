/*
 * FUN_1007b468 at 1007b468
 * undefined FUN_1007b468(void)
 * Address ranges: 1007b468-1007bf47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007b468(ulonglong param_1,undefined4 param_2,int param_3,int param_4,char param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined *puVar12;
  int *piVar13;
  uint uVar14;
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
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  char local_60;
  uint local_5c;
  int *local_58;
  uint *local_54;
  int *local_50;
  uint *local_4c;
  int *local_48;
  char *local_44;
  
  local_4c = (uint *)(param_3 + 0x19c);
  uVar7 = *local_4c;
  local_48 = (int *)(param_4 * 3);
  local_54 = (uint *)(param_3 + 0x180);
  piVar9 = (int *)*local_54;
  local_44 = (char *)(param_3 + 0x185);
  uVar14 = (*(uint *)(uVar7 + 0x1c) & *(uint *)(uVar7 + 8)) >> (ulonglong)((uint)local_48 & 0x1f) &
           7;
  if ((uVar14 != 0) == (bool)*local_44) {
    uVar15 = 4;
  }
  else {
    uVar15 = (uint)*(byte *)(param_3 + 0x184);
  }
  uVar7 = (*(uint *)(uVar7 + 0x20) & *(uint *)(uVar7 + 0xc)) >> (ulonglong)((uint)local_48 & 0x1f) &
          7;
  local_60 = param_5;
  if (uVar7 == 1) {
    if (piVar9 != (int *)0x0) goto LAB_1007b788;
    piVar9 = *(int **)(param_3 + 0x158);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)FUN_1007b320(param_1,param_2,param_3,0);
      *(int **)(param_3 + 0x158) = piVar9;
    }
  }
  else if (uVar7 == 2) {
    if (piVar9 != (int *)0x0) goto LAB_1007b788;
    piVar9 = *(int **)(param_3 + 0x154);
  }
  else {
    if ((uVar7 != 3) || (piVar9 != (int *)0x0)) goto LAB_1007b788;
    puVar1 = (uint *)(param_3 + 0x15c);
    if (*puVar1 == 0) {
      local_58 = (int *)(param_3 + 0x158);
      if (*local_58 == 0) {
        iVar6 = FUN_1007b320(param_1,param_2,param_3,0);
        *local_58 = iVar6;
      }
      piVar9 = (int *)(param_3 + 0x18);
      uVar11 = 1;
      uVar7 = FUN_100ee580(piVar9,3,1);
      *puVar1 = uVar7;
      piVar8 = (int *)FUN_100ee580(piVar9,1,uVar11 & 0xffffffff);
      local_c0 = piVar9;
      local_b4 = piVar8;
      local_50 = piVar8;
      if ((*(uint *)(*local_4c + 0x44) >> 0x1d & 1) == 0) {
        local_b8 = 0;
        local_ac = *(int **)(param_3 + 0x150);
        local_a0 = 0xaa;
        local_9c = 0;
        local_a8 = (int *)0xaa;
        local_b0 = (uint *)0x1;
        iStack_bc = param_2;
        local_a4 = local_ac;
        FUN_100ef510(&local_c0,0x28);
        local_98 = 0x1e4;
        local_94 = (int *)0x0;
        local_9c = *(uint *)(param_3 + 0xac);
        local_88 = 0;
        local_84 = 0;
        local_90 = 0;
        local_8c = (int *)0xbf800000;
        local_a0 = 0x1a4;
        local_a4 = (int *)*local_58;
        local_a8 = (int *)0x0;
        local_b0 = (uint *)0x7;
        local_b4 = (int *)*puVar1;
        local_b8 = 0x32;
        local_c0 = piVar9;
        iStack_bc = param_2;
        local_ac = piVar8;
        FUN_100ef510(&local_c0,0x40);
      }
      else {
        uVar10 = FUN_100ee580(piVar9,3,1);
        local_5c = (uint)uVar10;
        FUN_1007a010(uVar10,param_2,param_3,*(uint *)(param_3 + 0x154) | 0x80000000);
        local_a0 = 0xa4;
        local_9c = 0;
        local_a4 = (int *)*local_58;
        local_a8 = (int *)0xa4;
        local_b0 = (uint *)0x1;
        local_ac = (int *)local_5c;
        local_b8 = 0x10;
        iStack_bc = param_2;
        FUN_100ef510(&local_c0,0x28);
        local_a0 = 0;
        local_9c = 0;
        local_b0 = (uint *)0x1;
        local_a8 = (int *)0x0;
        local_b8 = 0;
        local_c0 = piVar9;
        iStack_bc = param_2;
        local_b4 = piVar8;
        local_ac = piVar8;
        local_a4 = piVar8;
        FUN_100ef510(&local_c0,0x28);
        local_98 = 0x1a4;
        local_94 = (int *)0x0;
        local_9c = local_5c | 0x80000000;
        local_a0 = 0x1a4;
        local_a4 = (int *)*local_58;
        local_a8 = (int *)0x0;
        local_b0 = (uint *)0x7;
        local_b4 = (int *)*puVar1;
        local_b8 = 0x32;
        local_c0 = piVar9;
        iStack_bc = param_2;
        local_ac = piVar8;
        FUN_100ef510(&local_c0,0x30);
        FUN_100ee638(piVar9,local_5c);
      }
      FUN_100ee638(piVar9,local_50);
    }
    piVar9 = (int *)*puVar1;
  }
  uVar15 = 3;
LAB_1007b788:
  uVar7 = 0xf;
  puVar1 = (uint *)*local_4c;
  if (((puVar1[0x11] >> 0x1e & 1) == 0) &&
     (((puVar1[7] & puVar1[2]) >> (ulonglong)(param_4 + 0x18U & 0x1f) & 1) != 0)) {
    local_58 = (int *)CONCAT31(local_58._1_3_,1);
  }
  else {
    local_58 = (int *)((uint)local_58._1_3_ << 8);
  }
  if ((piVar9 == (int *)0x0) &&
     (uVar2 = (puVar1[5] & puVar1[4] & *puVar1) >> (ulonglong)((uint)local_48 & 0x1f) & 7,
     (8 << (ulonglong)uVar2 & *(uint *)(param_3 + 0x198)) != 0)) {
    uVar15 = (puVar1[6] & puVar1[1]) >> (ulonglong)(uVar2 * 3) & 7;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    piVar9 = (int *)(*extraout_w11)(param_1 & 0xffffffff,param_2,param_3);
    *(int **)(param_3 + 0x188) = piVar9;
  }
  piVar8 = (int *)param_1;
  cVar5 = (char)uVar15;
  if (uVar14 == 0) {
    if (piVar9 != (int *)0x0) {
      puVar12 = &DAT_1012c9a4;
      puVar3 = (undefined *)0x1012c9a8;
      if ((char)local_58 == '\0') {
        puVar3 = &DAT_1012c9a4;
      }
      if (local_60 != '\0') {
        local_60 = cVar5;
        if (uVar15 != 4) {
          uVar14 = *local_54;
          if (((uVar14 & 0x3f00) == 0) && (uVar14 != *(uint *)(param_3 + 0x188))) {
            puVar12 = &DAT_1012c9a4;
            FUN_100ee638(param_3 + 0x18,uVar14);
            *extraout_w11_01 = 0;
          }
          piVar13 = (int *)(param_3 + 0x18);
          local_50 = piVar13;
          local_b4 = (int *)FUN_100ee580(piVar13,4,1);
          bVar4 = puVar12[uVar15 - 1];
          local_4c = (uint *)(param_3 + 0xac);
          uVar14 = (uint)*(byte *)((int)&DAT_1012c99c + uVar15 + 3);
          local_c0 = piVar13;
          local_48 = local_b4;
          if (*piVar13 == 0x10040) {
            local_b8 = 0x36;
            local_a4 = (int *)0x0;
            iStack_bc = param_2;
            local_b0 = (uint *)(uint)bVar4;
            local_ac = piVar9;
            local_a8 = (int *)uVar14;
            FUN_100ef510(&local_c0,0x20);
            local_a8 = (int *)0xe4;
            local_a4 = (int *)0x0;
            local_b0 = (uint *)(bVar4 ^ 0xf);
            local_94 = (int *)0x0;
            local_ac = (int *)*local_4c;
            local_98 = 0x3f800000;
            local_b8 = 0x36;
            local_b4 = local_48;
            local_a0 = 0;
            local_9c = 0;
            local_c0 = local_50;
            iStack_bc = param_2;
            FUN_100ef510(&local_c0,0x30);
          }
          else {
            local_ac = (int *)*local_4c;
            local_a4 = (int *)(bVar4 & 1);
            local_88 = 0xe4;
            local_84 = 0;
            local_a8 = (int *)0xe4;
            local_98 = bVar4 >> 3 & 1;
            local_9c = bVar4 >> 2 & 1;
            local_74 = 0;
            local_b8 = 0x37;
            local_a0 = bVar4 >> 1 & 1;
            local_78 = 0x3f800000;
            local_80 = 0;
            uStack_7c = 0;
            local_b0 = (uint *)0xf;
            iStack_bc = param_2;
            local_94 = piVar9;
            local_90 = uVar14;
            local_8c = local_ac;
            FUN_100ef510(&local_c0,0x50);
          }
          uVar15 = 4;
          piVar9 = local_48;
        }
        if (*local_54 == 0) {
          *local_54 = (uint)piVar9;
          *(char *)(param_3 + 0x184) = local_60;
          *local_44 = '\0';
        }
      }
      local_b0 = (uint *)(param_4 + 5);
      local_a0 = 0x12345678;
      local_a4 = (int *)(uint)*(byte *)((int)&DAT_1012c99c + uVar15 + 3);
      local_b4 = (int *)0x36;
      local_ac = (int *)CONCAT31(local_ac._1_3_,puVar3[uVar15 - 1]);
      local_c0 = piVar8;
      iStack_bc = param_3;
      local_b8 = param_2;
      local_a8 = piVar9;
      FUN_10079a50(&local_c0,0x24);
      uVar7 = (byte)puVar3[uVar15 - 1] ^ 0xf;
    }
  }
  else {
    local_5c = param_4 * 0x40 + 0x2e0;
    uVar7 = (uint)(byte)(&DAT_1012c9ab)[uVar14] & ((uint)local_58 & 0xff ^ 1) * 8 + 7;
    if (piVar9 == (int *)0x0) {
      local_50 = (int *)(param_3 + 0xc0);
      local_b0 = (uint *)(param_4 + 5);
      local_a4 = (int *)0xff;
      local_a8 = (int *)*local_50;
      local_9c = 0x12345678;
      local_b4 = (int *)0x36;
      local_ac = (int *)CONCAT31(local_ac._1_3_,1);
      local_c0 = piVar8;
      iStack_bc = param_3;
      local_b8 = param_2;
      local_a0 = local_5c;
      local_54 = local_b0;
      FUN_10079a50(&local_c0,0x28);
      if (1 < uVar14) {
        local_b4 = (int *)0x36;
        local_a0 = local_5c + 0x10;
        local_9c = 0x12345678;
        local_a4 = (int *)0xff;
        local_a8 = (int *)*local_50;
        local_b0 = local_54;
        local_ac = (int *)CONCAT31(local_ac._1_3_,2);
        local_c0 = piVar8;
        iStack_bc = param_3;
        local_b8 = param_2;
        FUN_10079a50(&local_c0,0x28);
      }
      if (2 < uVar14) {
        local_b4 = (int *)0x36;
        local_a0 = local_5c + 0x20;
        local_9c = 0x12345678;
        local_a4 = (int *)0xff;
        local_a8 = (int *)*local_50;
        local_b0 = local_54;
        local_ac = (int *)CONCAT31(local_ac._1_3_,2);
        local_c0 = piVar8;
        iStack_bc = param_3;
        local_b8 = param_2;
        FUN_10079a50(&local_c0,0x28);
      }
      if (3 < uVar14 || (char)local_58 != '\0') {
        local_ac = (int *)CONCAT31(local_ac._1_3_,4);
        local_b4 = (int *)0x36;
        local_a0 = local_5c + uVar14 * 0x10 + -0x10;
        local_b0 = local_54;
        local_9c = 0x12345678;
        local_a4 = (int *)0xff;
        local_a8 = (int *)*local_50;
        local_c0 = piVar8;
        iStack_bc = param_3;
        local_b8 = param_2;
        FUN_10079a50(&local_c0,0x28);
      }
    }
    else {
      if (uVar15 != 4) {
        uVar2 = *local_54;
        if (((uVar2 & 0x3f00) == 0) && (uVar2 != *(uint *)(param_3 + 0x188))) {
          FUN_100ee638(param_3 + 0x18,uVar2);
          *extraout_w11_00 = 0;
        }
        piVar13 = (int *)(param_3 + 0x18);
        local_b4 = (int *)FUN_100ee580(piVar13,4,1);
        local_74 = 0;
        local_a4 = *(int **)(param_3 + 0xac);
        local_84 = 0;
        local_88 = 0xe4;
        local_a0 = 0xe4;
        local_a8 = (int *)(uint)*(byte *)((int)&DAT_1012c99c + uVar15 + 3);
        local_b8 = 0x32;
        local_b0 = (uint *)0xf;
        local_c0 = piVar13;
        iStack_bc = param_2;
        local_ac = piVar9;
        local_90 = extraout_s19;
        local_8c = local_a4;
        local_80 = extraout_s18;
        uStack_7c = extraout_s17;
        local_78 = extraout_s16;
        local_48 = local_b4;
        FUN_100ef510(&local_c0,0x50);
        piVar9 = local_48;
      }
      if (*local_54 == 0) {
        *(char *)(param_3 + 0x184) = cVar5;
        *local_54 = (uint)piVar9;
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
      local_c0 = piVar8;
      iStack_bc = param_3;
      local_b8 = param_2;
      local_a8 = piVar9;
      local_50 = (int *)local_b0;
      FUN_10079a50(&local_c0,0x30);
      if (1 < uVar14) {
        local_a4 = (int *)0xe4;
        local_98 = local_5c + 0x10;
        local_94 = (int *)0x12345678;
        local_a0 = *local_54;
        local_b0 = (uint *)local_50;
        local_9c = 0xe4;
        local_ac = (int *)CONCAT31(local_ac._1_3_,2);
        local_b4 = (int *)0x11;
        local_c0 = piVar8;
        iStack_bc = param_3;
        local_b8 = param_2;
        local_a8 = piVar9;
        FUN_10079a50(&local_c0,0x30);
      }
      if (2 < uVar14) {
        local_a4 = (int *)0xe4;
        local_98 = local_5c + 0x20;
        local_94 = (int *)0x12345678;
        local_a0 = *local_54;
        local_b0 = (uint *)local_50;
        local_9c = 0xe4;
        local_ac = (int *)CONCAT31(local_ac._1_3_,4);
        local_b4 = (int *)0x11;
        local_c0 = piVar8;
        iStack_bc = param_3;
        local_b8 = param_2;
        local_a8 = piVar9;
        FUN_10079a50(&local_c0,0x30);
      }
      if (3 < uVar14 || (char)local_58 != '\0') {
        local_ac = (int *)CONCAT31(local_ac._1_3_,8);
        local_a4 = (int *)0xe4;
        local_98 = (local_5c + uVar14 * 0x10) - 0x10;
        local_b0 = (uint *)local_50;
        local_94 = (int *)0x12345678;
        local_a0 = *local_54;
        local_9c = 0xe4;
        local_b4 = (int *)0x11;
        local_c0 = piVar8;
        iStack_bc = param_3;
        local_b8 = param_2;
        local_a8 = piVar9;
        FUN_10079a50(&local_c0,0x30);
      }
    }
  }
  local_b0 = (uint *)(param_4 + 5);
  switch(uVar7) {
  case 0:
    break;
  case 1:
  case 2:
  case 4:
  case 8:
    uVar14 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    local_ac = (int *)CONCAT31(local_ac._1_3_,(char)uVar7);
    local_a0 = (&DAT_1012c960)[(int)LZCOUNT((uVar14 >> 4 | (uVar14 & 0xf0f0f0f) << 4) << 0x18)];
    local_b0 = (uint *)(param_4 + 5);
    local_b4 = (int *)0x36;
    local_9c = 0x12345678;
    local_a4 = (int *)0x1e4;
    local_a8 = *(int **)(param_3 + 0xa8);
    local_c0 = piVar8;
    iStack_bc = param_3;
    local_b8 = param_2;
    FUN_10079a50(&local_c0,0x28);
    break;
  default:
    local_9c = 0;
    local_98 = 0;
    local_ac = (int *)CONCAT31(local_ac._1_3_,(char)uVar7);
    local_94 = (int *)0x3f800000;
    local_90 = 0x12345678;
    local_a4 = (int *)0x1e4;
    local_a0 = 0;
    local_a8 = *(int **)(param_3 + 0xac);
    local_b4 = (int *)0x36;
    local_c0 = piVar8;
    iStack_bc = param_3;
    local_b8 = param_2;
    FUN_10079a50(&local_c0,0x34);
  }
  return;
}

