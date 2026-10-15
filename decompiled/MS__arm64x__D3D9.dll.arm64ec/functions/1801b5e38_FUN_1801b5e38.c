/*
 * FUN_1801b5e38 at 1801b5e38
 * undefined FUN_1801b5e38(void)
 * Address ranges: 1801b5e38-1801b5f4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b5e38(undefined8 param_1,uint *param_2,undefined4 param_3,ulonglong param_4,
                  undefined4 param_5,byte param_6)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  local_48 = 0;
  uVar1 = (undefined4)param_4;
  bVar2 = (*param_2 & 0x1000) == 0;
  uVar3 = 0x3c;
  if (bVar2) {
    uVar3 = 1;
  }
  uVar4 = 0x27;
  if (bVar2) {
    uVar4 = 0x20;
  }
  local_50 = 0xe4;
  local_60._0_4_ = 0xe4;
  local_70[0] = 0xf;
  local_68 = uVar1;
  local_58 = param_3;
  FUN_180214c88(param_2 + 4,param_1,uVar4,param_4,local_70,0x30);
  local_48 = 0;
  local_50 = 0xfe;
  local_60 = CONCAT44(local_60._4_4_,0x54);
  local_70[0] = 3;
  local_68 = uVar1;
  local_58 = uVar1;
  FUN_180214c88(param_2 + 4,param_1,uVar3,param_4 & 0xffffffff,local_70,0x30);
  local_48 = 0;
  local_60 = 0;
  local_70[0] = (uint)param_6;
  local_50 = 0x55;
  local_68 = uVar1;
  local_58 = uVar1;
  FUN_180214c88(param_2 + 4,param_1,uVar3,param_5,local_70,0x30);
  return;
}

