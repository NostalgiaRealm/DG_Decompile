/*
 * FUN_14001b0e0 at 14001b0e0
 * undefined __cdecl FUN_14001b0e0(undefined8 * param_1, uint param_2, uint param_3, undefined8 param_4, undefined8 param_5, ulonglong param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 14001b0e0-14001b2ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001b0e0(undefined8 *param_1,uint param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  LPCSTR pCVar2;
  char *pcVar3;
  CHAR *pCVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  CHAR aCStack_d0 [16];
  CHAR aCStack_c0 [16];
  CHAR aCStack_b0 [128];
  
  uVar7 = (ulonglong)param_3;
  if ((((uint)param_4 == 0) || (uVar5 = (uint)param_5, uVar5 == 0)) || ((param_6 & 1) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = (uint)param_4 / uVar5;
    }
  }
  if (param_2 < 0xfffffff8) {
    bVar1 = false;
  }
  else {
    bVar1 = param_2 == param_3 && param_2 != 0xfffffff9 || param_3 < 0x100;
  }
  FUN_140024880(aCStack_c0,"%ux",uVar7,param_4,param_5,param_6,param_7,param_8);
  FUN_140024880(aCStack_d0,"_%ux",uVar7,param_4,param_5,param_6,param_7,param_8);
  pcVar3 = "";
  pCVar4 = aCStack_d0;
  if (0xfd < param_3 - 2) {
    pCVar4 = pcVar3;
  }
  if (param_2 == 0) {
    pcVar3 = "unforced";
  }
  else if (param_2 == 0xfffffff8) {
    pcVar3 = "desktop";
  }
  else if (param_2 == 0xfffffff9) {
    pcVar3 = aCStack_c0;
    pCVar4 = "";
  }
  else if (param_2 == 0xfffffffa) {
    pcVar3 = "max_qhd_isf";
  }
  else if (param_2 == 0xfffffffb) {
    pcVar3 = "max_qhd";
  }
  else if (param_2 == 0xfffffffc) {
    pcVar3 = "max_fhd_isf";
  }
  else if (param_2 == 0xfffffffd) {
    pcVar3 = "max_fhd";
  }
  else if (param_2 == 0xfffffffe) {
    pcVar3 = "max_isf";
  }
  else if (param_2 == 0xffffffff) {
    pcVar3 = "max";
  }
  if ((bVar1) || ((param_2 == 0 && (param_3 == 0)))) {
    pCVar2 = "%s%s, refrate:%d";
    if (uVar6 == 0) {
      pCVar2 = "%s%s";
    }
    FUN_140024880(aCStack_b0,pCVar2,pcVar3,pCVar4,(ulonglong)uVar6,param_6,param_7,param_8);
  }
  else {
    pCVar2 = "h:%d, v:%d, refrate:%d";
    if (uVar6 == 0) {
      pCVar2 = "h:%d, v:%d";
    }
    FUN_140024880(aCStack_b0,pCVar2,(ulonglong)param_2,uVar7,(ulonglong)uVar6,param_6,param_7,
                  param_8);
  }
  FUN_14001b090(param_1,aCStack_b0);
  return;
}

