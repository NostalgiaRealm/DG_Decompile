/*
 * FUN_10039cd0 at 10039cd0
 * undefined FUN_10039cd0(void)
 * Address ranges: 10039cd0-10039f0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039cd0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  ushort uVar16;
  uint uVar17;
  ulonglong extraout_x15;
  
  iVar10 = 0xe8;
  if ((param_3 & 0xff) == 0) {
    iVar10 = 0xb0;
  }
  uVar14 = param_3 & 0xff;
  uVar6 = (param_3 & 0xf) << 0xc;
  uVar1 = 0x100;
  if (*(int *)(param_1 + (param_3 & 0xff) * 0x20 + 0xd0) == 0) {
    uVar1 = 0;
  }
  uVar7 = (ulonglong)uVar1;
  uVar1 = *(uint *)(param_1 + uVar14 * 0x20 + 0xc4);
  iVar3 = *(int *)(param_1 + uVar14 * 0x20 + 0xcc);
  uVar15 = param_3 & 0xff;
  iVar4 = *(int *)(param_1 + uVar15 * 0x20 + 0xd8);
  if (((param_3 & 1) == 0) && (*(int *)(param_1 + 0xa0) != 0)) {
    uVar16 = *(ushort *)(param_2 + 0x100);
    if ((uVar16 & 0xdf0) == 0) {
      uVar16 = 0x2040;
    }
    else if ((uVar16 & 0xff0) == 0x100) {
      uVar16 = 0x2050;
    }
    else {
      uVar16 = uVar16 | 0x4000;
    }
  }
  else {
    uVar16 = 0x2050;
    if (*(int *)(param_1 + uVar15 * 0x20 + 200) == 0) {
      uVar16 = 0x2040;
    }
    uVar16 = uVar16 | (ushort)uVar6;
  }
  uVar9 = 200;
  if (iVar3 == 0) {
    uVar17 = 0x2040;
  }
  else if (iVar3 == 1) {
    uVar17 = 0x100;
    if (uVar15 == 0) {
      uVar17 = uVar9;
    }
    uVar17 = (uint)*(ushort *)(uVar17 + param_2);
  }
  else {
    uVar17 = 0x2050;
  }
  uVar12 = 0x3050;
  if (*(int *)(param_1 + uVar15 * 0x20 + 0xd4) == 0) {
    uVar12 = 0x3040;
  }
  if (iVar4 == 0) {
    uVar13 = 0x2040;
  }
  else if (iVar4 == 1) {
    uVar2 = 0x100;
    if (uVar15 == 0) {
      uVar2 = uVar9;
    }
    uVar13 = *(ushort *)(uVar2 + param_2);
  }
  else {
    uVar13 = 0x2050;
  }
  uVar2 = 0x100;
  if (uVar15 == 0) {
    uVar2 = uVar9;
  }
  uVar11 = 0;
  if (uVar1 < 0x10) {
    uVar5 = *(ushort *)(uVar2 + param_2);
    switch(uVar1) {
    case 1:
      uVar11 = uVar16;
      break;
    case 2:
      uVar11 = uVar13 | 0x1000;
      break;
    case 3:
      uVar11 = uVar12;
      break;
    case 4:
      uVar11 = uVar5 | 0x1000;
      break;
    case 5:
      uVar11 = uVar5;
      break;
    case 8:
    case 0xe:
    case 0xf:
      uVar11 = 0x100;
      break;
    case 9:
      uVar11 = uVar16 | 0x100;
      break;
    case 10:
      uVar11 = uVar13 | 0x1100;
      break;
    case 0xb:
      uVar11 = uVar12 | 0x100;
      break;
    case 0xc:
      uVar11 = uVar5 | 0x1100;
      break;
    case 0xd:
      uVar11 = uVar5 | 0x100;
    }
  }
  uVar8 = (ulonglong)uVar6;
  FUN_10039a68(*(undefined4 *)(param_1 + uVar14 * 0x20 + 0xc0),uVar11 | (ushort)uVar6,uVar17 | uVar6
               ,uVar16,uVar12,uVar7,uVar8,0,iVar10 + param_2);
  FUN_10039f20(extraout_x15 & 0xffffffff,uVar7 & 0xffffffff,uVar8 & 0xffffffff);
  return;
}

