/*
 * FUN_180032024 at 180032024
 * uint * __fastcall FUN_180032024(longlong param_1, uint * param_2, uint param_3, uint param_4)
 * Address ranges: 180032024-18003214d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180032024(longlong param_1,uint *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (param_3 < param_4) {
    uVar9 = *(uint *)(param_1 + 0x20);
    uVar2 = *(ushort *)(param_1 + 0x10);
    uVar10 = (uint)uVar2;
    uVar3 = *(ushort *)(param_1 + 0x12);
    uVar11 = (uint)uVar3;
    uVar8 = *(uint *)(param_1 + 0x18);
    uVar6 = (param_3 << 0xc) / uVar8;
    param_2[1] = uVar6;
    uVar4 = (ulonglong)(param_3 << 0xc) % (ulonglong)uVar8;
    uVar7 = (param_4 << 0xc) / uVar8;
    param_2[3] = uVar7;
    uVar5 = (ulonglong)(param_4 << 0xc) % (ulonglong)uVar8;
    if (uVar9 == 0) {
      bVar1 = *(byte *)(param_1 + 0x26);
      uVar8 = (uint)(uVar4 / bVar1);
      *param_2 = uVar8;
      uVar9 = (uint)(uVar5 / bVar1);
      param_2[2] = uVar9;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x24);
      uVar8 = (uint)(uVar4 / uVar9);
      *param_2 = uVar8;
      uVar9 = (uint)(uVar5 / uVar9);
      param_2[2] = uVar9;
      uVar10 = (uint)uVar2 / (uint)bVar1;
      uVar11 = (uint)uVar3 / (uint)*(byte *)(param_1 + 0x25);
      if (uVar10 == 0) {
        uVar10 = 1;
      }
      if (uVar11 == 0) {
        uVar11 = 1;
      }
    }
    if (uVar10 < uVar8) {
      uVar6 = uVar6 + 1;
      *param_2 = 0;
      param_2[1] = uVar6;
    }
    if (uVar10 < uVar9) {
      param_2[2] = uVar10;
      uVar9 = uVar10;
    }
    if (uVar11 <= uVar6) {
      param_2[1] = uVar11;
    }
    if (uVar11 <= uVar7) {
      uVar7 = uVar11 - 1;
      param_2[2] = uVar10;
      param_2[3] = uVar7;
      uVar9 = uVar10;
    }
    if (uVar9 == 0) {
      param_2[2] = uVar10;
      param_2[3] = uVar7 - 1;
    }
  }
  return param_2;
}

