/*
 * FUN_18005cf50 at 18005cf50
 * undefined __fastcall FUN_18005cf50(longlong param_1, longlong param_2, longlong param_3, uint param_4, undefined4 param_5, uint param_6)
 * Address ranges: 18005cf50-18005d875
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005cf50(longlong param_1,longlong param_2,longlong param_3,uint param_4,
                  undefined4 param_5,uint param_6)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  bVar4 = (byte)param_4;
  bVar5 = (byte)param_6;
  uVar7 = (ushort)param_6;
  switch(param_5) {
  case 1:
    if (param_4 < 4) {
      *(uint *)((ulonglong)param_4 * 0x80 + 0x7290 + param_2) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar2 = (ulonglong)param_4;
    uVar3 = *(uint *)(param_2 + 0xe68 + uVar2 * 4);
    *(uint *)(param_2 + 0xe68 + uVar2 * 4) = (uVar3 ^ param_6) & 0x1f ^ uVar3;
    bVar4 = 0;
    if (param_6 == 0xd) {
      bVar4 = 0x80;
    }
    *(byte *)(uVar2 + 0xeb0 + param_2) = bVar4 | (&DAT_180102768)[param_6];
    if (param_6 == 1) {
      pbVar1 = (byte *)(param_2 + 0xec0 + ((longlong)(int)param_4 >> 3));
      *pbVar1 = *pbVar1 | '\x01' << (param_4 & 7);
      *(undefined1 *)(param_3 + 8) = 1;
    }
    else {
      pbVar1 = (byte *)(param_2 + 0xec0 + ((longlong)(int)param_4 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (param_4 & 7));
      *(undefined1 *)(param_3 + 8) = 1;
    }
    break;
  case 2:
    if (param_4 < 4) {
      *(uint *)((ulonglong)param_4 * 0x80 + 0x7294 + param_2) = param_6 & 0xf;
      *(uint *)((ulonglong)param_4 * 0x80 + 0x72a0 + param_2) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar2 = (ulonglong)param_4;
    uVar3 = *(uint *)(param_2 + 0xe68 + uVar2 * 4);
    *(uint *)(param_2 + 0xe68 + uVar2 * 4) = (uVar3 ^ param_6 << 10) & 0x1c00 ^ uVar3;
    *(uint *)(param_2 + 0xe8c) =
         ~(0xf << (bVar4 * '\x04' & 0x1f)) & *(uint *)(param_2 + 0xe8c) |
         (param_6 >> 4) << (bVar4 * '\x04' & 0x1f);
    pbVar1 = (byte *)(uVar2 + 0xea0 + param_2);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)(uVar2 + 0xea0 + param_2);
    *pbVar1 = *pbVar1 | (bVar5 & 0xf) == 2;
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 3:
    if (param_4 < 4) {
      *(uint *)((ulonglong)param_4 * 0x80 + 0x7298 + param_2) = param_6 & 0xf;
      *(uint *)((ulonglong)param_4 * 0x80 + 0x72a4 + param_2) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar2 = (ulonglong)param_4;
    uVar3 = *(uint *)(param_2 + 0xe68 + uVar2 * 4);
    *(uint *)(param_2 + 0xe68 + uVar2 * 4) = (uVar3 ^ param_6 << 0xd) & 0xe000 ^ uVar3;
    bVar6 = 0;
    *(uint *)(param_2 + 0xe90) =
         ~(0xf << (bVar4 * '\x04' & 0x1f)) & *(uint *)(param_2 + 0xe90) |
         (param_6 >> 4) << (bVar4 * '\x04' & 0x1f);
    pbVar1 = (byte *)(uVar2 + 0xea0 + param_2);
    *pbVar1 = *pbVar1 & 0xfd;
    if ((bVar5 & 0xf) == 2) {
      bVar6 = 2;
    }
    pbVar1 = (byte *)(uVar2 + 0xea0 + param_2);
    *pbVar1 = *pbVar1 | bVar6;
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 4:
    if (param_4 < 4) {
      *(uint *)((ulonglong)param_4 * 0x80 + 0x72a8 + param_2) = param_6;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar2 = (ulonglong)param_4;
    uVar3 = *(uint *)(param_2 + 0xe68 + uVar2 * 4);
    *(uint *)(param_2 + 0xe68 + uVar2 * 4) = (uVar3 ^ param_6 << 5) & 0x3e0 ^ uVar3;
    bVar4 = 0;
    if (param_6 == 0xd) {
      bVar4 = 0x80;
    }
    *(byte *)(uVar2 + 0xeb8 + param_2) = bVar4 | (&DAT_180102768)[param_6];
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 5:
    if (param_4 < 4) {
      *(uint *)((ulonglong)param_4 * 0x80 + 0x72ac + param_2) = param_6 & 0xf;
      *(uint *)((ulonglong)param_4 * 0x80 + 0x72b4 + param_2) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar2 = (ulonglong)param_4;
    uVar3 = *(uint *)(param_2 + 0xe68 + uVar2 * 4);
    *(uint *)(param_2 + 0xe68 + uVar2 * 4) = (uVar3 ^ param_6 << 0x10) & 0x70000 ^ uVar3;
    *(uint *)(param_2 + 0xe98) =
         ~(0xf << (bVar4 * '\x04' & 0x1f)) & *(uint *)(param_2 + 0xe98) |
         (param_6 >> 4) << (bVar4 * '\x04' & 0x1f);
    pbVar1 = (byte *)(uVar2 + 0xea8 + param_2);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)(uVar2 + 0xea8 + param_2);
    *pbVar1 = *pbVar1 | (bVar5 & 0xf) == 2;
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 6:
    if (param_4 < 4) {
      *(uint *)((ulonglong)param_4 * 0x80 + 0x72b0 + param_2) = param_6 & 0xf;
      *(uint *)((ulonglong)param_4 * 0x80 + 0x72b8 + param_2) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar2 = (ulonglong)param_4;
    uVar3 = *(uint *)(param_2 + 0xe68 + uVar2 * 4);
    *(uint *)(param_2 + 0xe68 + uVar2 * 4) = (uVar3 ^ param_6 << 0x13) & 0x380000 ^ uVar3;
    bVar6 = 2;
    *(uint *)(param_2 + 0xe9c) =
         ~(0xf << (bVar4 * '\x04' & 0x1f)) & *(uint *)(param_2 + 0xe9c) |
         (param_6 >> 4) << (bVar4 * '\x04' & 0x1f);
    pbVar1 = (byte *)(uVar2 + 0xea8 + param_2);
    *pbVar1 = *pbVar1 & 0xfd;
    goto LAB_18005d78b;
  case 7:
    if (param_4 < 4) {
      *(ushort *)((ulonglong)param_4 * 0x80 + 0x72c0 + param_2) = uVar7;
      *(undefined2 *)((ulonglong)param_4 * 0x80 + 0x72c2 + param_2) = param_6._2_2_;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(ushort *)((ulonglong)param_4 * 0x40 + 0x6470 + param_2) = uVar7;
    *(undefined2 *)((ulonglong)param_4 * 0x40 + 0x6472 + param_2) = param_6._2_2_;
    *(undefined1 *)(param_3 + 0x43) = 1;
    break;
  case 8:
    if (param_4 < 4) {
      *(ushort *)((ulonglong)param_4 * 0x80 + 0x72c8 + param_2) = uVar7;
      *(undefined2 *)((ulonglong)param_4 * 0x80 + 0x72ca + param_2) = param_6._2_2_;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(ushort *)((ulonglong)param_4 * 0x40 + 0x6478 + param_2) = uVar7;
    *(undefined2 *)((ulonglong)param_4 * 0x40 + 0x647a + param_2) = param_6._2_2_;
    *(undefined1 *)(param_3 + 0x43) = 1;
    break;
  case 9:
    if (param_4 < 4) {
      *(ushort *)((ulonglong)param_4 * 0x80 + 0x72c4 + param_2) = uVar7;
      *(undefined2 *)((ulonglong)param_4 * 0x80 + 0x72c6 + param_2) = param_6._2_2_;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(ushort *)((ulonglong)param_4 * 0x40 + 0x6474 + param_2) = uVar7;
    *(undefined2 *)((ulonglong)param_4 * 0x40 + 0x6476 + param_2) = param_6._2_2_;
    *(undefined1 *)(param_3 + 0x43) = 1;
    break;
  case 10:
    if (param_4 < 4) {
      *(ushort *)((ulonglong)param_4 * 0x80 + 0x72cc + param_2) = uVar7;
      *(undefined2 *)((ulonglong)param_4 * 0x80 + 0x72ce + param_2) = param_6._2_2_;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(ushort *)((ulonglong)param_4 * 0x40 + 0x647c + param_2) = uVar7;
    *(undefined2 *)((ulonglong)param_4 * 0x40 + 0x647e + param_2) = param_6._2_2_;
    *(undefined1 *)(param_3 + 0x43) = 1;
    break;
  case 0xb:
    if ((param_6 & 0x70000) != 0) {
      param_6 = param_6 & 0x70000 | param_4;
    }
    *(uint *)(param_2 + ((ulonglong)param_4 + 0x6df) * 0x10) = param_6;
    *(undefined1 *)(param_3 + 0x11) = 1;
    lVar8 = param_2;
    FUN_18005a6b0(param_1);
    uVar3 = *(uint *)(param_2 + 0xec8);
    bVar4 = (char)param_4 * '\x03';
    uVar10 = 7 << (bVar4 & 0x1f);
    uVar9 = ~uVar10;
    *(uint *)(lVar8 + 0xed8) = *(uint *)(lVar8 + 0xed8) & uVar9;
    *(uint *)(lVar8 + 0xec8) = uVar3 & uVar9 | (param_6 & 7) << (bVar4 & 0x1f);
    *(uint *)(lVar8 + 0xed4) =
         *(uint *)(lVar8 + 0xed4) & uVar9 | (param_6 >> 0x10 & 7) << (bVar4 & 0x1f);
    if (param_6 >> 0x10 == 0) {
      *(uint *)(lVar8 + 0xed8) = *(uint *)(lVar8 + 0xed8) | uVar10;
    }
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x19:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    break;
  case 0x16:
    if (param_4 < 4) {
      *(ushort *)((ulonglong)param_4 * 0x80 + 0x72d0 + param_2) = uVar7;
      *(undefined2 *)((ulonglong)param_4 * 0x80 + 0x72d2 + param_2) = param_6._2_2_;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(uint *)(((ulonglong)param_4 + 0x192) * 0x40 + param_2) = param_6;
    *(undefined1 *)(param_3 + 0x43) = 1;
    break;
  case 0x17:
    if (param_4 < 4) {
      *(ushort *)((ulonglong)param_4 * 0x80 + 0x72d4 + param_2) = uVar7;
      *(undefined2 *)((ulonglong)param_4 * 0x80 + 0x72d6 + param_2) = param_6._2_2_;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    *(ushort *)((ulonglong)param_4 * 0x40 + 0x6484 + param_2) = uVar7;
    *(undefined2 *)((ulonglong)param_4 * 0x40 + 0x6486 + param_2) = param_6._2_2_;
    *(undefined1 *)(param_3 + 0x43) = 1;
    break;
  case 0x18:
    lVar8 = (ulonglong)param_4 * 0x40;
    *(uint *)(param_2 + 0x6df8 + (ulonglong)param_4 * 0x10) = param_6;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(ushort *)(lVar8 + 0x64ac + param_2) = uVar7 & 0x100;
    *(ushort *)(lVar8 + 0x6488 + param_2) = uVar7;
    uVar3 = 1 << (bVar4 & 0x1f);
    if (*(int *)(lVar8 + 0x64ac + param_2) == 0) {
      uVar3 = *(uint *)(param_2 + 0x74e4) & ~uVar3;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x74e4) | uVar3;
    }
    *(uint *)(param_2 + 0x74e4) = uVar3;
    *(ulonglong *)(param_1 + 0xfe0) = *(ulonglong *)(param_1 + 0xfe0) & 0xbfffffffffffffff;
    *(ulonglong *)(param_1 + 0xfe0) =
         *(ulonglong *)(param_1 + 0xfe0) |
         -(ulonglong)(*(int *)(param_1 + 0x7594) != 0) & 0x4000000000000000;
    *(undefined1 *)(param_3 + 0x43) = 1;
    FUN_18005a6b0(param_1);
    bVar4 = (char)param_4 + 0x18;
    bVar5 = (char)param_4 * '\x03';
    *(uint *)(param_2 + 0xed0) =
         ~(1 << (bVar4 & 0x1f)) &
         (~(7 << (bVar5 & 0x1f)) & *(uint *)(param_2 + 0xed0) | (param_6 & 7) << (bVar5 & 0x1f)) |
         (param_6 >> 8 & 1) << (bVar4 & 0x1f);
    break;
  case 0x1a:
    if (param_4 < 4) {
      *(uint *)((ulonglong)param_4 * 0x80 + 0x72e0 + param_2) = param_6 & 0xf;
      *(uint *)((ulonglong)param_4 * 0x80 + 0x72e4 + param_2) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar2 = (ulonglong)param_4;
    uVar3 = *(uint *)(param_2 + 0xe68 + uVar2 * 4);
    *(uint *)(param_2 + 0xe68 + uVar2 * 4) = (uVar3 ^ param_6 << 0x16) & 0x1c00000 ^ uVar3;
    bVar6 = 0;
    *(uint *)(param_2 + 0xe88) =
         ~(0xf << (bVar4 * '\x04' & 0x1f)) & *(uint *)(param_2 + 0xe88) |
         (param_6 >> 4) << (bVar4 * '\x04' & 0x1f);
    pbVar1 = (byte *)(uVar2 + 0xea0 + param_2);
    *pbVar1 = *pbVar1 & 0xfb;
    if ((bVar5 & 0xf) == 2) {
      bVar6 = 4;
    }
    pbVar1 = (byte *)(uVar2 + 0xea0 + param_2);
    *pbVar1 = *pbVar1 | bVar6;
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 0x1b:
    if (param_4 < 4) {
      *(uint *)((ulonglong)param_4 * 0x80 + 0x72e8 + param_2) = param_6 & 0xf;
      *(uint *)((ulonglong)param_4 * 0x80 + 0x72ec + param_2) = param_6 >> 4;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    uVar2 = (ulonglong)param_4;
    uVar3 = *(uint *)(param_2 + 0xe68 + uVar2 * 4);
    *(uint *)(param_2 + 0xe68 + uVar2 * 4) = (uVar3 ^ param_6 << 0x19) & 0xe000000 ^ uVar3;
    bVar6 = 4;
    *(uint *)(param_2 + 0xe94) =
         ~(0xf << (bVar4 * '\x04' & 0x1f)) & *(uint *)(param_2 + 0xe94) |
         (param_6 >> 4) << (bVar4 * '\x04' & 0x1f);
    pbVar1 = (byte *)(uVar2 + 0xea8 + param_2);
    *pbVar1 = *pbVar1 & 0xfb;
LAB_18005d78b:
    bVar4 = 0;
    if ((bVar5 & 0xf) == 2) {
      bVar4 = bVar6;
    }
    pbVar1 = (byte *)((ulonglong)param_4 + 0xea8 + param_2);
    *pbVar1 = *pbVar1 | bVar4;
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 0x1c:
    uVar3 = *(uint *)(param_2 + 0xe68 + (ulonglong)param_4 * 4);
    *(uint *)(param_2 + 0xe68 + (ulonglong)param_4 * 4) =
         (param_6 << 0x1c ^ uVar3) & 0x70000000 ^ uVar3;
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 0x20:
    lVar8 = (ulonglong)param_4 * 0x40;
    *(float *)(lVar8 + 0x6490 + param_2) = (float)(param_6 >> 0x10 & 0xff) / 255.0;
    *(float *)(lVar8 + 0x6494 + param_2) = (float)(param_6 >> 8 & 0xff) / 255.0;
    *(float *)(lVar8 + 0x6498 + param_2) = (float)(param_6 & 0xff) / 255.0;
    *(float *)(lVar8 + 0x649c + param_2) = (float)(param_6 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x43) = 1;
    if (param_4 < 4) {
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    break;
  default:
    goto switchD_18005cf90_default;
  }
switchD_18005cf90_default:
  return;
}

