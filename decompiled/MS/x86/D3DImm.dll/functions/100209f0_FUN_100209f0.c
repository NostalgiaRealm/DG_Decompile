/*
 * FUN_100209f0 at 100209f0
 * undefined __thiscall FUN_100209f0(void * this, int param_1, void * param_2, int param_3, int param_4, int param_5, uint param_6, void * param_7, uint param_8, byte param_9)
 * Address ranges: 100209f0-10021509
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100209f0(void *this,int param_1,void *param_2,int param_3,int param_4,int param_5,uint param_6,
            void *param_7,uint param_8,byte param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  byte bVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  float *pfVar19;
  char cVar20;
  uint uVar21;
  undefined *puVar22;
  undefined *puVar23;
  uint uVar24;
  void *pvVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint local_12c;
  uint local_128;
  int local_110;
  void *local_f4;
  undefined1 local_f0;
  uint local_ec;
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
  
  if (*(char *)((int)param_2 + 0x1c) == -1) {
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)*(byte *)((int)param_2 + 0x1d);
  }
  uVar21 = *(uint *)((int)this + 0x18f0);
  if (uVar14 <= *(uint *)((int)this + 0x18f0)) {
    uVar21 = uVar14;
  }
  local_12c = (uint)(*(char *)((int)param_2 + 0x3c) != -1);
  if (*(char *)((int)param_2 + 0x44) != -1) {
    local_12c = local_12c | 2;
  }
  if (*(char *)((int)param_2 + 0x2c) != -1) {
    local_12c = local_12c | 4;
  }
  if (*(char *)((int)param_2 + 0x4c) != -1) {
    local_12c = local_12c | 8;
  }
  if (*(char *)((int)param_2 + 0x54) != -1) {
    local_12c = local_12c | 0x10;
  }
  if (*(char *)((int)param_2 + 0x5c) != -1) {
    local_12c = local_12c | 0x20;
  }
  if (*(char *)((int)param_2 + 100) != -1) {
    local_12c = local_12c | 0x40;
  }
  if (*(char *)((int)param_2 + 0x6c) != -1) {
    local_12c = local_12c | 0x80;
  }
  if (*(char *)((int)param_2 + 0x74) != -1) {
    local_12c = local_12c | 0x100;
  }
  if (*(char *)((int)param_2 + 0x7c) != -1) {
    local_12c = local_12c | 0x200;
  }
  if (*(char *)((int)param_2 + 0x84) != -1) {
    local_12c = local_12c | 0x400;
  }
  if (*(char *)((int)param_2 + 0x1c) != -1) {
    local_12c = local_12c | *(uint *)(&DAT_1005e900 + uVar21 * 4);
  }
  bVar12 = false;
  uVar14 = 0;
  do {
    if (*(uint *)((int)this + uVar14 * 0x10 + 0xf24) !=
        (uint)*(byte *)((int)param_2 + uVar14 * 8 + 0x4d)) {
      bVar12 = true;
      break;
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 8);
  if (*(int *)((int)param_2 + 4) == 0) {
    local_128 = 6;
    if (*(char *)((int)this + 0x1907) == '\0') {
      local_128 = 0;
    }
  }
  else {
    if (((*(byte *)((int)this + 0x18f8) & 4) == 0) || (*(int *)((int)this + 0x18f4) == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 2;
    }
    local_128 = uVar14 + 2;
    uVar14 = uVar14 | 1;
    if ((*(char *)((int)this + 0x78) != '\0') && (*(char *)((int)this + 0x1903) == '\0')) {
      uVar21 = 0;
      if (*(uint *)((int)this + 0x444) != 0) {
        for (; (*(uint *)((int)this + 0x444) >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
        }
      }
      if (uVar21 < 5) {
        local_128 = 5;
      }
    }
    if (*(char *)((int)this + 0xc) == '\0') {
      if (param_9 != 0) {
        uVar14 = local_128;
      }
LAB_10020b7c:
      local_128 = uVar14;
    }
    else if ((*(char *)((int)param_2 + 0x2c) == -1) || (param_9 == 0)) goto LAB_10020b7c;
    if (((local_12c & 0x7800) != 0) || (*(char *)((int)this + 0x1907) != '\0')) {
      local_128 = local_128 + 6;
    }
  }
  local_f4 = this;
  if (*(char *)((int)this + 0x1d4a) != '\0') {
    FUN_100291d0((int)this);
  }
  FUN_1005c9cc(&local_b0,0,0x58);
  if (bVar12) {
    *(uint *)((int)this + 0x44c) =
         ((((((uint)(*(byte *)((int)param_2 + 0x85) | *(byte *)((int)param_2 + 0x7d)) << 3 |
             (uint)*(byte *)((int)param_2 + 0x75)) << 3 | (uint)*(byte *)((int)param_2 + 0x6d)) << 3
           | (uint)*(byte *)((int)param_2 + 0x65)) << 3 | (uint)*(byte *)((int)param_2 + 0x5d)) << 3
         | (uint)*(byte *)((int)param_2 + 0x55)) << 3 | (uint)*(byte *)((int)param_2 + 0x4d);
  }
  if (*(int *)(*(int *)((int)this + 0x1d60) + 0x7c + local_128 * 4) != 0) goto LAB_10020f92;
  local_ec = 0;
  if ((*(byte *)((int)this + 0x18f8) & 4) != 0) {
    local_ec = *(uint *)((int)this + 0x18f4);
  }
  bVar13 = FUN_10029020((int)this);
  *(uint *)((int)this + 0x48c) =
       *(uint *)((int)this + 0x48c) & 0x7fd00000 | (uint)param_9 << 0x1f | local_12c & 0xfffff;
  FUN_1001a59b((undefined4 *)((int)this + 0x448),bVar13,local_e0);
  uVar14 = FUN_1001a844((void *)((int)this + 0x1dc0),(int)local_e0);
  if (uVar14 == *(uint *)((int)this + 0x1dc8)) {
LAB_10020d07:
    puVar15 = (undefined4 *)FUN_1005c755(0x124);
    pvVar25 = local_f4;
    if (puVar15 == (undefined4 *)0x0) goto LAB_10020f92;
    uVar4 = *(undefined1 *)((int)this + 0x1dbc);
    uVar6 = *(undefined4 *)((int)this + 0x1db8);
    uVar7 = *(undefined4 *)((int)this + 0x1db4);
    *puVar15 = &PTR_LAB_1005eb38;
    puVar15[3] = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[4] = &PTR_FUN_1005effc;
    uVar9 = *(undefined4 *)((int)this + 0x44c);
    uVar10 = *(undefined4 *)((int)this + 0x450);
    uVar11 = *(undefined4 *)((int)this + 0x454);
    puVar15[6] = *(undefined4 *)((int)this + 0x448);
    puVar15[7] = uVar9;
    puVar15[8] = uVar10;
    puVar15[9] = uVar11;
    uVar9 = *(undefined4 *)((int)this + 0x45c);
    uVar10 = *(undefined4 *)((int)this + 0x460);
    uVar11 = *(undefined4 *)((int)this + 0x464);
    puVar15[10] = *(undefined4 *)((int)this + 0x458);
    puVar15[0xb] = uVar9;
    puVar15[0xc] = uVar10;
    puVar15[0xd] = uVar11;
    uVar9 = *(undefined4 *)((int)this + 0x46c);
    uVar10 = *(undefined4 *)((int)this + 0x470);
    uVar11 = *(undefined4 *)((int)this + 0x474);
    puVar15[0xe] = *(undefined4 *)((int)this + 0x468);
    puVar15[0xf] = uVar9;
    puVar15[0x10] = uVar10;
    puVar15[0x11] = uVar11;
    uVar9 = *(undefined4 *)((int)this + 0x47c);
    uVar10 = *(undefined4 *)((int)this + 0x480);
    uVar11 = *(undefined4 *)((int)this + 0x484);
    puVar15[0x12] = *(undefined4 *)((int)this + 0x478);
    puVar15[0x13] = uVar9;
    puVar15[0x14] = uVar10;
    puVar15[0x15] = uVar11;
    *(undefined8 *)(puVar15 + 0x16) = *(undefined8 *)((int)this + 0x488);
    *puVar15 = &PTR_FUN_1005ed78;
    *(undefined1 *)(puVar15 + 0x48) = uVar4;
    puVar15[0x18] = 0;
    puVar15[0x19] = 0;
    puVar15[0x1a] = 0;
    puVar15[0x1b] = 0;
    puVar15[1] = uVar7;
    puVar15[2] = uVar6;
    puVar15[3] = puVar15 + 0x18;
    uVar21 = FUN_1001a844((void *)((int)local_f4 + 0x1dc0),(int)local_e0);
    uVar14 = *(uint *)((int)pvVar25 + 0x1dc8);
    if (uVar21 == uVar14) {
LAB_10020e19:
      uVar24 = *(uint *)((int)pvVar25 + 0x1dcc);
      if (uVar24 == uVar14) {
        if (uVar24 == 0) {
          iVar18 = 0x10;
        }
        else {
          iVar18 = uVar24 * 2;
        }
        iVar16 = FUN_1005c789(iVar18 * 0x28);
        if (iVar16 != 0) {
          uVar14 = 0;
          if (*(int *)((int)pvVar25 + 0x1dc8) != 0) {
            do {
              iVar8 = *(int *)((int)pvVar25 + 0x1dc4);
              uVar24 = uVar14 + 1;
              puVar1 = (undefined4 *)(iVar8 + uVar14 * 0x28);
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar9 = puVar1[3];
              puVar2 = (undefined4 *)(iVar16 + uVar14 * 0x28);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar9;
              puVar1 = (undefined4 *)(iVar8 + 0x10 + uVar14 * 0x28);
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar9 = puVar1[3];
              puVar2 = (undefined4 *)(iVar16 + 0x10 + uVar14 * 0x28);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar9;
              *(undefined8 *)(iVar16 + 0x20 + uVar14 * 0x28) =
                   *(undefined8 *)(iVar8 + 0x20 + uVar14 * 0x28);
              uVar14 = uVar24;
            } while (uVar24 < *(uint *)((int)pvVar25 + 0x1dc8));
          }
          thunk_FUN_1005c76c(*(LPVOID *)((int)pvVar25 + 0x1dc0));
          *(int *)((int)pvVar25 + 0x1dc0) = iVar16;
          *(int *)((int)pvVar25 + 0x1dc4) = iVar16;
          *(int *)((int)pvVar25 + 0x1dcc) = iVar18;
        }
      }
      uVar14 = *(uint *)((int)pvVar25 + 0x1dc8);
      if (*(uint *)((int)pvVar25 + 0x1dcc) != uVar14) {
        for (; uVar21 < uVar14; uVar14 = uVar14 - 1) {
          iVar18 = *(int *)((int)pvVar25 + 0x1dc4);
          puVar2 = (undefined4 *)(iVar18 + -0x28 + uVar14 * 0x28);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar9 = puVar2[3];
          puVar1 = (undefined4 *)(iVar18 + uVar14 * 0x28);
          *puVar1 = *puVar2;
          puVar1[1] = uVar6;
          puVar1[2] = uVar7;
          puVar1[3] = uVar9;
          puVar1 = (undefined4 *)(iVar18 + -0x18 + uVar14 * 0x28);
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar9 = puVar1[3];
          puVar2 = (undefined4 *)(iVar18 + 0x10 + uVar14 * 0x28);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          puVar2[2] = uVar7;
          puVar2[3] = uVar9;
          *(undefined8 *)(iVar18 + 0x20 + uVar14 * 0x28) =
               *(undefined8 *)(iVar18 + -8 + uVar14 * 0x28);
        }
        *(int *)((int)pvVar25 + 0x1dc8) = *(int *)((int)pvVar25 + 0x1dc8) + 1;
        iVar18 = *(int *)((int)pvVar25 + 0x1dc4);
        puVar3 = (uint *)(iVar18 + uVar21 * 0x28);
        *puVar3 = local_e0[0];
        puVar3[1] = local_e0[1];
        puVar3[2] = local_e0[2];
        puVar3[3] = local_e0[3];
        puVar1 = (undefined4 *)(iVar18 + 0x10 + uVar21 * 0x28);
        *puVar1 = local_e0[4];
        puVar1[1] = local_e0[5];
        puVar1[2] = local_e0[6];
        puVar1[3] = local_e0[7];
        *(undefined4 **)(*(int *)((int)pvVar25 + 0x1dc4) + 0x20 + uVar21 * 0x28) = puVar15;
      }
    }
    else {
      uVar14 = 0;
      iVar18 = *(int *)((int)pvVar25 + 0x1dc4) + uVar21 * 0x28;
      do {
        if ((*(uint *)(iVar18 + uVar14 * 8) != local_e0[uVar14 * 2]) ||
           (*(uint *)(iVar18 + 4 + uVar14 * 8) != local_e0[uVar14 * 2 + 1])) {
          uVar14 = *(uint *)((int)pvVar25 + 0x1dc8);
          goto LAB_10020e19;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < 4);
      *(undefined4 **)(*(int *)((int)pvVar25 + 0x1dc4) + 0x20 + uVar21 * 0x28) = puVar15;
    }
  }
  else {
    uVar21 = 0;
    iVar18 = *(int *)((int)this + 0x1dc4) + uVar14 * 0x28;
    do {
      if ((*(uint *)(iVar18 + uVar21 * 8) != local_e0[uVar21 * 2]) ||
         (*(uint *)(iVar18 + 4 + uVar21 * 8) != local_e0[uVar21 * 2 + 1])) goto LAB_10020d07;
      uVar21 = uVar21 + 1;
    } while (uVar21 < 4);
    puVar15 = (undefined4 *)(*(int *)((int)this + 0x1dc4) + (uVar14 * 5 + 4) * 8);
    if (puVar15 == (undefined4 *)0x0) goto LAB_10020d07;
    puVar15 = (undefined4 *)*puVar15;
    pvVar25 = this;
  }
  piVar17 = (int *)FUN_1002823b(puVar15,local_ec,0);
  this = pvVar25;
  if (piVar17 != (int *)0x0) {
    local_b0 = *piVar17;
    iStack_ac = piVar17[1];
    iStack_a8 = piVar17[2];
    iStack_a4 = piVar17[3];
    local_a0 = piVar17[4];
    uStack_9c = piVar17[5];
    iStack_98 = piVar17[6];
    iStack_94 = piVar17[7];
    local_90 = piVar17[8];
    iStack_8c = piVar17[9];
    iStack_88 = piVar17[10];
    iStack_84 = piVar17[0xb];
    local_80 = piVar17[0xc];
    iStack_7c = piVar17[0xd];
    iStack_78 = piVar17[0xe];
    iStack_74 = piVar17[0xf];
    local_70 = piVar17[0x10];
    iStack_6c = piVar17[0x11];
    iStack_68 = piVar17[0x12];
    iStack_64 = piVar17[0x13];
    local_60 = *(undefined8 *)(piVar17 + 0x14);
  }
LAB_10020f92:
  local_110 = local_b0;
  if (local_b0 == 0) {
    local_110 = *(int *)(*(int *)((int)this + 0x1d60) + 0x7c + local_128 * 4);
    iVar18 = local_128 * 0x28;
    local_e0[0] = *(uint *)(&UNK_1005d400 + iVar18);
    local_e0[1] = *(uint *)(&UNK_1005d404 + iVar18);
    local_e0[2] = *(uint *)(&UNK_1005d408 + iVar18);
    local_e0[3] = *(uint *)(&UNK_1005d40c + iVar18);
    iVar18 = local_128 * 0x28;
    local_e8 = *(undefined8 *)(&UNK_1005d410 + local_128 * 0x28);
    local_e0[8] = *(int *)(&UNK_1005d3f0 + iVar18);
    iStack_bc = *(int *)(&UNK_1005d3f4 + iVar18);
    iStack_b8 = *(int *)(&UNK_1005d3f8 + iVar18);
    iStack_b4 = *(int *)(&UNK_1005d3fc + iVar18);
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
  if (((*(byte *)((int)this + 0x18f8) & 4) != 0) &&
     (((local_128 == 0 || (local_128 == 6)) && (*(char *)((int)this + 0x1d43) != '\0')))) {
    FUN_100138c3((int)this + 0x1844,(int)this + 0x1884,(int)local_50);
    FUN_10013929(local_50,(undefined4 *)((int)this + 0xbf0),'\0');
    *(undefined1 *)((int)this + 0x1d43) = 0;
    *(undefined1 *)((int)this + 0x1d41) = 1;
  }
  if ((local_128 == 5) || (local_128 == 0xb)) {
    cVar20 = '\x01';
  }
  else {
    cVar20 = '\0';
  }
  cVar5 = *(char *)((int)this + 0x191b);
  *(char *)((int)this + 0x191b) = cVar20;
  local_f0 = 0;
  *(byte *)((int)this + 0x1d38) = *(byte *)((int)this + 0x1d38) | cVar20 != cVar5;
  local_f4 = param_2;
  local_ec = FUN_100237b0((void *)((int)this + 0x1da4),(int *)&local_f4);
  local_f4 = (void *)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50));
  puVar22 = &DAT_10061224;
  uVar14 = (0x1000 - *(int *)((int)this + 0x6c)) - *(int *)((int)this + 0x68);
  bVar26 = *(char *)((int)this + 0x1904) == '\0';
  if (bVar26) {
    puVar22 = &DAT_10061240;
  }
  puVar23 = &DAT_100611ec;
  if (bVar26) {
    puVar23 = &DAT_10061208;
  }
  if (((((*(char *)((int)this + 0x1905) != '\0') || (*(uint *)((int)this + 0x990) != local_12c)) ||
       ((bVar12 ||
        ((((*(int *)((int)this + 0x4f4) != param_5 || (*(uint *)((int)this + 0x4b0) != param_6)) ||
          (*(int *)((int)this + 0x2064) != param_4)) ||
         ((*(int *)((int)this + 0x2024) != param_3 || (*(int *)((int)this + 0x1dfc) != local_110))))
        )))) || (*(int *)((int)this + 0x18e0) != *(int *)((int)param_2 + 4))) ||
     (((*(int *)((int)this + 0x1e2c) != *(int *)(puVar23 + param_1 * 4) ||
       (*(int *)((int)this + 0x206c) != *(int *)(puVar22 + param_1 * 4))) ||
      (((*(int *)((int)this + 0x6c) != 0) != (param_8 != 0) ||
       (((local_f4 < param_7 || (uVar14 < param_8)) || (*(int *)((int)this + 0x1e24) != local_ec))))
      )))) {
    uVar21 = 0;
    if (param_3 == *(int *)((int)this + 0x1d70)) {
      uVar21 = param_6;
    }
    FUN_100218e0(this,local_f4 < param_7,uVar14 < param_8,uVar21);
    if (param_3 == *(int *)((int)this + 0x1d70)) {
      param_5 = *(int *)((int)this + 0x5c);
    }
    if (*(char *)((int)this + 0x1905) != '\0') {
      *(undefined1 *)((int)this + 0x1d39) = 1;
      *(uint *)((int)this + 0x1d34) = *(uint *)((int)this + 0x1d34) | 1;
    }
    if (bVar12) {
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
    if (*(uint *)((int)this + 0x990) != local_12c) {
      *(uint *)((int)this + 0x990) = local_12c;
      *(undefined1 *)((int)this + 0x1d41) = 1;
    }
    if (*(uint *)((int)this + 0x4b0) != param_6) {
      *(uint *)((int)this + 0x4b0) = param_6;
      *(undefined1 *)((int)this + 0x1d3f) = 1;
    }
    if (*(int *)((int)this + 0x2024) != param_3) {
      *(int *)((int)this + 0x2024) = param_3;
      *(undefined1 *)((int)this + 0x1d3f) = 1;
    }
    if (*(int *)((int)this + 0x4f4) != param_5) {
      *(int *)((int)this + 0x4f4) = param_5;
      *(undefined1 *)((int)this + 0x1d3f) = 1;
    }
    if (*(int *)((int)this + 0x2064) != param_4) {
      *(int *)((int)this + 0x2064) = param_4;
      *(undefined1 *)((int)this + 0x1d40) = 1;
    }
    if (*(int *)((int)this + 0x1e24) != local_ec) {
      *(uint *)((int)this + 0x1e24) = local_ec;
      *(undefined1 *)((int)this + 0x21d1) = 1;
    }
    if (*(int *)((int)this + 0x1e0c) != iStack_84) {
      *(int *)((int)this + 0x1e0c) = iStack_84;
      *(undefined1 *)((int)this + 0x21d1) = 1;
    }
    if (*(int *)((int)this + 0x1dfc) != local_110) {
      *(int *)((int)this + 0x1dfc) = local_110;
      *(undefined1 *)((int)this + 0x21d1) = 1;
      *(uint *)((int)this + 0x2150) = local_e0[8];
      *(int *)((int)this + 0x2154) = iStack_bc;
      *(int *)((int)this + 0x2158) = iStack_b8;
      *(int *)((int)this + 0x215c) = iStack_b4;
      *(uint *)((int)this + 0x2160) = local_e0[0];
      *(uint *)((int)this + 0x2164) = local_e0[1];
      *(uint *)((int)this + 0x2168) = local_e0[2];
      *(uint *)((int)this + 0x216c) = local_e0[3];
      *(undefined8 *)((int)this + 0x2170) = local_e8;
    }
    if ((*(int *)((int)this + 0x18e0) != *(int *)((int)param_2 + 4)) ||
       (*(char *)((int)this + 0x1905) != '\0')) {
      *(int *)((int)this + 0x18e0) = *(int *)((int)param_2 + 4);
      *(undefined1 *)((int)this + 0x1d3e) = 1;
    }
    if (*(int *)((int)this + 0x206c) != *(int *)(puVar22 + param_1 * 4)) {
      *(int *)((int)this + 0x206c) = *(int *)(puVar22 + param_1 * 4);
      *(undefined1 *)((int)this + 0x21d0) = 1;
    }
    if (*(int *)((int)this + 0x1e2c) != *(int *)(puVar23 + param_1 * 4)) {
      *(int *)((int)this + 0x1e2c) = *(int *)(puVar23 + param_1 * 4);
      *(undefined1 *)((int)this + 0x21d1) = 1;
    }
    bVar13 = *(byte *)((int)this + 0x1905);
    *(byte *)((int)this + 0x1d3c) = *(byte *)((int)this + 0x1d3c) | bVar13;
    *(byte *)((int)this + 0x1d3b) = *(byte *)((int)this + 0x1d3b) | bVar13;
    *(byte *)((int)this + 0x1d3d) = *(byte *)((int)this + 0x1d3d) | bVar13;
    *(byte *)((int)this + 0x1d38) = *(byte *)((int)this + 0x1d38) | bVar13;
    if (bVar13 != 0) {
      iVar18 = 900;
      if ((*(byte *)((int)this + 0x18f8) & 1) == 0) {
        iVar18 = 0x39c;
      }
      pfVar19 = (float *)(iVar18 + (int)this);
      *(undefined1 *)((int)this + 0x1905) = 0;
      fVar30 = 2.0 / pfVar19[2];
      fVar28 = (*pfVar19 * -2.0) / pfVar19[2] - 1.0;
      fVar29 = -2.0 / pfVar19[3];
      fVar27 = (pfVar19[1] + pfVar19[1]) / pfVar19[3] + 1.0;
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

