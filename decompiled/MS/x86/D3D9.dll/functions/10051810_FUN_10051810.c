/*
 * FUN_10051810 at 10051810
 * undefined __thiscall FUN_10051810(void * this, int param_1, int param_2, uint param_3, undefined4 param_4, uint param_5)
 * Address ranges: 10051810-10052096
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10051810(void *this,int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  
  bVar2 = (byte)param_5;
  uVar7 = (ushort)param_5;
  uVar3 = (undefined2)(param_5 >> 0x10);
  switch(param_4) {
  case 1:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x80 + 0x7290 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)(param_1 + 0xe68 + param_3 * 4) =
         *(uint *)(param_1 + 0xe68 + param_3 * 4) & 0xffffffe0 | param_5 & 0x1f;
    *(byte *)(param_1 + 0xeb0 + param_3) = (param_5 != 0xd) - 1U & 0x80 | (&DAT_100d5c6c)[param_5];
    if (param_5 == 1) {
      pbVar1 = (byte *)(param_1 + 0xec0 + ((int)param_3 >> 3));
      *pbVar1 = *pbVar1 | '\x01' << (param_3 & 7);
      *(undefined1 *)(param_2 + 8) = 1;
      return;
    }
    pbVar1 = (byte *)(param_1 + 0xec0 + ((int)param_3 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (param_3 & 7));
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 2:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x80 + 0x7294 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x80 + 0x72a0 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar8 = param_3 * 4;
    *(uint *)(iVar8 + 0xe68 + param_1) =
         *(uint *)(iVar8 + 0xe68 + param_1) & 0xffffe3ff | (param_5 & 7) << 10;
    *(uint *)(param_1 + 0xe8c) =
         ~(0xf << ((byte)iVar8 & 0x1f)) & *(uint *)(param_1 + 0xe8c) |
         (param_5 >> 4) << ((byte)iVar8 & 0x1f);
    *(byte *)(param_1 + 0xea0 + param_3) =
         *(byte *)(param_1 + 0xea0 + param_3) & 0xfe | (bVar2 & 0xf) == 2;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 3:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x80 + 0x7298 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x80 + 0x72a4 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar8 = param_3 * 4;
    *(uint *)(iVar8 + 0xe68 + param_1) =
         *(uint *)(iVar8 + 0xe68 + param_1) & 0xffff1fff | (param_5 & 7) << 0xd;
    *(uint *)(param_1 + 0xe90) =
         ~(0xf << ((byte)iVar8 & 0x1f)) & *(uint *)(param_1 + 0xe90) |
         (param_5 >> 4) << ((byte)iVar8 & 0x1f);
    *(byte *)(param_1 + 0xea0 + param_3) =
         *(byte *)(param_1 + 0xea0 + param_3) & 0xfd | ((bVar2 & 0xf) != 2) - 1U & 2;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 4:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x80 + 0x72a8 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)(param_1 + 0xe68 + param_3 * 4) =
         *(uint *)(param_1 + 0xe68 + param_3 * 4) & 0xfffffc1f | (param_5 & 0x1f) << 5;
    *(byte *)(param_1 + 0xeb8 + param_3) = (param_5 != 0xd) - 1U & 0x80 | (&DAT_100d5c6c)[param_5];
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 5:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x80 + 0x72ac + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x80 + 0x72b4 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar8 = param_3 * 4;
    *(uint *)(iVar8 + 0xe68 + param_1) =
         *(uint *)(iVar8 + 0xe68 + param_1) & 0xfff8ffff | (param_5 & 7) << 0x10;
    *(uint *)(param_1 + 0xe98) =
         ~(0xf << ((byte)iVar8 & 0x1f)) & *(uint *)(param_1 + 0xe98) |
         (param_5 >> 4) << ((byte)iVar8 & 0x1f);
    bVar6 = *(byte *)(param_1 + 0xea8 + param_3) & 0xfe;
    bVar2 = (bVar2 & 0xf) == 2;
    goto LAB_10051f7d;
  case 6:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x80 + 0x72b0 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x80 + 0x72b8 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar8 = param_3 * 4;
    *(uint *)(iVar8 + 0xe68 + param_1) =
         *(uint *)(iVar8 + 0xe68 + param_1) & 0xffc7ffff | (param_5 & 7) << 0x13;
    *(uint *)(param_1 + 0xe9c) =
         ~(0xf << ((byte)iVar8 & 0x1f)) & *(uint *)(param_1 + 0xe9c) |
         (param_5 >> 4) << ((byte)iVar8 & 0x1f);
    bVar6 = *(byte *)(param_1 + 0xea8 + param_3) & 0xfd;
    bVar2 = ((bVar2 & 0xf) != 2) - 1U & 2;
    goto LAB_10051f7d;
  case 7:
    if (param_3 < 4) {
      *(ushort *)(param_3 * 0x80 + 0x72c0 + param_1) = uVar7;
      *(undefined2 *)(param_3 * 0x80 + 0x72c2 + param_1) = uVar3;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_3 * 0x40 + 0x6470 + param_1) = uVar7;
    *(undefined2 *)(param_3 * 0x40 + 0x6472 + param_1) = uVar3;
    *(undefined1 *)(param_2 + 0x43) = 1;
    return;
  case 8:
    if (param_3 < 4) {
      *(ushort *)(param_3 * 0x80 + 0x72c8 + param_1) = uVar7;
      *(undefined2 *)(param_3 * 0x80 + 0x72ca + param_1) = uVar3;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_3 * 0x40 + 0x6478 + param_1) = uVar7;
    *(undefined2 *)(param_3 * 0x40 + 0x647a + param_1) = uVar3;
    *(undefined1 *)(param_2 + 0x43) = 1;
    return;
  case 9:
    if (param_3 < 4) {
      *(ushort *)(param_3 * 0x80 + 0x72c4 + param_1) = uVar7;
      *(undefined2 *)(param_3 * 0x80 + 0x72c6 + param_1) = uVar3;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_3 * 0x40 + 0x6474 + param_1) = uVar7;
    *(undefined2 *)(param_3 * 0x40 + 0x6476 + param_1) = uVar3;
    *(undefined1 *)(param_2 + 0x43) = 1;
    return;
  case 10:
    if (param_3 < 4) {
      *(ushort *)(param_3 * 0x80 + 0x72cc + param_1) = uVar7;
      *(undefined2 *)(param_3 * 0x80 + 0x72ce + param_1) = uVar3;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_3 * 0x40 + 0x647c + param_1) = uVar7;
    *(undefined2 *)(param_3 * 0x40 + 0x647e + param_1) = uVar3;
    *(undefined1 *)(param_2 + 0x43) = 1;
    return;
  case 0xb:
    if ((param_5 & 0x70000) != 0) {
      param_5 = param_5 & 0x70000 | param_3;
    }
    *(uint *)(param_1 + (param_3 + 0x6df) * 0x10) = param_5;
    *(undefined1 *)(param_2 + 0x11) = 1;
    FUN_1004f170((int)this);
    bVar2 = (char)param_3 * '\x03';
    uVar5 = 7 << (bVar2 & 0x1f);
    uVar9 = ~uVar5;
    uVar4 = uVar9 & *(uint *)(param_1 + 0xed8);
    *(uint *)(param_1 + 0xed8) = uVar4;
    *(uint *)(param_1 + 0xec8) =
         uVar9 & *(uint *)(param_1 + 0xec8) | (param_5 & 7) << (bVar2 & 0x1f);
    *(uint *)(param_1 + 0xed4) =
         *(uint *)(param_1 + 0xed4) & uVar9 | (param_5 >> 0x10 & 7) << (bVar2 & 0x1f);
    if (param_5 >> 0x10 == 0) {
      *(uint *)(param_1 + 0xed8) = uVar4 | uVar5;
      return;
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
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x80 + 0x72d0 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)((param_3 + 0x192) * 0x40 + param_1) = param_5;
    *(undefined1 *)(param_2 + 0x43) = 1;
    return;
  case 0x17:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x80 + 0x72d4 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)(param_3 * 0x40 + 0x6484 + param_1) = param_5;
    *(undefined1 *)(param_2 + 0x43) = 1;
    return;
  case 0x18:
    iVar8 = param_3 * 0x40;
    *(uint *)(param_1 + 0x6df8 + param_3 * 0x10) = param_5;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(ushort *)(iVar8 + 0x6488 + param_1) = uVar7;
    *(ushort *)(iVar8 + 0x64ac + param_1) = uVar7 & 0x100;
    if (*(int *)(iVar8 + 0x64ac + param_1) == 0) {
      uVar5 = *(uint *)(param_1 + 0x74e4) & ~(1 << (param_3 & 0x1f));
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x74e4) | 1 << (param_3 & 0x1f);
    }
    *(uint *)(param_1 + 0x74e4) = uVar5;
    *(undefined4 *)((int)this + 0xfc0) = *(undefined4 *)((int)this + 0xfc0);
    *(uint *)((int)this + 0xfc4) =
         (uint)(*(int *)((int)this + 0x7574) != 0) << 0x1e |
         *(uint *)((int)this + 0xfc4) & 0xbfffffff;
    *(undefined1 *)(param_2 + 0x43) = 1;
    FUN_1004f170((int)this);
    bVar2 = (char)param_3 * '\x03';
    *(uint *)(param_1 + 0xed0) =
         (param_5 >> 8 & 1) << ((byte)(param_3 + 0x18) & 0x1f) |
         (~(7 << (bVar2 & 0x1f)) & *(uint *)(param_1 + 0xed0) | (param_5 & 7) << (bVar2 & 0x1f)) &
         ~(1 << (param_3 + 0x18 & 0x1f));
    return;
  case 0x1a:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x80 + 0x72e0 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x80 + 0x72e4 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar8 = param_3 * 4;
    uVar5 = *(uint *)(iVar8 + 0xe68 + param_1);
    *(uint *)(iVar8 + 0xe68 + param_1) = (param_5 << 0x16 ^ uVar5) & 0x1c00000 ^ uVar5;
    *(uint *)(param_1 + 0xe88) =
         ~(0xf << ((byte)iVar8 & 0x1f)) & *(uint *)(param_1 + 0xe88) |
         (param_5 >> 4) << ((byte)iVar8 & 0x1f);
    *(byte *)(param_1 + 0xea0 + param_3) =
         *(byte *)(param_1 + 0xea0 + param_3) & 0xfb | ((bVar2 & 0xf) != 2) - 1U & 4;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 0x1b:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x80 + 0x72e8 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x80 + 0x72ec + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar8 = param_3 * 4;
    uVar5 = *(uint *)(iVar8 + 0xe68 + param_1);
    *(uint *)(iVar8 + 0xe68 + param_1) = (param_5 << 0x19 ^ uVar5) & 0xe000000 ^ uVar5;
    *(uint *)(param_1 + 0xe94) =
         ~(0xf << ((byte)iVar8 & 0x1f)) & *(uint *)(param_1 + 0xe94) |
         (param_5 >> 4) << ((byte)iVar8 & 0x1f);
    bVar6 = *(byte *)(param_1 + 0xea8 + param_3) & 0xfb;
    bVar2 = ((bVar2 & 0xf) != 2) - 1U & 4;
LAB_10051f7d:
    *(byte *)(param_1 + 0xea8 + param_3) = bVar6 | bVar2;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 0x1c:
    uVar5 = *(uint *)(param_1 + 0xe68 + param_3 * 4);
    *(uint *)(param_1 + 0xe68 + param_3 * 4) = (param_5 << 0x1c ^ uVar5) & 0x70000000 ^ uVar5;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 0x20:
    iVar8 = param_3 * 0x40;
    *(float *)(iVar8 + 0x6490 + param_1) = ((float)(param_5 >> 0x10 & 0xff) + 0.0) / 255.0;
    *(float *)(iVar8 + 0x6494 + param_1) = ((float)(param_5 >> 8 & 0xff) + 0.0) / 255.0;
    *(float *)(iVar8 + 0x6498 + param_1) = ((float)(param_5 & 0xff) + 0.0) / 255.0;
    *(float *)(iVar8 + 0x649c + param_1) = ((float)(param_5 >> 0x18) + 0.0) / 255.0;
    *(undefined1 *)(param_2 + 0x43) = 1;
    if (param_3 < 4) {
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    break;
  default:
    goto switchD_10051836_default;
  }
switchD_10051836_default:
  return;
}

