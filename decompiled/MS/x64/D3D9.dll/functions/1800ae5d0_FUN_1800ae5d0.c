/*
 * FUN_1800ae5d0 at 1800ae5d0
 * undefined4 __fastcall FUN_1800ae5d0(longlong param_1, uint param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 1800ae5d0-1800ae6ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800ae5d0(longlong param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  
  if (*(uint *)(param_1 + -0x30) <= param_2) {
    return 0x8876086c;
  }
  if (3 < param_3 - 1U) {
    return 0x8876086c;
  }
  lVar1 = param_1 + -0xa0;
  uVar3 = FUN_1800028ec(lVar1,param_3);
  if ((char)uVar3 == '\0') {
    return 0x8876086c;
  }
  uVar2 = FUN_1800039d0(lVar1,param_4);
  if ((char)uVar2 == '\0') {
    return 0x8876086a;
  }
  uVar2 = FUN_1800039d0(lVar1,param_5);
  if ((char)uVar2 == '\0') {
    return 0x8876086a;
  }
  if (param_6 != 0) {
    return 0;
  }
  bVar4 = param_4 == param_5;
  if (param_4 == 0x15) {
    bVar4 = bVar4 || param_5 == 0x16;
  }
  else {
    if (param_4 == 0x16) {
      bVar5 = param_5 == 0x15;
    }
    else if (param_4 == 0x18) {
      bVar5 = param_5 == 0x19;
    }
    else if (param_4 == 0x19) {
      bVar5 = param_5 == 0x18;
    }
    else if (param_4 == 0x1a) {
      bVar5 = param_5 == 0x1e;
    }
    else {
      if (param_4 != 0x1e) goto LAB_1800ae69b;
      bVar5 = param_5 == 0x1a;
    }
    bVar4 = (bool)(bVar4 | bVar5);
  }
LAB_1800ae69b:
  uVar2 = 0x8876086a;
  if (bVar4) {
    uVar2 = 0;
  }
  return uVar2;
}

