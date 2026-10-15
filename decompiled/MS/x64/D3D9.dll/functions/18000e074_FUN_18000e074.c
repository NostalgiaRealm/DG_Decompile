/*
 * FUN_18000e074 at 18000e074
 * ulonglong __fastcall FUN_18000e074(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18000e074-18000e26b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000e074(uint *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 local_res8;
  
  local_res8 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                             *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  uVar2 = (uint)local_res8;
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  }
  uVar5 = FUN_18000d3b4(param_1,param_2,(int *)&local_res8,(int *)&local_res8,'\0');
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
  uVar6 = FUN_18000ca0c(param_1,param_2,0xffff);
  FUN_1800019cc(param_2,0x570200100700,uVar4,uVar4,0,0);
  uVar7 = (uint)uVar6;
  FUN_1800019cc(param_2,0x290200100100,uVar7,uVar2,local_res8._4_4_,0);
  FUN_1800019cc(param_2,0xc20200130700,uVar4,uVar3,0,1);
  FUN_1800019cc(param_2,0x5e0200100700,uVar7,uVar3,0,0);
  FUN_1800019cc(param_2,0x290200100100,uVar3,uVar4,0,0);
  FUN_1800019cc(param_2,0x550200100700,uVar3,param_1[1] | 0x80000000,0x160,0);
  FUN_1800019cc(param_2,0x540200100700,uVar4,uVar7,0,0);
  FUN_1800019cc(param_2,0x560200100700,uVar3,uVar4,0,0);
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar5 & 0xffffffff;
}

