/*
 * FUN_18000ec58 at 18000ec58
 * ulonglong __fastcall FUN_18000ec58(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18000ec58-18000f1ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000ec58(uint *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  char cVar15;
  undefined8 local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  uVar5 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                        *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\x01','\0');
  uVar2 = (uint)uVar5;
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  }
  uVar5 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar3 = (uint)uVar5;
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
  }
  uVar6 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar4 = (uint)uVar6;
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
  }
  plVar10 = param_2;
  uVar6 = FUN_18000ca0c(param_1,param_2,0xffff);
  cVar15 = '\x01';
  sVar14 = -1;
  puVar9 = param_1;
  uVar7 = FUN_18000cef4((longlong)param_1,plVar10,-1,'\x01');
  local_res8 = uVar7;
  uVar8 = FUN_18000cef4((longlong)puVar9,plVar10,sVar14,cVar15);
  local_res18 = uVar8;
  FUN_1800019cc(param_2,0x290200100100,uVar3,uVar2,0,0);
  uVar13 = (uint)uVar8;
  FUN_1800019cc(param_2,0x890200000213,uVar13,param_1[2] | 0x80000000,0x10,0);
  uVar11 = (uint)uVar7;
  FUN_1800019cc(param_2,0x2d0201300700,uVar11,uVar2,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar3,param_1[1] | 0x80000000,0x170,0);
  FUN_1800019cc(param_2,0x2a0201300700,uVar4,uVar11,0,0);
  FUN_1800019cc(param_2,0x5c0201300700,uVar3,uVar4,0,0);
  FUN_1800019cc(param_2,0x570200100700,uVar4,uVar4,0,0);
  FUN_1800019cc(param_2,0xc20201330700,uVar4,uVar2,0,6);
  FUN_1800019cc(param_2,0x540200100700,uVar2,param_1[1] | 0x80000000,0x100,0);
  FUN_1800019cc(param_2,0x2d0201300700,uVar11,uVar2,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar3,uVar3,0,0xe1);
  FUN_1800019cc(param_2,0xf8810200012010,uVar11,-1,0,0x400);
  FUN_1800019cc(param_2,0x2a0201300700,uVar3,uVar11,0,0);
  FUN_1800019cc(param_2,0x470200100000,uVar11,param_1[1] | 0x80000000,0x1d0,0);
  FUN_1800019cc(param_2,0x5c0201300700,uVar2,uVar3,0,0);
  uVar12 = (uVar11 & 0xff | 0xffc00200) << 8 | uVar13 & 0xff;
  FUN_1800019cc(local_res10,0x110201300100,(uint)uVar6,uVar12,0,0);
  plVar10 = local_res10;
  FUN_1800019cc(local_res10,0x110201300100,uVar3,(uint)uVar6,0,0);
  FUN_1800019cc(plVar10,0x590201300700,uVar2,param_1[1] | 0x80000000,0x1a0,0);
  FUN_1800019cc(plVar10,0xc60200130700,uVar3,uVar3,0,0xc4);
  FUN_1800019cc(plVar10,0x2d0201300700,uVar11,uVar2,0,0);
  FUN_1800019cc(plVar10,0x890200000213,uVar13,param_1[2] | 0x80000000,8,0);
  FUN_1800019cc(plVar10,0x590201300700,uVar3,uVar12,0,0);
  FUN_1800019cc(plVar10,0xc60200130700,uVar3,uVar3,0,0xc6);
  FUN_1800019cc(plVar10,0x530200100700,uVar2,uVar3,0,0);
  FUN_1800019cc(plVar10,0xc60200130700,uVar4,uVar4,0,0x44);
  FUN_1800019cc(plVar10,0x540200100700,uVar2,uVar4,0,0);
  FUN_1800019cc(plVar10,0x550200100700,uVar4,uVar3,0,0);
  FUN_1800019cc(plVar10,0x560200100700,uVar3,uVar4,0,0);
  FUN_18000cf80((longlong)param_1,plVar10,(uint *)&local_res8);
  FUN_18000cf80((longlong)param_1,plVar10,(uint *)&local_res18);
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar5 & 0xffffffff;
}

