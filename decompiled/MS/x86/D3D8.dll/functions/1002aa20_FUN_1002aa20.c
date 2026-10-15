/*
 * FUN_1002aa20 at 1002aa20
 * undefined __thiscall FUN_1002aa20(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 1002aa20-1002b713
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002aa20(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            uint param_7,uint param_8,byte param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  undefined *puVar22;
  float *pfVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  char local_90;
  uint local_8c;
  uint local_84;
  uint local_80;
  undefined4 *local_7c;
  int local_74;
  byte *local_70;
  uint local_6c;
  undefined8 local_68;
  undefined1 local_60;
  int local_58;
  uint local_54;
  float local_50 [19];
  
  if (*(char *)(param_2 + 0x1c) == -1) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)*(byte *)(param_2 + 0x1d);
  }
  uVar21 = *(uint *)((int)this + 0x5940);
  uVar17 = uVar21;
  if (uVar16 <= uVar21) {
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
  if ((*(int *)((int)this + 0x5290) == 0) || (uVar21 == 0)) {
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
  local_54 = uVar16 | -(uint)(*(int *)(param_2 + 4) != 0) & 0x40000;
  if (((*(int *)((int)this + 0xda44) < 0xb000) ||
      (((param_1 != 4 && (param_1 != 5)) && (param_1 != 6)))) ||
     (bVar14 = true, *(float *)((int)this + 0x570) < 2.0)) {
    bVar14 = false;
  }
  uVar17 = *(uint *)((int)this + 0x4cd8);
  bVar13 = false;
  local_8c = 0;
  do {
    if (*(uint *)((int)this + local_8c * 0x10 + 0x5214) !=
        (uint)*(byte *)(param_2 + 0x4d + local_8c * 8)) {
      bVar13 = true;
      break;
    }
    local_8c = local_8c + 1;
  } while (local_8c < 8);
  if (*(int *)(param_2 + 4) == 0) {
    local_84 = 8;
    if (*(char *)((int)this + 0x5957) == '\0') {
      local_84 = 0;
    }
  }
  else {
    if (((*(byte *)((int)this + 0x5948) & 4) == 0) || (*(int *)((int)this + 0x5944) == 0)) {
      uVar24 = 0;
    }
    else {
      uVar24 = 2;
    }
    local_84 = uVar24 + 2;
    uVar24 = uVar24 | 1;
    if (((*(int *)((int)this + 0xda2c) == 0) && (*(char *)((int)this + 0x80) != '\0')) &&
       (*(char *)((int)this + 0x5953) == '\0')) {
      uVar8 = 0;
      if (*(uint *)((int)this + 0x638) != 0) {
        for (; (*(uint *)((int)this + 0x638) >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      local_68 = local_68 & 0xffffffff00000000;
      if (uVar8 < 5) {
        local_84 = 5;
      }
    }
    if (bVar14) {
      local_84 = 7;
      uVar24 = 6;
    }
    if (*(char *)((int)this + 0xc) == '\0') {
      if (param_9 != 0) {
        uVar24 = local_84;
      }
LAB_1002ac67:
      local_84 = uVar24;
    }
    else if ((*(char *)(param_2 + 0x2c) == -1) || (param_9 == 0)) goto LAB_1002ac67;
    if (((uVar16 & 0xf800) == 0) && (*(char *)((int)this + 0x5957) == '\0')) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12 || uVar21 == 0xff) {
      local_84 = local_84 + 8;
    }
  }
  *(uint *)((int)this + 0x6a0) = *(uint *)((int)this + 0x6a0) & 0xfbffffff;
  *(undefined4 *)((int)this + 0x6a4) = *(undefined4 *)((int)this + 0x6a4);
  if (*(char *)((int)this + 0xd9aa) != '\0') {
    FUN_10041810((int)this);
  }
  local_58 = 0;
  local_74 = 0;
  local_68 = 0;
  if (bVar13) {
    *(uint *)((int)this + 0x640) =
         ((((((uint)(*(byte *)(param_2 + 0x85) | *(byte *)(param_2 + 0x7d)) << 3 |
             (uint)*(byte *)(param_2 + 0x75)) << 3 | (uint)*(byte *)(param_2 + 0x6d)) << 3 |
           (uint)*(byte *)(param_2 + 0x65)) << 3 | (uint)*(byte *)(param_2 + 0x5d)) << 3 |
         (uint)*(byte *)(param_2 + 0x55)) << 3 | (uint)*(byte *)(param_2 + 0x4d);
  }
  if (*(int *)(*(int *)((int)this + 0xd9b8) + 0xd4 + local_84 * 4) == 0) {
    uVar16 = *(uint *)((int)this + 0x4cdc);
    if (((uVar16 & 1) == 0) || (bVar12 = true, *(char *)((int)this + 0x574) != '\0')) {
      bVar12 = false;
    }
    local_80 = 0;
    local_6c = 0;
    if ((*(byte *)((int)this + 0x5948) & 4) != 0) {
      local_6c = *(uint *)((int)this + 0x5944);
    }
    if (bVar14) {
      uVar24 = local_6c | 0x100;
      if ((uVar16 & 2) != 0) {
        uVar24 = local_6c | 0x300;
      }
      if ((uVar16 & 4) != 0) {
        uVar24 = uVar24 | 0x400;
      }
      if (bVar12) {
        uVar24 = uVar24 | 0x800;
      }
      local_80 = uVar17 >> 0x14;
      local_6c = uVar24 | uVar17 << 0xc;
    }
    if (*(int *)((int)this + 0xda2c) == 0) {
      bVar15 = FUN_10041660((int)this);
    }
    else {
      bVar15 = *(byte *)(*(int *)(*(int *)((int)this + 0xda2c) + 4) + 0x124);
    }
    local_68 = CONCAT44(local_68._4_4_,(void *)((int)this + 0x63c));
    uVar16 = 0;
    if (uVar21 == 0xff) {
      uVar16 = 0x200000;
    }
    *(uint *)((int)this + 0x680) =
         *(uint *)((int)this + 0x680) & 0x7fd00000 | uVar16 | (uint)param_9 << 0x1f |
         local_54 & 0xfffff;
    FUN_1002eac6((void *)((int)this + 0x63c),bVar15,(uint *)local_50);
    uVar16 = FUN_1002ee4e((void *)((int)this + 0xda1c),(int)local_50);
    if (uVar16 == *(uint *)((int)this + 0xda24)) {
LAB_1002aecf:
      local_7c = (undefined4 *)FUN_100ad475(0x124);
      if (local_7c == (undefined4 *)0x0) goto LAB_1002b11b;
      uVar3 = *(undefined1 *)((int)this + 0xda18);
      uVar5 = *(undefined4 *)((int)this + 0xda14);
      uVar6 = *(undefined4 *)((int)this + 0xda10);
      *local_7c = &PTR_LAB_100b2198;
      local_7c[3] = 0;
      local_7c[1] = 0;
      local_7c[2] = 0;
      local_7c[4] = &PTR_FUN_100b278c;
      uVar9 = ((undefined4 *)local_68)[1];
      uVar10 = ((undefined4 *)local_68)[2];
      uVar11 = ((undefined4 *)local_68)[3];
      local_7c[6] = *(undefined4 *)local_68;
      local_7c[7] = uVar9;
      local_7c[8] = uVar10;
      local_7c[9] = uVar11;
      uVar9 = ((undefined4 *)local_68)[5];
      uVar10 = ((undefined4 *)local_68)[6];
      uVar11 = ((undefined4 *)local_68)[7];
      local_7c[10] = ((undefined4 *)local_68)[4];
      local_7c[0xb] = uVar9;
      local_7c[0xc] = uVar10;
      local_7c[0xd] = uVar11;
      uVar9 = ((undefined4 *)local_68)[9];
      uVar10 = ((undefined4 *)local_68)[10];
      uVar11 = ((undefined4 *)local_68)[0xb];
      local_7c[0xe] = ((undefined4 *)local_68)[8];
      local_7c[0xf] = uVar9;
      local_7c[0x10] = uVar10;
      local_7c[0x11] = uVar11;
      uVar9 = ((undefined4 *)local_68)[0xd];
      uVar10 = ((undefined4 *)local_68)[0xe];
      uVar11 = ((undefined4 *)local_68)[0xf];
      local_7c[0x12] = ((undefined4 *)local_68)[0xc];
      local_7c[0x13] = uVar9;
      local_7c[0x14] = uVar10;
      local_7c[0x15] = uVar11;
      *(undefined8 *)(local_7c + 0x16) = *(undefined8 *)((undefined4 *)local_68 + 0x10);
      *local_7c = &PTR_FUN_100b21a0;
      *(undefined1 *)(local_7c + 0x48) = uVar3;
      local_7c[0x18] = 0;
      local_7c[0x19] = 0;
      local_7c[0x1a] = 0;
      local_7c[0x1b] = 0;
      local_7c[1] = uVar6;
      local_7c[2] = uVar5;
      local_7c[3] = local_7c + 0x18;
      uVar17 = FUN_1002ee4e((void *)((int)this + 0xda1c),(int)local_50);
      uVar16 = *(uint *)((int)this + 0xda24);
      if (uVar17 == uVar16) {
LAB_1002afe3:
        uVar24 = *(uint *)((int)this + 0xda28);
        if (uVar24 == uVar16) {
          if (uVar24 == 0) {
            iVar20 = 0x10;
          }
          else {
            iVar20 = uVar24 * 2;
          }
          iVar18 = FUN_100ad4a9(iVar20 * 0x28);
          if (iVar18 != 0) {
            uVar16 = 0;
            if (*(int *)((int)this + 0xda24) != 0) {
              do {
                iVar7 = *(int *)((int)this + 0xda20);
                uVar24 = uVar16 + 1;
                puVar1 = (undefined4 *)(iVar7 + uVar16 * 0x28);
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar9 = puVar1[3];
                puVar2 = (undefined4 *)(iVar18 + uVar16 * 0x28);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                puVar2[2] = uVar6;
                puVar2[3] = uVar9;
                puVar1 = (undefined4 *)(iVar7 + 0x10 + uVar16 * 0x28);
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar9 = puVar1[3];
                puVar2 = (undefined4 *)(iVar18 + 0x10 + uVar16 * 0x28);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                puVar2[2] = uVar6;
                puVar2[3] = uVar9;
                *(undefined8 *)(iVar18 + 0x20 + uVar16 * 0x28) =
                     *(undefined8 *)(iVar7 + 0x20 + uVar16 * 0x28);
                uVar16 = uVar24;
              } while (uVar24 < *(uint *)((int)this + 0xda24));
            }
            thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0xda1c));
            *(int *)((int)this + 0xda1c) = iVar18;
            *(int *)((int)this + 0xda20) = iVar18;
            *(int *)((int)this + 0xda28) = iVar20;
          }
        }
        uVar16 = *(uint *)((int)this + 0xda24);
        if (*(uint *)((int)this + 0xda28) != uVar16) {
          for (; uVar17 < uVar16; uVar16 = uVar16 - 1) {
            iVar20 = *(int *)((int)this + 0xda20);
            puVar2 = (undefined4 *)(iVar20 + -0x28 + uVar16 * 0x28);
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar9 = puVar2[3];
            puVar1 = (undefined4 *)(iVar20 + uVar16 * 0x28);
            *puVar1 = *puVar2;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar9;
            puVar1 = (undefined4 *)(iVar20 + -0x18 + uVar16 * 0x28);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar9 = puVar1[3];
            puVar2 = (undefined4 *)(iVar20 + 0x10 + uVar16 * 0x28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar9;
            *(undefined8 *)(iVar20 + 0x20 + uVar16 * 0x28) =
                 *(undefined8 *)(iVar20 + -8 + uVar16 * 0x28);
          }
          *(int *)((int)this + 0xda24) = *(int *)((int)this + 0xda24) + 1;
          iVar20 = *(int *)((int)this + 0xda20);
          pfVar23 = (float *)(iVar20 + uVar17 * 0x28);
          *pfVar23 = local_50[0];
          pfVar23[1] = local_50[1];
          pfVar23[2] = local_50[2];
          pfVar23[3] = local_50[3];
          puVar1 = (undefined4 *)(iVar20 + 0x10 + uVar17 * 0x28);
          *puVar1 = local_50[4];
          puVar1[1] = local_50[5];
          puVar1[2] = local_50[6];
          puVar1[3] = local_50[7];
          *(undefined4 **)(*(int *)((int)this + 0xda20) + 0x20 + uVar17 * 0x28) = local_7c;
        }
      }
      else {
        uVar16 = 0;
        iVar20 = *(int *)((int)this + 0xda20) + uVar17 * 0x28;
        do {
          if ((*(float *)(iVar20 + uVar16 * 8) != local_50[uVar16 * 2]) ||
             (*(float *)(iVar20 + 4 + uVar16 * 8) != local_50[uVar16 * 2 + 1])) {
            uVar16 = *(uint *)((int)this + 0xda24);
            goto LAB_1002afe3;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < 4);
        *(undefined4 **)(*(int *)((int)this + 0xda20) + 0x20 + uVar17 * 0x28) = local_7c;
      }
    }
    else {
      uVar17 = 0;
      iVar20 = *(int *)((int)this + 0xda20) + uVar16 * 0x28;
      do {
        if ((*(float *)(iVar20 + uVar17 * 8) != local_50[uVar17 * 2]) ||
           (*(float *)(iVar20 + 4 + uVar17 * 8) != local_50[uVar17 * 2 + 1])) goto LAB_1002aecf;
        uVar17 = uVar17 + 1;
      } while (uVar17 < 4);
      local_7c = (undefined4 *)(*(int *)((int)this + 0xda20) + (uVar16 * 5 + 4) * 8);
      if (local_7c == (undefined4 *)0x0) goto LAB_1002aecf;
      local_7c = (undefined4 *)*local_7c;
    }
    piVar19 = (int *)FUN_1002e873(local_7c,local_6c,local_80);
    if (piVar19 != (int *)0x0) {
      local_58 = *piVar19;
      local_74 = piVar19[1];
    }
  }
  else {
    local_6c = 0;
  }
LAB_1002b11b:
  local_70 = (byte *)((int)this + 0x5948);
  if (((*local_70 & 4) != 0) &&
     (((local_84 == 0 || (local_84 == 8)) && (*(char *)((int)this + 0xd983) != '\0')))) {
    FUN_10021487((int)this + 0x5894,(int)this + 0x58d4,(int)local_50);
    FUN_100214ed(local_50,(undefined4 *)((int)this + 0x4f10),'\0');
    *(undefined1 *)((int)this + 0xd983) = 0;
    *(undefined1 *)((int)this + 0xd981) = 1;
  }
  if (local_58 == 0) {
    local_58 = *(int *)(*(int *)((int)this + 0xd9b8) + 0xd4 + local_84 * 4);
    uVar16 = local_84;
  }
  else {
    uVar16 = 0x10;
  }
  if ((local_84 == 5) || (local_84 == 0xd)) {
    bVar15 = 1;
  }
  else {
    bVar15 = 0;
  }
  bVar4 = *(byte *)((int)this + 0x595e);
  *(byte *)((int)this + 0x595e) = bVar15;
  *(byte *)((int)this + 0xd978) = *(byte *)((int)this + 0xd978) | bVar15 != bVar4;
  local_68 = CONCAT44(uVar16,param_2);
  local_60 = uVar21 == 0xff;
  iVar20 = FUN_1002c140((void *)((int)this + 0xd9f4),(int *)&local_68);
  uVar16 = local_54;
  if ((param_1 == 1) &&
     (((*(char *)((int)this + 0x5959) != '\0' && (*(int *)(param_2 + 4) != 0)) ||
      (*(char *)((int)this + 0x595a) != '\0')))) {
    local_90 = '\x01';
    local_74 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x118 + (uint)bVar15 * 4);
  }
  else {
    local_90 = '\0';
    if (local_74 != 0) goto switchD_1002b24f_caseD_8;
    local_74 = 0;
  }
  switch(local_84) {
  case 6:
    local_74 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x120);
    break;
  case 7:
    local_74 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x124);
    break;
  case 0xe:
    local_74 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x128);
    break;
  case 0xf:
    local_74 = *(int *)(*(int *)((int)this + 0xd9b8) + 300);
  }
switchD_1002b24f_caseD_8:
  uVar21 = (0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50);
  puVar22 = &DAT_100b7e68;
  uVar17 = (0x1000 - *(int *)((int)this + 0x6c)) - *(int *)((int)this + 0x68);
  local_68 = CONCAT71(local_68._1_7_,uVar17 < param_8);
  if (*(char *)((int)this + 0x5954) == '\0') {
    puVar22 = &DAT_100b7e84;
  }
  if (((((*(char *)((int)this + 0x5955) != '\0') || (*(uint *)((int)this + 0x4cb0) != local_54)) ||
       (bVar13)) ||
      ((*(int *)((int)this + 0x6ec) != param_5 || (*(int *)((int)this + 0x6a8) != param_6)))) ||
     (((*(int *)((int)this + 0xdbcc) != param_4 ||
       ((*(int *)((int)this + 0xdb8c) != param_3 || (*(int *)((int)this + 0xdb80) != local_58)))) ||
      ((*(int *)((int)this + 0xdb88) != local_74 ||
       (((((*(char *)((int)this + 0x595b) != local_90 ||
           (*(int *)((int)this + 0x5930) != *(int *)(param_2 + 4))) ||
          (*(int *)((int)this + 0xdbe0) != *(int *)(puVar22 + param_1 * 4))) ||
         (((*(int *)((int)this + 0x6c) != 0) != (param_8 != 0) || (uVar21 < param_7)))) ||
        ((uVar17 < param_8 || (*(int *)((int)this + 0xdb7c) != iVar20)))))))))) {
    iVar18 = 0;
    if (param_3 == *(int *)((int)this + 0xd9d4)) {
      iVar18 = param_6;
    }
    FUN_1002a5f0(this,uVar21 < param_7,uVar17 < param_8,iVar18);
    if (param_3 == *(int *)((int)this + 0xd9d4)) {
      param_5 = *(int *)((int)this + 0x5c);
    }
    if (*(char *)((int)this + 0x5955) != '\0') {
      *(undefined1 *)((int)this + 0xd979) = 1;
      *(uint *)((int)this + 0xd974) = *(uint *)((int)this + 0xd974) | 1;
    }
    if (bVar13) {
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
    if (*(int *)((int)this + 0x6a8) != param_6) {
      *(int *)((int)this + 0x6a8) = param_6;
      *(undefined1 *)((int)this + 0xd97f) = 1;
    }
    if (*(int *)((int)this + 0xdb8c) != param_3) {
      *(int *)((int)this + 0xdb8c) = param_3;
      *(undefined1 *)((int)this + 0xd97f) = 1;
    }
    if (*(int *)((int)this + 0x6ec) != param_5) {
      *(int *)((int)this + 0x6ec) = param_5;
      *(undefined1 *)((int)this + 0xd97f) = 1;
    }
    if (*(int *)((int)this + 0xdbcc) != param_4) {
      *(int *)((int)this + 0xdbcc) = param_4;
      *(undefined1 *)((int)this + 0xd980) = 1;
    }
    if (*(int *)((int)this + 0xdb7c) != iVar20) {
      *(int *)((int)this + 0xdb7c) = iVar20;
      *(undefined1 *)((int)this + 0xdf04) = 1;
    }
    iVar20 = *(int *)((int)this + 0xdb88);
    if (*(int *)((int)this + 0xdb88) != local_74) {
      *(int *)((int)this + 0xdb88) = local_74;
      *(undefined1 *)((int)this + 0xdf04) = 1;
      iVar20 = local_74;
    }
    if (*(int *)((int)this + 0xdb80) != local_58) {
      *(int *)((int)this + 0xdb80) = local_58;
      if (((iVar20 == 0) || (iVar20 == *(int *)(*(int *)((int)this + 0xd9b8) + 0x118))) ||
         (iVar20 == *(int *)(*(int *)((int)this + 0xd9b8) + 0x11c))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      iVar20 = *(int *)((int)this + 0xd9b8);
      if ((((local_58 == *(int *)(iVar20 + 0xe4)) || (local_58 == *(int *)(iVar20 + 0xe0))) ||
          (local_58 == *(int *)(iVar20 + 0x104))) ||
         ((local_58 == *(int *)(iVar20 + 0x100) || (bVar14)))) {
        local_6c = local_6c | 0x3f;
      }
      *(undefined1 *)((int)this + 0xdf04) = 1;
      *(uint *)((int)this + 0xdbe4) = local_6c & 0x3f;
    }
    if ((*(int *)((int)this + 0x5930) != *(int *)(param_2 + 4)) ||
       (*(char *)((int)this + 0x5955) != '\0')) {
      *(int *)((int)this + 0x5930) = *(int *)(param_2 + 4);
      *(undefined1 *)((int)this + 0xd97e) = 1;
    }
    if (*(int *)((int)this + 0xdbe0) != *(int *)(puVar22 + param_1 * 4)) {
      *(int *)((int)this + 0xdbe0) = *(int *)(puVar22 + param_1 * 4);
      *(undefined1 *)((int)this + 0xdf04) = 1;
    }
    if (*(char *)((int)this + 0x595b) != local_90) {
      *(undefined1 *)((int)this + 0xd97d) = 1;
      *(char *)((int)this + 0x595b) = local_90;
    }
    bVar15 = *(byte *)((int)this + 0x5955);
    *(byte *)((int)this + 0xd97c) = *(byte *)((int)this + 0xd97c) | bVar15;
    *(byte *)((int)this + 0xd97b) = *(byte *)((int)this + 0xd97b) | bVar15;
    *(byte *)((int)this + 0xd97d) = *(byte *)((int)this + 0xd97d) | bVar15;
    *(byte *)((int)this + 0xd978) = *(byte *)((int)this + 0xd978) | bVar15;
    if (bVar15 != 0) {
      *(undefined1 *)((int)this + 0x5955) = 0;
      iVar20 = 0x578;
      if ((*local_70 & 1) == 0) {
        iVar20 = 0x590;
      }
      pfVar23 = (float *)(iVar20 + (int)this);
      fVar28 = 2.0 / pfVar23[2];
      fVar26 = (*pfVar23 * -2.0) / pfVar23[2] - 1.0;
      fVar27 = -2.0 / pfVar23[3];
      fVar25 = (pfVar23[1] + pfVar23[1]) / pfVar23[3] + 1.0;
      if ((((fVar28 != *(float *)((int)this + 0x4cc0)) || (fVar27 != *(float *)((int)this + 0x4cc4))
           ) || (fVar26 != *(float *)((int)this + 0x4cc8))) ||
         (fVar25 != *(float *)((int)this + 0x4ccc))) {
        *(float *)((int)this + 0x4cc0) = fVar28;
        *(float *)((int)this + 0x4cc4) = fVar27;
        *(float *)((int)this + 0x4cc8) = fVar26;
        *(float *)((int)this + 0x4ccc) = fVar25;
        *(undefined1 *)((int)this + 0xd981) = 1;
      }
    }
  }
  return;
}

