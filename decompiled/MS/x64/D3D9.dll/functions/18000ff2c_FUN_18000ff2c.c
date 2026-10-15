/*
 * FUN_18000ff2c at 18000ff2c
 * undefined __fastcall FUN_18000ff2c(uint * param_1, longlong * param_2, longlong param_3, char param_4)
 * Address ranges: 18000ff2c-180010178
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ff2c(uint *param_1,longlong *param_2,longlong param_3,char param_4)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  
  uVar1 = *param_1;
  iVar5 = (uint)*(ushort *)(param_3 + 0x10) * 0x10;
  plVar2 = param_2;
  FUN_180011adc(param_1,param_2,'\0');
  local_res10 = FUN_18000cef4((longlong)param_1,plVar2,-1,'\x01');
  uVar4 = (uint)local_res10;
  FUN_1800019cc(param_2,0x890200000210,uVar4,uVar1 | 0x80000000,iVar5,0);
  FUN_1800019cc(param_2,0xb0200000210,uVar4,uVar4,0,0);
  FUN_1800019cc(param_2,0x840100110000,0xffffffff,-1,0,0);
  uVar3 = 0x30ff0200000000;
  param_1[(ulonglong)param_1[0x84] * 8 + 0x34] = (uint)*(ushort *)(param_3 + 0x10);
  param_1[(ulonglong)param_1[0x84] * 8 + 0x35] = (int)param_2[1] - (int)*param_2;
  FUN_1800019cc(param_2,0x30ff0200000000,uVar4,-1,0,0);
  if (param_4 != '\0') {
    uVar3 = FUN_18000cef4((longlong)param_1,uVar3,-1,'\x01');
    local_res8 = uVar3;
    FUN_1800019cc(param_2,0x890200000210,uVar4,*param_1 | 0x80000000,0x44c0,0);
    FUN_1800019cc(param_2,0x890200000210,(uint)uVar3,uVar1 | 0x80000000,iVar5 + 4,0);
    FUN_1800019cc(param_2,0x890200000210,(uVar4 & 0xff | 0xffc00200) << 8 | *param_1,(uint)uVar3,
                  0x44b0,0);
    FUN_1800019cc(param_2,0x810200012010,*param_1 | 0x80000000,-1,0x44c0,1);
    FUN_18000cf80((longlong)param_1,param_2,(uint *)&local_res8);
  }
  param_1[(ulonglong)param_1[0x84] * 8 + 0x36] = (int)param_2[1] - (int)*param_2;
  FUN_18000cf80((longlong)param_1,param_2,(uint *)&local_res10);
  param_1[0x84] = param_1[0x84] + 1;
  return;
}

