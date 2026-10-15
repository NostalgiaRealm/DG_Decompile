/*
 * FUN_100433b0 at 100433b0
 * undefined __thiscall FUN_100433b0(void * this, int param_1, int param_2, uint param_3, undefined4 param_4, uint param_5)
 * Address ranges: 100433b0-10043b44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100433b0(void *this,int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  byte *pbVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar8;
  ushort uVar7;
  
  bVar6 = (byte)param_5;
  uVar7 = (ushort)param_5;
  uVar2 = (undefined2)(param_5 >> 0x10);
  switch(param_4) {
  case 1:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x70 + 0x5600 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)(param_1 + 0x550 + param_3 * 4) =
         *(uint *)(param_1 + 0x550 + param_3 * 4) & 0xffffffe0 | param_5 & 0x1f;
    *(byte *)(param_1 + 0x598 + param_3) = (param_5 != 0xd) - 1U & 0x80 | (&DAT_100b260c)[param_5];
    if (param_5 != 1) {
      pbVar1 = (byte *)(param_1 + 0x5a8 + ((int)param_3 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (param_3 & 7));
      *(undefined1 *)(param_2 + 8) = 1;
      return;
    }
    pbVar1 = (byte *)(param_1 + 0x5a8 + ((int)param_3 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (param_3 & 7);
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 2:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x70 + 0x5604 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x70 + 0x5610 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar5 = param_3 * 4;
    *(uint *)(iVar5 + 0x550 + param_1) =
         *(uint *)(iVar5 + 0x550 + param_1) & 0xffffe3ff | (param_5 & 7) << 10;
    *(uint *)(param_1 + 0x574) =
         ~(0xf << ((byte)iVar5 & 0x1f)) & *(uint *)(param_1 + 0x574) |
         (param_5 >> 4) << ((byte)iVar5 & 0x1f);
    *(byte *)(param_1 + 0x588 + param_3) =
         *(byte *)(param_1 + 0x588 + param_3) & 0xfe | (bVar6 & 0xf) == 2;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 3:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x70 + 0x5608 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x70 + 0x5614 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar5 = param_3 * 4;
    *(uint *)(iVar5 + 0x550 + param_1) =
         *(uint *)(iVar5 + 0x550 + param_1) & 0xffff1fff | (param_5 & 7) << 0xd;
    *(uint *)(param_1 + 0x578) =
         ~(0xf << ((byte)iVar5 & 0x1f)) & *(uint *)(param_1 + 0x578) |
         (param_5 >> 4) << ((byte)iVar5 & 0x1f);
    *(byte *)(param_1 + 0x588 + param_3) =
         *(byte *)(param_1 + 0x588 + param_3) & 0xfd | ((bVar6 & 0xf) != 2) - 1U & 2;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 4:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x70 + 0x5618 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)(param_1 + 0x550 + param_3 * 4) =
         *(uint *)(param_1 + 0x550 + param_3 * 4) & 0xfffffc1f | (param_5 & 0x1f) << 5;
    *(byte *)(param_1 + 0x5a0 + param_3) = (param_5 != 0xd) - 1U & 0x80 | (&DAT_100b260c)[param_5];
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 5:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x70 + 0x561c + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x70 + 0x5624 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar5 = param_3 * 4;
    *(uint *)(iVar5 + 0x550 + param_1) =
         *(uint *)(iVar5 + 0x550 + param_1) & 0xfff8ffff | (param_5 & 7) << 0x10;
    *(uint *)(param_1 + 0x580) =
         ~(0xf << ((byte)iVar5 & 0x1f)) & *(uint *)(param_1 + 0x580) |
         (param_5 >> 4) << ((byte)iVar5 & 0x1f);
    *(byte *)(param_1 + 0x590 + param_3) =
         *(byte *)(param_1 + 0x590 + param_3) & 0xfe | (bVar6 & 0xf) == 2;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 6:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x70 + 0x5620 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x70 + 0x5628 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar5 = param_3 * 4;
    *(uint *)(iVar5 + 0x550 + param_1) =
         *(uint *)(iVar5 + 0x550 + param_1) & 0xffc7ffff | (param_5 & 7) << 0x13;
    *(uint *)(param_1 + 0x584) =
         ~(0xf << ((byte)iVar5 & 0x1f)) & *(uint *)(param_1 + 0x584) |
         (param_5 >> 4) << ((byte)iVar5 & 0x1f);
    *(byte *)(param_1 + 0x590 + param_3) =
         *(byte *)(param_1 + 0x590 + param_3) & 0xfd | ((bVar6 & 0xf) != 2) - 1U & 2;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 7:
    if (param_3 < 4) {
      iVar5 = (param_3 + 0xc5) * 0x70;
      *(ushort *)(iVar5 + param_1) = uVar7;
      *(undefined2 *)(iVar5 + 2 + param_1) = uVar2;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_1 + (param_3 + 0x183) * 0x30) = uVar7;
    *(undefined2 *)(param_1 + 2 + (param_3 + 0x183) * 0x30) = uVar2;
    *(undefined1 *)(param_2 + 0x38) = 1;
    return;
  case 8:
    if (param_3 < 4) {
      *(ushort *)(param_3 * 0x70 + 0x5638 + param_1) = uVar7;
      *(undefined2 *)(param_3 * 0x70 + 0x563a + param_1) = uVar2;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_1 + 0x4898 + param_3 * 0x30) = uVar7;
    *(undefined2 *)(param_1 + 0x489a + param_3 * 0x30) = uVar2;
    *(undefined1 *)(param_2 + 0x38) = 1;
    return;
  case 9:
    if (param_3 < 4) {
      *(ushort *)(param_3 * 0x70 + 0x5634 + param_1) = uVar7;
      *(undefined2 *)(param_3 * 0x70 + 0x5636 + param_1) = uVar2;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_1 + 0x4894 + param_3 * 0x30) = uVar7;
    *(undefined2 *)(param_1 + 0x4896 + param_3 * 0x30) = uVar2;
    *(undefined1 *)(param_2 + 0x38) = 1;
    return;
  case 10:
    if (param_3 < 4) {
      *(ushort *)(param_3 * 0x70 + 0x563c + param_1) = uVar7;
      *(undefined2 *)(param_3 * 0x70 + 0x563e + param_1) = uVar2;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_1 + 0x489c + param_3 * 0x30) = uVar7;
    *(undefined2 *)(param_1 + 0x489e + param_3 * 0x30) = uVar2;
    *(undefined1 *)(param_2 + 0x38) = 1;
    return;
  case 0xb:
    if ((param_5 & 0x30000) != 0) {
      param_5 = param_5 & 0x30000 | param_3;
    }
    *(uint *)(param_1 + (param_3 + 0x518) * 0x10) = param_5;
    *(undefined1 *)(param_2 + 0x11) = 1;
    FUN_100417d0((int)this);
    bVar6 = (char)param_3 * '\x03';
    uVar4 = 7 << (bVar6 & 0x1f);
    uVar8 = ~uVar4;
    uVar3 = uVar8 & *(uint *)(param_1 + 0x5bc);
    *(uint *)(param_1 + 0x5bc) = uVar3;
    *(uint *)(param_1 + 0x5ac) =
         uVar8 & *(uint *)(param_1 + 0x5ac) | (param_5 & 7) << (bVar6 & 0x1f);
    *(uint *)(param_1 + 0x5b8) =
         *(uint *)(param_1 + 0x5b8) & uVar8 | (param_5 >> 0x10 & 7) << (bVar6 & 0x1f);
    if (param_5 >> 0x10 == 0) {
      *(uint *)(param_1 + 0x5bc) = uVar3 | uVar4;
      return;
    }
    break;
  case 0x16:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x70 + 0x5640 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)(param_1 + 0x48a0 + param_3 * 0x30) = param_5;
    *(undefined1 *)(param_2 + 0x38) = 1;
    return;
  case 0x17:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x70 + 0x5644 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)(param_1 + 0x48a4 + param_3 * 0x30) = param_5;
    *(undefined1 *)(param_2 + 0x38) = 1;
    return;
  case 0x18:
    *(uint *)(param_1 + 0x5188 + param_3 * 0x10) = param_5;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(ushort *)(param_1 + 0x48a8 + param_3 * 0x30) = uVar7;
    *(ushort *)(param_1 + 0x48bc + param_3 * 0x30) = uVar7 & 0x100;
    if (*(int *)(param_1 + 0x48bc + param_3 * 0x30) == 0) {
      uVar4 = *(uint *)(param_1 + 0x57f4) & ~(1 << (param_3 & 0x1f));
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x57f4) | 1 << (param_3 & 0x1f);
    }
    *(uint *)(param_1 + 0x57f4) = uVar4;
    *(undefined4 *)((int)this + 0x6a0) = *(undefined4 *)((int)this + 0x6a0);
    *(uint *)((int)this + 0x6a4) =
         (uint)(*(int *)((int)this + 0x5884) != 0) << 5 | *(uint *)((int)this + 0x6a4) & 0xffffffdf;
    *(undefined1 *)(param_2 + 0x38) = 1;
    FUN_100417d0((int)this);
    bVar6 = (char)param_3 * '\x03';
    *(uint *)(param_1 + 0x5b4) =
         (param_5 >> 8 & 1) << ((byte)(param_3 + 0x18) & 0x1f) |
         (~(7 << (bVar6 & 0x1f)) & *(uint *)(param_1 + 0x5b4) | (param_5 & 7) << (bVar6 & 0x1f)) &
         ~(1 << (param_3 + 0x18 & 0x1f));
    return;
  case 0x1a:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x70 + 0x5650 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x70 + 0x5654 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar5 = param_3 * 4;
    uVar4 = *(uint *)(iVar5 + 0x550 + param_1);
    *(uint *)(iVar5 + 0x550 + param_1) = (param_5 << 0x16 ^ uVar4) & 0x1c00000 ^ uVar4;
    *(uint *)(param_1 + 0x570) =
         ~(0xf << ((byte)iVar5 & 0x1f)) & *(uint *)(param_1 + 0x570) |
         (param_5 >> 4) << ((byte)iVar5 & 0x1f);
    *(byte *)(param_1 + 0x588 + param_3) =
         *(byte *)(param_1 + 0x588 + param_3) & 0xfb | ((bVar6 & 0xf) != 2) - 1U & 4;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 0x1b:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x70 + 0x5658 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x70 + 0x565c + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar5 = param_3 * 4;
    uVar4 = *(uint *)(iVar5 + 0x550 + param_1);
    *(uint *)(iVar5 + 0x550 + param_1) = (param_5 << 0x19 ^ uVar4) & 0xe000000 ^ uVar4;
    *(uint *)(param_1 + 0x57c) =
         ~(0xf << ((byte)iVar5 & 0x1f)) & *(uint *)(param_1 + 0x57c) |
         (param_5 >> 4) << ((byte)iVar5 & 0x1f);
    *(byte *)(param_1 + 0x590 + param_3) =
         *(byte *)(param_1 + 0x590 + param_3) & 0xfb | ((bVar6 & 0xf) != 2) - 1U & 4;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 0x1c:
    uVar4 = *(uint *)(param_1 + 0x550 + param_3 * 4);
    *(uint *)(param_1 + 0x550 + param_3 * 4) = (param_5 << 0x1c ^ uVar4) & 0x70000000 ^ uVar4;
    *(undefined1 *)(param_2 + 8) = 1;
  }
  return;
}

