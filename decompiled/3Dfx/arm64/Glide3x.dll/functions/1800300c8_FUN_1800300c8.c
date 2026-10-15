/*
 * FUN_1800300c8 at 1800300c8
 * undefined __cdecl FUN_1800300c8(longlong param_1, uint param_2, longlong param_3, ulonglong param_4)
 * Address ranges: 1800300c8-180030203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800300c8(longlong param_1,uint param_2,longlong param_3,ulonglong param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint extraout_w10;
  undefined8 *extraout_x11;
  undefined8 *puVar8;
  ushort *extraout_x11_00;
  int extraout_w12;
  int iVar9;
  longlong lVar10;
  longlong extraout_x13;
  uint extraout_w14;
  
  uVar6 = (ulonglong)(param_2 + 1);
  lVar10 = 0xf0;
  if ((param_4 & 0xff) == 0) {
    lVar10 = 0xb8;
  }
  puVar8 = (undefined8 *)(lVar10 + uVar6 * 0xe + param_3);
  if (param_2 < 2) {
    lVar10 = 0xfa;
    if ((param_4 & 0xff) == 0) {
      lVar10 = 0xc2;
    }
    uVar3 = *(ushort *)(lVar10 + param_3 + (ulonglong)(param_2 + 2) * 0xe);
  }
  else {
    uVar3 = 0;
  }
  lVar10 = param_1 + (ulonglong)param_2 * 0x1a0;
  uVar5 = (ushort)(((uint)param_4 & 0xf) << 0xc);
  iVar9 = *(int *)(lVar10 + (param_4 & 0xff) * 0x10 + 0x100);
  uVar7 = *(uint *)(lVar10 + (param_4 & 0xff) * 0x10 + 0x104);
  uVar4 = 0x100;
  if (*(int *)(lVar10 + (param_4 & 0xff) * 0x10 + 0x108) == 0) {
    uVar4 = 0;
  }
  if (uVar7 < 0x10) {
    uVar7 = (uint)*(ushort *)(&DAT_180067950 + (ulonglong)uVar7 * 2);
  }
  else {
    uVar7 = 0;
  }
  if ((uVar7 & 0xf0) == 0xf0) {
    uVar2 = FUN_18002fe28(uVar3,(ulonglong)(uVar7 & 0xf00));
    uVar7 = (uint)uVar2 | extraout_w10 & 0x1000;
    puVar8 = extraout_x11;
    lVar10 = extraout_x13;
    iVar9 = extraout_w12;
    param_2 = extraout_w14;
  }
  uVar2 = (ushort)uVar7;
  uVar1 = (ushort)param_2;
  if (((uVar7 & 0xf0) - 0x20 & 0xffffffef) == 0) {
    if (*(int *)(lVar10 + 0x144) == 0) {
      uVar2 = uVar2 & 0xff0f;
    }
    else {
      uVar2 = uVar2 | uVar1;
    }
  }
  FUN_18002ffc0(iVar9,uVar5 | uVar2,uVar3,uVar5 | uVar1 | 0x2010,uVar1 | 0x3010,uVar4,uVar5,
                (ushort)uVar6,puVar8);
  FUN_180030418(extraout_x11_00,uVar4,uVar5);
  return;
}

