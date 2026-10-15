/*
 * FUN_14001a8e0 at 14001a8e0
 * undefined __fastcall FUN_14001a8e0(longlong param_1, undefined8 * param_2, longlong * param_3, undefined8 param_4)
 * Address ranges: 14001a8e0-14001ab99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001a8e0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined8 *local_res10 [3];
  
  plVar4 = param_3;
  local_res10[0] = param_2;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x27) < 5) {
    pcVar2 = (&PTR_s_voodoo_graphics_14002a240)[*(int *)(param_1 + 0x27)];
  }
  else {
    pcVar2 = "";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(param_2,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,*(uint *)(param_1 + 0x2b) >> 0x14,plVar4,param_4);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,*(uint *)(param_1 + 0x2f) >> 10,plVar4,param_4);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,*(uint *)(param_1 + 0x33),plVar4,param_4);
  if (*(int *)(param_1 + 0x4b) == 0x200) {
    pcVar2 = "bilinear";
  }
  else {
    pcVar2 = "appdriven";
    if (*(int *)(param_1 + 0x4b) == 0x100) {
      pcVar2 = "pointsampled";
    }
  }
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x4f) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)
           FUN_140019ec4(puVar1,*(uint *)(param_1 + 0x37),*(uint *)(param_1 + 0x3b),
                         (ulonglong)*(uint *)(param_1 + 0x43),*(uint *)(param_1 + 0x47),
                         *(char *)(param_1 + 0x22));
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)FUN_14001a058(puVar1,*(int *)(param_1 + 0x3f));
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x50) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x52) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x53) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x54) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x55) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x56) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x51) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  if (*(char *)(param_1 + 0x57) != '\0') {
    pcVar3 = "true";
  }
  FUN_140019e4c(puVar1,pcVar3);
  return;
}

