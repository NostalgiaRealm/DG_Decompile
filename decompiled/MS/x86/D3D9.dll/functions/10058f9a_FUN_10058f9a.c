/*
 * FUN_10058f9a at 10058f9a
 * undefined __stdcall FUN_10058f9a(undefined4 * param_1, int param_2, char param_3)
 * Address ranges: 10058f9a-10059018
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10058f9a(undefined4 *param_1,int param_2,char param_3)

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
    local_40 = *(undefined4 *)(param_2 + 0xa4);
  }
  else {
    local_40 = *(undefined4 *)(param_2 + 0xa0);
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

