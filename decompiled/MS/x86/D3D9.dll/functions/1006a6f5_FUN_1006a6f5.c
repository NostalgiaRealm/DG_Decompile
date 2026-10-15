/*
 * FUN_1006a6f5 at 1006a6f5
 * uint __stdcall FUN_1006a6f5(uint param_1, int param_2, int * param_3, char param_4)
 * Address ranges: 1006a6f5-1006a805
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1006a6f5(uint param_1,int param_2,int *param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_80 [8];
  uint local_60 [8];
  uint local_40;
  undefined1 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_18;
  undefined1 local_11;
  
  uVar1 = param_1 >> 0x10 & 7;
  local_11 = 1;
  local_18 = 0;
  if (uVar1 == 1) {
    local_18 = 0x31;
  }
  else {
    if (uVar1 == 2) {
      local_18 = 0x18;
      goto LAB_1006a776;
    }
    if (uVar1 == 3) {
      local_18 = 0x1d;
      goto LAB_1006a776;
    }
    if (uVar1 == 4) {
      local_18 = 0x31;
      goto LAB_1006a776;
    }
    if (uVar1 == 5) {
      local_18 = 0x39;
      goto LAB_1006a776;
    }
    if (uVar1 != 6) goto LAB_1006a776;
    local_18 = 0x1d;
  }
  local_11 = 0;
LAB_1006a776:
  if (param_4 == '\0') {
    local_40 = FUN_100c2e34(param_2 + 0x18,4,'\0');
    puVar3 = &local_40;
    local_3c = 1;
    local_30 = 0xffffffff;
    local_2c = 0xffffffff;
    local_28 = 0xffffffff;
    local_24 = 0xffffffff;
  }
  else {
    puVar3 = (uint *)(param_2 + 0x310);
  }
  puVar4 = local_60;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_60;
  puVar4 = local_80;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_100c3cfd((int *)(param_2 + 0x18),param_3,local_18);
  return local_80[0];
}

