/*
 * FUN_10062950 at 10062950
 * undefined FUN_10062950(void)
 * Address ranges: 10062950-10062e7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10062950(undefined8 param_1,int param_2,int param_3,undefined4 param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  
  uVar1 = *(uint *)(param_2 + 4);
  bVar13 = 1;
  if ((uVar1 >> 2 & 1) != 0) {
    bVar13 = *(int *)(param_2 + 8) != 0 ^ param_5;
  }
  if (((uVar1 >> 8 & 1) != 0) &&
     (((*(uint *)(param_2 + 0x3c) & (*(uint *)(param_3 + 0x44) ^ 0xffffffff)) != 0 ||
      ((*(uint *)(param_2 + 0x3c) & (*(uint *)(param_3 + 0x7c) ^ 0xffffffff)) != 0)))) {
    bVar13 = 0;
  }
  if (((uVar1 >> 5 & 1) != 0) &&
     (((*(uint *)(param_2 + 0x28) & (*(uint *)(param_3 + 0x30) ^ 0xffffffff)) != 0 ||
      ((*(uint *)(param_2 + 0x28) & (*(uint *)(param_3 + 0x68) ^ 0xffffffff)) != 0)))) {
    bVar13 = 0;
  }
  if (((uVar1 >> 6 & 1) != 0) &&
     (((*(uint *)(param_2 + 0x2c) & (*(uint *)(param_3 + 0x34) ^ 0xffffffff)) != 0 ||
      ((*(uint *)(param_2 + 0x2c) & (*(uint *)(param_3 + 0x6c) ^ 0xffffffff)) != 0)))) {
    bVar13 = 0;
  }
  if (((uVar1 >> 0xb & 1) != 0) &&
     (((*(uint *)(param_2 + 0x40) & (*(uint *)(param_3 + 0x48) ^ 0xffffffff)) != 0 ||
      ((*(uint *)(param_2 + 0x40) & (*(uint *)(param_3 + 0x80) ^ 0xffffffff)) != 0)))) {
    bVar13 = 0;
  }
  if (((uVar1 >> 7 & 1) != 0) &&
     (((*(uint *)(param_2 + 0x30) & (*(uint *)(param_3 + 0x38) ^ 0xffffffff)) != 0 ||
      ((*(uint *)(param_2 + 0x30) & (*(uint *)(param_3 + 0x70) ^ 0xffffffff)) != 0)))) {
    bVar13 = 0;
  }
  if (((uVar1 >> 9 & 1) != 0) &&
     (((*(uint *)(param_2 + 0x34) & (*(uint *)(param_3 + 0x3c) ^ 0xffffffff)) != 0 ||
      ((*(uint *)(param_2 + 0x34) & (*(uint *)(param_3 + 0x74) ^ 0xffffffff)) != 0)))) {
    bVar13 = 0;
  }
  if (((uVar1 >> 10 & 1) != 0) &&
     (((*(uint *)(param_2 + 0x38) & (*(uint *)(param_3 + 0x40) ^ 0xffffffff)) != 0 ||
      ((*(uint *)(param_2 + 0x38) & (*(uint *)(param_3 + 0x78) ^ 0xffffffff)) != 0)))) {
    bVar13 = 0;
  }
  if (((uVar1 >> 0xc & 1) != 0) &&
     (((*(uint *)(param_2 + 0x44) & (*(uint *)(param_3 + 0x4c) ^ 0xffffffff)) != 0 ||
      ((*(uint *)(param_2 + 0x44) & (*(uint *)(param_3 + 0x84) ^ 0xffffffff)) != 0)))) {
    bVar13 = 0;
  }
  if (((uVar1 >> 0xe & 1) != 0) &&
     (((*(uint *)(param_2 + 0x4c) & (*(uint *)(param_3 + 0x54) ^ 0xffffffff)) != 0 ||
      ((*(uint *)(param_2 + 0x4c) & (*(uint *)(param_3 + 0x8c) ^ 0xffffffff)) != 0)))) {
    bVar13 = 0;
  }
  if (((uVar1 >> 0xd & 1) != 0) &&
     (((*(uint *)(param_2 + 0x48) & (*(uint *)(param_3 + 0x50) ^ 0xffffffff)) != 0 ||
      ((*(uint *)(param_2 + 0x48) & (*(uint *)(param_3 + 0x88) ^ 0xffffffff)) != 0)))) {
    bVar13 = 0;
  }
  if (((uVar1 >> 0xf & 1) != 0) &&
     (((*(uint *)(param_2 + 0x50) & (*(uint *)(param_3 + 0x58) ^ 0xffffffff)) != 0 ||
      ((*(uint *)(param_2 + 0x50) & (*(uint *)(param_3 + 0x90) ^ 0xffffffff)) != 0)))) {
    bVar13 = 0;
  }
  if (((uVar1 & 1) != 0) &&
     ((*(uint *)(param_2 + 0xc) & (*(uint *)(param_3 + 8) ^ 0xffffffff)) != 0)) {
    bVar13 = 0;
  }
  bVar14 = bVar13;
  if ((uVar1 >> 1 & 1) != 0) {
    iVar12 = FUN_10081e90(param_4,param_2 + 0x10,0x10);
    bVar14 = 0;
    if (iVar12 == 0) {
      bVar14 = bVar13;
    }
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar2 = *(uint *)(param_2 + 0x48);
    uVar3 = *(uint *)(param_2 + 0x50);
    uVar4 = *(uint *)(param_2 + 0x4c);
    uVar5 = *(uint *)(param_2 + 0x44);
    uVar6 = *(uint *)(param_2 + 0x38);
    uVar7 = *(uint *)(param_2 + 0x34);
    uVar8 = *(uint *)(param_2 + 0x30);
    uVar9 = *(uint *)(param_2 + 0x40);
    uVar10 = *(uint *)(param_2 + 0x2c);
    uVar11 = *(uint *)(param_2 + 0x28);
    if ((*(uint *)(param_2 + 0x3c) & (*(uint *)(param_3 + 0x44) ^ 0xffffffff)) != 0) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x30) & uVar11) != uVar11) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x34) & uVar10) != uVar10) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x48) & uVar9) != uVar9) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x38) & uVar8) != uVar8) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x3c) & uVar7) != uVar7) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x40) & uVar6) != uVar6) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x4c) & uVar5) != uVar5) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x54) & uVar4) != uVar4) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x50) & uVar2) != uVar2) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x58) & uVar3) != uVar3) {
      bVar14 = 0;
    }
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar1 = *(uint *)(param_2 + 0x50);
    uVar2 = *(uint *)(param_2 + 0x48);
    uVar3 = *(uint *)(param_2 + 0x4c);
    uVar4 = *(uint *)(param_2 + 0x44);
    uVar5 = *(uint *)(param_2 + 0x38);
    uVar6 = *(uint *)(param_2 + 0x34);
    uVar7 = *(uint *)(param_2 + 0x30);
    uVar8 = *(uint *)(param_2 + 0x40);
    uVar9 = *(uint *)(param_2 + 0x2c);
    uVar10 = *(uint *)(param_2 + 0x28);
    if ((*(uint *)(param_2 + 0x3c) & (*(uint *)(param_3 + 0x7c) ^ 0xffffffff)) != 0) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x68) & uVar10) != uVar10) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x6c) & uVar9) != uVar9) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x80) & uVar8) != uVar8) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x70) & uVar7) != uVar7) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x74) & uVar6) != uVar6) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x78) & uVar5) != uVar5) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x84) & uVar4) != uVar4) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x8c) & uVar3) != uVar3) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x88) & uVar2) != uVar2) {
      bVar14 = 0;
    }
    if ((*(uint *)(param_3 + 0x90) & uVar1) != uVar1) {
      bVar14 = 0;
    }
  }
  return bVar14;
}

