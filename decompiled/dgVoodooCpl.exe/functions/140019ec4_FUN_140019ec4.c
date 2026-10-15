/*
 * FUN_140019ec4 at 140019ec4
 * undefined __fastcall FUN_140019ec4(undefined8 * param_1, uint param_2, uint param_3, ulonglong param_4, uint param_5, char param_6)
 * Address ranges: 140019ec4-14001a056
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140019ec4(undefined8 *param_1,uint param_2,uint param_3,ulonglong param_4,uint param_5,
                  char param_6)

{
  ulonglong uVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  CHAR *pCVar6;
  CHAR local_c8 [16];
  CHAR local_b8 [16];
  CHAR local_a8 [128];
  
  uVar1 = (ulonglong)param_3;
  if ((((int)param_4 == 0) || (param_5 == 0)) || (param_6 == '\0')) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)((param_4 & 0xffffffff) / (ulonglong)param_5);
  }
  if ((param_2 < 0xfffffff8) ||
     (((param_2 != param_3 || (param_2 == 0xfffffff9)) && (0xff < param_3)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FUN_140024290(local_b8,"%ux",uVar1,param_4);
  FUN_140024290(local_c8,"_%ux",uVar1,param_4);
  pCVar6 = local_c8;
  if (0xfd < param_3 - 2) {
    pCVar6 = "";
  }
  if (param_2 == 0) {
    pcVar5 = "unforced";
  }
  else if (param_2 == 0xfffffff8) {
    pcVar5 = "desktop";
  }
  else if (param_2 == 0xfffffff9) {
    pcVar5 = local_b8;
    pCVar6 = "";
  }
  else if (param_2 == 0xfffffffa) {
    pcVar5 = "max_qhd_isf";
  }
  else if (param_2 == 0xfffffffb) {
    pcVar5 = "max_qhd";
  }
  else if (param_2 == 0xfffffffc) {
    pcVar5 = "max_fhd_isf";
  }
  else if (param_2 == 0xfffffffd) {
    pcVar5 = "max_fhd";
  }
  else if (param_2 == 0xfffffffe) {
    pcVar5 = "max_isf";
  }
  else if (param_2 == 0xffffffff) {
    pcVar5 = "max";
  }
  else {
    pcVar5 = "";
  }
  if ((bVar2) || ((param_2 == 0 && (param_3 == 0)))) {
    pcVar3 = "%s%s";
    if (iVar4 != 0) {
      pcVar3 = "%s%s, refrate:%d";
    }
    FUN_140024290(local_a8,pcVar3,pcVar5,pCVar6);
  }
  else {
    pcVar5 = "h:%d, v:%d";
    if (iVar4 != 0) {
      pcVar5 = "h:%d, v:%d, refrate:%d";
    }
    FUN_140024290(local_a8,pcVar5,(ulonglong)param_2,uVar1);
  }
  FUN_140019e4c(param_1,local_a8);
  return;
}

