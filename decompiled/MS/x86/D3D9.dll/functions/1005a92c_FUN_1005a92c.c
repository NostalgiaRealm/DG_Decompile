/*
 * FUN_1005a92c at 1005a92c
 * undefined __stdcall FUN_1005a92c(undefined4 * param_1, int param_2, undefined4 param_3, char param_4)
 * Address ranges: 1005a92c-1005a9b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a92c(undefined4 *param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((((param_4 == '\x01') || (param_4 == '\x02')) || (param_4 == '\x04')) || (param_4 == '\b')) {
    local_1c = 0xffffffff;
    local_18 = 0xffffffff;
    local_14 = 0xffffffff;
    local_30 = *(undefined4 *)(param_2 + 0xa0);
  }
  else {
    local_30 = *(undefined4 *)(param_2 + 0xa4);
    local_1c = param_3;
    local_18 = param_3;
    local_14 = param_3;
  }
  local_20 = param_3;
  local_2c = 0xe4;
  puVar2 = &local_30;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

