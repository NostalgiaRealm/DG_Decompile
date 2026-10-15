/*
 * FUN_14001efa0 at 14001efa0
 * uint __cdecl FUN_14001efa0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 14001efa0-14001f66b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_14001efa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int extraout_w10;
  uint extraout_w11;
  uint extraout_w12;
  CHAR aCStack_90 [128];
  
  FUN_14001ef50(*(uint *)(param_1 + 0x8a),*(uint *)(param_1 + 0x8e));
  uVar6 = *(uint *)(param_1 + 0xde);
  uVar5 = uVar6;
  if (uVar6 == 0) {
    uVar5 = 1;
  }
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x14001f12c);
    (*pcVar3)();
  }
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = *(uint *)(param_1 + 0xda) / uVar5;
  }
  if (5000 < uVar2) {
    FUN_140015790(*(uint *)(param_1 + 0xda),uVar6,aCStack_90,param_4,param_5,param_6,param_7,param_8
                 );
  }
  FUN_14001ef50(*(uint *)(param_1 + 0x37),*(uint *)(param_1 + 0x3b));
  uVar4 = FUN_14001ef50(*(uint *)(param_1 + 100),*(uint *)(param_1 + 0x68));
  if ((*(uint *)(param_1 + 0x6c) < 0x11) &&
     ((extraout_w11 >> (ulonglong)(*(uint *)(param_1 + 0x6c) & 0x1f) & 1) != 0)) {
    uVar5 = (uint)uVar4 & 0xff & extraout_w12;
  }
  else {
    uVar5 = 0;
  }
  if ((0x400 < *(uint *)(param_1 + 0x78)) || ((*(uint *)(param_1 + 0x78) & 0xff) != 0)) {
    uVar5 = 0;
  }
  uVar6 = 0;
  if (*(uint *)(param_1 + 0x7c) < 4) {
    uVar6 = uVar5;
  }
  uVar5 = 0;
  if (*(byte *)(param_1 + 0x81) < 2) {
    uVar5 = *(byte *)(param_1 + 0x87) < 2 & uVar6;
  }
  if (*(byte *)(param_1 + 0x84) < 2) {
    uVar5 = *(byte *)(param_1 + 0x82) < 2 & uVar5;
  }
  else {
    uVar5 = 0;
  }
  if (*(byte *)(param_1 + 0x86) < 2) {
    uVar5 = *(byte *)(param_1 + 0x85) < 2 & uVar5;
  }
  else {
    uVar5 = 0;
  }
  if (*(byte *)(param_1 + 0x88) < 2) {
    uVar5 = *(byte *)(param_1 + 0x83) < 2 & uVar5;
  }
  else {
    uVar5 = 0;
  }
  uVar6 = 0;
  if (*(uint *)(param_1 + 0xf7) < 4) {
    uVar6 = uVar5;
  }
  uVar5 = uVar6;
  if (*(uint *)(param_1 + 0xfb) != 0xffffffff) {
    uVar5 = 0;
  }
  if (0xffff < *(uint *)(param_1 + 0xfb)) {
    uVar6 = uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x1cb);
  uVar5 = uVar6;
  if (((iVar1 != 0) && (iVar1 != 1)) && (uVar5 = 0, iVar1 == 2)) {
    uVar5 = uVar6;
  }
  uVar6 = 0;
  if (*(uint *)(param_1 + 0x1cf) < 4) {
    uVar6 = uVar5;
  }
  if (0x10 < *(uint *)(param_1 + 0x1d3)) {
    uVar6 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1d7);
  uVar5 = uVar6;
  if (((iVar1 != 0) && (iVar1 != 1)) && (uVar5 = 0, iVar1 == 2)) {
    uVar5 = uVar6;
  }
  uVar6 = 0;
  if (*(uint *)(param_1 + 0x1db) < 4) {
    uVar6 = uVar5;
  }
  uVar5 = 0;
  if ((*(int *)(param_1 + 0x1e7) - 0x100U & 0xfffffcff) == 0 &&
      *(int *)(param_1 + 0x1e7) != extraout_w10) {
    uVar5 = uVar6;
  }
  if (8 < *(uint *)(param_1 + 0x1eb)) {
    uVar5 = 0;
  }
  uVar6 = 0;
  if (*(byte *)(param_1 + 500) < 2) {
    uVar6 = *(byte *)(param_1 + 499) < 2 & uVar5;
  }
  if (*(byte *)(param_1 + 0x1f6) < 2) {
    uVar6 = *(byte *)(param_1 + 0x1f5) < 2 & uVar6;
  }
  else {
    uVar6 = 0;
  }
  if (*(byte *)(param_1 + 0x1f8) < 2) {
    uVar6 = uVar6 & *(byte *)(param_1 + 0x1f7) < 2;
  }
  else {
    uVar6 = 0;
  }
  if (*(byte *)(param_1 + 0x1fa) < 2) {
    uVar6 = uVar6 & *(byte *)(param_1 + 0x1f9) < 2;
  }
  else {
    uVar6 = 0;
  }
  uVar5 = 0;
  if (*(uint *)(param_1 + 0x1df) < 3) {
    uVar5 = uVar6;
  }
  if ((*(uint *)(param_1 + 0x1e3) & 0xfffffff8) != 0) {
    uVar5 = 0;
  }
  lVar7 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 0x10b + lVar7 * 0xc);
    if (uVar6 == 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 0x10f + lVar7 * 0xc);
      if ((uVar6 < 0x100) || (uVar6 - 0x102 < 0xfffffefd)) {
LAB_14001f5f8:
        uVar5 = 0;
      }
    }
    else if ((0x80000000 < uVar6) || (0x80000000 < *(uint *)(param_1 + 0x10f + lVar7 * 0xc)))
    goto LAB_14001f5f8;
    lVar7 = lVar7 + 1;
    if (lVar7 == 0x10) {
      uVar6 = 0;
      if (*(uint *)(param_1 + 0x1ff) < 3) {
        uVar6 = *(uint *)(param_1 + 0x1fb) < 3 & uVar5;
      }
      uVar6 = uVar6 & *(uint *)(param_1 + 0x203) < 3;
      if (2 < *(uint *)(param_1 + 0x207)) {
        uVar6 = 0;
      }
      uVar5 = 0;
      if (*(byte *)(param_1 + 0x20b) < 2) {
        uVar5 = uVar6;
      }
      return uVar5;
    }
  } while( true );
}

