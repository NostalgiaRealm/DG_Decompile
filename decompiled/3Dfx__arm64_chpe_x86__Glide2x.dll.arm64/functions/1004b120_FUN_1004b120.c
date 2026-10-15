/*
 * FUN_1004b120 at 1004b120
 * undefined FUN_1004b120(void)
 * Address ranges: 1004b120-1004b243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b120(uint param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  
  piVar1 = param_2 + 0x19;
  if ((*piVar1 == 0) && (*param_2 != 0x40)) {
    uVar2 = FUN_1006e7b0(param_2,2,0);
    iVar3 = FUN_1006e7b0(param_2,1,1);
    local_60 = 0xe4;
    local_64 = param_2[0x15];
    *piVar1 = iVar3;
    local_4c = 0;
    local_54 = 0x3b800000;
    uStack_50 = 0x3b800000;
    local_5c = 0x3b800000;
    uStack_58 = 0x3b800000;
    local_68 = 0x154;
    local_6c = param_2[0x18];
    local_70 = 3;
    local_78 = 0x38;
    local_80 = param_2;
    uStack_7c = param_3;
    local_74 = uVar2;
    FUN_1006f920(&local_80,0x38);
    local_5c = param_1 | 0x20010600;
    local_54 = 0;
    uStack_58 = 0;
    local_60 = 0x55;
    local_64 = 0x410710;
    local_68 = 0x54;
    local_70 = 1;
    local_74 = *piVar1;
    local_78 = 0x6c;
    local_80 = param_2;
    uStack_7c = param_3;
    local_6c = uVar2;
    FUN_1006f920(&local_80,0x30);
  }
  return;
}

