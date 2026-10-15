/*
 * FUN_10066a80 at 10066a80
 * undefined __stdcall FUN_10066a80(int param_1)
 * Address ranges: 10066a80-10066d79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066a80(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  int iVar4;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint extraout_ECX_08;
  uint extraout_ECX_09;
  uint extraout_ECX_10;
  uint extraout_ECX_11;
  uint extraout_ECX_12;
  uint extraout_ECX_13;
  uint extraout_ECX_14;
  undefined4 extraout_EDX;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte bVar10;
  
  FUN_1006f91a(param_1);
  uVar7 = *(uint *)(*(int *)(param_1 + 0x1a0) + 0x44);
  uVar8 = FUN_1006bb13(extraout_ECX,extraout_EDX,param_1,0,7);
  uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
  uVar3 = *(uint *)(param_1 + 0x510) & 0x200;
  if ((((*(char *)(param_1 + 0x1aa) != '\0') || (*(char *)(param_1 + 0x1ac) != '\0')) ||
      (uVar3 != 0)) && ((*(byte *)(param_1 + 0x19c) & 4) != 0)) {
    uVar8 = FUN_1006bb13(uVar3,uVar2,param_1,3,7);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar3 = extraout_ECX_00;
  }
  if ((uVar7 >> 0x15 & 1) != 0) {
    uVar7 = *(uint *)(param_1 + 0x19c);
    if ((uVar7 & 0x10000) != 0) {
      uVar8 = FUN_1006bb13(uVar3,uVar2,param_1,0xf,7);
      uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
      uVar7 = *(uint *)(param_1 + 0x19c);
      uVar3 = extraout_ECX_01;
    }
    if (((*(char *)(param_1 + 0x1aa) != '\0') || (*(char *)(param_1 + 0x1ac) != '\0')) &&
       ((uVar7 & 0x20000) != 0)) {
      uVar8 = FUN_1006bb13(uVar3,uVar2,param_1,0x10,7);
      uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
      uVar3 = extraout_ECX_02;
    }
  }
  if ((*(uint *)(param_1 + 0x19c) & 0x800) != 0) {
    uVar8 = FUN_1006bb13(uVar3,uVar2,param_1,1,1);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar3 = extraout_ECX_03;
  }
  if ((*(uint *)(param_1 + 0x19c) & 0x1000) != 0) {
    uVar8 = FUN_1006bb13(uVar3,uVar2,param_1,1,2);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar3 = extraout_ECX_04;
  }
  if ((*(uint *)(param_1 + 0x19c) & 0x2000) != 0) {
    uVar8 = FUN_1006bb13(uVar3,uVar2,param_1,1,4);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar3 = extraout_ECX_05;
  }
  if ((*(byte *)(param_1 + 0x19c) & 2) != 0) {
    uVar8 = FUN_1006bb13(uVar3,uVar2,param_1,6,8);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
  }
  uVar7 = 0;
  do {
    puVar1 = *(uint **)(param_1 + 0x1a0);
    uVar3 = uVar7 * 3;
    uVar9 = (ulonglong)uVar2 << 0x20;
    if (((puVar1[8] & puVar1[3]) >> ((byte)uVar3 & 0x1f) & 7) == 0) {
      uVar5 = (puVar1[5] & puVar1[4] & *puVar1) >> ((byte)uVar3 & 0x1f);
      uVar3 = uVar5 & 7;
      uVar2 = 8 << (sbyte)uVar3;
      uVar9 = CONCAT44(uVar5,uVar2) & 0x7ffffffff;
      if ((*(uint *)(param_1 + 0x19c) & uVar2) != 0) {
        iVar4 = 4 - ((puVar1[6] & puVar1[1]) >> (sbyte)uVar3 * '\x03' & 7);
        uVar9 = FUN_1006bb13(iVar4,uVar3,param_1,uVar3 + 7,(byte)(0xf >> ((byte)iVar4 & 0x1f)));
        uVar3 = extraout_ECX_06;
      }
    }
    uVar2 = (uint)(uVar9 >> 0x20);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  if (*(char *)(param_1 + 0x1b1) == '\0') {
    if ((*(byte *)(param_1 + 0x19c) & 1) != 0) {
      uVar9 = FUN_1006bb13(uVar3,uVar2,param_1,5,0xf);
      uVar3 = extraout_ECX_14;
    }
    uVar6 = (undefined4)(uVar9 >> 0x20);
    if ((*(byte *)(param_1 + 0x19c) & 0x80) == 0) goto LAB_10066d31;
LAB_10066d27:
    bVar10 = 7;
  }
  else {
    uVar7 = 0;
    do {
      uVar3 = uVar7 * 3;
      uVar2 = *(uint *)(*(int *)(param_1 + 0x1a0) + 0x28) >> ((byte)uVar3 & 0x1f);
      if ((uVar2 & 7) != 0) {
        *(undefined1 *)(param_1 + 0x1b2) = 1;
      }
      uVar7 = uVar7 + 1;
      uVar9 = CONCAT44(uVar7,uVar2);
    } while (uVar7 < 8);
    if ((*(byte *)(param_1 + 0x19c) & 1) != 0) {
      if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x2c) & 3) == 1) {
        uVar8 = FUN_1006bb13(uVar3,uVar7,param_1,5,7);
        uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
        uVar3 = extraout_ECX_07;
      }
      if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x2c) & 0xc) == 4) {
        uVar8 = FUN_1006bb13(uVar3,uVar7,param_1,5,7);
        uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
        uVar3 = extraout_ECX_08;
      }
      uVar2 = *(uint *)(*(int *)(param_1 + 0x1a0) + 0x2c);
      uVar5 = uVar2 & 0x30;
      uVar9 = CONCAT44(uVar7,uVar2) & 0xffffffff00000030;
      if (*(char *)(param_1 + 0x1b2) == '\0') {
        if (uVar5 == 0x10) {
          bVar10 = 8;
          goto LAB_10066c88;
        }
      }
      else {
        if (uVar5 == 0x10) {
          uVar8 = FUN_1006bb13(uVar3,uVar7,param_1,5,0xf);
          uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
          uVar3 = extraout_ECX_09;
        }
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x2c);
        uVar9 = CONCAT44(uVar7,uVar6) & 0xffffffffffffffc0;
        if (((byte)uVar6 & 0xc0) == 0x40) {
          bVar10 = 7;
LAB_10066c88:
          uVar9 = FUN_1006bb13(uVar3,uVar7,param_1,5,bVar10);
          uVar3 = extraout_ECX_10;
        }
      }
    }
    uVar6 = (undefined4)(uVar9 >> 0x20);
    if ((*(byte *)(param_1 + 0x19c) & 2) == 0) goto LAB_10066d31;
    if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x2c) & 3) == 2) {
      uVar8 = FUN_1006bb13(uVar3,uVar6,param_1,6,7);
      uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar3 = extraout_ECX_11;
    }
    if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x2c) & 0xc) == 8) {
      uVar8 = FUN_1006bb13(uVar3,uVar6,param_1,6,7);
      uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar3 = extraout_ECX_12;
    }
    uVar7 = *(uint *)(*(int *)(param_1 + 0x1a0) + 0x2c) & 0x30;
    if (*(char *)(param_1 + 0x1b2) != '\0') {
      if (uVar7 == 0x20) {
        uVar8 = FUN_1006bb13(uVar3,uVar6,param_1,6,0xf);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uVar3 = extraout_ECX_13;
      }
      if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x2c) & 0xc0) != 0x80)
      goto LAB_10066d31;
      goto LAB_10066d27;
    }
    if (uVar7 != 0x20) goto LAB_10066d31;
    bVar10 = 8;
  }
  FUN_1006bb13(uVar3,uVar6,param_1,6,bVar10);
LAB_10066d31:
  uVar7 = 0;
  if (((*(uint *)(param_1 + 0x510) & 0x200) != 0) &&
     (uVar3 = *(uint *)(param_1 + 0x148), uVar3 != 0)) {
    do {
      if (*(char *)(param_1 + 0x136 + uVar7) == '\x03') {
        *(undefined1 *)(uVar3 + 0x136 + param_1) = 0x11;
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
        *(undefined1 *)(param_1 + 0x135) = 7;
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return;
}

