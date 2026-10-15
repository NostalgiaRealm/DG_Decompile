/*
 * FUN_180030208 at 180030208
 * undefined __cdecl FUN_180030208(longlong param_1, longlong param_2, byte param_3)
 * Address ranges: 180030208-180030403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030208(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort *extraout_x11;
  ushort uVar13;
  int extraout_w12;
  ulonglong uVar14;
  ushort uVar15;
  
  lVar1 = 0xf0;
  if (param_3 == 0) {
    lVar1 = 0xb8;
  }
  uVar14 = (ulonglong)param_3;
  uVar9 = 0x100;
  if (*(int *)(param_1 + uVar14 * 0x20 + 0xd0) == 0) {
    uVar9 = 0;
  }
  uVar3 = *(uint *)(param_1 + uVar14 * 0x20 + 0xc4);
  iVar4 = *(int *)(param_1 + uVar14 * 0x20 + 0xcc);
  iVar5 = *(int *)(param_1 + uVar14 * 0x20 + 0xd4);
  iVar6 = *(int *)(param_1 + uVar14 * 0x20 + 0xd8);
  uVar13 = (ushort)param_3;
  if (((param_3 & 1) == 0) && (*(int *)(param_1 + 0xa0) != 0)) {
    uVar12 = *(ushort *)(param_2 + 0x108);
    if ((uVar12 & 0xdf0) == 0) {
      uVar8 = 0x2040;
    }
    else {
      uVar8 = 0x2050;
      if ((uVar12 & 0xff0) != 0x100) {
        uVar8 = uVar12 | 0x4000;
      }
    }
    uVar12 = (ushort)param_3 << 0xc;
  }
  else {
    uVar12 = uVar13 << 0xc;
    uVar8 = 0x2050;
    if (*(int *)(param_1 + uVar14 * 0x20 + 200) == 0) {
      uVar8 = 0x2040;
    }
    uVar8 = uVar12 | uVar8;
  }
  uVar11 = 0x2050;
  uVar15 = 0x2040;
  if ((iVar4 != 0) && (uVar15 = 0x2050, iVar4 == 1)) {
    lVar2 = 0x108;
    if (param_3 == 0) {
      lVar2 = 0xd0;
    }
    uVar15 = *(ushort *)(param_2 + lVar2);
  }
  uVar10 = 0x3050;
  if (iVar5 == 0) {
    uVar10 = 0x3040;
  }
  if (iVar6 == 0) {
    uVar11 = 0x2040;
  }
  else if (iVar6 == 1) {
    lVar2 = 0x108;
    if (uVar13 == 0) {
      lVar2 = 0xd0;
    }
    uVar11 = *(ushort *)(param_2 + lVar2);
  }
  lVar2 = 0x108;
  if (uVar13 == 0) {
    lVar2 = 0xd0;
  }
  uVar13 = 0;
  if (uVar3 < 0x10) {
    uVar7 = *(ushort *)(param_2 + lVar2);
    switch(uVar3) {
    case 1:
      uVar13 = uVar8;
      break;
    case 2:
      uVar13 = uVar11 | 0x1000;
      break;
    case 3:
      uVar13 = uVar10;
      break;
    case 4:
      uVar13 = uVar7 | 0x1000;
      break;
    case 5:
      uVar13 = uVar7;
      break;
    case 8:
    case 0xe:
    case 0xf:
      uVar13 = 0x100;
      break;
    case 9:
      uVar13 = uVar8 | 0x100;
      break;
    case 10:
      uVar13 = uVar11 | 0x1100;
      break;
    case 0xb:
      uVar13 = 0x3150;
      if (iVar5 == 0) {
        uVar13 = 0x3140;
      }
      break;
    case 0xc:
      uVar13 = uVar7 | 0x1100;
      break;
    case 0xd:
      uVar13 = uVar7 | 0x100;
    }
  }
  FUN_18002ffc0(*(int *)(param_1 + uVar14 * 0x20 + 0xc0),uVar12 | uVar13,uVar12 | uVar15,uVar8,
                uVar10,uVar9,(ushort)param_3 << 0xc,0,(undefined8 *)(lVar1 + param_2));
  FUN_180030418(extraout_x11,uVar9,(ushort)(extraout_w12 << 0xc));
  return;
}

