/*
 * FUN_14001ac60 at 14001ac60
 * undefined __fastcall FUN_14001ac60(longlong param_1, undefined8 * param_2, longlong * param_3, undefined8 param_4)
 * Address ranges: 14001ac60-14001afe5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001ac60(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  longlong *plVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 *local_res10 [3];
  CHAR local_58 [24];
  
  plVar5 = param_3;
  local_res10[0] = param_2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x80) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(param_2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x58) < 7) {
    pcVar3 = (&PTR_DAT_14002a118)[*(int *)(param_1 + 0x58)];
  }
  else {
    pcVar3 = "";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)
           FUN_140019e94(puVar2,(uint)(*(ulonglong *)(param_1 + 0x5c) >> 0x14),plVar5,param_4);
  uVar7 = *(uint *)(param_1 + 0x78) & 0xff;
  local_res10[0] = puVar2;
  FUN_140024290(local_58,"%d",(ulonglong)uVar7,param_4);
  iVar1 = *(int *)(param_1 + 0x78);
  pcVar3 = "appdriven";
  if (iVar1 == 0) {
    pcVar4 = "appdriven";
  }
  else if (iVar1 == 0x100) {
    pcVar4 = "pointsampled";
  }
  else if (iVar1 == 0x200) {
    pcVar4 = "bilinear";
  }
  else if (iVar1 == 0x300) {
    pcVar4 = "linearmip";
  }
  else if (iVar1 == 0x400) {
    pcVar4 = "trilinear";
  }
  else if (iVar1 == 0x500) {
    pcVar4 = "pointmip";
  }
  else {
    pcVar4 = local_58;
    if (0x10 < uVar7) {
      pcVar4 = "";
    }
  }
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar4);
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 1) {
    pcVar3 = "disabled";
  }
  else if (iVar1 == 2) {
    pcVar3 = "autogen_point";
  }
  else if (iVar1 == 3) {
    pcVar3 = "autogen_bilinear";
  }
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x87) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)
           FUN_140019ec4(puVar2,*(uint *)(param_1 + 100),*(uint *)(param_1 + 0x68),
                         (ulonglong)*(uint *)(param_1 + 0x70),*(uint *)(param_1 + 0x74),
                         *(char *)(param_1 + 0x22));
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)FUN_14001a058(puVar2,*(int *)(param_1 + 0x6c));
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x81) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x82) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x84) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x85) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x86) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x83) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x88) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  if (*(char *)(param_1 + 0x89) != '\0') {
    pcVar6 = "true";
  }
  FUN_140019e4c(puVar2,pcVar6);
  return;
}

