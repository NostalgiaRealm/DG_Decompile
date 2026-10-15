/*
 * FUN_1002e499 at 1002e499
 * undefined __fastcall FUN_1002e499(int param_1, int param_2, byte param_3)
 * Address ranges: 1002e499-1002e65c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e499(int param_1,int param_2,byte param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort *puVar18;
  
  puVar9 = (ushort *)(((param_3 != 0) - 1 & 0xffffffc8) + 0xe8 + param_2);
  iVar10 = ((param_3 != 0) - 1 & 0xffffffc8) + 0xf6 + param_2;
  uVar7 = (ushort)param_3 << 0xc;
  uVar11 = -(uint)(*(int *)(param_1 + 0xd0 + (uint)param_3 * 0x20) != 0) & 0x100;
  uVar1 = *(undefined4 *)(param_1 + 0xc4 + (uint)param_3 * 0x20);
  uVar2 = *(uint *)(param_1 + 0xc0 + (uint)param_3 * 0x20);
  iVar3 = *(int *)(param_1 + 0xcc + (uint)param_3 * 0x20);
  iVar4 = *(int *)(param_1 + 0xd4 + (uint)param_3 * 0x20);
  iVar5 = *(int *)(param_1 + 0xd8 + (uint)param_3 * 0x20);
  if ((param_3 == 0) && (*(int *)(param_1 + 0xa0) != 0)) {
    uVar8 = *(ushort *)(param_2 + 0x100);
    cVar6 = FUN_1002dd95();
    uVar12 = 0x2040;
    if (cVar6 == '\0') {
      if ((uVar8 & 0xff0) == 0x100) {
        uVar12 = 0x2050;
      }
      else {
        uVar12 = uVar8 | 0x4000;
      }
    }
  }
  else {
    uVar12 = (-(ushort)(*(int *)(param_1 + 200 + (uint)param_3 * 0x20) != 0) & 0x10) + 0x2040 |
             uVar7;
  }
  uVar8 = 0x2040;
  uVar13 = 0x2040;
  if ((iVar3 != 0) && (uVar13 = 0x2050, iVar3 == 1)) {
    uVar13 = *(ushort *)(iVar10 + 10);
  }
  uVar13 = uVar13 | uVar7;
  uVar14 = 0x2050;
  if (iVar4 == 0) {
    uVar14 = 0x2040;
  }
  uVar14 = uVar14 | 0x1000;
  if ((iVar5 != 0) && (uVar8 = 0x2050, iVar5 == 1)) {
    uVar8 = *(ushort *)(iVar10 + 10);
  }
  uVar17 = 0;
  uVar15 = uVar11;
  puVar18 = puVar9;
  uVar16 = uVar7;
  uVar8 = FUN_1002e1ca(uVar1,uVar12,uVar8 | 0x1000,uVar14,*(ushort *)(iVar10 + 10));
  FUN_1002e26a(uVar2,uVar8 | uVar7,uVar13,uVar12,uVar14,(ushort)uVar15,uVar16,uVar17,
               (undefined4 *)puVar18);
  FUN_1002e65d(puVar9,uVar11,uVar7);
  return;
}

