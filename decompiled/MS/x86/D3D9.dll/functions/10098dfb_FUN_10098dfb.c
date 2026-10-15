/*
 * FUN_10098dfb at 10098dfb
 * int __stdcall FUN_10098dfb(int param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 10098dfb-10099487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10098dfb(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint3 uVar11;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  byte local_494 [448];
  int local_2d4;
  int local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  char acStack_2c0 [512];
  char acStack_c0 [64];
  uint local_80 [16];
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  char local_15;
  uint local_14;
  byte local_d;
  uint local_c;
  char local_5;
  
  puVar9 = param_3;
  puVar17 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  if (param_3 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  FUN_10003e40(&local_15,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  *puVar9 = 0;
  FUN_10072f49(&local_2d4);
  local_24 = *(int *)(param_1 + 0x50);
  local_38 = *(uint *)(local_24 + 0xd4) >> 6 & 0xffffff01;
  FUN_100cfed0((int *)local_80,0,0x40);
  local_c = CONCAT31(local_c._1_3_,1);
  local_d = 1;
  local_34 = local_34 & 0xffffff00;
  FUN_100cfed0((int *)local_494,0,0x1c0);
  local_20 = 0;
  local_1c = 0;
  local_40 = param_1 + -0x66b4;
  uVar13 = local_c;
  iVar15 = local_2d0;
  do {
    uVar1 = *(ushort *)(puVar17 + local_20 * 2);
    uVar12 = (uint)uVar1;
    if ((((uVar1 == 0xff) && (*(short *)((int)puVar17 + local_20 * 8 + 2) == 0)) &&
        (*(char *)(puVar17 + local_20 * 2 + 1) == '\x11')) &&
       (((*(char *)((int)puVar17 + local_20 * 8 + 5) == '\0' &&
         (*(char *)((int)puVar17 + local_20 * 8 + 6) == '\0')) &&
        (*(char *)((int)puVar17 + local_20 * 8 + 7) == '\0')))) break;
    local_2c = uVar12;
    uVar11 = 0;
    bVar5 = local_20 < 0x40 & (byte)uVar13;
    local_c = CONCAT31((int3)(uVar13 >> 8),bVar5);
    if (bVar5 != 0) {
      local_c = CONCAT31((int3)((uint)local_24 >> 8),-(uVar12 < *(uint *)(local_24 + 0xbc)) & bVar5)
      ;
    }
    uVar2 = *(ushort *)((int)puVar17 + local_20 * 8 + 2);
    local_30 = (uint)uVar2;
    if ((byte)local_c != 0) {
      bVar5 = 0;
      if ((uVar2 & 3) == 0) {
        bVar5 = (byte)local_c;
      }
      uVar11 = (uint3)(byte)(uVar1 >> 8);
      local_d = local_d & (uint)uVar2 == local_80[uVar12];
      local_c = CONCAT31((int3)(local_c >> 8),-((char)local_38 != '\0' || local_d != 0) & bVar5);
    }
    local_14 = CONCAT31(local_14._1_3_,0x11);
    uVar13 = local_c;
    if ((byte)local_c == 0) goto LAB_10099389;
    bVar5 = *(byte *)((int)puVar17 + local_20 * 8 + 7);
    uVar12 = (uint)*(byte *)((int)puVar17 + local_20 * 8 + 6);
    switch(uVar12) {
    case 0:
      if (bVar5 == 0) {
        local_14 = (uint)local_14._1_3_ << 8;
      }
      else {
        local_14 = CONCAT31(uVar11,bVar5 != 1) * 2 + 0xf;
      }
      bVar14 = bVar5 & 0xf;
      if ((iVar15 == 4) || (iVar15 == 2)) {
        bVar6 = 1;
      }
      else {
        bVar6 = 0;
      }
      uVar13 = CONCAT31((int3)(local_c >> 8),(byte)local_c & bVar6);
      iVar15 = 2;
LAB_1009902a:
      local_2d0 = iVar15;
      local_c = uVar13;
      if ((char)uVar13 != '\0') break;
      goto LAB_100990cc;
    case 1:
      bVar14 = bVar5 & 0xf | 0x10;
      cVar7 = '\x01';
      goto LAB_10098fa9;
    case 2:
      bVar14 = bVar5 & 0xf | 0x20;
      cVar7 = '\x02';
      goto LAB_10098fa9;
    case 3:
      if (bVar5 == 0) {
        cVar7 = '\x03';
      }
      else {
        cVar7 = (bVar5 != 1) + '\x10';
      }
      bVar14 = bVar5 & 0xf | 0x30;
      goto LAB_10098fb1;
    case 4:
      bVar14 = bVar5 & 0xf | 0x40;
      cVar7 = '\x04';
LAB_10098fa9:
      if (bVar5 != 0) {
        cVar7 = '\x11';
      }
LAB_10098fb1:
      local_14 = CONCAT31(local_14._1_3_,cVar7);
      break;
    case 5:
      if (bVar5 < 8) {
        local_14 = CONCAT31(local_14._1_3_,bVar5 + 7);
      }
      bVar14 = bVar5 & 0xf | 0x50;
      break;
    case 6:
      bVar14 = bVar5 & 0xf | 0x60;
      break;
    case 7:
      bVar14 = bVar5 & 0xf | 0x70;
      break;
    case 8:
      bVar14 = bVar5 & 0xf | 0x80;
      break;
    case 9:
      local_14 = (uint)local_14._1_3_ << 8;
      bVar14 = 0x90;
      uVar13 = 0;
      if (bVar5 == 0) {
        uVar13 = local_c & 0xff;
      }
      if ((char)uVar13 != '\0') {
        if ((iVar15 != 4) && (iVar15 != 0)) {
          uVar13 = 0;
        }
        iVar15 = 0;
        goto LAB_1009902a;
      }
      goto LAB_100990cc;
    case 10:
      if (bVar5 == 0) {
        cVar7 = '\x05';
      }
      else {
        cVar7 = '\x06';
        if (bVar5 != 1) {
          cVar7 = '\x11';
        }
      }
      bVar14 = bVar5 & 0xf | 0xa0;
      goto LAB_10098fb1;
    case 0xb:
      bVar14 = bVar5 & 0xf | 0xb0;
      break;
    case 0xc:
      bVar14 = bVar5 & 0xf | 0xc0;
      break;
    case 0xd:
      bVar14 = bVar5 & 0xf | 0xd0;
      break;
    default:
      goto switchD_10098f5f_default;
    }
    iVar16 = uVar12 * 0x20 + (uint)(bVar5 >> 3);
    bVar5 = '\x01' << (bVar5 & 7);
    local_c = CONCAT31(local_c._1_3_,(byte)local_c & 1U - ((local_494[iVar16] & bVar5) != 0));
    uVar13 = local_c;
    local_494[iVar16] = local_494[iVar16] | bVar5;
LAB_100990cc:
    puVar17 = param_2;
    if ((char)uVar13 == '\0') goto LAB_10099389;
    uVar13 = 0;
    uVar12 = 0;
    switch(*(undefined1 *)(param_2 + local_20 * 2 + 1)) {
    case 0:
      local_5 = '\x01';
      local_c = 0;
      break;
    case 1:
      local_5 = '\x02';
      bVar5 = 8;
      local_c = 1;
      goto LAB_10099209;
    case 2:
      local_5 = '\x03';
      bVar5 = 0xc;
      local_c = 2;
      goto LAB_10099209;
    case 3:
      local_5 = '\x04';
      bVar5 = 0x10;
      local_c = 3;
      goto LAB_10099209;
    case 4:
      local_5 = '\x04';
      local_c = 4;
      break;
    case 5:
      local_5 = '\x04';
      local_c = 5;
      uVar12 = 1;
      break;
    case 6:
      local_5 = '\x02';
      local_c = 6;
      break;
    case 7:
      local_5 = '\x04';
      bVar5 = 8;
      local_c = 7;
      goto LAB_10099209;
    case 8:
      local_5 = '\x04';
      local_c = 8;
      uVar12 = 2;
      break;
    case 9:
      local_5 = '\x02';
      local_c = 9;
      uVar12 = 4;
      break;
    case 10:
      local_c = 10;
      uVar12 = 8;
      goto LAB_100991a2;
    case 0xb:
      local_5 = '\x02';
      local_c = 0xb;
      uVar12 = 0x10;
      break;
    case 0xc:
      local_c = 0xc;
      uVar12 = 0x20;
LAB_100991a2:
      bVar5 = 8;
      local_5 = '\x04';
      goto LAB_10099209;
    case 0xd:
      local_c = 0xf;
      uVar12 = 0x40;
      goto LAB_10099203;
    case 0xe:
      local_c = 0x10;
      uVar12 = 0x80;
LAB_10099203:
      local_5 = '\x03';
      break;
    case 0xf:
      local_5 = '\x02';
      uVar12 = 0x100;
      local_c = 0xd;
      break;
    case 0x10:
      local_5 = '\x04';
      bVar5 = 8;
      local_c = 0xe;
      uVar12 = 0x200;
      goto LAB_10099209;
    default:
      goto switchD_10098f5f_default;
    }
    bVar5 = 4;
LAB_10099209:
    if ((uVar12 == 0) ||
       ((((*(uint *)(local_24 + 0xec) & uVar12) != 0 || ((*(byte *)(param_1 + -0x58e4) & 0x40) == 0)
         ) && ((uVar12 == 0 || (uVar13 = 1, (*(uint *)(local_24 + 0xec) & uVar12) != 0)))))) {
      bVar6 = 0;
      uVar13 = 1;
    }
    else {
      bVar6 = 1;
    }
    local_34 = CONCAT31(local_34._1_3_,(byte)local_34 | bVar6);
    if ((byte)uVar13 != 0) {
      if (*(char *)((int)param_2 + local_20 * 8 + 5) != '\0') goto switchD_10098f5f_default;
      uVar13 = (uint)((byte)uVar13 & local_30 < 0x400);
      if (acStack_2c0[local_1c * 8] != -1) {
        do {
          local_1c = local_1c + 1;
        } while (acStack_2c0[local_1c * 8] != -1);
      }
      uVar12 = local_1c;
      local_28 = local_1c;
      if ((char)local_14 != '\x11') {
        local_28 = local_14 & 0xff;
        if (local_28 < local_1c) {
          uVar10 = *(undefined4 *)(acStack_2c0 + local_28 * 8 + 4);
          *(undefined4 *)(acStack_2c0 + local_1c * 8) = *(undefined4 *)(acStack_2c0 + local_28 * 8);
          *(undefined4 *)(acStack_2c0 + uVar12 * 8 + 4) = uVar10;
          uVar12 = 0;
          local_3c = local_2cc;
          if (local_2cc != 0) {
            do {
              if (acStack_c0[uVar12] == (char)local_14) {
                acStack_c0[uVar12] = (char)local_1c;
                break;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < local_2cc);
          }
          acStack_c0[local_2cc] = (char)local_1c;
        }
      }
      uVar3 = local_28;
      acStack_2c0[local_28 * 8] = (char)local_2c;
      acStack_2c0[uVar3 * 8 + 1] = local_5;
      acStack_2c0[uVar3 * 8 + 3] = (char)(local_30 >> 2);
      acStack_2c0[uVar3 * 8 + 2] = bVar5;
      uVar4 = local_c;
      acStack_2c0[uVar3 * 8 + 4] = (char)local_c;
      acStack_2c0[uVar3 * 8 + 5] = bVar14;
      uVar12 = local_2c;
      acStack_2c0[uVar3 * 8 + 6] = (&DAT_100d5fa0)[uVar4 & 0xff];
      local_2c4 = local_2c4 | 1 << (uVar12 & 0x1f);
      acStack_c0[local_2cc] = (char)uVar3;
      local_2cc = local_2cc + 1;
      iVar15 = local_2d0;
      if (local_80[uVar12] < local_30 + bVar5) {
        local_80[uVar12] = local_30 + bVar5;
      }
    }
LAB_10099389:
    local_20 = local_20 + 1;
  } while ((char)uVar13 != '\0');
  uVar12 = local_20;
  if ((char)uVar13 != '\0') {
    local_2d0 = iVar15;
    if (iVar15 == 4) {
      local_2d0 = 2;
    }
    local_2c8 = local_80[0];
    iVar15 = FUN_1009b558((void *)(param_1 + 100),&local_2d4);
    if (((iVar15 != 0) &&
        (local_2d4 = iVar15, puVar9 = FUN_1008fb53(local_40,&local_2d4,0,(char)local_34,0),
        param_2 = puVar9, puVar9 != (undefined4 *)0x0)) &&
       (bVar8 = FUN_1009e5ad(puVar9,puVar17,uVar12 + 1), bVar8)) {
      iVar15 = FUN_1009e6ef((int)puVar9,0x100d13a0,param_3);
      if (((iVar15 < 0) ||
          (uVar10 = FUN_10003d8f((void *)(param_1 + 0xd0),&param_2), puVar9 = param_2,
          (char)uVar10 == '\0')) && (FUN_1009e6a7((int)puVar9), puVar9 != (undefined4 *)0x0)) {
        *puVar9 = &PTR_FUN_100d7248;
        FUN_100cfd6c(puVar9);
      }
      goto LAB_10099477;
    }
  }
switchD_10098f5f_default:
  iVar15 = -0x7789f794;
LAB_10099477:
  FUN_10003e89(&local_15);
  return iVar15;
}

