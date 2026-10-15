/*
 * FUN_100613f8 at 100613f8
 * undefined FUN_100613f8(void)
 * Address ranges: 100613f8-10061cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100613f8(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,uint param_6)

{
  byte *pbVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int extraout_w1;
  int extraout_w1_00;
  byte bVar7;
  int extraout_w11;
  
  switch(param_5) {
  case 1:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x70 + 0x5600) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    puVar2 = (uint *)(param_2 + (param_4 + 0x154) * 4);
    *puVar2 = *puVar2 & 0xffffffe0 | param_6 & 0x1f;
    bVar7 = 0x80;
    if (param_6 != 0xd) {
      bVar7 = 0;
    }
    *(byte *)(param_2 + param_4 + 0x598) = bVar7 | *(byte *)(param_6 + 0x1012c778);
    if (param_6 != 1) {
      pbVar1 = (byte *)(((int)param_4 >> 3) + param_2 + 0x5a8);
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(param_4 & 7)) ^ 0xff);
      *(undefined1 *)(param_3 + 8) = 1;
      return;
    }
    pbVar1 = (byte *)(((int)param_4 >> 3) + param_2 + 0x5a8);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(param_4 & 7));
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 2:
    if (param_4 < 4) {
      iVar6 = param_2 + param_4 * 0x70;
      *(uint *)(iVar6 + 0x5604) = param_6 & 0xf;
      *(uint *)(iVar6 + 0x5610) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar5 = param_4 * 4;
    puVar2 = (uint *)(uVar5 + param_2 + 0x550);
    uVar4 = *puVar2;
    *puVar2 = uVar4 & 0xffffe000 | uVar4 & 0x3ff | (param_6 & 7) << 10;
    *(uint *)(param_2 + 0x574) =
         *(uint *)(param_2 + 0x574) & (0xf << (ulonglong)(uVar5 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar5 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0x588);
    *pbVar1 = *pbVar1 & 0xfe | (param_6 & 0xf) == 2;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 3:
    if (param_4 < 4) {
      iVar6 = param_2 + param_4 * 0x70;
      *(uint *)(iVar6 + 0x5608) = param_6 & 0xf;
      *(uint *)(iVar6 + 0x5614) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar5 = param_4 * 4;
    puVar2 = (uint *)(uVar5 + param_2 + 0x550);
    uVar4 = *puVar2;
    *puVar2 = uVar4 & 0xffff0000 | uVar4 & 0x1fff | (param_6 & 7) << 0xd;
    *(uint *)(param_2 + 0x578) =
         *(uint *)(param_2 + 0x578) & (0xf << (ulonglong)(uVar5 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar5 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0x588);
    bVar7 = 2;
    if ((param_6 & 0xf) != 2) {
      bVar7 = 0;
    }
    *pbVar1 = *pbVar1 & 0xfd | bVar7;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 4:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x70 + 0x5618) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    puVar2 = (uint *)(param_2 + (param_4 + 0x154) * 4);
    uVar4 = *puVar2;
    *puVar2 = uVar4 & 0xfffffc00 | uVar4 & 0x1f | (param_6 & 0x1f) << 5;
    bVar7 = 0x80;
    if (param_6 != 0xd) {
      bVar7 = 0;
    }
    *(byte *)(param_2 + param_4 + 0x5a0) = bVar7 | *(byte *)(param_6 + 0x1012c778);
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 5:
    if (param_4 < 4) {
      iVar6 = param_2 + param_4 * 0x70;
      *(uint *)(iVar6 + 0x561c) = param_6 & 0xf;
      *(uint *)(iVar6 + 0x5624) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar5 = param_4 * 4;
    puVar2 = (uint *)(uVar5 + param_2 + 0x550);
    uVar4 = *puVar2;
    *puVar2 = uVar4 & 0xfff80000 | uVar4 & 0xffff | (param_6 & 7) << 0x10;
    *(uint *)(param_2 + 0x580) =
         *(uint *)(param_2 + 0x580) & (0xf << (ulonglong)(uVar5 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar5 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0x590);
    *pbVar1 = *pbVar1 & 0xfe | (param_6 & 0xf) == 2;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 6:
    if (param_4 < 4) {
      iVar6 = param_2 + param_4 * 0x70;
      *(uint *)(iVar6 + 0x5620) = param_6 & 0xf;
      *(uint *)(iVar6 + 0x5628) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar5 = param_4 * 4;
    puVar2 = (uint *)(uVar5 + param_2 + 0x550);
    uVar4 = *puVar2;
    *puVar2 = uVar4 & 0xffc00000 | uVar4 & 0x7ffff | (param_6 & 7) << 0x13;
    *(uint *)(param_2 + 0x584) =
         *(uint *)(param_2 + 0x584) & (0xf << (ulonglong)(uVar5 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar5 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0x590);
    bVar7 = 2;
    if ((param_6 & 0xf) != 2) {
      bVar7 = 0;
    }
    *pbVar1 = *pbVar1 & 0xfd | bVar7;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 7:
    if (param_4 < 4) {
      *(uint *)(param_2 + (param_4 + 0xc5) * 0x70) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + (param_4 + 0x183) * 0x30) = param_6;
    *(undefined1 *)(param_3 + 0x38) = 1;
    return;
  case 8:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x70 + 0x5638) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + param_4 * 0x30 + 0x4898) = param_6;
    *(undefined1 *)(param_3 + 0x38) = 1;
    return;
  case 9:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x70 + 0x5634) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + param_4 * 0x30 + 0x4894) = param_6;
    *(undefined1 *)(param_3 + 0x38) = 1;
    return;
  case 10:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x70 + 0x563c) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + param_4 * 0x30 + 0x489c) = param_6;
    *(undefined1 *)(param_3 + 0x38) = 1;
    return;
  case 0xb:
    if ((param_6 & 0x30000) != 0) {
      param_6 = param_6 & 0x30000 | param_4;
    }
    *(uint *)(param_2 + (param_4 + 0x518) * 0x10) = param_6;
    *(undefined1 *)(param_3 + 0x11) = 1;
    FUN_1005f398(param_1);
    param_4 = param_4 * 3;
    uVar5 = 7 << (ulonglong)(param_4 & 0x1f);
    puVar2 = (uint *)(extraout_w1 + 0x5bc);
    *(uint *)(extraout_w1 + 0x5ac) =
         (param_6 & 7) << (ulonglong)(param_4 & 0x1f) |
         *(uint *)(extraout_w1 + 0x5ac) & (uVar5 ^ 0xffffffff);
    uVar4 = *puVar2 & (uVar5 ^ 0xffffffff);
    *puVar2 = uVar4;
    *(uint *)(extraout_w1 + 0x5b8) =
         (param_6 >> 0x10 & 7) << (ulonglong)(param_4 & 0x1f) |
         *(uint *)(extraout_w1 + 0x5b8) & (uVar5 ^ 0xffffffff);
    if (param_6 >> 0x10 == 0) {
      *puVar2 = uVar4 | uVar5;
      return;
    }
    break;
  case 0x16:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x70 + 0x5640) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + param_4 * 0x30 + 0x48a0) = param_6;
    *(undefined1 *)(param_3 + 0x38) = 1;
    return;
  case 0x17:
    if (param_4 < 4) {
      *(uint *)(param_2 + param_4 * 0x70 + 0x5644) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + param_4 * 0x30 + 0x48a4) = param_6;
    *(undefined1 *)(param_3 + 0x38) = 1;
    return;
  case 0x18:
    *(uint *)(param_2 + param_4 * 0x10 + 0x5188) = param_6;
    *(undefined1 *)(param_3 + 0x11) = 1;
    iVar6 = param_2 + param_4 * 0x30;
    uVar5 = 1 << (ulonglong)(param_4 & 0x1f);
    *(ushort *)(iVar6 + 0x48bc) = (ushort)param_6 & 0x100;
    *(ushort *)(iVar6 + 0x48a8) = (ushort)param_6;
    uVar4 = *(uint *)(param_2 + 0x57f4) & (uVar5 ^ 0xffffffff);
    if (*(int *)(iVar6 + 0x48bc) != 0) {
      uVar4 = *(uint *)(param_2 + 0x57f4) | uVar5;
    }
    *(uint *)(param_2 + 0x57f4) = uVar4;
    uVar3 = 0x2000000000;
    if (*(int *)(param_1 + 0x5884) == 0) {
      uVar3 = 0;
    }
    *(ulonglong *)(param_1 + 0x6a0) = uVar3 | *(ulonglong *)(param_1 + 0x6a0) & 0xffffffdfffffffff;
    *(undefined1 *)(param_3 + 0x38) = 1;
    FUN_1005f398(param_1);
    *(uint *)(extraout_w1_00 + 0x5b4) =
         (*(uint *)(extraout_w1_00 + 0x5b4) & (7 << (ulonglong)(param_4 * 3 & 0x1f) ^ 0xffffffffU) |
         (param_6 & 7) << (ulonglong)(param_4 * 3 & 0x1f)) &
         (extraout_w11 << (ulonglong)(param_4 + 0x18 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 8 & 1) << (ulonglong)(param_4 + 0x18 & 0x1f);
    return;
  case 0x1a:
    if (param_4 < 4) {
      iVar6 = param_2 + param_4 * 0x70;
      *(uint *)(iVar6 + 0x5650) = param_6 & 0xf;
      *(uint *)(iVar6 + 0x5654) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar5 = param_4 * 4;
    puVar2 = (uint *)(uVar5 + param_2 + 0x550);
    uVar4 = *puVar2;
    *puVar2 = (uVar4 ^ param_6 << 0x16) & 0x1c00000 ^ uVar4;
    *(uint *)(param_2 + 0x570) =
         *(uint *)(param_2 + 0x570) & (0xf << (ulonglong)(uVar5 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar5 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0x588);
    bVar7 = 4;
    if ((param_6 & 0xf) != 2) {
      bVar7 = 0;
    }
    *pbVar1 = *pbVar1 & 0xfb | bVar7;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1b:
    if (param_4 < 4) {
      iVar6 = param_2 + param_4 * 0x70;
      *(uint *)(iVar6 + 0x5658) = param_6 & 0xf;
      *(uint *)(iVar6 + 0x565c) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar5 = param_4 * 4;
    puVar2 = (uint *)(uVar5 + param_2 + 0x550);
    uVar4 = *puVar2;
    *puVar2 = (uVar4 ^ param_6 << 0x19) & 0xe000000 ^ uVar4;
    *(uint *)(param_2 + 0x57c) =
         *(uint *)(param_2 + 0x57c) & (0xf << (ulonglong)(uVar5 & 0x1f) ^ 0xffffffffU) |
         (param_6 >> 4) << (ulonglong)(uVar5 & 0x1f);
    pbVar1 = (byte *)(param_2 + param_4 + 0x590);
    bVar7 = 4;
    if ((param_6 & 0xf) != 2) {
      bVar7 = 0;
    }
    *pbVar1 = *pbVar1 & 0xfb | bVar7;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1c:
    puVar2 = (uint *)(param_2 + (param_4 + 0x154) * 4);
    uVar4 = *puVar2;
    *puVar2 = (uVar4 ^ param_6 << 0x1c) & 0x70000000 ^ uVar4;
    *(undefined1 *)(param_3 + 8) = 1;
  }
  return;
}

