/*
 * FUN_180055fa0 at 180055fa0
 * undefined FUN_180055fa0(void)
 * Address ranges: 180055fa0-1800567b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055fa0(longlong param_1,longlong param_2,longlong param_3,uint param_4,
                  undefined4 param_5,ulonglong param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong extraout_x1;
  longlong extraout_x1_00;
  uint uVar6;
  int extraout_w11;
  
  uVar6 = (uint)param_6;
  switch(param_5) {
  case 1:
    if (param_4 < 4) {
      *(uint *)(param_2 + (ulonglong)param_4 * 0x80 + 0x7290) = uVar6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    lVar2 = param_2 + (ulonglong)param_4 * 4;
    lVar1 = param_2 + 0xec0;
    *(uint *)(lVar2 + 0xe68) = *(uint *)(lVar2 + 0xe68) & 0xffffffe0 | uVar6 & 0x1f;
    *(char *)(param_2 + (ulonglong)param_4 + 0xeb0) =
         (&DAT_18022c278)[param_6 & 0xffffffff] | (uVar6 == 0xd) << 7;
    iVar3 = (int)param_4 >> 3;
    if (uVar6 != 1) {
      *(byte *)(lVar1 + iVar3) =
           *(byte *)(lVar1 + iVar3) & ((byte)(1 << (ulonglong)(param_4 & 7)) ^ 0xff);
      *(undefined1 *)(param_3 + 8) = 1;
      return;
    }
    *(byte *)(lVar1 + iVar3) = *(byte *)(lVar1 + iVar3) | (byte)(1 << (ulonglong)(param_4 & 7));
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 2:
    if (param_4 < 4) {
      lVar2 = param_2 + (ulonglong)param_4 * 0x80;
      *(uint *)(lVar2 + 0x7294) = uVar6 & 0xf;
      *(uint *)(lVar2 + 0x72a0) = uVar6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    lVar2 = param_2 + (ulonglong)param_4 * 4;
    uVar4 = *(uint *)(lVar2 + 0xe68);
    *(uint *)(lVar2 + 0xe68) = (uVar4 ^ uVar6 << 10) & 0x1c00 ^ uVar4;
    *(uint *)(param_2 + 0xe8c) =
         *(uint *)(param_2 + 0xe8c) & (0xf << (ulonglong)(param_4 << 2 & 0x1f) ^ 0xffffffffU) |
         (uVar6 >> 4) << (ulonglong)(param_4 << 2 & 0x1f);
    *(byte *)(param_2 + (ulonglong)param_4 + 0xea0) =
         *(byte *)(param_2 + (ulonglong)param_4 + 0xea0) & 0xfe | (uVar6 & 0xf) == 2;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 3:
    if (param_4 < 4) {
      lVar2 = param_2 + (ulonglong)param_4 * 0x80;
      *(uint *)(lVar2 + 0x7298) = uVar6 & 0xf;
      *(uint *)(lVar2 + 0x72a4) = uVar6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    lVar2 = param_2 + (ulonglong)param_4 * 4;
    uVar4 = *(uint *)(lVar2 + 0xe68);
    *(uint *)(lVar2 + 0xe68) = (uVar4 ^ uVar6 << 0xd) & 0xe000 ^ uVar4;
    *(uint *)(param_2 + 0xe90) =
         *(uint *)(param_2 + 0xe90) & (0xf << (ulonglong)(param_4 << 2 & 0x1f) ^ 0xffffffffU) |
         (uVar6 >> 4) << (ulonglong)(param_4 << 2 & 0x1f);
    *(byte *)(param_2 + (ulonglong)param_4 + 0xea0) =
         *(byte *)(param_2 + (ulonglong)param_4 + 0xea0) & 0xfd | ((uVar6 & 0xf) == 2) << 1;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 4:
    if (param_4 < 4) {
      *(uint *)(param_2 + (ulonglong)param_4 * 0x80 + 0x72a8) = uVar6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    lVar2 = param_2 + (ulonglong)param_4 * 4;
    uVar4 = *(uint *)(lVar2 + 0xe68);
    *(uint *)(lVar2 + 0xe68) = (uVar4 ^ uVar6 << 5) & 0x3e0 ^ uVar4;
    *(char *)(param_2 + (ulonglong)param_4 + 0xeb8) =
         (&DAT_18022c278)[param_6 & 0xffffffff] | (uVar6 == 0xd) << 7;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 5:
    if (param_4 < 4) {
      lVar2 = param_2 + (ulonglong)param_4 * 0x80;
      *(uint *)(lVar2 + 0x72ac) = uVar6 & 0xf;
      *(uint *)(lVar2 + 0x72b4) = uVar6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    lVar2 = param_2 + (ulonglong)param_4 * 4;
    uVar4 = *(uint *)(lVar2 + 0xe68);
    *(uint *)(lVar2 + 0xe68) = (uVar4 ^ uVar6 << 0x10) & 0x70000 ^ uVar4;
    *(uint *)(param_2 + 0xe98) =
         *(uint *)(param_2 + 0xe98) & (0xf << (ulonglong)(param_4 << 2 & 0x1f) ^ 0xffffffffU) |
         (uVar6 >> 4) << (ulonglong)(param_4 << 2 & 0x1f);
    *(byte *)(param_2 + (ulonglong)param_4 + 0xea8) =
         *(byte *)(param_2 + (ulonglong)param_4 + 0xea8) & 0xfe | (uVar6 & 0xf) == 2;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 6:
    if (param_4 < 4) {
      lVar2 = param_2 + (ulonglong)param_4 * 0x80;
      *(uint *)(lVar2 + 0x72b0) = uVar6 & 0xf;
      *(uint *)(lVar2 + 0x72b8) = uVar6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    lVar2 = param_2 + (ulonglong)param_4 * 4;
    uVar4 = *(uint *)(lVar2 + 0xe68);
    *(uint *)(lVar2 + 0xe68) = (uVar4 ^ uVar6 << 0x13) & 0x380000 ^ uVar4;
    *(uint *)(param_2 + 0xe9c) =
         *(uint *)(param_2 + 0xe9c) & (0xf << (ulonglong)(param_4 << 2 & 0x1f) ^ 0xffffffffU) |
         (uVar6 >> 4) << (ulonglong)(param_4 << 2 & 0x1f);
    *(byte *)(param_2 + (ulonglong)param_4 + 0xea8) =
         *(byte *)(param_2 + (ulonglong)param_4 + 0xea8) & 0xfd | ((uVar6 & 0xf) == 2) << 1;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 7:
    if (param_4 < 4) {
      *(uint *)(param_2 + (ulonglong)param_4 * 0x80 + 0x72c0) = uVar6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + (ulonglong)param_4 * 0x40 + 0x6470) = uVar6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 8:
    if (param_4 < 4) {
      *(uint *)(param_2 + (ulonglong)param_4 * 0x80 + 0x72c8) = uVar6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + (ulonglong)param_4 * 0x40 + 0x6478) = uVar6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 9:
    if (param_4 < 4) {
      *(uint *)(param_2 + (ulonglong)param_4 * 0x80 + 0x72c4) = uVar6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + (ulonglong)param_4 * 0x40 + 0x6474) = uVar6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 10:
    if (param_4 < 4) {
      *(uint *)(param_2 + (ulonglong)param_4 * 0x80 + 0x72cc) = uVar6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + (ulonglong)param_4 * 0x40 + 0x647c) = uVar6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0xb:
    if ((param_6 & 0x70000) != 0) {
      param_6 = (ulonglong)(uVar6 & 0x70000 | param_4);
    }
    *(int *)(param_2 + ((ulonglong)param_4 + 0x6df) * 0x10) = (int)param_6;
    *(undefined1 *)(param_3 + 0x11) = 1;
    func_0x000180164380();
    param_4 = param_4 * 3;
    uVar4 = 7 << (ulonglong)(param_4 & 0x1f);
    *(uint *)(extraout_x1 + 0xec8) =
         *(uint *)(extraout_x1 + 0xec8) & (uVar4 ^ 0xffffffff) |
         ((uint)param_6 & 7) << (ulonglong)(param_4 & 0x1f);
    uVar6 = *(uint *)(extraout_x1 + 0xed8) & (uVar4 ^ 0xffffffff);
    *(uint *)(extraout_x1 + 0xed4) =
         *(uint *)(extraout_x1 + 0xed4) & (uVar4 ^ 0xffffffff) |
         ((uint)(param_6 >> 0x10) & 7) << (ulonglong)(param_4 & 0x1f);
    *(uint *)(extraout_x1 + 0xed8) = uVar6;
    if ((param_6 & 0xffff0000) == 0) {
      *(uint *)(extraout_x1 + 0xed8) = uVar4 | uVar6;
      return;
    }
    break;
  case 0x16:
    if (param_4 < 4) {
      *(uint *)(param_2 + (ulonglong)param_4 * 0x80 + 0x72d0) = uVar6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + ((ulonglong)param_4 + 0x192) * 0x40) = uVar6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0x17:
    if (param_4 < 4) {
      *(uint *)(param_2 + (ulonglong)param_4 * 0x80 + 0x72d4) = uVar6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(param_2 + (ulonglong)param_4 * 0x40 + 0x6484) = uVar6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0x18:
    lVar2 = param_2 + (ulonglong)param_4 * 0x40;
    *(uint *)(param_2 + (ulonglong)param_4 * 0x10 + 0x6df8) = uVar6;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(ushort *)(lVar2 + 0x64ac) = (ushort)param_6 & 0x100;
    uVar5 = 1 << (ulonglong)(param_4 & 0x1f);
    *(ushort *)(lVar2 + 0x6488) = (ushort)param_6;
    uVar4 = *(uint *)(param_2 + 0x74e4) & (uVar5 ^ 0xffffffff);
    if (*(int *)(lVar2 + 0x64ac) != 0) {
      uVar4 = *(uint *)(param_2 + 0x74e4) | uVar5;
    }
    *(uint *)(param_2 + 0x74e4) = uVar4;
    *(ulonglong *)(param_1 + 0xfe0) =
         *(ulonglong *)(param_1 + 0xfe0) & 0xbfffffffffffffff |
         (ulonglong)(*(int *)(param_1 + 0x7594) != 0) << 0x3e;
    *(undefined1 *)(param_3 + 0x43) = 1;
    func_0x000180164380();
    *(uint *)(extraout_x1_00 + 0xed0) =
         (*(uint *)(extraout_x1_00 + 0xed0) & (7 << (ulonglong)(param_4 * 3 & 0x1f) ^ 0xffffffffU) |
         (uVar6 & 7) << (ulonglong)(param_4 * 3 & 0x1f)) &
         (extraout_w11 << (ulonglong)(param_4 + 0x18 & 0x1f) ^ 0xffffffffU) |
         (uVar6 >> 8 & 1) << (ulonglong)(param_4 + 0x18 & 0x1f);
    return;
  case 0x1a:
    if (param_4 < 4) {
      lVar2 = param_2 + (ulonglong)param_4 * 0x80;
      *(uint *)(lVar2 + 0x72e0) = uVar6 & 0xf;
      *(uint *)(lVar2 + 0x72e4) = uVar6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    lVar2 = param_2 + (ulonglong)param_4 * 4;
    uVar4 = *(uint *)(lVar2 + 0xe68);
    *(uint *)(lVar2 + 0xe68) = (uVar4 ^ uVar6 << 0x16) & 0x1c00000 ^ uVar4;
    *(uint *)(param_2 + 0xe88) =
         *(uint *)(param_2 + 0xe88) & (0xf << (ulonglong)(param_4 << 2 & 0x1f) ^ 0xffffffffU) |
         (uVar6 >> 4) << (ulonglong)(param_4 << 2 & 0x1f);
    *(byte *)(param_2 + (ulonglong)param_4 + 0xea0) =
         *(byte *)(param_2 + (ulonglong)param_4 + 0xea0) & 0xfb | ((uVar6 & 0xf) == 2) << 2;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1b:
    if (param_4 < 4) {
      lVar2 = param_2 + (ulonglong)param_4 * 0x80;
      *(uint *)(lVar2 + 0x72e8) = uVar6 & 0xf;
      *(uint *)(lVar2 + 0x72ec) = uVar6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    lVar2 = param_2 + (ulonglong)param_4 * 4;
    uVar4 = *(uint *)(lVar2 + 0xe68);
    *(uint *)(lVar2 + 0xe68) = (uVar4 ^ uVar6 << 0x19) & 0xe000000 ^ uVar4;
    *(uint *)(param_2 + 0xe94) =
         *(uint *)(param_2 + 0xe94) & (0xf << (ulonglong)(param_4 << 2 & 0x1f) ^ 0xffffffffU) |
         (uVar6 >> 4) << (ulonglong)(param_4 << 2 & 0x1f);
    *(byte *)(param_2 + (ulonglong)param_4 + 0xea8) =
         *(byte *)(param_2 + (ulonglong)param_4 + 0xea8) & 0xfb | ((uVar6 & 0xf) == 2) << 2;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1c:
    param_2 = param_2 + (ulonglong)param_4 * 4;
    uVar4 = *(uint *)(param_2 + 0xe68);
    *(uint *)(param_2 + 0xe68) = (uVar4 ^ uVar6 << 0x1c) & 0x70000000 ^ uVar4;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x20:
    param_2 = param_2 + (ulonglong)param_4 * 0x40;
    *(float *)(param_2 + 0x6490) = (float)(uVar6 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6494) = (float)(uVar6 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6498) = (float)(uVar6 & 0xff) / 255.0;
    *(float *)(param_2 + 0x649c) = (float)(uVar6 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x43) = 1;
    if (param_4 < 4) {
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
  }
  return;
}

