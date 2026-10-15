/*
 * FUN_14001a148 at 14001a148
 * undefined __fastcall FUN_14001a148(uint * param_1, undefined8 * param_2, longlong * param_3, undefined8 param_4)
 * Address ranges: 14001a148-14001a436
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001a148(uint *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 *local_res10;
  CHAR local_38 [16];
  
  local_res10 = param_2;
  FUN_14001b9ec(param_3,&local_res10);
  if (*param_1 < 7) {
    pcVar2 = (&PTR_s_bestavailable_14002a0e0)[(int)*param_1];
  }
  else {
    pcVar2 = "";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(param_2,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  FUN_140024290(local_38,"%d",(ulonglong)param_1[1],param_4);
  pcVar2 = local_38;
  if (param_1[1] == 0) {
    pcVar2 = "all";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  uVar3 = (ulonglong)param_1[2];
  FUN_140024290(local_38,"%d",uVar3,param_4);
  pcVar2 = local_38;
  if (param_1[2] == 0) {
    pcVar2 = "default";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar4 = "false";
  pcVar2 = "false";
  if ((char)param_1[8] == '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  if (param_1[7] < 9) {
    pcVar2 = (&PTR_s_unspecified_14002a150)[(int)param_1[7]];
  }
  else {
    pcVar2 = "";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  if (param_1[6] == 0) {
    puVar1 = (undefined8 *)FUN_140019e4c(puVar1,"false");
    local_res10 = puVar1;
  }
  else if (param_1[6] == 1) {
    puVar1 = (undefined8 *)FUN_140019e4c(puVar1,"true");
    local_res10 = puVar1;
  }
  else {
    FUN_140019e4c(puVar1,"");
  }
  FUN_14001b9ec(param_3,&local_res10);
  pcVar2 = "false";
  if (*(char *)((longlong)param_1 + 0x22) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,param_1[3],uVar3,param_4);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,param_1[4],uVar3,param_4);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,param_1[5],uVar3,param_4);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar2 = "false";
  if (*(char *)((longlong)param_1 + 0x26) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar2 = "false";
  if (*(char *)((longlong)param_1 + 0x21) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar2 = "false";
  if (*(char *)((longlong)param_1 + 0x23) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar2 = "false";
  if ((char)param_1[9] != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  if (*(char *)((longlong)param_1 + 0x25) != '\0') {
    pcVar4 = "true";
  }
  FUN_140019e4c(puVar1,pcVar4);
  return;
}

