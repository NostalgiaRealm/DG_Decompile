/*
 * FUN_180112600 at 180112600
 * undefined FUN_180112600(void)
 * Address ranges: 180112600-1801127e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180112600(uint *param_1,undefined8 *param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulonglong local_50;
  ulonglong local_48;
  
  uVar1 = *param_1;
  uVar2 = *(ushort *)(param_3 + 0x10);
  FUN_180113dc0(param_1,param_2,0);
  uVar3 = FUN_18010f178(param_1,extraout_x1,0xffffffff,1);
  local_48 = uVar3;
  FUN_1801060c0(param_2,0x890200000210,uVar3 & 0xffffffff,uVar1 | 0x80000000,(ulonglong)uVar2 << 4,0
               );
  FUN_1801060c0(param_2,0xb0200000210,uVar3 & 0xffffffff,uVar3 & 0xffffffff,0,0);
  FUN_1801060c0(param_2,0x840100110000,0xffffffff,0xffffffff,0,0);
  param_1[(ulonglong)param_1[0x84] * 8 + 0x34] = (uint)*(ushort *)(param_3 + 0x10);
  param_1[(ulonglong)param_1[0x84] * 8 + 0x35] = (int)param_2[1] - (int)*param_2;
  FUN_1801060c0(param_2,0x30ff0200000000,uVar3 & 0xffffffff,0xffffffff,0,0);
  if ((param_4 & 1) != 0) {
    uVar4 = FUN_18010f178(param_1,extraout_x1_00,0xffffffff,1);
    local_50 = uVar4;
    FUN_1801060c0(param_2,0x890200000210,uVar3 & 0xffffffff,*param_1 | 0x80000000,0x44c0,0);
    FUN_1801060c0(param_2,0x890200000210,uVar4 & 0xffffffff,uVar1 | 0x80000000,
                  (uint)uVar2 * 0x10 + 4,0);
    FUN_1801060c0(param_2,0x890200000210,*param_1 | ((uint)uVar3 & 0xff | 0xffc00200) << 8,
                  uVar4 & 0xffffffff,0x44b0,0);
    FUN_1801060c0(param_2,0x810200012010,*param_1 | 0x80000000,0xffffffff,0x44c0,1);
    FUN_18010f268(param_1,param_2,&local_50);
  }
  param_1[(ulonglong)param_1[0x84] * 8 + 0x36] = (int)param_2[1] - (int)*param_2;
  FUN_18010f268(param_1,param_2,&local_48);
  param_1[0x84] = param_1[0x84] + 1;
  return;
}

