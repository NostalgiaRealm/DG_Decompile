/*
 * FUN_10038e88 at 10038e88
 * undefined FUN_10038e88(void)
 * Address ranges: 10038e88-100391cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10038e88(undefined8 param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  
  uVar3 = *(uint *)(param_2 + 4);
  bVar5 = 0;
  if ((uVar3 & (*(uint *)(param_3 + 4) ^ 0xffffffff)) == 0) {
    bVar5 = 1;
    if (((uVar3 & 1) != 0) &&
       ((((*(int *)(param_2 + 0x68) != *(int *)(param_3 + 0x68) ||
          (*(int *)(param_2 + 0x6c) != *(int *)(param_3 + 0x6c))) ||
         (*(int *)(param_2 + 0x70) != *(int *)(param_3 + 0x70))) ||
        (bVar5 = 1, *(int *)(param_2 + 0x74) != *(int *)(param_3 + 0x74))))) {
      bVar5 = 0;
    }
    if (((uVar3 >> 1 & 1) != 0) && (*(int *)(param_2 + 8) != *(int *)(param_3 + 8))) {
      bVar5 = 0;
    }
    if (((uVar3 >> 2 & 1) != 0) && (*(int *)(param_2 + 0xc) != *(int *)(param_3 + 0xc))) {
      bVar5 = 0;
    }
    if (((uVar3 >> 3 & 1) != 0) && (*(int *)(param_2 + 0x10) != *(int *)(param_3 + 0x10))) {
      bVar5 = 0;
    }
    if ((uVar3 >> 5 & 1) != 0) {
      bVar5 = *(int *)(param_2 + 0x14) == *(int *)(param_3 + 0x14) & bVar5;
    }
    if ((uVar3 >> 7 & 1) != 0) {
      bVar5 = *(int *)(param_2 + 0x1c) == *(int *)(param_3 + 0x1c) & bVar5;
    }
    if ((uVar3 >> 0xb & 1) != 0) {
      bVar5 = *(int *)(param_2 + 0x24) == *(int *)(param_3 + 0x24) & bVar5;
    }
    if ((uVar3 >> 0xc & 1) != 0) {
      bVar4 = FUN_1004cb90(param_2 + 0x48,param_3 + 0x48,0);
      bVar5 = bVar4 & bVar5;
    }
    if ((uVar3 >> 0xd & 1) != 0) {
      if ((*(int *)(param_2 + 0x2c) != *(int *)(param_3 + 0x2c)) ||
         (bVar4 = 1, *(int *)(param_2 + 0x28) != *(int *)(param_3 + 0x28))) {
        bVar4 = 0;
      }
      bVar5 = bVar4 & bVar5;
    }
    if ((uVar3 >> 0xe & 1) != 0) {
      if ((*(int *)(param_2 + 0x34) != *(int *)(param_3 + 0x34)) ||
         (bVar4 = 1, *(int *)(param_2 + 0x30) != *(int *)(param_3 + 0x30))) {
        bVar4 = 0;
      }
      bVar5 = bVar4 & bVar5;
    }
    if ((uVar3 >> 0xf & 1) != 0) {
      if ((*(int *)(param_2 + 0x3c) != *(int *)(param_3 + 0x3c)) ||
         (bVar4 = 1, *(int *)(param_2 + 0x38) != *(int *)(param_3 + 0x38))) {
        bVar4 = 0;
      }
      bVar5 = bVar4 & bVar5;
    }
    if ((uVar3 >> 0x10 & 1) != 0) {
      if ((*(int *)(param_2 + 0x44) != *(int *)(param_3 + 0x44)) ||
         (bVar4 = 1, *(int *)(param_2 + 0x40) != *(int *)(param_3 + 0x40))) {
        bVar4 = 0;
      }
      bVar5 = bVar4 & bVar5;
    }
    piVar1 = (int *)(param_2 + 0x18);
    piVar2 = (int *)(param_3 + 0x18);
    if ((uVar3 >> 0x11 & 1) != 0) {
      bVar5 = *piVar1 == *piVar2 & bVar5;
    }
    if ((uVar3 >> 0x12 & 1) != 0) {
      bVar5 = *piVar1 == *piVar2 & bVar5;
    }
    if ((uVar3 >> 0x13 & 1) != 0) {
      bVar5 = *(int *)(param_2 + 0x10) == *(int *)(param_3 + 0x10) & bVar5;
    }
    if ((uVar3 >> 0x14 & 1) != 0) {
      bVar5 = *(int *)(param_2 + 0x78) == *(int *)(param_3 + 0x78) & bVar5;
    }
    if ((uVar3 >> 0x15 & 1) != 0) {
      bVar5 = *(int *)(param_2 + 0x48) == *(int *)(param_3 + 0x48) & bVar5;
    }
    if ((uVar3 >> 0x16 & 1) != 0) {
      bVar5 = *piVar1 == *piVar2 & bVar5;
    }
  }
  return bVar5;
}

