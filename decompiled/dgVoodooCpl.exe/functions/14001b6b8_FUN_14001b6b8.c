/*
 * FUN_14001b6b8 at 14001b6b8
 * undefined __fastcall FUN_14001b6b8(longlong param_1, undefined8 * param_2, longlong * param_3, undefined8 param_4)
 * Address ranges: 14001b6b8-14001b818
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001b6b8(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined8 *local_res10 [3];
  
  plVar5 = param_3;
  local_res10[0] = param_2;
  FUN_14001b9ec(param_3,local_res10);
  iVar1 = *(int *)(param_1 + 0x1fb);
  pcVar4 = "";
  if (iVar1 == 0) {
    pcVar3 = "disable";
  }
  else if (iVar1 == 1) {
    pcVar3 = "enable";
  }
  else if (iVar1 == 2) {
    pcVar3 = "enablebreak";
  }
  else {
    pcVar3 = "";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(param_2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  iVar1 = *(int *)(param_1 + 0x1ff);
  if (iVar1 == 0) {
    pcVar3 = "disable";
  }
  else if (iVar1 == 1) {
    pcVar3 = "enable";
  }
  else if (iVar1 == 2) {
    pcVar3 = "enablebreak";
  }
  else {
    pcVar3 = "";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  iVar1 = *(int *)(param_1 + 0x203);
  if (iVar1 == 0) {
    pcVar4 = "disable";
  }
  else if (iVar1 == 1) {
    pcVar4 = "enable";
  }
  else if (iVar1 == 2) {
    pcVar4 = "enablebreak";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar4);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)FUN_140019e94(puVar2,*(uint *)(param_1 + 0x207),plVar5,param_4);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar4 = "false";
  if (*(char *)(param_1 + 0x20b) != '\0') {
    pcVar4 = "true";
  }
  FUN_140019e4c(puVar2,pcVar4);
  return;
}

