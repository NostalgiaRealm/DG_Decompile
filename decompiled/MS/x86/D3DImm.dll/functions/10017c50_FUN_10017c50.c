/*
 * FUN_10017c50 at 10017c50
 * undefined __thiscall FUN_10017c50(void * this, int param_1, uint * param_2, int param_3, int param_4, int param_5, int param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 10017c50-1001876e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10017c50(void *this,int param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6,
            uint param_7,uint param_8,byte param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int *piVar19;
  undefined *puVar20;
  float *pfVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint local_9c;
  uint local_98;
  uint local_84;
  undefined *local_80;
  int local_6c;
  uint local_68;
  int local_64;
  uint *local_5c;
  uint local_58;
  undefined1 local_54;
  float local_50 [19];
  
  if ((char)param_2[7] == -1) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)*(byte *)((int)param_2 + 0x1d);
  }
  uVar23 = *(uint *)((int)this + 0x18f0);
  if (uVar16 <= *(uint *)((int)this + 0x18f0)) {
    uVar23 = uVar16;
  }
  local_98 = (uint)((char)param_2[0xf] != -1);
  if ((char)param_2[0x11] != -1) {
    local_98 = local_98 | 2;
  }
  if ((char)param_2[0xb] != -1) {
    local_98 = local_98 | 4;
  }
  if ((char)param_2[0x13] != -1) {
    local_98 = local_98 | 8;
  }
  if ((char)param_2[0x15] != -1) {
    local_98 = local_98 | 0x10;
  }
  if ((char)param_2[0x17] != -1) {
    local_98 = local_98 | 0x20;
  }
  if ((char)param_2[0x19] != -1) {
    local_98 = local_98 | 0x40;
  }
  if ((char)param_2[0x1b] != -1) {
    local_98 = local_98 | 0x80;
  }
  if ((char)param_2[0x1d] != -1) {
    local_98 = local_98 | 0x100;
  }
  if ((char)param_2[0x1f] != -1) {
    local_98 = local_98 | 0x200;
  }
  if ((char)param_2[0x21] != -1) {
    local_98 = local_98 | 0x400;
  }
  if ((char)param_2[7] != -1) {
    local_98 = local_98 | *(uint *)(&DAT_1005e900 + uVar23 * 4);
  }
  bVar13 = false;
  uVar16 = 0;
  do {
    if (*(uint *)((int)this + uVar16 * 0x10 + 0xf24) !=
        (uint)*(byte *)((int)param_2 + uVar16 * 8 + 0x4d)) {
      bVar13 = true;
      break;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < 8);
  if (param_2[1] == 0) {
    local_9c = 6;
    if (*(char *)((int)this + 0x1907) == '\0') {
      local_9c = 0;
    }
  }
  else {
    if (((*(byte *)((int)this + 0x18f8) & 4) == 0) || (*(int *)((int)this + 0x18f4) == 0)) {
      uVar16 = 0;
    }
    else {
      uVar16 = 2;
    }
    local_9c = uVar16 + 2;
    uVar16 = uVar16 | 1;
    if ((*(char *)((int)this + 0x78) != '\0') && (*(char *)((int)this + 0x1903) == '\0')) {
      uVar23 = 0;
      if (*(uint *)((int)this + 0x444) != 0) {
        for (; (*(uint *)((int)this + 0x444) >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
        }
      }
      if (uVar23 < 5) {
        local_9c = 5;
      }
    }
    if (*(char *)((int)this + 0xc) == '\0') {
      if (param_9 != 0) {
        uVar16 = local_9c;
      }
LAB_10017ddc:
      local_9c = uVar16;
    }
    else if (((char)param_2[0xb] == -1) || (param_9 == 0)) goto LAB_10017ddc;
    if (((local_98 & 0x7800) != 0) || (*(char *)((int)this + 0x1907) != '\0')) {
      local_9c = local_9c + 6;
    }
  }
  if (*(char *)((int)this + 0x1d4a) != '\0') {
    FUN_100291d0((int)this);
  }
  local_6c = 0;
  local_64 = 0;
  if (bVar13) {
    *(uint *)((int)this + 0x44c) =
         ((((((uint)(*(byte *)((int)param_2 + 0x85) | *(byte *)((int)param_2 + 0x7d)) << 3 |
             (uint)*(byte *)((int)param_2 + 0x75)) << 3 | (uint)*(byte *)((int)param_2 + 0x6d)) << 3
           | (uint)*(byte *)((int)param_2 + 0x65)) << 3 | (uint)*(byte *)((int)param_2 + 0x5d)) << 3
         | (uint)*(byte *)((int)param_2 + 0x55)) << 3 | (uint)*(byte *)((int)param_2 + 0x4d);
  }
  if (*(int *)(*(int *)((int)this + 0x1d58) + 0xe4 + local_9c * 4) != 0) {
    local_68 = 0;
    goto LAB_100181af;
  }
  local_68 = 0;
  if ((*(byte *)((int)this + 0x18f8) & 4) != 0) {
    local_68 = *(uint *)((int)this + 0x18f4);
  }
  bVar15 = FUN_10029020((int)this);
  *(uint *)((int)this + 0x48c) =
       *(uint *)((int)this + 0x48c) & 0x7fd00000 | (uint)param_9 << 0x1f | local_98 & 0xfffff;
  FUN_1001a59b((undefined4 *)((int)this + 0x448),bVar15,(uint *)local_50);
  uVar16 = FUN_1001a844((void *)((int)this + 0x1dbc),(int)local_50);
  if (uVar16 == *(uint *)((int)this + 0x1dc4)) {
LAB_10017f67:
    puVar17 = (undefined4 *)FUN_1005c755(0x124);
    if (puVar17 == (undefined4 *)0x0) goto LAB_100181af;
    uVar3 = *(undefined1 *)((int)this + 0x1db8);
    uVar5 = *(undefined4 *)((int)this + 0x1db4);
    uVar6 = *(undefined4 *)((int)this + 0x1db0);
    *puVar17 = &PTR_LAB_1005eb38;
    puVar17[3] = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    puVar17[4] = &PTR_FUN_1005effc;
    uVar10 = *(undefined4 *)((int)this + 0x44c);
    uVar11 = *(undefined4 *)((int)this + 0x450);
    uVar12 = *(undefined4 *)((int)this + 0x454);
    puVar17[6] = *(undefined4 *)((int)this + 0x448);
    puVar17[7] = uVar10;
    puVar17[8] = uVar11;
    puVar17[9] = uVar12;
    uVar10 = *(undefined4 *)((int)this + 0x45c);
    uVar11 = *(undefined4 *)((int)this + 0x460);
    uVar12 = *(undefined4 *)((int)this + 0x464);
    puVar17[10] = *(undefined4 *)((int)this + 0x458);
    puVar17[0xb] = uVar10;
    puVar17[0xc] = uVar11;
    puVar17[0xd] = uVar12;
    uVar10 = *(undefined4 *)((int)this + 0x46c);
    uVar11 = *(undefined4 *)((int)this + 0x470);
    uVar12 = *(undefined4 *)((int)this + 0x474);
    puVar17[0xe] = *(undefined4 *)((int)this + 0x468);
    puVar17[0xf] = uVar10;
    puVar17[0x10] = uVar11;
    puVar17[0x11] = uVar12;
    uVar10 = *(undefined4 *)((int)this + 0x47c);
    uVar11 = *(undefined4 *)((int)this + 0x480);
    uVar12 = *(undefined4 *)((int)this + 0x484);
    puVar17[0x12] = *(undefined4 *)((int)this + 0x478);
    puVar17[0x13] = uVar10;
    puVar17[0x14] = uVar11;
    puVar17[0x15] = uVar12;
    *(undefined8 *)(puVar17 + 0x16) = *(undefined8 *)((int)this + 0x488);
    *puVar17 = &PTR_FUN_1005eb40;
    *(undefined1 *)(puVar17 + 0x48) = uVar3;
    puVar17[0x18] = 0;
    puVar17[0x19] = 0;
    puVar17[0x1a] = 0;
    puVar17[0x1b] = 0;
    puVar17[1] = uVar6;
    puVar17[2] = uVar5;
    puVar17[3] = puVar17 + 0x18;
    uVar23 = FUN_1001a844((void *)((int)this + 0x1dbc),(int)local_50);
    uVar16 = *(uint *)((int)this + 0x1dc4);
    if (uVar23 == uVar16) {
LAB_10018079:
      uVar24 = *(uint *)((int)this + 0x1dc8);
      if (uVar24 == uVar16) {
        if (uVar24 == 0) {
          iVar26 = 0x10;
        }
        else {
          iVar26 = uVar24 * 2;
        }
        iVar18 = FUN_1005c789(iVar26 * 0x28);
        if (iVar18 != 0) {
          uVar16 = 0;
          if (*(int *)((int)this + 0x1dc4) != 0) {
            do {
              iVar7 = *(int *)((int)this + 0x1dc0);
              uVar24 = uVar16 + 1;
              puVar1 = (undefined4 *)(iVar7 + uVar16 * 0x28);
              uVar5 = puVar1[1];
              uVar6 = puVar1[2];
              uVar10 = puVar1[3];
              puVar2 = (undefined4 *)(iVar18 + uVar16 * 0x28);
              *puVar2 = *puVar1;
              puVar2[1] = uVar5;
              puVar2[2] = uVar6;
              puVar2[3] = uVar10;
              puVar1 = (undefined4 *)(iVar7 + 0x10 + uVar16 * 0x28);
              uVar5 = puVar1[1];
              uVar6 = puVar1[2];
              uVar10 = puVar1[3];
              puVar2 = (undefined4 *)(iVar18 + 0x10 + uVar16 * 0x28);
              *puVar2 = *puVar1;
              puVar2[1] = uVar5;
              puVar2[2] = uVar6;
              puVar2[3] = uVar10;
              *(undefined8 *)(iVar18 + 0x20 + uVar16 * 0x28) =
                   *(undefined8 *)(iVar7 + 0x20 + uVar16 * 0x28);
              uVar16 = uVar24;
            } while (uVar24 < *(uint *)((int)this + 0x1dc4));
          }
          thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1dbc));
          *(int *)((int)this + 0x1dbc) = iVar18;
          *(int *)((int)this + 0x1dc0) = iVar18;
          *(int *)((int)this + 0x1dc8) = iVar26;
        }
      }
      uVar16 = *(uint *)((int)this + 0x1dc4);
      if (*(uint *)((int)this + 0x1dc8) != uVar16) {
        for (; uVar23 < uVar16; uVar16 = uVar16 - 1) {
          iVar26 = *(int *)((int)this + 0x1dc0);
          puVar2 = (undefined4 *)(iVar26 + -0x28 + uVar16 * 0x28);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar10 = puVar2[3];
          puVar1 = (undefined4 *)(iVar26 + uVar16 * 0x28);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar10;
          puVar1 = (undefined4 *)(iVar26 + -0x18 + uVar16 * 0x28);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar10 = puVar1[3];
          puVar2 = (undefined4 *)(iVar26 + 0x10 + uVar16 * 0x28);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar10;
          *(undefined8 *)(iVar26 + 0x20 + uVar16 * 0x28) =
               *(undefined8 *)(iVar26 + -8 + uVar16 * 0x28);
        }
        *(int *)((int)this + 0x1dc4) = *(int *)((int)this + 0x1dc4) + 1;
        iVar26 = *(int *)((int)this + 0x1dc0);
        pfVar21 = (float *)(iVar26 + uVar23 * 0x28);
        *pfVar21 = local_50[0];
        pfVar21[1] = local_50[1];
        pfVar21[2] = local_50[2];
        pfVar21[3] = local_50[3];
        puVar1 = (undefined4 *)(iVar26 + 0x10 + uVar23 * 0x28);
        *puVar1 = local_50[4];
        puVar1[1] = local_50[5];
        puVar1[2] = local_50[6];
        puVar1[3] = local_50[7];
        *(undefined4 **)(*(int *)((int)this + 0x1dc0) + 0x20 + uVar23 * 0x28) = puVar17;
      }
    }
    else {
      uVar16 = 0;
      iVar26 = *(int *)((int)this + 0x1dc0) + uVar23 * 0x28;
      do {
        if ((*(float *)(iVar26 + uVar16 * 8) != local_50[uVar16 * 2]) ||
           (*(float *)(iVar26 + 4 + uVar16 * 8) != local_50[uVar16 * 2 + 1])) {
          uVar16 = *(uint *)((int)this + 0x1dc4);
          goto LAB_10018079;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < 4);
      *(undefined4 **)(*(int *)((int)this + 0x1dc0) + 0x20 + uVar23 * 0x28) = puVar17;
    }
  }
  else {
    uVar23 = 0;
    iVar26 = *(int *)((int)this + 0x1dc0) + uVar16 * 0x28;
    do {
      if ((*(float *)(iVar26 + uVar23 * 8) != local_50[uVar23 * 2]) ||
         (*(float *)(iVar26 + 4 + uVar23 * 8) != local_50[uVar23 * 2 + 1])) goto LAB_10017f67;
      uVar23 = uVar23 + 1;
    } while (uVar23 < 4);
    puVar17 = (undefined4 *)(*(int *)((int)this + 0x1dc0) + (uVar16 * 5 + 4) * 8);
    if (puVar17 == (undefined4 *)0x0) goto LAB_10017f67;
    puVar17 = (undefined4 *)*puVar17;
  }
  piVar19 = (int *)FUN_1001a348(puVar17,local_68,0);
  if (piVar19 != (int *)0x0) {
    local_6c = *piVar19;
    local_64 = piVar19[1];
  }
LAB_100181af:
  if (((*(byte *)((int)this + 0x18f8) & 4) != 0) &&
     (((local_9c == 0 || (local_9c == 6)) && (*(char *)((int)this + 0x1d43) != '\0')))) {
    FUN_100138c3((int)this + 0x1844,(int)this + 0x1884,(int)local_50);
    FUN_10013929(local_50,(undefined4 *)((int)this + 0xbf0),'\0');
    *(undefined1 *)((int)this + 0x1d43) = 0;
    *(undefined1 *)((int)this + 0x1d41) = 1;
  }
  if (local_6c == 0) {
    local_6c = *(int *)(*(int *)((int)this + 0x1d58) + 0xe4 + local_9c * 4);
    local_58 = local_9c;
  }
  else {
    local_58 = 0xc;
  }
  if ((local_9c == 5) || (local_9c == 0xb)) {
    cVar22 = '\x01';
  }
  else {
    cVar22 = '\0';
  }
  cVar4 = *(char *)((int)this + 0x191b);
  *(char *)((int)this + 0x191b) = cVar22;
  piVar19 = (int *)((int)this + 0x1d94);
  *(byte *)((int)this + 0x1d38) = *(byte *)((int)this + 0x1d38) | cVar22 != cVar4;
  uVar23 = *param_2;
  uVar24 = *(uint *)((int)this + 0x1d9c);
  uVar16 = 0;
  uVar25 = 0;
  local_5c = param_2;
  local_54 = 0;
  local_84 = uVar24;
  if (uVar24 != 0) {
    do {
      uVar16 = local_84 + uVar25 >> 1;
      uVar8 = *(uint *)(*piVar19 + uVar16 * 0x18);
      uVar9 = *(uint *)(*piVar19 + 4 + uVar16 * 0x18);
      if ((uVar9 < local_58) || ((uVar14 = uVar16, uVar9 == local_58 && (uVar8 <= uVar23)))) {
        if ((local_58 < uVar9) || ((local_58 <= uVar9 && (uVar23 <= uVar8)))) break;
        uVar16 = uVar16 + 1;
        uVar25 = uVar16;
        uVar14 = local_84;
      }
      local_84 = uVar14;
    } while (local_84 != uVar25);
  }
  iVar26 = uVar16 * 0x18;
  if (((uVar16 == uVar24) || (*(uint *)(iVar26 + *piVar19) != uVar23)) ||
     (*(uint *)(iVar26 + 4 + *piVar19) != local_58)) {
    FUN_100190b0((void *)((int)this + 0x1d94),uVar16,uVar23,local_58,(int *)&local_5c);
  }
  iVar26 = *(int *)(iVar26 + 0x14 + *(int *)((int)this + 0x1d94));
  uVar16 = (0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50);
  uVar23 = (0x1000 - *(int *)((int)this + 0x6c)) - *(int *)((int)this + 0x68);
  local_80 = &DAT_10061174;
  puVar20 = &DAT_10061158;
  if (*(char *)((int)this + 0x1904) == '\0') {
    puVar20 = local_80;
  }
  if ((((((*(char *)((int)this + 0x1905) != '\0') || (*(uint *)((int)this + 0x990) != local_98)) ||
        ((bVar13 ||
         ((*(int *)((int)this + 0x4f4) != param_5 || (*(int *)((int)this + 0x4b0) != param_6))))))
       || (*(int *)((int)this + 0x1f38) != param_4)) ||
      ((((*(int *)((int)this + 0x1ef8) != param_3 || (*(int *)((int)this + 0x1eec) != local_6c)) ||
        (*(uint *)((int)this + 0x18e0) != param_2[1])) ||
       ((*(int *)((int)this + 0x1f4c) != *(int *)(puVar20 + param_1 * 4) ||
        ((*(int *)((int)this + 0x6c) != 0) != (param_8 != 0))))))) ||
     ((uVar16 < param_7 || ((uVar23 < param_8 || (*(int *)((int)this + 0x1ee8) != iVar26)))))) {
    iVar18 = 0;
    if (param_3 == *(int *)((int)this + 0x1d74)) {
      iVar18 = param_6;
    }
    FUN_10017820(this,uVar16 < param_7,uVar23 < param_8,iVar18);
    if (param_3 == *(int *)((int)this + 0x1d74)) {
      param_5 = *(int *)((int)this + 0x5c);
    }
    if (*(char *)((int)this + 0x1905) != '\0') {
      *(undefined1 *)((int)this + 0x1d39) = 1;
      *(uint *)((int)this + 0x1d34) = *(uint *)((int)this + 0x1d34) | 1;
    }
    if (bVar13) {
      *(uint *)((int)this + 0xf24) = (uint)*(byte *)((int)param_2 + 0x4d);
      *(uint *)((int)this + 0xf34) = (uint)*(byte *)((int)param_2 + 0x55);
      *(uint *)((int)this + 0xf44) = (uint)*(byte *)((int)param_2 + 0x5d);
      *(uint *)((int)this + 0xf54) = (uint)*(byte *)((int)param_2 + 0x65);
      *(uint *)((int)this + 0xf64) = (uint)*(byte *)((int)param_2 + 0x6d);
      *(uint *)((int)this + 0xf74) = (uint)*(byte *)((int)param_2 + 0x75);
      *(uint *)((int)this + 0xf84) = (uint)*(byte *)((int)param_2 + 0x7d);
      *(uint *)((int)this + 0xf94) = (uint)*(byte *)((int)param_2 + 0x85);
      *(undefined1 *)((int)this + 0x1d41) = 1;
    }
    if (*(uint *)((int)this + 0x990) != local_98) {
      *(uint *)((int)this + 0x990) = local_98;
      *(undefined1 *)((int)this + 0x1d41) = 1;
    }
    if (*(int *)((int)this + 0x4b0) != param_6) {
      *(int *)((int)this + 0x4b0) = param_6;
      *(undefined1 *)((int)this + 0x1d3f) = 1;
    }
    if (*(int *)((int)this + 0x1ef8) != param_3) {
      *(int *)((int)this + 0x1ef8) = param_3;
      *(undefined1 *)((int)this + 0x1d3f) = 1;
    }
    if (*(int *)((int)this + 0x4f4) != param_5) {
      *(int *)((int)this + 0x4f4) = param_5;
      *(undefined1 *)((int)this + 0x1d3f) = 1;
    }
    if (*(int *)((int)this + 0x1f38) != param_4) {
      *(int *)((int)this + 0x1f38) = param_4;
      *(undefined1 *)((int)this + 0x1d40) = 1;
    }
    if (*(int *)((int)this + 0x1ee8) != iVar26) {
      *(int *)((int)this + 0x1ee8) = iVar26;
      *(undefined1 *)((int)this + 0x2270) = 1;
    }
    if (*(int *)((int)this + 0x1ef4) != local_64) {
      *(int *)((int)this + 0x1ef4) = local_64;
      *(undefined1 *)((int)this + 0x2270) = 1;
    }
    if (*(int *)((int)this + 0x1eec) != local_6c) {
      iVar26 = *(int *)((int)this + 0x1d58);
      *(int *)((int)this + 0x1eec) = local_6c;
      if ((((local_6c == *(int *)(iVar26 + 0xf4)) || (local_6c == *(int *)(iVar26 + 0xf0))) ||
          (local_6c == *(int *)(iVar26 + 0x10c))) || (local_6c == *(int *)(iVar26 + 0x108))) {
        local_68 = local_68 | 0x3f;
      }
      *(undefined1 *)((int)this + 0x2270) = 1;
      *(uint *)((int)this + 0x1f50) = local_68 & 0x3f;
    }
    if ((*(uint *)((int)this + 0x18e0) != param_2[1]) || (*(char *)((int)this + 0x1905) != '\0')) {
      *(uint *)((int)this + 0x18e0) = param_2[1];
      *(undefined1 *)((int)this + 0x1d3e) = 1;
    }
    if (*(int *)((int)this + 0x1f4c) != *(int *)(puVar20 + param_1 * 4)) {
      *(int *)((int)this + 0x1f4c) = *(int *)(puVar20 + param_1 * 4);
      *(undefined1 *)((int)this + 0x2270) = 1;
    }
    bVar15 = *(byte *)((int)this + 0x1905);
    *(byte *)((int)this + 0x1d3c) = *(byte *)((int)this + 0x1d3c) | bVar15;
    *(byte *)((int)this + 0x1d3b) = *(byte *)((int)this + 0x1d3b) | bVar15;
    *(byte *)((int)this + 0x1d3d) = *(byte *)((int)this + 0x1d3d) | bVar15;
    *(byte *)((int)this + 0x1d38) = *(byte *)((int)this + 0x1d38) | bVar15;
    if (bVar15 != 0) {
      iVar26 = 900;
      if ((*(byte *)((int)this + 0x18f8) & 1) == 0) {
        iVar26 = 0x39c;
      }
      pfVar21 = (float *)(iVar26 + (int)this);
      *(undefined1 *)((int)this + 0x1905) = 0;
      fVar30 = 2.0 / pfVar21[2];
      fVar28 = (*pfVar21 * -2.0) / pfVar21[2] - 1.0;
      fVar29 = -2.0 / pfVar21[3];
      fVar27 = (pfVar21[1] + pfVar21[1]) / pfVar21[3] + 1.0;
      if (((fVar30 != *(float *)((int)this + 0x9a0)) || (fVar29 != *(float *)((int)this + 0x9a4)))
         || ((fVar28 != *(float *)((int)this + 0x9a8) || (fVar27 != *(float *)((int)this + 0x9ac))))
         ) {
        *(float *)((int)this + 0x9a0) = fVar30;
        *(float *)((int)this + 0x9a4) = fVar29;
        *(float *)((int)this + 0x9a8) = fVar28;
        *(float *)((int)this + 0x9ac) = fVar27;
        *(undefined1 *)((int)this + 0x1d41) = 1;
      }
    }
  }
  return;
}

