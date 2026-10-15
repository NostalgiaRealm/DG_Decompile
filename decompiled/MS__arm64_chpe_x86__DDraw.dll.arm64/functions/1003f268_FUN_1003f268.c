/*
 * FUN_1003f268 at 1003f268
 * undefined FUN_1003f268(void)
 * Address ranges: 1003f268-1003f577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1003f268(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            undefined4 *param_6,int param_7,undefined8 param_8,char param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_4c [12];
  
  iVar3 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar3 == 0) {
    FUN_10001c10(0);
  }
  FUN_100a9d50(auStack_4c);
  if ((undefined4 *)0xffff < param_6) {
    *param_6 = 0;
  }
  uVar4 = 0x80070057;
  if ((param_5 == (int *)0x0) ||
     ((((param_6 == (undefined4 *)0x0 && (param_9 == '\0')) || (param_7 != 0)) || (*param_5 != 0x7c)
      ))) goto LAB_1003f538;
  uVar2 = param_5[0x1a];
  uVar7 = param_5[0x1b];
  uVar4 = 0x88760064;
  if (((uVar7 & 0x3fe9c) == 0) || ((uVar2 >> 0xc & 1) != 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  if ((uVar7 & 0xfff00001) != 0) {
    uVar5 = 0;
  }
  if ((((uVar7 & 0x8c) < 9) && ((0x111U >> (ulonglong)(uVar7 & 0xc) & 1) != 0)) ||
     ((uVar7 & 0x8c) == 0x80)) {
    uVar5 = uVar5 & (uVar2 & 0x3800401) == 0;
  }
  else {
    uVar5 = 0;
  }
  if (((uVar7 >> 1 & 1) == 0) || (uVar6 = 0, ((uVar7 ^ 0xffffffff) & 0x8000080) == 0)) {
    uVar6 = 1;
  }
  uVar1 = uVar2 & 0x21264;
  if ((uVar1 == 0x200 || uVar1 == 0x220) ||
     (((uVar1 < 0x21 && ((0x100000011U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)) ||
      (uVar8 = 0, ((uVar1 == 0x40 || uVar1 == 0x1000) || uVar1 == 0x20000) || uVar1 == 0x20040)))) {
    uVar8 = 1;
  }
  if ((uVar7 & 0x60) != 0) {
    uVar6 = 0;
  }
  if ((uVar2 & 0x82) != 0) {
    uVar5 = 0;
  }
  uVar8 = uVar6 & uVar5 & uVar8;
  if (uVar1 == 0x200) {
    uVar8 = uVar8 & (uVar2 >> 0x1f ^ 0xffffffff);
    if ((uVar2 & 0x20400000) != 0) {
      uVar8 = 0;
    }
    uVar8 = uVar8 & ((uVar2 & 0x18) == 0 || (uVar2 & 0x18) == 0x18);
  }
  else if ((uVar1 == 0x20) || (uVar1 == 4)) {
    uVar8 = uVar8 & (uVar2 >> 0x1f ^ 0xffffffff);
    if ((uVar2 & 0x18) != 0) {
      uVar8 = 0;
    }
    uVar8 = uVar8 & (uVar2 & 0x20400000) == 0;
  }
  else if ((uVar2 & 0x21224) == 0) {
    uVar7 = uVar2 >> 0x16 | uVar2 >> 0x1f;
LAB_1003f4ec:
    uVar8 = uVar8 & (uVar7 ^ 0xffffffff);
    if ((uVar2 & 0x18) != 0) {
      uVar8 = 0;
    }
  }
  else if (uVar1 == 0x1000) {
    if (((uVar2 & 0x10) == 0 && (uVar2 & 0x400018) != 8) ||
       (((uVar2 & 0x400018) == 8 && ((uVar7 >> 9 & 1) != 0)))) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    uVar8 = uVar8 & (uVar2 >> 0x15 ^ 0xffffffff) & uVar7;
  }
  else if (uVar1 == 0x20000) {
    uVar7 = uVar2 >> 0x16 | uVar2 >> 0x1f | uVar2 >> 0x15;
    goto LAB_1003f4ec;
  }
  if ((uVar8 != 0) && (uVar4 = 0x887600d4, *(char *)(param_1 + 0x108) != '\0')) {
    uVar4 = FUN_1003d940(param_1,param_2,param_3,param_4,param_5,0,param_6,0);
  }
LAB_1003f538:
  FUN_100a9ca0(auStack_4c);
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar4;
}

