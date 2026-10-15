/*
 * FUN_10088a4c at 10088a4c
 * uint __fastcall FUN_10088a4c(undefined4 * param_1, int * param_2)
 * Address ranges: 10088a4c-10088aca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10088a4c(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214 [131];
  int local_8;
  
  local_21c = 0x45474544;
  local_218 = 0x287;
  FUN_100827e8(local_214);
  local_218 = 0x287;
  local_21c = 0x45474544;
  local_8 = 0;
  puVar3 = local_214;
  for (iVar2 = 0x83; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar1 = (**(code **)(*param_2 + 8))(0x214,&local_21c,&local_8);
  if (uVar1 == 0) {
    uVar1 = (uint)(local_8 == 0x214);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

