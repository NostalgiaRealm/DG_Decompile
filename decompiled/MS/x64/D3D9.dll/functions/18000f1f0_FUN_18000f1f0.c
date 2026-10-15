/*
 * FUN_18000f1f0 at 18000f1f0
 * ulonglong __fastcall FUN_18000f1f0(uint * param_1, longlong * param_2, uint param_3)
 * Address ranges: 18000f1f0-18000f4f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000f1f0(uint *param_1,longlong *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  char cVar13;
  undefined8 local_res8;
  undefined8 local_res10;
  
  plVar7 = param_2;
  uVar3 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar2 = (uint)uVar3;
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  }
  cVar13 = '\x01';
  sVar12 = -1;
  puVar6 = param_1;
  uVar4 = FUN_18000cef4((longlong)param_1,plVar7,-1,'\x01');
  local_res8 = uVar4;
  uVar5 = FUN_18000cef4((longlong)puVar6,plVar7,sVar12,cVar13);
  uVar11 = (uint)uVar4;
  local_res10 = uVar5;
  FUN_1800019cc(param_2,0x7e0201400500,uVar11,param_3,0,0);
  uVar8 = (uint)uVar5;
  FUN_1800019cc(param_2,0x890200000213,uVar8,param_1[2] | 0x80000000,0x10,0);
  FUN_1800019cc(param_2,0x28c10200030010,uVar11,-1,0,0x17);
  FUN_1800019cc(param_2,0x20810200012010,uVar11,-1,0,0xff);
  FUN_1800019cc(param_2,0x570200100700,uVar2,uVar2,0,0);
  FUN_1800019cc(param_2,0x28810200012010,uVar11,-1,0,0x7f);
  FUN_1800019cc(param_2,0x8d0200000000,uVar11,uVar11 & 0xff | 0x80000000,1,0);
  FUN_1800019cc(param_2,0x720100030000,0xffffffff,-1,0,0);
  iVar10 = (int)param_2[1] - (int)*param_2;
  FUN_1800019cc(param_2,0x2a0201300700,uVar2,uVar11,0,0);
  uVar9 = (uVar11 & 0xff | 0xffc00200) << 8 | uVar8 & 0xff;
  FUN_1800019cc(param_2,0x5e0201300700,param_3,uVar9,0,0);
  *(char *)((ulonglong)(iVar10 - 1) + *param_2) = ((char)param_2[1] - (char)*param_2) - (char)iVar10
  ;
  FUN_1800019cc(param_2,0x590201300700,param_3,param_1[1] | 0x80000000,0x1a0,0);
  FUN_1800019cc(param_2,0x890200000213,uVar8,param_1[2] | 0x80000000,0,0);
  FUN_1800019cc(param_2,0x2d0201300700,uVar11,param_3,0,0);
  FUN_1800019cc(param_2,0x580201300700,uVar2,uVar9,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar2,uVar2,0,0);
  FUN_18000cf80((longlong)param_1,param_2,(uint *)&local_res8);
  FUN_18000cf80((longlong)param_1,param_2,(uint *)&local_res10);
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar3 & 0xffffffff;
}

