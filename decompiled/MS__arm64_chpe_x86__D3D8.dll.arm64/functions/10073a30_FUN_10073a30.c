/*
 * FUN_10073a30 at 10073a30
 * undefined FUN_10073a30(void)
 * Address ranges: 10073a30-10073b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073a30(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int iStack_74;
  undefined4 local_70;
  int iStack_6c;
  uint local_68;
  int iStack_64;
  uint local_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  
  local_68 = param_4 & 0xff;
  local_70 = 7;
  if (param_6 == 0) {
    param_6 = param_2;
  }
  puVar1 = (undefined4 *)(param_1 + 8);
  local_78 = 0xe;
  piVar2 = (int *)(param_1 + 4);
  local_7c = *puVar1;
  uStack_5c = 0;
  local_80 = *piVar2;
  iStack_74 = param_6;
  iStack_6c = param_3;
  iStack_64 = param_3;
  local_60 = param_5 & 0xff;
  FUN_100ef510(&local_80,0x28);
  local_80 = *piVar2;
  local_58 = 0;
  local_60 = 0xe4;
  uStack_5c = 0x7fffffff;
  iStack_64 = *(undefined4 *)(local_80 + 0x90);
  local_70 = 8;
  local_78 = 1;
  local_7c = *puVar1;
  iStack_74 = param_2;
  iStack_6c = param_3;
  local_68 = param_5 & 0xff;
  FUN_100ef510(&local_80,0x2c);
  local_58 = param_5 & 0xff;
  uStack_54 = 0;
  local_60 = 0xe4;
  local_68 = 0xff;
  local_70 = 0xf;
  local_78 = 0x37;
  local_7c = *puVar1;
  local_80 = *piVar2;
  iStack_74 = param_2;
  iStack_6c = param_2;
  iStack_64 = param_6;
  uStack_5c = param_3;
  FUN_100ef510(&local_80,0x30);
  return;
}

