/*
 * FUN_18000e544 at 18000e544
 * ulonglong __fastcall FUN_18000e544(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18000e544-18000e74b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000e544(uint *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iStackX_c;
  
  uVar4 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                        *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  uVar7 = (uint)uVar4;
  if (-1 < (int)uVar7) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar7 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar7 & 7);
  }
  uVar5 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                        *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  uVar8 = (uint)uVar5;
  if (-1 < (int)uVar8) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar8 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar8 & 7);
  }
  uVar5 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar2 = (uint)uVar5;
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  }
  uVar6 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar3 = (uint)uVar6;
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
  }
  FUN_1800019cc(param_2,0x570200100700,uVar2,uVar2,0,0);
  FUN_1800019cc(param_2,0x570200100700,uVar3,uVar3,0,0);
  iStackX_c = (int)(uVar4 >> 0x20);
  FUN_1800019cc(param_2,0xc20200130700,uVar2,uVar7,iStackX_c,6);
  FUN_1800019cc(param_2,0xc20200130700,uVar3,uVar7,iStackX_c,1);
  FUN_1800019cc(param_2,0x540200100700,uVar2,param_1[1] | 0x80000000,0x130,0);
  FUN_1800019cc(param_2,0x540200100700,uVar3,param_1[1] | 0x80000000,0x120,0);
  FUN_1800019cc(param_2,0x560200100700,uVar2,uVar3,0,0);
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  if (-1 < (int)uVar8) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar8 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar8 & 7));
  }
  if (-1 < (int)uVar7) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar7 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar7 & 7));
  }
  return uVar5 & 0xffffffff;
}

