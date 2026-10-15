/*
 * FUN_18000e8a0 at 18000e8a0
 * ulonglong __fastcall FUN_18000e8a0(uint * param_1, longlong * param_2, uint param_3)
 * Address ranges: 18000e8a0-18000ec57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000e8a0(uint *param_1,longlong *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  char cVar14;
  undefined8 local_res8;
  undefined8 local_res20;
  
  uVar4 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar2 = (uint)uVar4;
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  }
  plVar9 = param_2;
  uVar5 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar3 = (uint)uVar5;
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
  }
  cVar14 = '\x01';
  sVar13 = -1;
  puVar8 = param_1;
  uVar6 = FUN_18000cef4((longlong)param_1,plVar9,-1,'\x01');
  local_res8 = uVar6;
  uVar7 = FUN_18000cef4((longlong)puVar8,plVar9,sVar13,cVar14);
  local_res20 = uVar7;
  FUN_1800019cc(param_2,0x570200100700,uVar2,uVar2,0,0);
  uVar12 = (uint)uVar7;
  FUN_1800019cc(param_2,0x890200000213,uVar12,param_1[2] | 0x80000000,0x10,0);
  FUN_1800019cc(param_2,0xc20201330700,uVar2,param_3,0,6);
  FUN_1800019cc(param_2,0x540200100700,param_3,param_1[1] | 0x80000000,0x100,0);
  uVar10 = (uint)uVar6;
  FUN_1800019cc(param_2,0x2d0201300700,uVar10,param_3,0,0);
  FUN_1800019cc(param_2,0x2a0201300700,uVar3,uVar10,0,0);
  FUN_1800019cc(param_2,0xf8810200012010,uVar10,-1,0,0x400);
  FUN_1800019cc(param_2,0x5c0201300700,param_3,uVar3,0,0);
  FUN_1800019cc(param_2,0x470200100000,uVar10,param_1[1] | 0x80000000,0x1d0,0);
  FUN_1800019cc(param_2,0x590201300700,param_3,param_1[1] | 0x80000000,0x1a0,0);
  uVar11 = (uVar10 & 0xff | 0xffc00200) << 8 | uVar12 & 0xff;
  FUN_1800019cc(param_2,0x110201300100,uVar3,uVar11,0,0);
  FUN_1800019cc(param_2,0x2d0201300700,uVar10,param_3,0,0);
  FUN_1800019cc(param_2,0x890200000213,uVar12,param_1[2] | 0x80000000,8,0);
  FUN_1800019cc(param_2,0x590201300700,uVar3,uVar11,0,0);
  FUN_1800019cc(param_2,0x530201300700,param_3,uVar3,0,0);
  FUN_1800019cc(param_2,0x540200100700,param_3,uVar2,0,0);
  FUN_1800019cc(param_2,0x550200100700,uVar2,uVar3,0,0);
  FUN_1800019cc(param_2,0x560200100700,uVar2,param_3,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar2,uVar2,0,0);
  FUN_18000cf80((longlong)param_1,param_2,(uint *)&local_res8);
  FUN_18000cf80((longlong)param_1,param_2,(uint *)&local_res20);
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  return uVar4 & 0xffffffff;
}

