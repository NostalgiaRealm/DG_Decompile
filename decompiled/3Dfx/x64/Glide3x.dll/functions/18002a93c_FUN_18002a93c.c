/*
 * FUN_18002a93c at 18002a93c
 * undefined __fastcall FUN_18002a93c(longlong param_1, byte param_2)
 * Address ranges: 18002a93c-18002aadd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002a93c(longlong param_1,byte param_2)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  lVar1 = (ulonglong)param_2 + 0x128;
  lVar7 = (ulonglong)(-(uint)(param_2 != 0) & 0x38) + 0xb8 + param_1;
  uVar10 = (ulonglong)(-(uint)(param_2 != 0) & 0x38);
  lVar5 = param_1;
  FUN_18002a8a4(param_1,0,*(ushort *)(uVar10 + 0xc2 + param_1));
  uVar2 = *(ushort *)(uVar10 + 0xc2 + param_1);
  lVar11 = 0x129;
  if (((byte)uVar2 & 0xf0) == 0xf0) {
    lVar3 = lVar1;
    if ((uVar2 >> 0xc & 1) != 0) {
      lVar3 = lVar11;
    }
    *(byte *)(lVar3 + lVar5) = *(byte *)(lVar3 + lVar5) | (byte)(1 << (uVar2 & 0xf));
  }
  uVar10 = 0;
  do {
    uVar9 = (uint)uVar10;
    lVar3 = lVar5;
    if ((*(byte *)(lVar5 + 0x128 + (ulonglong)param_2) & (byte)(1 << ((byte)uVar10 & 0x1f))) != 0) {
      lVar8 = uVar10 * 0xe;
      uVar2 = *(ushort *)(lVar7 + lVar8);
      if (((byte)uVar2 & 0xf0) == 0xf0) {
        lVar4 = lVar1;
        if ((uVar2 >> 0xc & 1) != 0) {
          lVar4 = lVar11;
        }
        *(byte *)(lVar5 + lVar4) = *(byte *)(lVar5 + lVar4) | (byte)(1 << (uVar2 & 0xf));
      }
      uVar2 = *(ushort *)(lVar7 + 2 + lVar8);
      if (((byte)uVar2 & 0xf0) == 0xf0) {
        lVar4 = lVar1;
        if ((uVar2 >> 0xc & 1) != 0) {
          lVar4 = lVar11;
        }
        *(byte *)(lVar5 + lVar4) = *(byte *)(lVar5 + lVar4) | (byte)(1 << (uVar2 & 0xf));
      }
      uVar2 = *(ushort *)(lVar7 + 4 + lVar8);
      if (((byte)uVar2 & 0xf0) == 0xf0) {
        lVar4 = lVar1;
        if ((uVar2 >> 0xc & 1) != 0) {
          lVar4 = lVar11;
        }
        *(byte *)(lVar5 + lVar4) = *(byte *)(lVar5 + lVar4) | (byte)(1 << (uVar2 & 0xf));
      }
      uVar2 = *(ushort *)(lVar7 + 6 + lVar8);
      if (((byte)uVar2 & 0xf0) == 0xf0) {
        lVar4 = lVar1;
        if ((uVar2 >> 0xc & 1) != 0) {
          lVar4 = lVar11;
        }
        *(byte *)(lVar5 + lVar4) = *(byte *)(lVar5 + lVar4) | (byte)(1 << (uVar2 & 0xf));
      }
      uVar6 = uVar9;
      FUN_18002a8a4(lVar5,uVar9,*(ushort *)(lVar7 + lVar8));
      FUN_18002a8a4(lVar5,uVar6,*(ushort *)(lVar7 + 2 + lVar8));
      FUN_18002a8a4(lVar5,uVar6,*(ushort *)(lVar7 + 4 + lVar8));
      FUN_18002a8a4(lVar5,uVar6,*(ushort *)(lVar7 + 6 + lVar8));
      FUN_18002a8a4(lVar5,uVar6,*(ushort *)(lVar7 + 10 + lVar8));
    }
    uVar10 = (ulonglong)(uVar9 + 1);
    lVar5 = lVar3;
  } while (uVar9 + 1 < 4);
  return;
}

