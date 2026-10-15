/*
 * FUN_18000f4f8 at 18000f4f8
 * ulonglong __fastcall FUN_18000f4f8(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18000f4f8-18000f84f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000f4f8(uint *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  uVar3 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),'\x02',
                        *(byte *)(param_3 + 0xd),'\x01','\0');
  uVar8 = (uint)uVar3;
  if ((uVar3 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar8 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar8 & 7);
  }
  plVar7 = param_2;
  uVar4 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar2 = (uint)uVar4;
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  }
  uVar5 = FUN_18000cef4((longlong)param_1,plVar7,-1,'\x01');
  local_res18[0] = uVar5;
  FUN_1800019cc(param_2,0x570200100700,uVar2,uVar2,0,0);
  uVar9 = (uint)uVar5;
  FUN_1800019cc(param_2,0x7e0201400500,uVar9,uVar8,0,0);
  FUN_1800019cc(param_2,0xc20200130700,uVar2,uVar8,0,1);
  plVar7 = param_2;
  uVar6 = FUN_18000f1f0(param_1,param_2,uVar8);
  if ((uVar3 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar8 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar8 & 7));
  }
  uVar5 = FUN_18000cef4((longlong)param_1,plVar7,-1,'\x01');
  uVar10 = (uint)uVar6;
  local_res8 = uVar5;
  FUN_1800019cc(param_2,0xc60200130700,uVar10,param_1[1] | 0x80000000,0x170,0x10);
  uVar8 = (uint)uVar5;
  FUN_1800019cc(param_2,0x890200000210,uVar8,uVar9,0,0);
  FUN_1800019cc(param_2,0x28c10200030010,uVar9,-1,0,0x17);
  FUN_1800019cc(param_2,0x20810200012010,uVar8,-1,0,0x7fffff);
  FUN_1800019cc(param_2,0x28810200012010,uVar9,-1,0,0x7f);
  FUN_1800019cc(param_2,0x8810200012010,uVar8,-1,0,0x3f800000);
  FUN_1800019cc(param_2,0xc60200130700,uVar10,uVar10,0,0xda);
  FUN_1800019cc(param_2,0x6e0201400700,uVar10,uVar8,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar10,uVar10,0,0xe1);
  FUN_1800019cc(param_2,0x2a0201300700,uVar10,uVar9,0,0);
  FUN_1800019cc(param_2,0x540200100700,uVar10,uVar2,0,0);
  FUN_1800019cc(param_2,0x550200100700,uVar2,param_1[1] | 0x80000000,0x140,0);
  FUN_1800019cc(param_2,0x560200100700,uVar2,uVar10,0,0);
  FUN_18000cf80((longlong)param_1,param_2,(uint *)&local_res8);
  FUN_18000cf80((longlong)param_1,param_2,(uint *)local_res18);
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar4 & 0xffffffff;
}

