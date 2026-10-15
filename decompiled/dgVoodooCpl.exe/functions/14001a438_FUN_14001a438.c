/*
 * FUN_14001a438 at 14001a438
 * undefined __fastcall FUN_14001a438(longlong param_1, undefined8 * param_2, longlong * param_3, ulonglong param_4)
 * Address ranges: 14001a438-14001a8dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001a438(longlong param_1,undefined8 *param_2,longlong *param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint *puVar6;
  char *local_res8;
  undefined8 *local_res10;
  CHAR local_b8 [32];
  CHAR local_98 [128];
  
  local_b8[0] = '\0';
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x8a);
  local_res10 = param_2;
  if ((*(uint *)(param_1 + 0x8a) != 0) &&
     (param_4 = (ulonglong)*(uint *)(param_1 + 0x8e), *(uint *)(param_1 + 0x8e) != 0)) {
    if ((*(uint *)(param_1 + 0x92) == 0) || (*(uint *)(param_1 + 0x96) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x92) / *(uint *)(param_1 + 0x96);
    }
    pcVar4 = "%dx%d";
    if (uVar2 != 0) {
      pcVar4 = "%dx%d@%d";
    }
    FUN_140024290(local_b8,pcVar4,uVar5,param_4);
  }
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_140019e4c(param_2,local_b8);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  if (*(uint *)(param_1 + 0x9a) == 0) {
    puVar3 = (undefined8 *)FUN_140019e4c(puVar3,"");
  }
  else {
    puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0x9a),uVar5,param_4);
  }
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0x9e),uVar5,param_4);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  puVar6 = (uint *)(ulonglong)*(uint *)(param_1 + 0xa6);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xa2);
  if (*(uint *)(param_1 + 0xa2) == *(uint *)(param_1 + 0xa6)) {
    FUN_140024290(local_98,"%d",uVar5,puVar6);
  }
  else {
    FUN_140024290(local_98,"x:%d, y:%d",uVar5,puVar6);
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,local_98);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0xaa),uVar5,puVar6);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  uVar2 = *(uint *)(param_1 + 0xb6);
  uVar5 = (ulonglong)uVar2;
  local_98[0] = '\0';
  if (uVar2 == 0xffffffff) {
    pcVar4 = "%d_%d";
    puVar6 = (uint *)(ulonglong)(*(uint *)(param_1 + 0xba) & 0xffff);
    uVar5 = (ulonglong)(*(uint *)(param_1 + 0xba) >> 0x10);
  }
  else {
    if ((uVar2 == 0) ||
       (puVar6 = (uint *)(ulonglong)*(uint *)(param_1 + 0xba), *(uint *)(param_1 + 0xba) == 0))
    goto LAB_14001a639;
    pcVar4 = "(%d|%d)";
  }
  FUN_140024290(local_98,pcVar4,uVar5,puVar6);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xae);
  puVar6 = (uint *)(param_1 + 0xb2);
  if ((*(uint *)(param_1 + 0xae) == 0xffffffff) && (*puVar6 == 0xffffffff)) {
    pcVar4 = ", pos:centered";
  }
  else {
    puVar6 = (uint *)(ulonglong)*puVar6;
    FUN_140024290(local_b8,", pos:(%d|%d)",uVar5,puVar6);
    pcVar4 = local_b8;
  }
  FUN_140024cc4(local_98,pcVar4);
LAB_14001a639:
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,local_98);
  iVar1 = *(int *)(param_1 + 0xca);
  if (iVar1 == 0) {
    local_res8 = "pointsampled";
  }
  else if (iVar1 == 1) {
    local_res8 = "bilinear";
  }
  else if (iVar1 == 2) {
    local_res8 = "bicubic";
  }
  else if (iVar1 == 3) {
    local_res8 = "lanczos-2";
  }
  else if (iVar1 == 4) {
    local_res8 = "lanczos-3";
  }
  else {
    local_res8 = "";
  }
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res8);
  iVar1 = *(int *)(param_1 + 0xce);
  if (iVar1 == 0) {
    local_res8 = "auto";
  }
  else if (iVar1 == 1) {
    local_res8 = "discard";
  }
  else if (iVar1 == 2) {
    local_res8 = "seq";
  }
  else if (iVar1 == 3) {
    local_res8 = "flip_discard";
  }
  else if (iVar1 == 4) {
    local_res8 = "flip_seq";
  }
  else {
    local_res8 = "";
  }
  FUN_14001b9ec(param_3,&local_res8);
  iVar1 = *(int *)(param_1 + 0xd2);
  if (iVar1 == 0) {
    local_res8 = "appdriven";
  }
  else if (iVar1 == 1) {
    local_res8 = "argb8888_sdr";
  }
  else if (iVar1 == 2) {
    local_res8 = "argb2101010_sdr";
  }
  else if (iVar1 == 3) {
    local_res8 = "argb2101010_sdr_wcg";
  }
  else if (iVar1 == 4) {
    local_res8 = "argb16161616_hdr";
  }
  else {
    local_res8 = "";
  }
  FUN_14001b9ec(param_3,&local_res8);
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0xd6),uVar5,puVar6);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar4 = "false";
  if (*(char *)(param_1 + 0xe6) != '\0') {
    pcVar4 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar4);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_14001a0b8(puVar3,0x14002c290,*(uint *)(param_1 + 0xc2),7);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_14001a0b8(puVar3,0x14002c278,*(uint *)(param_1 + 0xc6),1);
  local_res10 = puVar3;
  FUN_1400143b0(*(uint *)(param_1 + 0xda),*(uint *)(param_1 + 0xde),local_98);
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,local_98);
  if (*(int *)(param_1 + 0xbe) == 1) {
    local_res8 = "DosBox";
  }
  else if (*(int *)(param_1 + 0xbe) == 2) {
    local_res8 = "QEmu";
  }
  else {
    local_res8 = "";
  }
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res8);
  FUN_14001b9ec(param_3,&local_res10);
  FUN_14001a0b8(puVar3,0x14002c280,*(uint *)(param_1 + 0xe2),3);
  return;
}

