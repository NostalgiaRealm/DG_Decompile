/*
 * FUN_10035820 at 10035820
 * undefined FUN_10035820(void)
 * Address ranges: 10035820-10036087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035820(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  uint *puVar3;
  ushort *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  int extraout_w10;
  code *extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  
  if (param_2 < 8) {
    if ((param_3 < 0x19) && ((0x1c01ffeU >> (ulonglong)(param_3 & 0x1f) & 1) != 0)) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_1,0);
    }
    if (param_3 - 1 < 0x18) {
      iVar1 = param_1 + 0x80;
      switch(param_3) {
      case 1:
        if (param_2 < 4) {
          *(uint *)(iVar1 + param_2 * 0x120 + 0x13c0) = param_4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        puVar3 = (uint *)(iVar1 + (param_2 + 0xdb) * 4);
        *puVar3 = *puVar3 & 0xffffffe0 | param_4 & 0x1f;
        bVar10 = 0x80;
        if (param_4 != 0xd) {
          bVar10 = 0;
        }
        *(byte *)(iVar1 + param_2 + 0x3b4) = bVar10 | *(byte *)(param_4 + 0x1009e1a8);
        if (param_4 == 1) {
          pbVar2 = (byte *)(((int)param_2 >> 3) + param_1 + 0x444);
          *pbVar2 = *pbVar2 | (byte)(1 << (ulonglong)(param_2 & 7));
          *(undefined1 *)(param_1 + 0x1d38) = 1;
          return;
        }
        pbVar2 = (byte *)(((int)param_2 >> 3) + param_1 + 0x444);
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
        *(undefined1 *)(param_1 + 0x1d38) = 1;
        return;
      case 2:
        if (param_2 < 4) {
          iVar9 = iVar1 + param_2 * 0x120;
          *(uint *)(iVar9 + 0x13c4) = param_4 & 0xf;
          *(uint *)(iVar9 + 0x13d0) = param_4 >> 4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        uVar7 = param_2 * 4;
        puVar3 = (uint *)(uVar7 + param_1 + 0x3ec);
        uVar5 = *puVar3;
        *puVar3 = (uVar5 ^ param_4 << 10) & 0x1c00 ^ uVar5;
        *(uint *)(param_1 + 0x410) =
             *(uint *)(param_1 + 0x410) & (0xf << (ulonglong)(uVar7 & 0x1f) ^ 0xffffffffU) |
             (param_4 >> 4) << (ulonglong)(uVar7 & 0x1f);
        pbVar2 = (byte *)(iVar1 + param_2 + 0x3a4);
        *pbVar2 = *pbVar2 & 0xfe | (param_4 & 0xf) == 2;
        *(undefined1 *)(param_1 + 0x1d38) = 1;
        return;
      case 3:
        if (param_2 < 4) {
          iVar9 = iVar1 + param_2 * 0x120;
          *(uint *)(iVar9 + 0x13c8) = param_4 & 0xf;
          *(uint *)(iVar9 + 0x13d4) = param_4 >> 4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        uVar7 = param_2 * 4;
        puVar3 = (uint *)(uVar7 + param_1 + 0x3ec);
        uVar5 = *puVar3;
        *puVar3 = (uVar5 ^ param_4 << 0xd) & 0xe000 ^ uVar5;
        *(uint *)(param_1 + 0x414) =
             *(uint *)(param_1 + 0x414) & (0xf << (ulonglong)(uVar7 & 0x1f) ^ 0xffffffffU) |
             (param_4 >> 4) << (ulonglong)(uVar7 & 0x1f);
        pbVar2 = (byte *)(iVar1 + param_2 + 0x3a4);
        bVar10 = 2;
        if ((param_4 & 0xf) != 2) {
          bVar10 = 0;
        }
        *pbVar2 = *pbVar2 & 0xfd | bVar10;
        *(undefined1 *)(param_1 + 0x1d38) = 1;
        return;
      case 4:
        if (param_2 < 4) {
          *(uint *)(iVar1 + param_2 * 0x120 + 0x13d8) = param_4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        puVar3 = (uint *)(iVar1 + (param_2 + 0xdb) * 4);
        uVar5 = *puVar3;
        *puVar3 = (uVar5 ^ param_4 << 5) & 0x3e0 ^ uVar5;
        bVar10 = 0x80;
        if (param_4 != 0xd) {
          bVar10 = 0;
        }
        *(byte *)(iVar1 + param_2 + 0x3bc) = bVar10 | *(byte *)(param_4 + 0x1009e1a8);
        *(undefined1 *)(param_1 + 0x1d38) = 1;
        return;
      case 5:
        if (param_2 < 4) {
          iVar9 = iVar1 + param_2 * 0x120;
          *(uint *)(iVar9 + 0x13dc) = param_4 & 0xf;
          *(uint *)(iVar9 + 0x13e4) = param_4 >> 4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        uVar7 = param_2 * 4;
        puVar3 = (uint *)(uVar7 + param_1 + 0x3ec);
        uVar5 = *puVar3;
        *puVar3 = (uVar5 ^ param_4 << 0x10) & 0x70000 ^ uVar5;
        *(uint *)(param_1 + 0x41c) =
             *(uint *)(param_1 + 0x41c) & (0xf << (ulonglong)(uVar7 & 0x1f) ^ 0xffffffffU) |
             (param_4 >> 4) << (ulonglong)(uVar7 & 0x1f);
        pbVar2 = (byte *)(iVar1 + param_2 + 0x3ac);
        *pbVar2 = *pbVar2 & 0xfe | (param_4 & 0xf) == 2;
        *(undefined1 *)(param_1 + 0x1d38) = 1;
        return;
      case 6:
        if (param_2 < 4) {
          iVar9 = iVar1 + param_2 * 0x120;
          *(uint *)(iVar9 + 0x13e0) = param_4 & 0xf;
          *(uint *)(iVar9 + 0x13e8) = param_4 >> 4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        uVar7 = param_2 * 4;
        puVar3 = (uint *)(uVar7 + param_1 + 0x3ec);
        uVar5 = *puVar3;
        *puVar3 = (uVar5 ^ param_4 << 0x13) & 0x380000 ^ uVar5;
        *(uint *)(param_1 + 0x420) =
             *(uint *)(param_1 + 0x420) & (0xf << (ulonglong)(uVar7 & 0x1f) ^ 0xffffffffU) |
             (param_4 >> 4) << (ulonglong)(uVar7 & 0x1f);
        pbVar2 = (byte *)(iVar1 + param_2 + 0x3ac);
        bVar10 = 2;
        if ((param_4 & 0xf) != 2) {
          bVar10 = 0;
        }
        *pbVar2 = *pbVar2 & 0xfd | bVar10;
        *(undefined1 *)(param_1 + 0x1d38) = 1;
        return;
      case 7:
        if (param_2 < 4) {
          *(uint *)(iVar1 + param_2 * 0x120 + 0x13f0) = param_4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        *(uint *)(iVar1 + param_2 * 0x30 + 0x580) = param_4;
        *(undefined1 *)(param_1 + 0x1d48) = 1;
        return;
      case 8:
        if (param_2 < 4) {
          *(uint *)(iVar1 + param_2 * 0x120 + 0x13f8) = param_4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        *(uint *)(iVar1 + param_2 * 0x30 + 0x588) = param_4;
        *(undefined1 *)(param_1 + 0x1d48) = 1;
        return;
      case 9:
        if (param_2 < 4) {
          *(uint *)(iVar1 + param_2 * 0x120 + 0x13f4) = param_4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        *(uint *)(iVar1 + param_2 * 0x30 + 0x584) = param_4;
        *(undefined1 *)(param_1 + 0x1d48) = 1;
        return;
      case 10:
        if (param_2 < 4) {
          *(uint *)(iVar1 + param_2 * 0x120 + 0x13fc) = param_4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        *(uint *)(iVar1 + param_2 * 0x30 + 0x58c) = param_4;
        *(undefined1 *)(param_1 + 0x1d48) = 1;
        return;
      case 0xb:
        if ((param_4 & 0x30000) != 0) {
          param_4 = param_4 & 0x30000 | param_2;
        }
        *(uint *)(iVar1 + (param_2 + 0xea) * 0x10) = param_4;
        *(undefined1 *)(param_1 + 0x1d41) = 1;
        FUN_10032658(param_1);
        param_2 = param_2 * 3;
        uVar7 = 7 << (ulonglong)(param_2 & 0x1f);
        puVar3 = (uint *)(extraout_w11_00 + 0x3d8);
        *(uint *)(extraout_w11_00 + 0x3c8) =
             (param_4 & 7) << (ulonglong)(param_2 & 0x1f) |
             *(uint *)(extraout_w11_00 + 0x3c8) & (uVar7 ^ 0xffffffff);
        uVar5 = *puVar3 & (uVar7 ^ 0xffffffff);
        *puVar3 = uVar5;
        *(uint *)(extraout_w11_00 + 0x3d4) =
             (param_4 >> 0x10 & 7) << (ulonglong)(param_2 & 0x1f) |
             *(uint *)(extraout_w11_00 + 0x3d4) & (uVar7 ^ 0xffffffff);
        if (param_4 >> 0x10 == 0) {
          *puVar3 = uVar5 | uVar7;
          return;
        }
        break;
      case 0x16:
        if (param_2 < 4) {
          *(uint *)(iVar1 + param_2 * 0x120 + 0x1400) = param_4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        *(uint *)(iVar1 + param_2 * 0x30 + 0x590) = param_4;
        *(undefined1 *)(param_1 + 0x1d48) = 1;
        return;
      case 0x17:
        if (param_2 < 4) {
          *(uint *)(iVar1 + param_2 * 0x120 + 0x1404) = param_4;
          *(undefined1 *)(param_1 + 0x1d41) = 1;
        }
        *(uint *)(iVar1 + param_2 * 0x30 + 0x594) = param_4;
        *(undefined1 *)(param_1 + 0x1d48) = 1;
        return;
      case 0x18:
        uVar8 = 1 << (ulonglong)(param_2 & 0x1f);
        *(uint *)(iVar1 + param_2 * 0x10 + 0xea8) = param_4;
        iVar1 = iVar1 + param_2 * 0x30;
        *(undefined1 *)(param_1 + 0x1d41) = 1;
        *(ushort *)(iVar1 + 0x598) = (ushort)param_4;
        puVar4 = (ushort *)(iVar1 + 0x5ac);
        *puVar4 = (ushort)param_4 & 0x100;
        uVar7 = *(uint *)(param_1 + 0x1834);
        uVar5 = uVar7 & (uVar8 ^ 0xffffffff);
        if (*(int *)puVar4 != 0) {
          uVar5 = uVar7 | uVar8;
        }
        *(uint *)(param_1 + 0x1834) = uVar5;
        uVar6 = 0x2000000000000000;
        if (*(int *)(param_1 + 0x1834) == 0) {
          uVar6 = 0;
        }
        *(ulonglong *)(param_1 + 0x4a8) =
             uVar6 | *(ulonglong *)(param_1 + 0x4a8) & 0xdfffffffffffffff;
        *(undefined1 *)(param_1 + 0x1d48) = 1;
        FUN_10032658(param_1);
        *(uint *)(extraout_w11_01 + 0x3d0) =
             (*(uint *)(extraout_w11_01 + 0x3d0) &
              (7 << (ulonglong)(param_2 * 3 & 0x1f) ^ 0xffffffffU) |
             (param_4 & 7) << (ulonglong)(param_2 * 3 & 0x1f)) &
             (extraout_w10 << (ulonglong)(param_2 + 0x18 & 0x1f) ^ 0xffffffffU) |
             (param_4 >> 8 & 1) << (ulonglong)(param_2 + 0x18 & 0x1f);
      }
    }
  }
  return;
}

