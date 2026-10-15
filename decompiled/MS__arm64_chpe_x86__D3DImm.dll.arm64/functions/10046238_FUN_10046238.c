/*
 * FUN_10046238 at 10046238
 * undefined FUN_10046238(void)
 * Address ranges: 10046238-1004637f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10046238(undefined8 param_1,undefined4 param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  
  if (param_4 == 0) {
    iVar1 = param_3 + 0x10;
    param_4 = FUN_10079948(iVar1,3,1);
    puVar2 = (undefined4 *)(param_3 + 0xb0);
    local_5c = 0x1b0;
    uStack_58 = 0;
    local_64 = *puVar2;
    puVar3 = (undefined4 *)(param_3 + 0x134);
    uStack_60 = 0xe4;
    local_6c = *puVar3;
    local_78 = 0x11;
    uStack_68 = 0xe4;
    local_70 = 1;
    local_80 = iVar1;
    uStack_7c = param_2;
    iStack_74 = param_4;
    FUN_1007a868(&local_80,0x2c);
    local_5c = 0x1c0;
    uStack_58 = 0;
    local_64 = *puVar2;
    local_78 = 0x11;
    uStack_60 = 0xe4;
    local_6c = *puVar3;
    uStack_68 = 0xe4;
    local_70 = 2;
    local_80 = iVar1;
    uStack_7c = param_2;
    iStack_74 = param_4;
    FUN_1007a868(&local_80,0x2c);
    local_5c = 0x1d0;
    uStack_58 = 0;
    local_64 = *puVar2;
    local_78 = 0x11;
    uStack_60 = 0xe4;
    local_6c = *puVar3;
    uStack_68 = 0xe4;
    local_70 = 4;
    local_80 = iVar1;
    uStack_7c = param_2;
    iStack_74 = param_4;
    uVar4 = FUN_1007a868(&local_80,0x2c);
    if ((*(uint *)(*(int *)(param_3 + 0x180) + 0x44) >> 0x17 & 1) != 0) {
      FUN_10045410(uVar4,param_2,param_3,param_4,param_5,0,0);
    }
  }
  return param_4;
}

