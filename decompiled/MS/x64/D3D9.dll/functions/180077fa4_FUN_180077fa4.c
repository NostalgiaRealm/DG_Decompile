/*
 * FUN_180077fa4 at 180077fa4
 * undefined __fastcall FUN_180077fa4(undefined8 param_1, longlong param_2)
 * Address ranges: 180077fa4-1800782f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180077fa4(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_180083f2c(param_1,param_2);
  bVar2 = 7;
  uVar5 = *(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x44);
  FUN_18007e0a8(param_1,param_2,0,7);
  if ((((*(char *)(param_2 + 0x1c2) != '\0') || (*(char *)(param_2 + 0x1c4) != '\0')) ||
      ((*(uint *)(param_2 + 0x520) >> 9 & 1) != 0)) && ((*(byte *)(param_2 + 0x1ac) & 4) != 0)) {
    FUN_18007e0a8(param_1,param_2,3,bVar2);
  }
  if ((uVar5 & 0x200000) != 0) {
    if ((*(uint *)(param_2 + 0x1ac) & 0x10000) != 0) {
      FUN_18007e0a8(param_1,param_2,0xf,7);
    }
    if (((*(char *)(param_2 + 0x1c2) != '\0') || (*(char *)(param_2 + 0x1c4) != '\0')) &&
       ((*(uint *)(param_2 + 0x1ac) & 0x20000) != 0)) {
      FUN_18007e0a8(param_1,param_2,0x10,7);
    }
  }
  if ((*(uint *)(param_2 + 0x1ac) & 0x800) != 0) {
    FUN_18007e0a8(param_1,param_2,1,1);
  }
  if ((*(uint *)(param_2 + 0x1ac) & 0x1000) != 0) {
    FUN_18007e0a8(param_1,param_2,1,2);
  }
  if ((*(uint *)(param_2 + 0x1ac) & 0x2000) != 0) {
    FUN_18007e0a8(param_1,param_2,1,4);
  }
  if ((*(byte *)(param_2 + 0x1ac) & 2) != 0) {
    FUN_18007e0a8(param_1,param_2,6,8);
  }
  uVar5 = 0;
  do {
    puVar1 = *(uint **)(param_2 + 0x1b0);
    uVar4 = (ulonglong)(uVar5 * 3);
    bVar2 = (byte)(uVar5 * 3);
    if (((puVar1[8] & puVar1[3]) >> (bVar2 & 0x1f) & 7) == 0) {
      uVar6 = (puVar1[5] & puVar1[4] & *puVar1) >> (bVar2 & 0x1f) & 7;
      uVar4 = (ulonglong)uVar6;
      if ((*(uint *)(param_2 + 0x1ac) & 8 << (sbyte)uVar6) != 0) {
        uVar3 = 4 - ((puVar1[6] & puVar1[1]) >> (sbyte)uVar6 * '\x03' & 7);
        uVar4 = (ulonglong)uVar3;
        FUN_18007e0a8(uVar4,param_2,uVar6 + 7,(byte)(0xf >> ((byte)uVar3 & 0x1f)));
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  if (*(char *)(param_2 + 0x1c9) == '\0') {
    if ((*(byte *)(param_2 + 0x1ac) & 1) != 0) {
      FUN_18007e0a8(uVar4,param_2,5,0xf);
    }
    if ((*(byte *)(param_2 + 0x1ac) & 0x80) == 0) goto LAB_1800782a5;
LAB_18007829a:
    bVar2 = 7;
  }
  else {
    uVar5 = 0;
    do {
      uVar6 = uVar5 * 3;
      if ((*(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x28) >> ((byte)uVar6 & 0x1f) & 7) != 0) {
        *(undefined1 *)(param_2 + 0x1ca) = 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    if ((*(byte *)(param_2 + 0x1ac) & 1) != 0) {
      if (((byte)*(undefined4 *)(*(longlong *)(param_2 + 0x1b0) + 0x2c) & 3) == 1) {
        FUN_18007e0a8((ulonglong)uVar6,param_2,5,7);
      }
      uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x2c) & 0xffffffffffffff0c;
      if ((char)uVar4 == '\x04') {
        FUN_18007e0a8(uVar4,param_2,5,7);
      }
      uVar5 = *(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x2c) & 0x30;
      if (*(char *)(param_2 + 0x1ca) == '\0') {
        if (uVar5 == 0x10) {
          bVar2 = 8;
          uVar4 = 0x10;
          goto LAB_1800781e7;
        }
      }
      else {
        if (uVar5 == 0x10) {
          FUN_18007e0a8(0x10,param_2,5,0xf);
        }
        uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x2c) & 0xffffffffffffffc0;
        if ((char)uVar4 == '@') {
          bVar2 = 7;
LAB_1800781e7:
          FUN_18007e0a8(uVar4,param_2,5,bVar2);
        }
      }
    }
    if ((*(byte *)(param_2 + 0x1ac) & 2) == 0) goto LAB_1800782a5;
    uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x2c) & 0xffffffffffffff03;
    if ((char)uVar4 == '\x02') {
      FUN_18007e0a8(uVar4,param_2,6,7);
    }
    uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x2c) & 0xffffffffffffff0c;
    if ((char)uVar4 == '\b') {
      FUN_18007e0a8(uVar4,param_2,6,7);
    }
    uVar5 = *(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x2c) & 0x30;
    if (*(char *)(param_2 + 0x1ca) != '\0') {
      if (uVar5 == 0x20) {
        FUN_18007e0a8(0x20,param_2,6,0xf);
      }
      uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x2c) & 0xffffffffffffffc0;
      if ((char)uVar4 != -0x80) goto LAB_1800782a5;
      goto LAB_18007829a;
    }
    if (uVar5 != 0x20) goto LAB_1800782a5;
    bVar2 = 8;
    uVar4 = 0x20;
  }
  FUN_18007e0a8(uVar4,param_2,6,bVar2);
LAB_1800782a5:
  if ((*(uint *)(param_2 + 0x520) >> 9 & 1) != 0) {
    uVar5 = *(uint *)(param_2 + 0x158);
    uVar4 = 0;
    if (uVar5 != 0) {
      do {
        if (*(char *)(param_2 + 0x146 + uVar4) == '\x03') {
          *(undefined1 *)((ulonglong)uVar5 + 0x146 + param_2) = 0x11;
          *(int *)(param_2 + 0x158) = *(int *)(param_2 + 0x158) + 1;
          *(undefined1 *)(param_2 + 0x145) = 7;
          return;
        }
        uVar6 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar6;
      } while (uVar6 < uVar5);
    }
  }
  return;
}

