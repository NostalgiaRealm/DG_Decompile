/*
 * FUN_10035840 at 10035840
 * undefined __thiscall FUN_10035840(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 10035840-100366dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10035840(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            uint param_7,uint param_8,byte param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  undefined *puVar24;
  undefined *puVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  char local_16a;
  undefined4 *local_168;
  uint local_160;
  uint local_150;
  uint local_134;
  int local_130;
  undefined1 local_12c;
  uint local_128;
  undefined4 *local_124;
  undefined8 local_120;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined8 local_e8;
  uint local_e0 [9];
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  uint uStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined8 local_60;
  float local_50 [19];
  
  if (*(char *)(param_2 + 0x1c) == -1) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)*(byte *)(param_2 + 0x1d);
  }
  uVar23 = *(uint *)((int)this + 0x5940);
  uVar17 = uVar23;
  if (uVar16 <= uVar23) {
    uVar17 = uVar16;
  }
  uVar16 = (uint)(*(char *)(param_2 + 0x3c) != -1);
  if (*(char *)(param_2 + 0x44) != -1) {
    uVar16 = uVar16 | 2;
  }
  if (*(char *)(param_2 + 0x2c) != -1) {
    uVar16 = uVar16 | 4;
  }
  if (*(char *)(param_2 + 0x4c) != -1) {
    uVar16 = uVar16 | 8;
  }
  if (*(char *)(param_2 + 0x54) != -1) {
    uVar16 = uVar16 | 0x10;
  }
  if (*(char *)(param_2 + 0x5c) != -1) {
    uVar16 = uVar16 | 0x20;
  }
  if (*(char *)(param_2 + 100) != -1) {
    uVar16 = uVar16 | 0x40;
  }
  if (*(char *)(param_2 + 0x6c) != -1) {
    uVar16 = uVar16 | 0x80;
  }
  if (*(char *)(param_2 + 0x74) != -1) {
    uVar16 = uVar16 | 0x100;
  }
  if (*(char *)(param_2 + 0x7c) != -1) {
    uVar16 = uVar16 | 0x200;
  }
  if (*(char *)(param_2 + 0x84) != -1) {
    uVar16 = uVar16 | 0x400;
  }
  if (*(char *)(param_2 + 0x1c) != -1) {
    uVar16 = uVar16 | *(uint *)(&DAT_100b1efc + uVar17 * 4);
  }
  if (*(char *)(param_2 + 0x8c) != -1) {
    uVar16 = uVar16 | 0x10000;
  }
  if (*(char *)(param_2 + 0x94) != -1) {
    uVar16 = uVar16 | 0x20000;
  }
  if ((*(int *)((int)this + 0x5290) == 0) || (uVar23 == 0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x8000;
  }
  if (*(char *)(param_2 + 0x24) != -1) {
    uVar16 = uVar16 | uVar17;
  }
  if (*(char *)(param_2 + 0x34) != -1) {
    uVar16 = uVar16 | 0x80000;
  }
  local_128 = uVar16 | -(uint)(*(int *)(param_2 + 4) != 0) & 0x40000;
  if ((((param_1 != 4) && (param_1 != 5)) && (param_1 != 6)) ||
     (bVar26 = true, *(float *)((int)this + 0x570) < 2.0)) {
    bVar26 = false;
  }
  uVar17 = *(uint *)((int)this + 0x4cd8);
  bVar14 = false;
  local_150 = 0;
  do {
    if (*(uint *)((int)this + local_150 * 0x10 + 0x5214) !=
        (uint)*(byte *)(param_2 + 0x4d + local_150 * 8)) {
      bVar14 = true;
      break;
    }
    local_150 = local_150 + 1;
  } while (local_150 < 8);
  if (*(int *)(param_2 + 4) == 0) {
    local_160 = 8;
    if (*(char *)((int)this + 0x5957) == '\0') {
      local_160 = 0;
    }
  }
  else {
    if (((*(byte *)((int)this + 0x5948) & 4) == 0) || (*(int *)((int)this + 0x5944) == 0)) {
      uVar22 = 0;
    }
    else {
      uVar22 = 2;
    }
    local_160 = uVar22 + 2;
    uVar22 = uVar22 | 1;
    if (((*(int *)((int)this + 0xda50) == 0) && (*(char *)((int)this + 0x80) != '\0')) &&
       (*(char *)((int)this + 0x5953) == '\0')) {
      uVar9 = 0;
      if (*(uint *)((int)this + 0x638) != 0) {
        for (; (*(uint *)((int)this + 0x638) >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      local_130 = 0;
      if (uVar9 < 5) {
        local_160 = 5;
      }
    }
    if (bVar26) {
      local_160 = 7;
      uVar22 = 6;
    }
    if (*(char *)((int)this + 0xc) == '\0') {
      if (param_9 != 0) {
        uVar22 = local_160;
      }
LAB_10035a71:
      local_160 = uVar22;
    }
    else if ((*(char *)(param_2 + 0x2c) == -1) || (param_9 == 0)) goto LAB_10035a71;
    if (((uVar16 & 0xf800) == 0) && (*(char *)((int)this + 0x5957) == '\0')) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13 || uVar23 == 0xff) {
      local_160 = local_160 + 8;
    }
  }
  *(uint *)((int)this + 0x6a0) = *(uint *)((int)this + 0x6a0) & 0xfbffffff;
  *(undefined4 *)((int)this + 0x6a4) = *(undefined4 *)((int)this + 0x6a4);
  if (*(char *)((int)this + 0xd9aa) != '\0') {
    FUN_10041810((int)this);
  }
  FUN_100ada8e(&local_b0,0,0x58);
  if (bVar14) {
    *(uint *)((int)this + 0x640) =
         ((((((uint)(*(byte *)(param_2 + 0x85) | *(byte *)(param_2 + 0x7d)) << 3 |
             (uint)*(byte *)(param_2 + 0x75)) << 3 | (uint)*(byte *)(param_2 + 0x6d)) << 3 |
           (uint)*(byte *)(param_2 + 0x65)) << 3 | (uint)*(byte *)(param_2 + 0x5d)) << 3 |
         (uint)*(byte *)(param_2 + 0x55)) << 3 | (uint)*(byte *)(param_2 + 0x4d);
  }
  if (*(int *)(*(int *)((int)this + 0xd9c4) + 0x4c + local_160 * 4) == 0) {
    uVar16 = *(uint *)((int)this + 0x4cdc);
    if (((uVar16 & 1) == 0) || (bVar13 = true, *(char *)((int)this + 0x574) != '\0')) {
      bVar13 = false;
    }
    local_134 = 0;
    if ((*(byte *)((int)this + 0x5948) & 4) != 0) {
      local_134 = *(uint *)((int)this + 0x5944);
    }
    local_150 = 0;
    if (bVar26) {
      uVar22 = local_134 | 0x100;
      if ((uVar16 & 2) != 0) {
        uVar22 = local_134 | 0x300;
      }
      if ((uVar16 & 4) != 0) {
        uVar22 = uVar22 | 0x400;
      }
      if (bVar13) {
        uVar22 = uVar22 | 0x800;
      }
      local_150 = uVar17 >> 0x14;
      local_134 = uVar22 | uVar17 << 0xc;
    }
    if (*(int *)((int)this + 0xda50) == 0) {
      bVar15 = FUN_10041660((int)this);
    }
    else {
      bVar15 = *(byte *)(*(int *)(*(int *)((int)this + 0xda50) + 4) + 0x124);
    }
    local_124 = (undefined4 *)((int)this + 0x63c);
    uVar16 = 0;
    if (uVar23 == 0xff) {
      uVar16 = 0x200000;
    }
    *(uint *)((int)this + 0x680) =
         *(uint *)((int)this + 0x680) & 0x7fd00000 | uVar16 | (uint)param_9 << 0x1f |
         local_128 & 0xfffff;
    FUN_1002eac6(local_124,bVar15,local_e0);
    uVar16 = FUN_1002ee4e((void *)((int)this + 0xda24),(int)local_e0);
    if (uVar16 == *(uint *)((int)this + 0xda2c)) {
LAB_10035cc4:
      local_168 = (undefined4 *)FUN_100ad475(0x124);
      if (local_168 == (undefined4 *)0x0) goto LAB_10035f4b;
      uVar4 = *(undefined1 *)((int)this + 0xda20);
      uVar6 = *(undefined4 *)((int)this + 0xda1c);
      uVar7 = *(undefined4 *)((int)this + 0xda18);
      *local_168 = &PTR_LAB_100b2198;
      local_168[3] = 0;
      local_168[1] = 0;
      local_168[2] = 0;
      local_168[4] = &PTR_FUN_100b278c;
      uVar10 = local_124[1];
      uVar11 = local_124[2];
      uVar12 = local_124[3];
      local_168[6] = *local_124;
      local_168[7] = uVar10;
      local_168[8] = uVar11;
      local_168[9] = uVar12;
      uVar10 = local_124[5];
      uVar11 = local_124[6];
      uVar12 = local_124[7];
      local_168[10] = local_124[4];
      local_168[0xb] = uVar10;
      local_168[0xc] = uVar11;
      local_168[0xd] = uVar12;
      uVar10 = local_124[9];
      uVar11 = local_124[10];
      uVar12 = local_124[0xb];
      local_168[0xe] = local_124[8];
      local_168[0xf] = uVar10;
      local_168[0x10] = uVar11;
      local_168[0x11] = uVar12;
      uVar10 = local_124[0xd];
      uVar11 = local_124[0xe];
      uVar12 = local_124[0xf];
      local_168[0x12] = local_124[0xc];
      local_168[0x13] = uVar10;
      local_168[0x14] = uVar11;
      local_168[0x15] = uVar12;
      *(undefined8 *)(local_168 + 0x16) = *(undefined8 *)(local_124 + 0x10);
      *local_168 = &PTR_FUN_100b2420;
      *(undefined1 *)(local_168 + 0x48) = uVar4;
      local_168[0x18] = 0;
      local_168[0x19] = 0;
      local_168[0x1a] = 0;
      local_168[0x1b] = 0;
      local_168[1] = uVar7;
      local_168[2] = uVar6;
      local_168[3] = local_168 + 0x18;
      uVar17 = FUN_1002ee4e((void *)((int)this + 0xda24),(int)local_e0);
      uVar16 = *(uint *)((int)this + 0xda2c);
      if (uVar17 == uVar16) {
LAB_10035de9:
        uVar22 = *(uint *)((int)this + 0xda30);
        if (uVar22 == uVar16) {
          if (uVar22 == 0) {
            iVar20 = 0x10;
          }
          else {
            iVar20 = uVar22 * 2;
          }
          iVar18 = FUN_100ad4a9(iVar20 * 0x28);
          if (iVar18 != 0) {
            uVar16 = 0;
            if (*(int *)((int)this + 0xda2c) != 0) {
              do {
                iVar8 = *(int *)((int)this + 0xda28);
                uVar22 = uVar16 + 1;
                puVar1 = (undefined4 *)(iVar8 + uVar16 * 0x28);
                uVar6 = puVar1[1];
                uVar7 = puVar1[2];
                uVar10 = puVar1[3];
                puVar2 = (undefined4 *)(iVar18 + uVar16 * 0x28);
                *puVar2 = *puVar1;
                puVar2[1] = uVar6;
                puVar2[2] = uVar7;
                puVar2[3] = uVar10;
                puVar1 = (undefined4 *)(iVar8 + 0x10 + uVar16 * 0x28);
                uVar6 = puVar1[1];
                uVar7 = puVar1[2];
                uVar10 = puVar1[3];
                puVar2 = (undefined4 *)(iVar18 + 0x10 + uVar16 * 0x28);
                *puVar2 = *puVar1;
                puVar2[1] = uVar6;
                puVar2[2] = uVar7;
                puVar2[3] = uVar10;
                *(undefined8 *)(iVar18 + 0x20 + uVar16 * 0x28) =
                     *(undefined8 *)(iVar8 + 0x20 + uVar16 * 0x28);
                uVar16 = uVar22;
              } while (uVar22 < *(uint *)((int)this + 0xda2c));
            }
            thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0xda24));
            *(int *)((int)this + 0xda24) = iVar18;
            *(int *)((int)this + 0xda28) = iVar18;
            *(int *)((int)this + 0xda30) = iVar20;
          }
        }
        uVar16 = *(uint *)((int)this + 0xda2c);
        if (*(uint *)((int)this + 0xda30) != uVar16) {
          for (; uVar17 < uVar16; uVar16 = uVar16 - 1) {
            iVar20 = *(int *)((int)this + 0xda28);
            puVar2 = (undefined4 *)(iVar20 + -0x28 + uVar16 * 0x28);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar10 = puVar2[3];
            puVar1 = (undefined4 *)(iVar20 + uVar16 * 0x28);
            *puVar1 = *puVar2;
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar10;
            puVar1 = (undefined4 *)(iVar20 + -0x18 + uVar16 * 0x28);
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar10 = puVar1[3];
            puVar2 = (undefined4 *)(iVar20 + 0x10 + uVar16 * 0x28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar10;
            *(undefined8 *)(iVar20 + 0x20 + uVar16 * 0x28) =
                 *(undefined8 *)(iVar20 + -8 + uVar16 * 0x28);
          }
          *(int *)((int)this + 0xda2c) = *(int *)((int)this + 0xda2c) + 1;
          iVar20 = *(int *)((int)this + 0xda28);
          puVar3 = (uint *)(iVar20 + uVar17 * 0x28);
          *puVar3 = local_e0[0];
          puVar3[1] = local_e0[1];
          puVar3[2] = local_e0[2];
          puVar3[3] = local_e0[3];
          puVar1 = (undefined4 *)(iVar20 + 0x10 + uVar17 * 0x28);
          *puVar1 = local_e0[4];
          puVar1[1] = local_e0[5];
          puVar1[2] = local_e0[6];
          puVar1[3] = local_e0[7];
          *(undefined4 **)(*(int *)((int)this + 0xda28) + 0x20 + uVar17 * 0x28) = local_168;
        }
      }
      else {
        uVar16 = 0;
        iVar20 = *(int *)((int)this + 0xda28) + uVar17 * 0x28;
        do {
          if ((*(uint *)(iVar20 + uVar16 * 8) != local_e0[uVar16 * 2]) ||
             (*(uint *)(iVar20 + 4 + uVar16 * 8) != local_e0[uVar16 * 2 + 1])) {
            uVar16 = *(uint *)((int)this + 0xda2c);
            goto LAB_10035de9;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < 4);
        *(undefined4 **)(*(int *)((int)this + 0xda28) + 0x20 + uVar17 * 0x28) = local_168;
      }
    }
    else {
      uVar17 = 0;
      iVar20 = *(int *)((int)this + 0xda28) + uVar16 * 0x28;
      do {
        if ((*(uint *)(iVar20 + uVar17 * 8) != local_e0[uVar17 * 2]) ||
           (*(uint *)(iVar20 + 4 + uVar17 * 8) != local_e0[uVar17 * 2 + 1])) goto LAB_10035cc4;
        uVar17 = uVar17 + 1;
      } while (uVar17 < 4);
      local_168 = (undefined4 *)(*(int *)((int)this + 0xda28) + (uVar16 * 5 + 4) * 8);
      if (local_168 == (undefined4 *)0x0) goto LAB_10035cc4;
      local_168 = (undefined4 *)*local_168;
    }
    piVar19 = (int *)FUN_100402ff(local_168,local_134,local_150);
    if (piVar19 == (int *)0x0) goto LAB_10035f4b;
    local_b0 = *piVar19;
    iStack_ac = piVar19[1];
    iStack_a8 = piVar19[2];
    iStack_a4 = piVar19[3];
    local_100 = piVar19[0x10];
    iStack_fc = piVar19[0x11];
    iStack_f8 = piVar19[0x12];
    iStack_f4 = piVar19[0x13];
    local_a0 = piVar19[4];
    uStack_9c = piVar19[5];
    iStack_98 = piVar19[6];
    iStack_94 = piVar19[7];
    local_120 = *(undefined8 *)(piVar19 + 0x14);
    local_90 = piVar19[8];
    iStack_8c = piVar19[9];
    iStack_88 = piVar19[10];
    iStack_84 = piVar19[0xb];
    local_80 = piVar19[0xc];
    iStack_7c = piVar19[0xd];
    iStack_78 = piVar19[0xe];
    iStack_74 = piVar19[0xf];
  }
  else {
LAB_10035f4b:
    local_120 = local_60;
    local_100 = local_70;
    iStack_fc = iStack_6c;
    iStack_f8 = iStack_68;
    iStack_f4 = iStack_64;
  }
  local_150 = local_b0;
  if (local_b0 == 0) {
    local_150 = *(int *)(*(int *)((int)this + 0xd9c4) + 0x4c + local_160 * 4);
    iVar20 = local_160 * 0x28;
    local_e0[0] = *(uint *)(&UNK_100afc10 + iVar20);
    local_e0[1] = *(uint *)(&UNK_100afc14 + iVar20);
    local_e0[2] = *(uint *)(&UNK_100afc18 + iVar20);
    local_e0[3] = *(uint *)(&UNK_100afc1c + iVar20);
    iVar20 = local_160 * 0x28;
    local_e8 = *(undefined8 *)(&UNK_100afc20 + local_160 * 0x28);
    local_e0[8] = *(int *)(&UNK_100afc00 + iVar20);
    iStack_bc = *(int *)(&UNK_100afc04 + iVar20);
    iStack_b8 = *(int *)(&UNK_100afc08 + iVar20);
    iStack_b4 = *(int *)(&UNK_100afc0c + iVar20);
  }
  else {
    local_e8 = CONCAT44(iStack_88,iStack_8c);
    local_e0[0] = uStack_9c;
    local_e0[1] = iStack_98;
    local_e0[2] = iStack_94;
    local_e0[3] = local_90;
    local_e0[8] = iStack_ac;
    iStack_bc = iStack_a8;
    iStack_b8 = iStack_a4;
    iStack_b4 = local_a0;
  }
  local_110 = local_80;
  iStack_10c = iStack_7c;
  iStack_108 = iStack_78;
  iStack_104 = iStack_74;
  if (((*(byte *)((int)this + 0x5948) & 4) != 0) &&
     (((local_160 == 0 || (local_160 == 8)) && (*(char *)((int)this + 0xd983) != '\0')))) {
    FUN_10021487((int)this + 0x5894,(int)this + 0x58d4,(int)local_50);
    FUN_100214ed(local_50,(undefined4 *)((int)this + 0x4f10),'\0');
    *(undefined1 *)((int)this + 0xd983) = 0;
    *(undefined1 *)((int)this + 0xd981) = 1;
  }
  if ((local_160 == 5) || (local_160 == 0xd)) {
    bVar15 = 1;
  }
  else {
    bVar15 = 0;
  }
  bVar5 = *(byte *)((int)this + 0x595e);
  *(byte *)((int)this + 0x595e) = bVar15;
  *(byte *)((int)this + 0xd978) = *(byte *)((int)this + 0xd978) | bVar15 != bVar5;
  local_130 = param_2;
  local_12c = uVar23 == 0xff;
  iVar20 = FUN_100389e0((void *)((int)this + 0xda08),&local_130);
  uVar16 = local_128;
  if ((param_1 == 1) &&
     (((*(char *)((int)this + 0x5959) != '\0' && (*(int *)(param_2 + 4) != 0)) ||
      (*(char *)((int)this + 0x595a) != '\0')))) {
    local_16a = '\x01';
    local_168 = *(undefined4 **)(*(int *)((int)this + 0xd9c4) + 0x90 + (uint)bVar15 * 4);
  }
  else {
    local_16a = '\0';
    local_168 = (undefined4 *)iStack_84;
    if (iStack_84 != 0) goto LAB_10036208;
    local_168 = (undefined4 *)0x0;
  }
  switch(local_160) {
  case 6:
    local_110 = 1;
    iStack_10c = 0;
    iStack_108 = 0;
    iStack_104 = 0;
    local_168 = *(undefined4 **)(*(int *)((int)this + 0xd9c4) + 0x98);
    local_100 = 0;
    iStack_fc = 0;
    iStack_f8 = 0x3f;
    iStack_f4 = 0;
    local_120 = 0;
    break;
  case 7:
    local_110 = 1;
    iStack_10c = 0;
    iStack_108 = 0;
    iStack_104 = 0;
    local_168 = *(undefined4 **)(*(int *)((int)this + 0xd9c4) + 0x9c);
    local_100 = 0;
    iStack_fc = 0;
    iStack_f8 = 0x3f;
    iStack_f4 = 0;
    local_120 = 0;
    break;
  default:
    break;
  case 0xe:
    local_110 = 7;
    iStack_10c = 0;
    iStack_108 = 0;
    iStack_104 = 0;
    local_168 = *(undefined4 **)(*(int *)((int)this + 0xd9c4) + 0xa0);
    local_100 = 0;
    iStack_fc = 0;
    iStack_f8 = 0x3f;
    iStack_f4 = 0;
    local_120 = 0;
    break;
  case 0xf:
    local_110 = 7;
    iStack_10c = 0;
    iStack_108 = 0;
    iStack_104 = 0;
    local_168 = *(undefined4 **)(*(int *)((int)this + 0xd9c4) + 0xa4);
    local_100 = 0;
    iStack_fc = 0;
    iStack_f8 = 0x3f;
    iStack_f4 = 0;
    local_120 = 0;
  }
LAB_10036208:
  uVar23 = (0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50);
  puVar24 = &DAT_100b7f34;
  local_130 = CONCAT31(local_130._1_3_,uVar23 < param_7);
  local_124 = (undefined4 *)((0x1000 - *(int *)((int)this + 0x6c)) - *(int *)((int)this + 0x68));
  bVar26 = *(char *)((int)this + 0x5954) == '\0';
  if (bVar26) {
    puVar24 = &DAT_100b7f50;
  }
  puVar25 = &DAT_100b7efc;
  if (bVar26) {
    puVar25 = &DAT_100b7f18;
  }
  if ((((((*(char *)((int)this + 0x5955) != '\0') || (*(uint *)((int)this + 0x4cb0) != local_128))
        || (bVar14)) ||
       ((*(int *)((int)this + 0x6ec) != param_5 || (*(uint *)((int)this + 0x6a8) != param_6)))) ||
      (*(int *)((int)this + 0xdcd8) != param_4)) ||
     ((((*(int *)((int)this + 0xdc98) != param_3 || (*(int *)((int)this + 0xda74) != local_150)) ||
       (((((undefined4 *)*(int *)((int)this + 0xda84) != local_168 ||
          (((*(char *)((int)this + 0x595b) != local_16a ||
            (*(int *)((int)this + 0x5930) != *(int *)(param_2 + 4))) ||
           (*(int *)((int)this + 0xdaa4) != *(int *)(puVar25 + param_1 * 4))))) ||
         ((*(int *)((int)this + 0xdce0) != *(int *)(puVar24 + param_1 * 4) ||
          ((*(int *)((int)this + 0x6c) != 0) != (param_8 != 0))))) || (uVar23 < param_7)))) ||
      ((local_124 < param_8 || (*(int *)((int)this + 0xda9c) != iVar20)))))) {
    uVar17 = 0;
    if (param_3 == *(int *)((int)this + 0xd9d4)) {
      uVar17 = param_6;
    }
    FUN_10036ae0(this,uVar23 < param_7,local_124 < param_8,uVar17);
    if (param_3 == *(int *)((int)this + 0xd9d4)) {
      param_5 = *(int *)((int)this + 0x5c);
    }
    if (*(char *)((int)this + 0x5955) != '\0') {
      *(undefined1 *)((int)this + 0xd979) = 1;
      *(uint *)((int)this + 0xd974) = *(uint *)((int)this + 0xd974) | 1;
    }
    if (bVar14) {
      *(uint *)((int)this + 0x5214) = (uint)*(byte *)(param_2 + 0x4d);
      *(uint *)((int)this + 0x5224) = (uint)*(byte *)(param_2 + 0x55);
      *(uint *)((int)this + 0x5234) = (uint)*(byte *)(param_2 + 0x5d);
      *(uint *)((int)this + 0x5244) = (uint)*(byte *)(param_2 + 0x65);
      *(uint *)((int)this + 0x5254) = (uint)*(byte *)(param_2 + 0x6d);
      *(uint *)((int)this + 0x5264) = (uint)*(byte *)(param_2 + 0x75);
      *(uint *)((int)this + 0x5274) = (uint)*(byte *)(param_2 + 0x7d);
      *(uint *)((int)this + 0x5284) = (uint)*(byte *)(param_2 + 0x85);
      *(undefined1 *)((int)this + 0xd981) = 1;
    }
    if (*(uint *)((int)this + 0x4cb0) != uVar16) {
      *(uint *)((int)this + 0x4cb0) = uVar16;
      *(undefined1 *)((int)this + 0xd981) = 1;
    }
    if (*(uint *)((int)this + 0x6a8) != param_6) {
      *(uint *)((int)this + 0x6a8) = param_6;
      *(undefined1 *)((int)this + 0xd97f) = 1;
    }
    if (*(int *)((int)this + 0xdc98) != param_3) {
      *(int *)((int)this + 0xdc98) = param_3;
      *(undefined1 *)((int)this + 0xd97f) = 1;
    }
    if (*(int *)((int)this + 0x6ec) != param_5) {
      *(int *)((int)this + 0x6ec) = param_5;
      *(undefined1 *)((int)this + 0xd97f) = 1;
    }
    if (*(int *)((int)this + 0xdcd8) != param_4) {
      *(int *)((int)this + 0xdcd8) = param_4;
      *(undefined1 *)((int)this + 0xd980) = 1;
    }
    if (*(int *)((int)this + 0xda9c) != iVar20) {
      *(int *)((int)this + 0xda9c) = iVar20;
      *(undefined1 *)((int)this + 0xde59) = 1;
    }
    if ((undefined4 *)*(int *)((int)this + 0xda84) != local_168) {
      *(undefined4 **)((int)this + 0xda84) = local_168;
      if (local_168 == (undefined4 *)0x0) {
        local_120 = 0;
        *(undefined4 *)((int)this + 0xde00) = 0;
        *(undefined4 *)((int)this + 0xde04) = 0;
        *(undefined4 *)((int)this + 0xde08) = 0;
        *(undefined4 *)((int)this + 0xde0c) = 0;
        *(undefined4 *)((int)this + 0xde10) = 0;
        *(undefined4 *)((int)this + 0xde14) = 0;
        *(undefined4 *)((int)this + 0xde18) = 0;
        *(undefined4 *)((int)this + 0xde1c) = 0;
      }
      else {
        *(int *)((int)this + 0xde00) = local_110;
        *(int *)((int)this + 0xde04) = iStack_10c;
        *(int *)((int)this + 0xde08) = iStack_108;
        *(int *)((int)this + 0xde0c) = iStack_104;
        *(int *)((int)this + 0xde10) = local_100;
        *(int *)((int)this + 0xde14) = iStack_fc;
        *(int *)((int)this + 0xde18) = iStack_f8;
        *(int *)((int)this + 0xde1c) = iStack_f4;
      }
      *(undefined8 *)((int)this + 0xde20) = local_120;
      *(undefined1 *)((int)this + 0xde59) = 1;
    }
    if (*(int *)((int)this + 0xda74) != local_150) {
      *(uint *)((int)this + 0xda74) = local_150;
      *(undefined1 *)((int)this + 0xde59) = 1;
      *(uint *)((int)this + 0xddd8) = local_e0[8];
      *(int *)((int)this + 0xdddc) = iStack_bc;
      *(int *)((int)this + 0xdde0) = iStack_b8;
      *(int *)((int)this + 0xdde4) = iStack_b4;
      *(uint *)((int)this + 0xdde8) = local_e0[0];
      *(uint *)((int)this + 0xddec) = local_e0[1];
      *(uint *)((int)this + 0xddf0) = local_e0[2];
      *(uint *)((int)this + 0xddf4) = local_e0[3];
      *(undefined8 *)((int)this + 0xddf8) = local_e8;
    }
    if ((*(int *)((int)this + 0x5930) != *(int *)(param_2 + 4)) ||
       (*(char *)((int)this + 0x5955) != '\0')) {
      *(int *)((int)this + 0x5930) = *(int *)(param_2 + 4);
      *(undefined1 *)((int)this + 0xd97e) = 1;
    }
    if (*(int *)((int)this + 0xdce0) != *(int *)(puVar24 + param_1 * 4)) {
      *(int *)((int)this + 0xdce0) = *(int *)(puVar24 + param_1 * 4);
      *(undefined1 *)((int)this + 0xde58) = 1;
    }
    if (*(int *)((int)this + 0xdaa4) != *(int *)(puVar25 + param_1 * 4)) {
      *(int *)((int)this + 0xdaa4) = *(int *)(puVar25 + param_1 * 4);
      *(undefined1 *)((int)this + 0xde59) = 1;
    }
    if (*(char *)((int)this + 0x595b) != local_16a) {
      *(undefined1 *)((int)this + 0xd97d) = 1;
      *(char *)((int)this + 0x595b) = local_16a;
    }
    bVar15 = *(byte *)((int)this + 0x5955);
    *(byte *)((int)this + 0xd97c) = *(byte *)((int)this + 0xd97c) | bVar15;
    *(byte *)((int)this + 0xd97b) = *(byte *)((int)this + 0xd97b) | bVar15;
    *(byte *)((int)this + 0xd97d) = *(byte *)((int)this + 0xd97d) | bVar15;
    *(byte *)((int)this + 0xd978) = *(byte *)((int)this + 0xd978) | bVar15;
    if (bVar15 != 0) {
      iVar20 = 0x578;
      if ((*(byte *)((int)this + 0x5948) & 1) == 0) {
        iVar20 = 0x590;
      }
      pfVar21 = (float *)(iVar20 + (int)this);
      *(undefined1 *)((int)this + 0x5955) = 0;
      fVar30 = 2.0 / pfVar21[2];
      fVar28 = (*pfVar21 * -2.0) / pfVar21[2] - 1.0;
      fVar29 = -2.0 / pfVar21[3];
      fVar27 = (pfVar21[1] + pfVar21[1]) / pfVar21[3] + 1.0;
      if ((((fVar30 != *(float *)((int)this + 0x4cc0)) || (fVar29 != *(float *)((int)this + 0x4cc4))
           ) || (fVar28 != *(float *)((int)this + 0x4cc8))) ||
         (fVar27 != *(float *)((int)this + 0x4ccc))) {
        *(float *)((int)this + 0x4cc0) = fVar30;
        *(float *)((int)this + 0x4cc4) = fVar29;
        *(float *)((int)this + 0x4cc8) = fVar28;
        *(float *)((int)this + 0x4ccc) = fVar27;
        *(undefined1 *)((int)this + 0xd981) = 1;
      }
    }
  }
  return;
}

