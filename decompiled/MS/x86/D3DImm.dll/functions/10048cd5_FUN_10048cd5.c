/*
 * FUN_10048cd5 at 10048cd5
 * undefined4 __stdcall FUN_10048cd5(int param_1, int param_2, uint * param_3, byte param_4)
 * Address ranges: 10048cd5-10049121
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10048cd5(int param_1,int param_2,uint *param_3,byte param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte local_8;
  
  bVar6 = 1;
  uVar5 = *(uint *)(param_1 + 4);
  if ((uVar5 & 4) != 0) {
    bVar6 = *(int *)(param_1 + 8) != 0 ^ param_4;
  }
  if (((uVar5 & 0x100) != 0) &&
     ((uVar3 = *(uint *)(param_1 + 0x3c), (uVar3 & *(uint *)(param_2 + 0x44)) != uVar3 ||
      ((*(uint *)(param_2 + 0x7c) & uVar3) != uVar3)))) {
    bVar6 = 0;
  }
  if (((uVar5 & 0x20) != 0) &&
     ((uVar3 = *(uint *)(param_1 + 0x28), (uVar3 & *(uint *)(param_2 + 0x30)) != uVar3 ||
      ((*(uint *)(param_2 + 0x68) & uVar3) != uVar3)))) {
    bVar6 = 0;
  }
  if (((uVar5 & 0x40) != 0) &&
     ((uVar3 = *(uint *)(param_1 + 0x2c), (uVar3 & *(uint *)(param_2 + 0x34)) != uVar3 ||
      ((*(uint *)(param_2 + 0x6c) & uVar3) != uVar3)))) {
    bVar6 = 0;
  }
  if (((uVar5 & 0x800) != 0) &&
     ((uVar3 = *(uint *)(param_1 + 0x40), (uVar3 & *(uint *)(param_2 + 0x48)) != uVar3 ||
      ((*(uint *)(param_2 + 0x80) & uVar3) != uVar3)))) {
    bVar6 = 0;
  }
  if (((char)uVar5 < '\0') &&
     ((uVar3 = *(uint *)(param_1 + 0x30), (uVar3 & *(uint *)(param_2 + 0x38)) != uVar3 ||
      ((*(uint *)(param_2 + 0x70) & uVar3) != uVar3)))) {
    bVar6 = 0;
  }
  if (((uVar5 & 0x200) != 0) &&
     ((uVar3 = *(uint *)(param_1 + 0x34), (uVar3 & *(uint *)(param_2 + 0x3c)) != uVar3 ||
      ((*(uint *)(param_2 + 0x74) & uVar3) != uVar3)))) {
    bVar6 = 0;
  }
  if (((uVar5 & 0x400) != 0) &&
     ((uVar3 = *(uint *)(param_1 + 0x38), (uVar3 & *(uint *)(param_2 + 0x40)) != uVar3 ||
      ((*(uint *)(param_2 + 0x78) & uVar3) != uVar3)))) {
    bVar6 = 0;
  }
  if (((uVar5 & 0x1000) != 0) &&
     ((uVar3 = *(uint *)(param_1 + 0x44), (uVar3 & *(uint *)(param_2 + 0x4c)) != uVar3 ||
      ((*(uint *)(param_2 + 0x84) & uVar3) != uVar3)))) {
    bVar6 = 0;
  }
  if (((uVar5 & 0x4000) != 0) &&
     ((uVar3 = *(uint *)(param_1 + 0x4c), (uVar3 & *(uint *)(param_2 + 0x54)) != uVar3 ||
      ((*(uint *)(param_2 + 0x8c) & uVar3) != uVar3)))) {
    bVar6 = 0;
  }
  if (((uVar5 & 0x2000) != 0) &&
     ((uVar3 = *(uint *)(param_1 + 0x48), (uVar3 & *(uint *)(param_2 + 0x50)) != uVar3 ||
      ((*(uint *)(param_2 + 0x88) & uVar3) != uVar3)))) {
    bVar6 = 0;
  }
  if (((uVar5 & 0x8000) != 0) &&
     ((uVar3 = *(uint *)(param_1 + 0x50), (uVar3 & *(uint *)(param_2 + 0x58)) != uVar3 ||
      ((*(uint *)(param_2 + 0x90) & uVar3) != uVar3)))) {
    bVar6 = 0;
  }
  local_8 = bVar6;
  if ((uVar5 & 1) != 0) {
    uVar5 = *(uint *)(param_1 + 4);
    local_8 = 0;
    if ((*(uint *)(param_1 + 0xc) & *(uint *)(param_2 + 8)) == *(uint *)(param_1 + 0xc)) {
      local_8 = bVar6;
    }
  }
  if ((uVar5 & 2) != 0) {
    iVar4 = FUN_1005c99d((byte *)param_3,(byte *)(param_1 + 0x10),0x10);
    if (iVar4 != 0) {
      local_8 = 0;
    }
    uVar5 = *(uint *)(param_1 + 4);
  }
  puVar1 = (uint *)(param_1 + 0x3c);
  puVar2 = (uint *)(param_1 + 0x28);
  if ((uVar5 & 0x10) == 0) {
    iVar4 = param_1 + 0x40;
  }
  else {
    bVar6 = 0;
    if ((*puVar1 & *(uint *)(param_2 + 0x44)) == *puVar1) {
      bVar6 = local_8;
    }
    bVar7 = 0;
    if ((*puVar2 & *(uint *)(param_2 + 0x30)) == *puVar2) {
      bVar7 = bVar6;
    }
    bVar6 = 0;
    if ((*(uint *)(param_1 + 0x2c) & *(uint *)(param_2 + 0x34)) == *(uint *)(param_1 + 0x2c)) {
      bVar6 = bVar7;
    }
    bVar7 = 0;
    if ((*(uint *)(param_1 + 0x40) & *(uint *)(param_2 + 0x48)) == *(uint *)(param_1 + 0x40)) {
      bVar7 = bVar6;
    }
    bVar6 = 0;
    if ((*(uint *)(param_1 + 0x30) & *(uint *)(param_2 + 0x38)) == *(uint *)(param_1 + 0x30)) {
      bVar6 = bVar7;
    }
    bVar7 = 0;
    if ((*(uint *)(param_1 + 0x34) & *(uint *)(param_2 + 0x3c)) == *(uint *)(param_1 + 0x34)) {
      bVar7 = bVar6;
    }
    bVar6 = 0;
    if ((*(uint *)(param_1 + 0x38) & *(uint *)(param_2 + 0x40)) == *(uint *)(param_1 + 0x38)) {
      bVar6 = bVar7;
    }
    bVar7 = 0;
    if ((*(uint *)(param_1 + 0x44) & *(uint *)(param_2 + 0x4c)) == *(uint *)(param_1 + 0x44)) {
      bVar7 = bVar6;
    }
    bVar6 = 0;
    if ((*(uint *)(param_1 + 0x4c) & *(uint *)(param_2 + 0x54)) == *(uint *)(param_1 + 0x4c)) {
      bVar6 = bVar7;
    }
    bVar7 = 0;
    if ((*(uint *)(param_1 + 0x48) & *(uint *)(param_2 + 0x50)) == *(uint *)(param_1 + 0x48)) {
      bVar7 = bVar6;
    }
    iVar4 = 0;
    local_8 = 0;
    if ((*(uint *)(param_1 + 0x50) & *(uint *)(param_2 + 0x58)) == *(uint *)(param_1 + 0x50)) {
      local_8 = bVar7;
    }
    uVar5 = *(uint *)(param_1 + 4);
  }
  param_3 = (uint *)(param_1 + 0x40);
  if ((uVar5 & 8) != 0) {
    bVar6 = 0;
    if ((*(uint *)(param_2 + 0x7c) & *(uint *)(param_1 + 0x3c)) == *puVar1) {
      bVar6 = local_8;
    }
    bVar7 = 0;
    if ((*(uint *)(param_2 + 0x68) & *puVar2) == *puVar2) {
      bVar7 = bVar6;
    }
    bVar6 = 0;
    if ((*(uint *)(param_2 + 0x6c) & *(uint *)(param_1 + 0x2c)) == *(uint *)(param_1 + 0x2c)) {
      bVar6 = bVar7;
    }
    bVar7 = 0;
    if ((*(uint *)(param_2 + 0x80) & *param_3) == *param_3) {
      bVar7 = bVar6;
    }
    bVar6 = 0;
    if ((*(uint *)(param_2 + 0x70) & *(uint *)(param_1 + 0x30)) == *(uint *)(param_1 + 0x30)) {
      bVar6 = bVar7;
    }
    bVar7 = 0;
    if ((*(uint *)(param_2 + 0x74) & *(uint *)(param_1 + 0x34)) == *(uint *)(param_1 + 0x34)) {
      bVar7 = bVar6;
    }
    bVar6 = 0;
    if ((*(uint *)(param_2 + 0x78) & *(uint *)(param_1 + 0x38)) == *(uint *)(param_1 + 0x38)) {
      bVar6 = bVar7;
    }
    bVar7 = 0;
    if ((*(uint *)(param_2 + 0x84) & *(uint *)(param_1 + 0x44)) == *(uint *)(param_1 + 0x44)) {
      bVar7 = bVar6;
    }
    bVar6 = 0;
    if ((*(uint *)(param_2 + 0x8c) & *(uint *)(param_1 + 0x4c)) == *(uint *)(param_1 + 0x4c)) {
      bVar6 = bVar7;
    }
    bVar7 = 0;
    if ((*(uint *)(param_2 + 0x88) & *(uint *)(param_1 + 0x48)) == *(uint *)(param_1 + 0x48)) {
      bVar7 = bVar6;
    }
    iVar4 = 0;
    local_8 = 0;
    if ((*(uint *)(param_2 + 0x90) & *(uint *)(param_1 + 0x50)) == *(uint *)(param_1 + 0x50)) {
      local_8 = bVar7;
    }
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),local_8);
}

