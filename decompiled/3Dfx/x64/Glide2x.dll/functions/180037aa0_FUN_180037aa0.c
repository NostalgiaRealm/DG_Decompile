/*
 * FUN_180037aa0 at 180037aa0
 * undefined __fastcall FUN_180037aa0(longlong param_1, longlong param_2, byte param_3)
 * Address ranges: 180037aa0-180037d21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180037aa0(longlong param_1,longlong param_2,byte param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  longlong lVar11;
  ushort uVar12;
  ushort uVar13;
  
  uVar13 = (ushort)param_3 << 0xc;
  puVar6 = (ushort *)(param_2 + 0xb8 + (ulonglong)(-(uint)(param_3 != 0) & 0x38));
  lVar11 = (ulonglong)param_3 * 0x20;
  uVar2 = *(uint *)(param_1 + 0xc4 + lVar11);
  iVar3 = *(int *)(param_1 + 0xcc + lVar11);
  uVar12 = -(ushort)(*(int *)(param_1 + 0xd0 + lVar11) != 0) & 0x100;
  iVar4 = *(int *)(param_1 + 0xd8 + lVar11);
  if ((param_3 == 0) && (*(int *)(param_1 + 0xa0) != 0)) {
    uVar7 = *(ushort *)(param_2 + 0x108);
    if ((uVar7 & 0xdf0) == 0) {
      uVar7 = 0x2040;
    }
    else if ((uVar7 & 0xff0) == 0x100) {
      uVar7 = 0x2050;
    }
    else {
      uVar7 = uVar7 | 0x4000;
    }
  }
  else {
    uVar7 = uVar13 | (-(ushort)(*(int *)(param_1 + 200 + lVar11) != 0) & 0x10) + 0x2040;
  }
  uVar5 = 0x2050;
  if (iVar3 == 0) {
    uVar5 = 0x2040;
  }
  else if (iVar3 == 1) {
    uVar5 = *(ushort *)((ulonglong)(-(uint)(param_3 != 0) & 0x38) + 0xd0 + param_2);
  }
  uVar9 = 0x2040;
  uVar10 = 0x2050;
  if (*(int *)(param_1 + 0xd4 + lVar11) == 0) {
    uVar10 = uVar9;
  }
  if ((iVar4 != 0) && (uVar9 = 0x2050, iVar4 == 1)) {
    uVar9 = *(ushort *)((ulonglong)(-(uint)(param_3 != 0) & 0x38) + 0xd0 + param_2);
  }
  uVar1 = *(ushort *)((ulonglong)(-(uint)(param_3 != 0) & 0x38) + 0xd0 + param_2);
  if (uVar2 < 10) {
    if (uVar2 == 9) {
      uVar8 = uVar7 | 0x100;
      goto LAB_180037cba;
    }
    uVar8 = uVar7;
    if (uVar2 == 1) goto LAB_180037cba;
    if (uVar2 == 2) {
      uVar8 = uVar9 | 0x1000;
      goto LAB_180037cba;
    }
    uVar8 = uVar10 | 0x1000;
    if (uVar2 == 3) goto LAB_180037cba;
    if (uVar2 == 4) {
      uVar8 = uVar1 | 0x1000;
      goto LAB_180037cba;
    }
    uVar8 = uVar1;
    if ((uVar2 == 5) || (uVar8 = 0, uVar2 != 8)) goto LAB_180037cba;
  }
  else {
    if (uVar2 == 10) {
      uVar8 = uVar9 | 0x1100;
      goto LAB_180037cba;
    }
    if (uVar2 == 0xb) {
      uVar8 = uVar10 | 0x1100;
      goto LAB_180037cba;
    }
    if (uVar2 == 0xc) {
      uVar8 = uVar1 | 0x1100;
      goto LAB_180037cba;
    }
    if (uVar2 == 0xd) {
      uVar8 = uVar1 | 0x100;
      goto LAB_180037cba;
    }
    if ((uVar2 != 0xe) && (uVar8 = 0, uVar2 != 0xf)) goto LAB_180037cba;
  }
  uVar8 = 0x100;
LAB_180037cba:
  FUN_18003782c(*(uint *)(param_1 + 0xc0 + lVar11),uVar13 | uVar8,uVar13 | uVar5,uVar7,
                uVar10 | 0x1000,uVar12,uVar13,0,(undefined8 *)puVar6);
  FUN_180037d24(puVar6,uVar12,uVar13);
  return;
}

