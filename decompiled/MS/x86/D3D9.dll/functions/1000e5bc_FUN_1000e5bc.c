/*
 * FUN_1000e5bc at 1000e5bc
 * undefined __fastcall FUN_1000e5bc(uint * param_1, int * param_2, undefined4 param_3, char param_4)
 * Address ranges: 1000e5bc-1000e7d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000e5bc(uint *param_1,int *param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  void *this;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_18;
  undefined8 local_10;
  int *local_8;
  
  local_8 = param_2;
  FUN_1000f71e(param_1,param_2,'\0');
  param_1[0x79] = param_1[0x79] - 1;
  if (param_4 != '\0') {
    local_18 = FUN_1000b9c3(param_1,-1,'\x01');
    uVar3 = (uint)local_18;
    local_10 = FUN_1000b9c3(this,-1,'\x01');
    uVar4 = (uint)local_10;
    FUN_10001877(local_8,uVar3,0x210,0x8902,*param_1 | 0x80000000,
                 param_1[param_1[0x79] * 6 + 0x31] << 4 | 8,0);
    FUN_10001877(local_8,uVar4,0x210,0x8902,*param_1 | 0x80000000,0x44c0,0);
    param_2 = local_8;
    FUN_10001877(local_8,(uVar4 & 0xff | 0xffc00200) << 8 | *param_1,0x210,0x102,uVar3,0x44ac,0);
    FUN_1000ba3d((int)param_1,param_2,(uint *)&local_10);
    FUN_1000ba3d((int)param_1,param_2,(uint *)&local_18);
  }
  FUN_10001877(param_2,0x80000004,0x12010,0x288102,0xffffffff,0,1);
  iVar2 = (param_1[param_1[0x79] * 6 + 0x33] - param_2[1]) + *param_2;
  if (iVar2 + 0x7eU < 0x100) {
    uVar3 = 0x30000;
    uVar4 = 0x7501;
    iVar1 = 0;
  }
  else {
    uVar3 = 0x110000;
    uVar4 = 0x8501;
    iVar1 = 4;
  }
  FUN_10001877(param_2,0xffffffff,uVar3,uVar4,0xffffffff,0,(iVar2 - iVar1) + -2);
  uVar3 = param_1[0x79];
  uVar4 = 0;
  if (param_1[uVar3 * 6 + 0x35] != 0) {
    do {
      iVar2 = *(int *)(param_1[uVar3 * 6 + 0x34] + uVar4 * 4);
      uVar4 = uVar4 + 1;
      *(int *)(*param_2 + -4 + iVar2) = (param_2[1] - iVar2) - *param_2;
      uVar3 = param_1[0x79];
    } while (uVar4 < param_1[uVar3 * 6 + 0x35]);
  }
  FUN_1000fc01(param_1 + uVar3 * 6 + 0x34);
  if (param_4 != '\0') {
    FUN_10001877(param_2,*param_1 | 0x80000000,0x12010,0x288102,0xffffffff,0x44c0,1);
  }
  FUN_10001877(param_2,4,0x12010,0x8102,0xffffffff,0,4);
  *(uint *)((param_1[param_1[0x79] * 6 + 0x32] - 4) + *param_2) =
       (param_2[1] - param_1[param_1[0x79] * 6 + 0x32]) - *param_2;
  return;
}

