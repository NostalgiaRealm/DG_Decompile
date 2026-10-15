/*
 * FUN_1000e3f6 at 1000e3f6
 * undefined __fastcall FUN_1000e3f6(uint * param_1, int * param_2, int param_3, char param_4)
 * Address ranges: 1000e3f6-1000e5bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000e3f6(uint *param_1,int *param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = *param_1 | 0x80000000;
  iVar1 = (uint)*(ushort *)(param_3 + 0x10) * 0x10;
  FUN_1000f71e(param_1,param_2,'\0');
  local_10 = FUN_1000b9c3(param_1,-1,'\x01');
  FUN_10001877(param_2,(uint)local_10,0x210,0x8902,local_8,iVar1,0);
  FUN_10001877(param_2,(uint)local_10,0x210,0xb02,(uint)local_10,0,0);
  FUN_10001877(param_2,0xffffffff,0x110000,0x8401,0xffffffff,0,0);
  param_1[param_1[0x79] * 6 + 0x31] = (uint)*(ushort *)(param_3 + 0x10);
  param_1[param_1[0x79] * 6 + 0x32] = param_2[1] - *param_2;
  FUN_10001877(param_2,(uint)local_10,0,0x30ff02,0xffffffff,0,0);
  if (param_4 != '\0') {
    local_18 = FUN_1000b9c3(param_1,-1,'\x01');
    uVar2 = (uint)local_18;
    FUN_10001877(param_2,(uint)local_10,0x210,0x8902,*param_1 | 0x80000000,0x44c0,0);
    FUN_10001877(param_2,uVar2,0x210,0x8902,local_8,iVar1 + 4,0);
    FUN_10001877(param_2,((uint)local_10 & 0xff | 0xffc00200) << 8 | *param_1,0x210,0x8902,uVar2,
                 0x44b0,0);
    FUN_10001877(param_2,*param_1 | 0x80000000,0x12010,0x8102,0xffffffff,0x44c0,1);
    FUN_1000ba3d((int)param_1,param_2,(uint *)&local_18);
  }
  param_1[param_1[0x79] * 6 + 0x33] = param_2[1] - *param_2;
  FUN_1000ba3d((int)param_1,param_2,(uint *)&local_10);
  param_1[0x79] = param_1[0x79] + 1;
  return;
}

