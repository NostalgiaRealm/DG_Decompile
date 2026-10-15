/*
 * FUN_10057b60 at 10057b60
 * undefined FUN_10057b60(void)
 * Address ranges: 10057b60-1005807f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10057b60(int param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  ulonglong uVar3;
  bool bVar4;
  int *piVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined1 auStack_70 [48];
  
  bVar4 = true;
  if ((*(char *)(param_1 + 0xf668) == '\0') && ((param_4 & 1) == 0)) {
    return true;
  }
  if (*(char *)(param_1 + 0x7642) == '\0') {
    iVar8 = *(int *)(param_1 + 0xf750);
    if (iVar8 != 0) {
      if ((*(int *)(param_1 + 0x7630) == 0) || (*(int *)(param_1 + 0xfd3c) != 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      uVar10 = *(ulonglong *)(param_1 + 0xfc0) & 0xdfffffffffffffff;
      if ((*(uint *)(param_1 + 0x7574) & *(uint *)(*(int *)(iVar8 + 4) + 0x1214)) == 0) {
        uVar10 = *(ulonglong *)(param_1 + 0xfc0) & 0x9fffffffffffffff;
      }
      uVar16 = uVar10 & 0x70000000000000;
      if (*(char *)(param_1 + 0x763e) == '\0') {
        uVar16 = 0x70000000000000;
      }
      uVar3 = uVar10 & 0xff8fffffffffffff;
      if (!bVar4) {
        uVar3 = uVar10 & 0xfe8fffffffffffff;
      }
      uVar10 = uVar3 >> 0x39;
      if (*(char *)(*(int *)(iVar8 + 4) + 0x126d) == '\x03') {
        uVar10 = 0;
      }
      uVar16 = ((uVar16 | uVar3) ^ uVar10 << 0x39) & 0xfdffffffffffffff ^ uVar10 << 0x39;
      if (*(char *)(param_1 + 0x764e) == '\0') {
        uVar16 = uVar16 & 0xefffffffffffffff;
      }
      if ((uVar10 & 1) == 0) {
        uVar16 = uVar16 & 0xf3ffffffffffffff;
      }
      piVar5 = (int *)FUN_1006f918(iVar8 + 8,auStack_70,uVar16,*(undefined8 *)(param_1 + 0xe80));
      iVar8 = *piVar5;
      uVar18 = *(undefined8 *)(piVar5 + 1);
      iVar11 = piVar5[3];
      iVar17 = piVar5[4];
      uVar15 = piVar5[5];
      uVar14 = *(undefined8 *)(piVar5 + 6);
      bVar4 = iVar8 != 0;
      iVar13 = piVar5[8];
      uVar12 = piVar5[9];
      iVar9 = piVar5[10];
      goto LAB_10057f8c;
    }
    iVar8 = 0xfd3c;
    if (*(int *)(param_1 + 0xf81c) != 0) {
      iVar8 = 0xfd64;
    }
    if ((*(int *)(param_1 + 0x7630) == 0) || (*(int *)(iVar8 + param_1) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar10 = *(ulonglong *)(param_1 + 0xfc0) & 0xdfffffffffffffff;
    if (((1 << (ulonglong)(param_2 & 0x1f)) - 1U & *(uint *)(param_1 + 0x7574)) == 0) {
      uVar10 = *(ulonglong *)(param_1 + 0xfc0) & 0x9fffffffffffffff;
    }
    uVar16 = uVar10 & 0x70000000000000;
    if (*(char *)(param_1 + 0x763e) == '\0') {
      uVar16 = 0x70000000000000;
    }
    uVar3 = uVar10 & 0xff8fffffffffffff;
    if (!bVar2) {
      uVar3 = uVar10 & 0xfe8fffffffffffff;
    }
    uVar10 = uVar3;
    if (*(char *)(param_1 + 0x764e) == '\0') {
      uVar10 = uVar3 & 0xefffffffffffffff;
    }
    if ((uVar3 & 0x200000000000000) == 0) {
      uVar10 = uVar10 & 0xf3ffffffffffffff;
    }
    if ((*(int *)(param_1 + 0xf80c) == *(int *)(*(int *)(param_1 + 0xf6c4) + 0x60)) ||
       (uVar18 = 0, *(int *)(param_1 + 0xf80c) == *(int *)(*(int *)(param_1 + 0xf6c4) + 0x80))) {
      uVar18 = 1;
    }
    piVar5 = (int *)FUN_1006fc88(param_1 + 0xf6ec,auStack_70,param_1 + 0xef8,uVar16 | uVar10,param_2
                                 ,uVar18,*(undefined1 *)(param_1 + 0x83));
    iVar8 = *piVar5;
    uVar18 = *(undefined8 *)(piVar5 + 1);
    iVar11 = piVar5[3];
    iVar17 = piVar5[4];
    uVar15 = piVar5[5];
    uVar14 = *(undefined8 *)(piVar5 + 6);
    iVar13 = piVar5[8];
    uVar12 = piVar5[9];
    iVar9 = piVar5[10];
    if (iVar8 != 0) goto LAB_10057f8c;
  }
  piVar5 = (int *)(param_1 + 0xf6c4);
  if (*(char *)(param_1 + 0x7642) == '\0') {
    if (4 < param_2) {
      param_2 = 4;
    }
    iVar8 = *piVar5;
    if ((*(int *)(param_1 + 0xf80c) == *(int *)(iVar8 + 0x60)) ||
       (bVar2 = false, *(int *)(param_1 + 0xf80c) == *(int *)(iVar8 + 0x80))) {
      bVar2 = true;
    }
    iVar11 = 10;
    if (!bVar2) {
      iVar11 = 0;
    }
    iVar17 = 5;
    if (*(char *)(param_1 + 0x7640) == '\0') {
      iVar17 = iVar11;
    }
    iVar8 = *(int *)(iVar8 + (iVar17 + *(int *)(&DAT_10161450 + param_2 * 4) + 1) * 4);
    iVar9 = (iVar17 + *(int *)(&DAT_10161450 + param_2 * 4)) * 0x28;
    uVar18 = *(undefined8 *)(iVar9 + 0x10161a90);
    iVar11 = *(int *)(iVar9 + 0x10161a98);
    iVar17 = *(int *)(iVar9 + 0x10161a9c);
    uVar15 = *(uint *)(iVar9 + 0x10161aa0);
    uVar14 = *(undefined8 *)(iVar9 + 0x10161aa4);
    iVar13 = *(int *)(iVar9 + 0x10161aac);
    uVar12 = *(uint *)(iVar9 + 0x10161ab0);
    iVar9 = *(int *)(iVar9 + 0x10161ab4);
  }
  else {
    if (((*(int *)(param_1 + 0xfa84) == 0) && (*(int *)(param_1 + 0xfa88) == 0)) &&
       (*(int *)(param_1 + 0xfa8c) == 0)) {
      iVar8 = *(int *)(*piVar5 + 0x40);
      puVar1 = &DAT_10161cfc;
      uVar18 = DAT_10161ce8;
    }
    else {
      iVar8 = *(int *)(*piVar5 + 0x48);
      puVar1 = &DAT_10161d4c;
      uVar18 = DAT_10161d38;
    }
    uVar14 = *puVar1;
    uVar12 = 0;
    iVar13 = *(int *)(puVar1 + 1);
    uVar15 = 0;
    iVar9 = 0;
    iVar17 = 0;
    iVar11 = 0;
  }
LAB_10057f8c:
  *(undefined1 *)(param_1 + 0xf668) = 0;
  if (*(int *)(param_1 + 0xf810) != iVar8) {
    *(int *)(param_1 + 0xf810) = iVar8;
    *(byte *)(param_1 + 0xfd9c) = *(uint *)(param_1 + 0xfd88) < uVar12 | *(byte *)(param_1 + 0xfd9c)
    ;
    *(byte *)(param_1 + 0xfda0) = *(uint *)(param_1 + 0xfd78) < uVar15 | *(byte *)(param_1 + 0xfda0)
    ;
    if ((iVar11 == 0) || (*(int *)(param_1 + 0xfd70) != 0)) {
      bVar6 = 0;
    }
    else {
      bVar6 = 1;
    }
    if ((iVar17 == 0) || (*(int *)(param_1 + 0xfd74) != 0)) {
      bVar7 = 0;
    }
    else {
      bVar7 = 1;
    }
    *(byte *)(param_1 + 0xfda2) = bVar6 | *(byte *)(param_1 + 0xfda2) | bVar7;
    *(undefined8 *)(param_1 + 0xfd68) = uVar18;
    *(int *)(param_1 + 0xfd70) = iVar11;
    *(int *)(param_1 + 0xfd74) = iVar17;
    *(uint *)(param_1 + 0xfd78) = uVar15;
    *(undefined8 *)(param_1 + 0xfd7c) = uVar14;
    *(int *)(param_1 + 0xfd84) = iVar13;
    *(uint *)(param_1 + 0xfd88) = uVar12;
    *(int *)(param_1 + 0xfd8c) = iVar9;
    *(undefined1 *)(param_1 + 0xfd99) = 1;
  }
  return bVar4;
}

