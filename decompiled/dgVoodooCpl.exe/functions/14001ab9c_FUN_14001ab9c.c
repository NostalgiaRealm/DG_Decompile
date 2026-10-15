/*
 * FUN_14001ab9c at 14001ab9c
 * undefined __fastcall FUN_14001ab9c(longlong param_1, undefined8 * param_2, longlong * param_3, undefined8 param_4)
 * Address ranges: 14001ab9c-14001ac5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001ab9c(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined8 *local_res10;
  
  plVar4 = param_3;
  local_res10 = param_2;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar3 = "";
  if (*(uint *)(param_1 + 0xe7) < 3) {
    pcVar2 = (&PTR_s_pure32bit_14002a280)[(int)*(uint *)(param_1 + 0xe7)];
  }
  else {
    pcVar2 = "";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(param_2,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  if (*(uint *)(param_1 + 0xeb) < 3) {
    pcVar3 = (&PTR_s_disabled_14002a268)[(int)*(uint *)(param_1 + 0xeb)];
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar3);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  FUN_140019e94(puVar1,*(uint *)(param_1 + 0xef),plVar4,param_4);
  return;
}

