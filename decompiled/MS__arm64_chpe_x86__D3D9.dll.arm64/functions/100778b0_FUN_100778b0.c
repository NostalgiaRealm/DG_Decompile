/*
 * FUN_100778b0 at 100778b0
 * undefined FUN_100778b0(void)
 * Address ranges: 100778b0-100781bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100778b0(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,uint param_6)

{
  byte *pbVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int extraout_w1;
  int extraout_w1_00;
  byte bVar7;
  int extraout_w11;
  
  switch(param_5) {
  case 1:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x80 + 0x7290) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    puVar3 = (uint *)(param_2 + (param_4 + 0x39a) * 4);
    *puVar3 = *puVar3 & 0xffffffe0 | param_6 & 0x1f;
    bVar7 = 0x80;
    if (param_6 != 0xd) {
      bVar7 = 0;
    }
    *(byte *)(param_2 + param_4 + 0xeb0) = bVar7 | *(byte *)(param_6 + 0x10162178);
    if (param_6 != 1) {
      pbVar1 = (byte *)(((int)param_4 >> 3) + param_2 + 0xec0);
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(param_4 & 7)) ^ 0xff);
      *(undefined1 *)(param_3 + 8) = 1;
      return;
    }
    pbVar1 = (byte *)(((int)param_4 >> 3) + param_2 + 0xec0);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(param_4 & 7));
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 2:
    if (param_4 < 4) {
      iVar2 = param_2 + param_4 * 0x80;
      *(uint *)(iVar2 + 0x7294) = param_6 & 0xf;
      *(uint *)(iVar2 + 0x72a0) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar6 = param_4 * 4;
    puVar3 = (uint *)(uVar6 + param_2 + 0xe68);
    uVar5 = *puVar3;
    *puVar3 = uVar5 & 0xffffe000 | uVar5 & 0x3ff | (param_6 & 7) << 10;
    *(uint *)(param_2 + 0xe8c) =
         *(uint *)(param_2 + 0xe8c) & (0xf << (ulonglong)(uVar6 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar6 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0xea0);
    *pbVar1 = *pbVar1 & 0xfe | (param_6 & 0xf) == 2;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 3:
    if (param_4 < 4) {
      iVar2 = param_2 + param_4 * 0x80;
      *(uint *)(iVar2 + 0x7298) = param_6 & 0xf;
      *(uint *)(iVar2 + 0x72a4) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar6 = param_4 * 4;
    puVar3 = (uint *)(uVar6 + param_2 + 0xe68);
    uVar5 = *puVar3;
    *puVar3 = uVar5 & 0xffff0000 | uVar5 & 0x1fff | (param_6 & 7) << 0xd;
    *(uint *)(param_2 + 0xe90) =
         *(uint *)(param_2 + 0xe90) & (0xf << (ulonglong)(uVar6 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar6 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0xea0);
    bVar7 = 2;
    if ((param_6 & 0xf) != 2) {
      bVar7 = 0;
    }
    *pbVar1 = *pbVar1 & 0xfd | bVar7;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 4:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x80 + 0x72a8) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    puVar3 = (uint *)(param_2 + (param_4 + 0x39a) * 4);
    uVar5 = *puVar3;
    *puVar3 = uVar5 & 0xfffffc00 | uVar5 & 0x1f | (param_6 & 0x1f) << 5;
    bVar7 = 0x80;
    if (param_6 != 0xd) {
      bVar7 = 0;
    }
    *(byte *)(param_2 + param_4 + 0xeb8) = bVar7 | *(byte *)(param_6 + 0x10162178);
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 5:
    if (param_4 < 4) {
      iVar2 = param_2 + param_4 * 0x80;
      *(uint *)(iVar2 + 0x72ac) = param_6 & 0xf;
      *(uint *)(iVar2 + 0x72b4) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar6 = param_4 * 4;
    puVar3 = (uint *)(uVar6 + param_2 + 0xe68);
    uVar5 = *puVar3;
    *puVar3 = uVar5 & 0xfff80000 | uVar5 & 0xffff | (param_6 & 7) << 0x10;
    *(uint *)(param_2 + 0xe98) =
         *(uint *)(param_2 + 0xe98) & (0xf << (ulonglong)(uVar6 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar6 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0xea8);
    *pbVar1 = *pbVar1 & 0xfe | (param_6 & 0xf) == 2;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 6:
    if (param_4 < 4) {
      iVar2 = param_2 + param_4 * 0x80;
      *(uint *)(iVar2 + 0x72b0) = param_6 & 0xf;
      *(uint *)(iVar2 + 0x72b8) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar6 = param_4 * 4;
    puVar3 = (uint *)(uVar6 + param_2 + 0xe68);
    uVar5 = *puVar3;
    *puVar3 = uVar5 & 0xffc00000 | uVar5 & 0x7ffff | (param_6 & 7) << 0x13;
    *(uint *)(param_2 + 0xe9c) =
         *(uint *)(param_2 + 0xe9c) & (0xf << (ulonglong)(uVar6 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar6 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0xea8);
    bVar7 = 2;
    if ((param_6 & 0xf) != 2) {
      bVar7 = 0;
    }
    *pbVar1 = *pbVar1 & 0xfd | bVar7;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 7:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x80 + 0x72c0) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + param_4 * 0x40 + 0x6470) = param_6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 8:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x80 + 0x72c8) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + param_4 * 0x40 + 0x6478) = param_6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 9:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x80 + 0x72c4) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + param_4 * 0x40 + 0x6474) = param_6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 10:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x80 + 0x72cc) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + param_4 * 0x40 + 0x647c) = param_6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0xb:
    if ((param_6 & 0x70000) != 0) {
      param_6 = param_6 & 0x70000 | param_4;
    }
    *(uint *)(param_2 + (param_4 + 0x6df) * 0x10) = param_6;
    *(undefined1 *)(param_3 + 0x11) = 1;
    FUN_10074d68(param_1);
    param_4 = param_4 * 3;
    uVar6 = 7 << (ulonglong)(param_4 & 0x1f);
    puVar3 = (uint *)(extraout_w1 + 0xed8);
    *(uint *)(extraout_w1 + 0xec8) =
         (param_6 & 7) << (ulonglong)(param_4 & 0x1f) |
         *(uint *)(extraout_w1 + 0xec8) & (uVar6 ^ 0xffffffff);
    uVar5 = *puVar3 & (uVar6 ^ 0xffffffff);
    *puVar3 = uVar5;
    *(uint *)(extraout_w1 + 0xed4) =
         (param_6 >> 0x10 & 7) << (ulonglong)(param_4 & 0x1f) |
         *(uint *)(extraout_w1 + 0xed4) & (uVar6 ^ 0xffffffff);
    if (param_6 >> 0x10 == 0) {
      *puVar3 = uVar5 | uVar6;
      return;
    }
    break;
  case 0x16:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x80 + 0x72d0) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + (param_4 + 0x192) * 0x40) = param_6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0x17:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x80 + 0x72d4) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + param_4 * 0x40 + 0x6484) = param_6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0x18:
    iVar2 = param_2 + param_4 * 0x40;
    *(uint *)(param_2 + param_4 * 0x10 + 0x6df8) = param_6;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(ushort *)(iVar2 + 0x6488) = (ushort)param_6;
    *(ushort *)(iVar2 + 0x64ac) = (ushort)param_6 & 0x100;
    uVar6 = 1 << (ulonglong)(param_4 & 0x1f);
    uVar5 = *(uint *)(param_2 + 0x74e4) & (uVar6 ^ 0xffffffff);
    if (*(int *)(iVar2 + 0x64ac) != 0) {
      uVar5 = *(uint *)(param_2 + 0x74e4) | uVar6;
    }
    *(uint *)(param_2 + 0x74e4) = uVar5;
    uVar4 = 0x4000000000000000;
    if (*(int *)(param_1 + 0x7574) == 0) {
      uVar4 = 0;
    }
    *(ulonglong *)(param_1 + 0xfc0) = uVar4 | *(ulonglong *)(param_1 + 0xfc0) & 0xbfffffffffffffff;
    *(undefined1 *)(param_3 + 0x43) = 1;
    FUN_10074d68(param_1);
    *(uint *)(extraout_w1_00 + 0xed0) =
         (*(uint *)(extraout_w1_00 + 0xed0) & (7 << (ulonglong)(param_4 * 3 & 0x1f) ^ 0xffffffffU) |
         (param_6 & 7) << (ulonglong)(param_4 * 3 & 0x1f)) &
         (extraout_w11 << (ulonglong)(param_4 + 0x18 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 8 & 1) << (ulonglong)(param_4 + 0x18 & 0x1f);
    return;
  case 0x1a:
    if (param_4 < 4) {
      iVar2 = param_2 + param_4 * 0x80;
      *(uint *)(iVar2 + 0x72e0) = param_6 & 0xf;
      *(uint *)(iVar2 + 0x72e4) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar6 = param_4 * 4;
    puVar3 = (uint *)(uVar6 + param_2 + 0xe68);
    uVar5 = *puVar3;
    *puVar3 = (uVar5 ^ param_6 << 0x16) & 0x1c00000 ^ uVar5;
    *(uint *)(param_2 + 0xe88) =
         *(uint *)(param_2 + 0xe88) & (0xf << (ulonglong)(uVar6 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar6 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0xea0);
    bVar7 = 4;
    if ((param_6 & 0xf) != 2) {
      bVar7 = 0;
    }
    *pbVar1 = *pbVar1 & 0xfb | bVar7;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1b:
    if (param_4 < 4) {
      iVar2 = param_2 + param_4 * 0x80;
      *(uint *)(iVar2 + 0x72e8) = param_6 & 0xf;
      *(uint *)(iVar2 + 0x72ec) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar6 = param_4 * 4;
    puVar3 = (uint *)(uVar6 + param_2 + 0xe68);
    uVar5 = *puVar3;
    *puVar3 = (uVar5 ^ param_6 << 0x19) & 0xe000000 ^ uVar5;
    *(uint *)(param_2 + 0xe94) =
         *(uint *)(param_2 + 0xe94) & (0xf << (ulonglong)(uVar6 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar6 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0xea8);
    bVar7 = 4;
    if ((param_6 & 0xf) != 2) {
      bVar7 = 0;
    }
    *pbVar1 = *pbVar1 & 0xfb | bVar7;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1c:
    puVar3 = (uint *)(param_2 + (param_4 + 0x39a) * 4);
    uVar5 = *puVar3;
    *puVar3 = (uVar5 ^ param_6 << 0x1c) & 0x70000000 ^ uVar5;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x20:
    param_2 = param_2 + param_4 * 0x40;
    *(float *)(param_2 + 0x6490) = (float)(param_6 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6494) = (float)(param_6 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6498) = (float)(param_6 & 0xff) / 255.0;
    *(float *)(param_2 + 0x649c) = (float)(param_6 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x43) = 1;
    if (param_4 < 4) {
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
  }
  return;
}

