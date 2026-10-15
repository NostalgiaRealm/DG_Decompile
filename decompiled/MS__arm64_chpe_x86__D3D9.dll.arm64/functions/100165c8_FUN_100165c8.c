/*
 * FUN_100165c8 at 100165c8
 * undefined FUN_100165c8(void)
 * Address ranges: 100165c8-100167e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100165c8(uint *param_1,int *param_2,int param_3,char param_4)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulonglong local_50;
  ulonglong local_48;
  
  uVar2 = *param_1;
  uVar3 = *(ushort *)(param_3 + 0x10);
  FUN_10019908(param_1,param_2,0);
  uVar4 = FUN_10014cc0(param_1,extraout_x1,0xffffffff,1);
  local_48 = uVar4;
  FUN_10002470(param_2,0x890200000210,uVar4 & 0xffffffff,uVar2 | 0x80000000,(ulonglong)uVar3 << 4,0)
  ;
  FUN_10002470(param_2,0xb0200000210,uVar4 & 0xffffffff,uVar4 & 0xffffffff,0,0);
  FUN_10002470(param_2,0x840100110000,0xffffffff,0xffffffff,0,0);
  puVar1 = param_1 + 0x79;
  param_1[*puVar1 * 6 + 0x31] = (uint)*(ushort *)(param_3 + 0x10);
  param_1[*puVar1 * 6 + 0x32] = param_2[1] - *param_2;
  FUN_10002470(param_2,0x30ff0200000000,uVar4 & 0xffffffff,0xffffffff,0,0);
  if (param_4 != '\0') {
    uVar5 = FUN_10014cc0(param_1,extraout_x1_00,0xffffffff,1);
    local_50 = uVar5;
    FUN_10002470(param_2,0x890200000210,uVar4 & 0xffffffff,*param_1 | 0x80000000,0x44c0,0);
    FUN_10002470(param_2,0x890200000210,uVar5 & 0xffffffff,uVar2 | 0x80000000,(uint)uVar3 * 0x10 + 4
                 ,0);
    FUN_10002470(param_2,0x890200000210,*param_1 | ((uint)uVar4 & 0xff | 0xffc00200) << 8,
                 uVar5 & 0xffffffff,0x44b0,0);
    FUN_10002470(param_2,0x810200012010,*param_1 | 0x80000000,0xffffffff,0x44c0,1);
    FUN_10014dd8(param_1,param_2,&local_50);
  }
  param_1[*puVar1 * 6 + 0x33] = param_2[1] - *param_2;
  FUN_10014dd8(param_1,param_2,&local_48);
  *puVar1 = *puVar1 + 1;
  return;
}

