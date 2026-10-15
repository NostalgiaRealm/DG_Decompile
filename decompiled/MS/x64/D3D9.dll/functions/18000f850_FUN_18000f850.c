/*
 * FUN_18000f850 at 18000f850
 * ulonglong __fastcall FUN_18000f850(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18000f850-18000fc46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000f850(uint *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined8 local_res8 [4];
  
  uVar6 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                        *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\x01','\0');
  uVar2 = (uint)uVar6;
  if ((uVar6 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  }
  uVar6 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar3 = (uint)uVar6;
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
  }
  uVar7 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar4 = (uint)uVar7;
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
  }
  plVar9 = param_2;
  FUN_180011adc(param_1,param_2,'\0');
  uVar8 = FUN_18000cef4((longlong)param_1,plVar9,-1,'\x01');
  local_res8[0] = uVar8;
  FUN_1800019cc(param_2,0x570200100700,uVar4,uVar4,0,0);
  FUN_1800019cc(param_2,0x290200100100,uVar3,param_1[1] | 0x80000000,0x170,0);
  FUN_1800019cc(param_2,0xc20201330700,uVar4,uVar2,0,1);
  uVar5 = (uint)uVar8;
  FUN_1800019cc(param_2,0x500200100700,uVar5,uVar4,0,0);
  FUN_1800019cc(param_2,0x290200100100,uVar4,uVar2,0,0);
  FUN_1800019cc(param_2,0xf70200010010,uVar5,-1,0,1);
  FUN_1800019cc(param_2,0xc60200130700,uVar4,uVar4,0,0xff);
  FUN_1800019cc(param_2,0x840100110000,0xffffffff,-1,0,0);
  iVar11 = (int)param_2[1] - (int)*param_2;
  FUN_1800019cc(param_2,0x110201300100,uVar3,uVar2,0,0);
  FUN_1800019cc(param_2,0xf70200010010,uVar5,-1,0,2);
  FUN_1800019cc(param_2,0xc60200130700,uVar3,uVar3,0,0xe3);
  FUN_1800019cc(param_2,0x840100110000,0xffffffff,-1,0,0);
  iVar10 = (int)param_2[1] - (int)*param_2;
  FUN_1800019cc(param_2,0x5f0200100700,uVar4,param_1[1] | 0x80000000,400,0);
  FUN_1800019cc(param_2,0x5d0200100700,uVar4,param_1[1] | 0x80000000,0x180,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar2,uVar2,0,0x55);
  FUN_18000cf80((longlong)param_1,param_2,(uint *)local_res8);
  uVar7 = FUN_18000f1f0(param_1,param_2,uVar2);
  uVar5 = (uint)uVar7;
  if (-1 < (int)uVar5) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
  }
  FUN_1800019cc(param_2,0x590200100700,uVar5,uVar4,0,0);
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  uVar7 = FUN_18000e8a0(param_1,param_2,uVar5);
  if (-1 < (int)uVar5) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
  }
  FUN_1800019cc(param_2,0x110201300100,uVar3,(int)uVar7,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar3,uVar3,0,199);
  *(int *)((ulonglong)(iVar11 - 4) + *param_2) = ((int)param_2[1] - (int)*param_2) - iVar11;
  *(int *)((ulonglong)(iVar10 - 4) + *param_2) = ((int)param_2[1] - (int)*param_2) - iVar10;
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar6 & 0xffffffff;
}

