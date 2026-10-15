/*
 * FUN_180112818 at 180112818
 * undefined FUN_180112818(void)
 * Address ranges: 180112818-180112a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180112818(uint *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 extraout_x1;
  int iVar6;
  ulonglong local_40;
  ulonglong local_38;
  
  FUN_180113dc0(param_1,param_2,0);
  param_1[0x84] = param_1[0x84] - 1;
  if ((param_4 & 1) != 0) {
    uVar4 = FUN_18010f178(param_1,extraout_x1,0xffffffff,1);
    local_38 = uVar4;
    uVar5 = FUN_18010f178(param_1);
    local_40 = uVar5;
    FUN_1801060c0(param_2,0x890200000210,uVar4 & 0xffffffff,*param_1 | 0x80000000,
                  param_1[(ulonglong)param_1[0x84] * 8 + 0x34] << 4 | 8,0);
    FUN_1801060c0(param_2,0x890200000210,uVar5 & 0xffffffff,*param_1 | 0x80000000,0x44c0,0);
    FUN_1801060c0(param_2,0x10200000210,*param_1 | ((uint)uVar5 & 0xff | 0xffc00200) << 8,
                  uVar4 & 0xffffffff,0x44ac,0);
    FUN_18010f268(param_1,param_2,&local_40);
    FUN_18010f268(param_1,param_2,&local_38);
  }
  FUN_1801060c0(param_2,0x28810200012010,0x80000004,0xffffffff,0,1);
  iVar3 = param_1[(ulonglong)param_1[0x84] * 8 + 0x36] - ((int)param_2[1] - (int)*param_2);
  uVar1 = iVar3 + 0x7e;
  if (uVar1 < 0x100) {
    iVar6 = 2;
  }
  else {
    iVar6 = 6;
  }
  uVar2 = 0x750100030000;
  if (0xff < uVar1) {
    uVar2 = 0x850100110000;
  }
  FUN_1801060c0(param_2,uVar2,0xffffffff,0xffffffff,0,iVar3 - iVar6);
  uVar4 = (ulonglong)param_1[0x84];
  if (param_1[uVar4 * 8 + 0x3a] != 0) {
    uVar5 = 0;
    do {
      iVar3 = *(int *)(*(longlong *)(param_1 + uVar4 * 8 + 0x38) + uVar5 * 4);
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
      *(int *)(*param_2 + (ulonglong)(iVar3 - 4)) = ((int)param_2[1] - iVar3) - (int)*param_2;
      uVar4 = (ulonglong)param_1[0x84];
    } while (uVar1 < param_1[uVar4 * 8 + 0x3a]);
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + uVar4 * 8 + 0x38));
  (param_1 + uVar4 * 8 + 0x38)[0] = 0;
  (param_1 + uVar4 * 8 + 0x38)[1] = 0;
  (param_1 + uVar4 * 8 + 0x3a)[0] = 0;
  (param_1 + uVar4 * 8 + 0x3a)[1] = 0;
  if ((param_4 & 1) != 0) {
    FUN_1801060c0(param_2,0x28810200012010,*param_1 | 0x80000000,0xffffffff,0x44c0,1);
  }
  FUN_1801060c0(param_2,0x810200012013,4,0xffffffff,0,8);
  *(uint *)(*param_2 + (ulonglong)(param_1[(ulonglong)param_1[0x84] * 8 + 0x35] - 4)) =
       ((int)param_2[1] - param_1[(ulonglong)param_1[0x84] * 8 + 0x35]) - (int)*param_2;
  return;
}

