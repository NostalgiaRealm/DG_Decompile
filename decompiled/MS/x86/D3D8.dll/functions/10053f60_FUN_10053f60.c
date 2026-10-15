/*
 * FUN_10053f60 at 10053f60
 * undefined __stdcall FUN_10053f60(int param_1)
 * Address ranges: 10053f60-10054259
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053f60(int param_1)

{
  uint *puVar1;
  byte bVar2;
  sbyte sVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_10059fb8(param_1);
  uVar5 = *(uint *)(*(int *)(param_1 + 0x19c) + 0x44);
  FUN_100563a4(param_1,0,7);
  if ((((*(char *)(param_1 + 0x1a6) != '\0') || (*(char *)(param_1 + 0x1a8) != '\0')) ||
      ((*(uint *)(param_1 + 0x480) & 0x200) != 0)) && ((*(byte *)(param_1 + 0x198) & 4) != 0)) {
    FUN_100563a4(param_1,3,7);
  }
  if ((uVar5 >> 0x15 & 1) != 0) {
    uVar5 = *(uint *)(param_1 + 0x198);
    if ((uVar5 & 0x10000) != 0) {
      FUN_100563a4(param_1,0xf,7);
      uVar5 = *(uint *)(param_1 + 0x198);
    }
    if (((*(char *)(param_1 + 0x1a6) != '\0') || (*(char *)(param_1 + 0x1a8) != '\0')) &&
       ((uVar5 & 0x20000) != 0)) {
      FUN_100563a4(param_1,0x10,7);
    }
  }
  if ((*(uint *)(param_1 + 0x198) & 0x800) != 0) {
    FUN_100563a4(param_1,1,1);
  }
  if ((*(uint *)(param_1 + 0x198) & 0x1000) != 0) {
    FUN_100563a4(param_1,1,2);
  }
  if ((*(uint *)(param_1 + 0x198) & 0x2000) != 0) {
    FUN_100563a4(param_1,1,4);
  }
  if ((*(byte *)(param_1 + 0x198) & 2) != 0) {
    FUN_100563a4(param_1,6,8);
  }
  uVar5 = 0;
  do {
    puVar1 = *(uint **)(param_1 + 0x19c);
    bVar2 = (char)uVar5 * '\x03';
    if (((puVar1[8] & puVar1[3]) >> (bVar2 & 0x1f) & 7) == 0) {
      uVar4 = (puVar1[5] & puVar1[4] & *puVar1) >> (bVar2 & 0x1f) & 7;
      sVar3 = (sbyte)uVar4;
      if ((*(uint *)(param_1 + 0x198) & 8 << sVar3) != 0) {
        FUN_100563a4(param_1,uVar4 + 7,
                     (byte)(0xf >> (4 - ((byte)((puVar1[6] & puVar1[1]) >> sVar3 * '\x03') & 7) &
                                   0x1f)));
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  if (*(char *)(param_1 + 0x1ad) == '\0') {
    if ((*(byte *)(param_1 + 0x198) & 1) != 0) {
      FUN_100563a4(param_1,5,0xf);
    }
    if ((*(byte *)(param_1 + 0x198) & 0x80) == 0) goto LAB_10054211;
LAB_10054207:
    bVar2 = 7;
  }
  else {
    uVar5 = 0;
    do {
      if ((*(uint *)(*(int *)(param_1 + 0x19c) + 0x28) >> ((char)uVar5 * '\x03' & 0x1fU) & 7) != 0)
      {
        *(undefined1 *)(param_1 + 0x1ae) = 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    if ((*(byte *)(param_1 + 0x198) & 1) != 0) {
      if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x2c) & 3) == 1) {
        FUN_100563a4(param_1,5,7);
      }
      if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x2c) & 0xc) == 4) {
        FUN_100563a4(param_1,5,7);
      }
      uVar5 = *(uint *)(*(int *)(param_1 + 0x19c) + 0x2c) & 0x30;
      if (*(char *)(param_1 + 0x1ae) == '\0') {
        if (uVar5 == 0x10) {
          bVar2 = 8;
          goto LAB_10054168;
        }
      }
      else {
        if (uVar5 == 0x10) {
          FUN_100563a4(param_1,5,0xf);
        }
        if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x2c) & 0xc0) == 0x40) {
          bVar2 = 7;
LAB_10054168:
          FUN_100563a4(param_1,5,bVar2);
        }
      }
    }
    if ((*(byte *)(param_1 + 0x198) & 2) == 0) goto LAB_10054211;
    if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x2c) & 3) == 2) {
      FUN_100563a4(param_1,6,7);
    }
    if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x2c) & 0xc) == 8) {
      FUN_100563a4(param_1,6,7);
    }
    uVar5 = *(uint *)(*(int *)(param_1 + 0x19c) + 0x2c) & 0x30;
    if (*(char *)(param_1 + 0x1ae) != '\0') {
      if (uVar5 == 0x20) {
        FUN_100563a4(param_1,6,0xf);
      }
      if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x2c) & 0xc0) != 0x80)
      goto LAB_10054211;
      goto LAB_10054207;
    }
    if (uVar5 != 0x20) goto LAB_10054211;
    bVar2 = 8;
  }
  FUN_100563a4(param_1,6,bVar2);
LAB_10054211:
  uVar5 = 0;
  if (((*(uint *)(param_1 + 0x480) & 0x200) != 0) &&
     (uVar4 = *(uint *)(param_1 + 0x148), uVar4 != 0)) {
    do {
      if (*(char *)(param_1 + 0x136 + uVar5) == '\x03') {
        *(undefined1 *)(uVar4 + 0x136 + param_1) = 0x11;
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
        *(undefined1 *)(param_1 + 0x135) = 7;
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return;
}

