/*
 * FUN_1002ab30 at 1002ab30
 * undefined __thiscall FUN_1002ab30(void * this, int param_1, int param_2, uint param_3, undefined4 param_4, uint param_5)
 * Address ranges: 1002ab30-1002b1a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002ab30(void *this,int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  
  bVar3 = (byte)param_5;
  uVar8 = (ushort)param_5;
  uVar4 = (undefined2)(param_5 >> 0x10);
  switch(param_4) {
  case 1:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x120 + 0x13c0 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)(param_1 + 0x36c + param_3 * 4) =
         *(uint *)(param_1 + 0x36c + param_3 * 4) & 0xffffffe0 | param_5 & 0x1f;
    *(byte *)(param_1 + 0x3b4 + param_3) = (param_5 != 0xd) - 1U & 0x80 | (&DAT_1005ef44)[param_5];
    if (param_5 == 1) {
      pbVar2 = (byte *)(param_1 + 0x3c4 + ((int)param_3 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_3 & 7);
      *(undefined1 *)(param_2 + 8) = 1;
      return;
    }
    pbVar2 = (byte *)(param_1 + 0x3c4 + ((int)param_3 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (param_3 & 7));
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 2:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x120 + 0x13c4 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x120 + 0x13d0 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar1 = param_3 * 4;
    *(uint *)(iVar1 + 0x36c + param_1) =
         *(uint *)(iVar1 + 0x36c + param_1) & 0xffffe3ff | (param_5 & 7) << 10;
    *(uint *)(param_1 + 0x390) =
         ~(0xf << ((byte)iVar1 & 0x1f)) & *(uint *)(param_1 + 0x390) |
         (param_5 >> 4) << ((byte)iVar1 & 0x1f);
    *(byte *)(param_1 + 0x3a4 + param_3) =
         *(byte *)(param_1 + 0x3a4 + param_3) & 0xfe | (bVar3 & 0xf) == 2;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 3:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x120 + 0x13c8 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x120 + 0x13d4 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar1 = param_3 * 4;
    *(uint *)(iVar1 + 0x36c + param_1) =
         *(uint *)(iVar1 + 0x36c + param_1) & 0xffff1fff | (param_5 & 7) << 0xd;
    *(uint *)(param_1 + 0x394) =
         ~(0xf << ((byte)iVar1 & 0x1f)) & *(uint *)(param_1 + 0x394) |
         (param_5 >> 4) << ((byte)iVar1 & 0x1f);
    *(byte *)(param_1 + 0x3a4 + param_3) =
         *(byte *)(param_1 + 0x3a4 + param_3) & 0xfd | ((bVar3 & 0xf) != 2) - 1U & 2;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 4:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x120 + 0x13d8 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)(param_1 + 0x36c + param_3 * 4) =
         *(uint *)(param_1 + 0x36c + param_3 * 4) & 0xfffffc1f | (param_5 & 0x1f) << 5;
    *(byte *)(param_1 + 0x3bc + param_3) = (param_5 != 0xd) - 1U & 0x80 | (&DAT_1005ef44)[param_5];
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 5:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x120 + 0x13dc + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x120 + 0x13e4 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar1 = param_3 * 4;
    *(uint *)(iVar1 + 0x36c + param_1) =
         *(uint *)(iVar1 + 0x36c + param_1) & 0xfff8ffff | (param_5 & 7) << 0x10;
    *(uint *)(param_1 + 0x39c) =
         ~(0xf << ((byte)iVar1 & 0x1f)) & *(uint *)(param_1 + 0x39c) |
         (param_5 >> 4) << ((byte)iVar1 & 0x1f);
    bVar7 = *(byte *)(param_1 + 0x3ac + param_3) & 0xfe;
    bVar3 = (bVar3 & 0xf) == 2;
    goto LAB_1002ae7e;
  case 6:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x120 + 0x13e0 + param_1) = param_5 & 0xf;
      *(uint *)(param_3 * 0x120 + 0x13e8 + param_1) = param_5 >> 4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    iVar1 = param_3 * 4;
    *(uint *)(iVar1 + 0x36c + param_1) =
         *(uint *)(iVar1 + 0x36c + param_1) & 0xffc7ffff | (param_5 & 7) << 0x13;
    *(uint *)(param_1 + 0x3a0) =
         ~(0xf << ((byte)iVar1 & 0x1f)) & *(uint *)(param_1 + 0x3a0) |
         (param_5 >> 4) << ((byte)iVar1 & 0x1f);
    bVar7 = *(byte *)(param_1 + 0x3ac + param_3) & 0xfd;
    bVar3 = ((bVar3 & 0xf) != 2) - 1U & 2;
LAB_1002ae7e:
    *(byte *)(param_1 + 0x3ac + param_3) = bVar7 | bVar3;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 7:
    if (param_3 < 4) {
      *(ushort *)(param_3 * 0x120 + 0x13f0 + param_1) = uVar8;
      *(undefined2 *)(param_3 * 0x120 + 0x13f2 + param_1) = uVar4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_1 + 0x580 + param_3 * 0x30) = uVar8;
    *(undefined2 *)(param_1 + 0x582 + param_3 * 0x30) = uVar4;
    *(undefined1 *)(param_2 + 0x18) = 1;
    return;
  case 8:
    if (param_3 < 4) {
      *(ushort *)(param_3 * 0x120 + 0x13f8 + param_1) = uVar8;
      *(undefined2 *)(param_3 * 0x120 + 0x13fa + param_1) = uVar4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_1 + 0x588 + param_3 * 0x30) = uVar8;
    *(undefined2 *)(param_1 + 0x58a + param_3 * 0x30) = uVar4;
    *(undefined1 *)(param_2 + 0x18) = 1;
    return;
  case 9:
    if (param_3 < 4) {
      *(ushort *)(param_3 * 0x120 + 0x13f4 + param_1) = uVar8;
      *(undefined2 *)(param_3 * 0x120 + 0x13f6 + param_1) = uVar4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_1 + 0x584 + param_3 * 0x30) = uVar8;
    *(undefined2 *)(param_1 + 0x586 + param_3 * 0x30) = uVar4;
    *(undefined1 *)(param_2 + 0x18) = 1;
    return;
  case 10:
    if (param_3 < 4) {
      *(ushort *)(param_3 * 0x120 + 0x13fc + param_1) = uVar8;
      *(undefined2 *)(param_3 * 0x120 + 0x13fe + param_1) = uVar4;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(ushort *)(param_1 + 0x58c + param_3 * 0x30) = uVar8;
    *(undefined2 *)(param_1 + 0x58e + param_3 * 0x30) = uVar4;
    *(undefined1 *)(param_2 + 0x18) = 1;
    return;
  case 0xb:
    if ((param_5 & 0x30000) != 0) {
      param_5 = param_5 & 0x30000 | param_3;
    }
    *(uint *)(param_1 + (param_3 + 0xea) * 0x10) = param_5;
    *(undefined1 *)(param_2 + 0x11) = 1;
    FUN_10029190((int)this);
    bVar3 = (char)param_3 * '\x03';
    uVar6 = 7 << (bVar3 & 0x1f);
    uVar9 = ~uVar6;
    uVar5 = uVar9 & *(uint *)(param_1 + 0x3d8);
    *(uint *)(param_1 + 0x3d8) = uVar5;
    *(uint *)(param_1 + 0x3c8) =
         uVar9 & *(uint *)(param_1 + 0x3c8) | (param_5 & 7) << (bVar3 & 0x1f);
    *(uint *)(param_1 + 0x3d4) =
         *(uint *)(param_1 + 0x3d4) & uVar9 | (param_5 >> 0x10 & 7) << (bVar3 & 0x1f);
    if (param_5 >> 0x10 == 0) {
      *(uint *)(param_1 + 0x3d8) = uVar5 | uVar6;
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
    break;
  case 0x16:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x120 + 0x1400 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)(param_1 + 0x590 + param_3 * 0x30) = param_5;
    *(undefined1 *)(param_2 + 0x18) = 1;
    return;
  case 0x17:
    if (param_3 < 4) {
      *(uint *)(param_3 * 0x120 + 0x1404 + param_1) = param_5;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    *(uint *)(param_1 + 0x594 + param_3 * 0x30) = param_5;
    *(undefined1 *)(param_2 + 0x18) = 1;
    return;
  case 0x18:
    *(uint *)(param_1 + 0xea8 + param_3 * 0x10) = param_5;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(ushort *)(param_1 + 0x598 + param_3 * 0x30) = uVar8;
    *(ushort *)(param_1 + 0x5ac + param_3 * 0x30) = uVar8 & 0x100;
    if (*(int *)(param_1 + 0x5ac + param_3 * 0x30) == 0) {
      uVar6 = *(uint *)(param_1 + 0x17b4) & ~(1 << (param_3 & 0x1f));
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x17b4) | 1 << (param_3 & 0x1f);
    }
    *(uint *)(param_1 + 0x17b4) = uVar6;
    *(undefined4 *)((int)this + 0x4a8) = *(undefined4 *)((int)this + 0x4a8);
    *(uint *)((int)this + 0x4ac) =
         (uint)(*(int *)((int)this + 0x1834) != 0) << 0x1d |
         *(uint *)((int)this + 0x4ac) & 0xdfffffff;
    *(undefined1 *)(param_2 + 0x18) = 1;
    FUN_10029190((int)this);
    bVar3 = (char)param_3 * '\x03';
    *(uint *)(param_1 + 0x3d0) =
         (param_5 >> 8 & 1) << ((byte)(param_3 + 0x18) & 0x1f) |
         (~(7 << (bVar3 & 0x1f)) & *(uint *)(param_1 + 0x3d0) | (param_5 & 7) << (bVar3 & 0x1f)) &
         ~(1 << (param_3 + 0x18 & 0x1f));
    break;
  default:
    goto switchD_1002ab56_default;
  }
switchD_1002ab56_default:
  return;
}

