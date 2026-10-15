/*
 * FUN_18017e470 at 18017e470
 * undefined FUN_18017e470(void)
 * Address ranges: 18017e470-18017e5cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18017e470(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,
                 ulonglong param_5,uint param_6,uint param_7)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint local_90 [2];
  uint local_88;
  uint local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  
  if (param_4 == 0) {
    param_4 = FUN_180213760(param_3 + 0x20,4,1);
  }
  local_70 = 0;
  local_68 = 0;
  bVar1 = (&DAT_18022c4a0)[param_5 & 0xff];
  uVar2 = param_7 & 0xff | 0x100;
  uVar3 = (uint)param_5 & 0xff;
  local_88 = param_6 | 0x420100;
  local_78 = *(undefined4 *)(param_3 + 0x4b0);
  local_90[0] = uVar3;
  local_80 = uVar2;
  FUN_180214c88(param_3 + 0x20,param_2,0x38,param_4,local_90,0x30);
  local_58 = 0;
  local_88 = param_6 | 0x424100;
  local_70._0_4_ = 0x55;
  local_78 = *(undefined4 *)(param_3 + 0x4b0);
  local_90[0] = uVar3;
  local_80 = uVar2;
  local_60 = bVar1 | 0x100;
  local_68._0_4_ = param_4;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,param_4,local_90,0x40);
  local_58 = 0;
  local_88 = param_6 | 0x428100;
  local_68 = CONCAT44(local_68._4_4_,param_4);
  local_70 = CONCAT44(local_70._4_4_,0xaa);
  local_78 = *(undefined4 *)(param_3 + 0x4b0);
  local_90[0] = (uint)param_5 & 0xff;
  local_80 = uVar2;
  local_60 = bVar1 | 0x100;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,param_4,local_90,0x40);
  return param_4;
}

