/*
 * FUN_1004a057 at 1004a057
 * undefined __stdcall FUN_1004a057(undefined4 * param_1, int param_2, char param_3)
 * Address ranges: 1004a057-1004a0d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004a057(undefined4 *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_3c = 0xe4;
  if (param_3 == '\0') {
    local_40 = *(undefined4 *)(param_2 + 0x94);
  }
  else {
    local_40 = *(undefined4 *)(param_2 + 0x90);
    local_2c = 0xffffffff;
    local_28 = 0xffffffff;
    local_24 = 0xffffffff;
  }
  puVar2 = &local_40;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

