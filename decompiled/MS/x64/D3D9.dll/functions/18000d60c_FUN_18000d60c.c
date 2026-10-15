/*
 * FUN_18000d60c at 18000d60c
 * ulonglong __fastcall FUN_18000d60c(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18000d60c-18000d825
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000d60c(uint *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iStackX_c;
  int iStackX_1c;
  
  uVar4 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                        *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  uVar2 = (uint)uVar4;
  if ((uVar4 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  }
  uVar5 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                        *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  uVar9 = (uint)uVar5;
  if ((uVar5 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar9 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
  }
  uVar6 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar3 = (uint)uVar6;
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
  }
  uVar7 = FUN_18000ca0c(param_1,param_2,0xffff);
  iStackX_c = (int)(uVar4 >> 0x20);
  FUN_1800019cc(param_2,0x290200100100,uVar3,uVar2,iStackX_c,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar3,param_1[1] | 0x80000000,0x170,0x19);
  uVar8 = (uint)uVar7;
  FUN_1800019cc(param_2,0x290200100100,uVar8,uVar3,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar3,uVar3,0,0xe2);
  FUN_1800019cc(param_2,0xc60200130700,uVar8,uVar8,0,0x9b);
  iStackX_1c = (int)(uVar5 >> 0x20);
  FUN_1800019cc(param_2,0x590200100700,uVar3,uVar9,iStackX_1c,0);
  FUN_1800019cc(param_2,0x580200100700,uVar3,uVar8,0,0);
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if ((uVar5 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar9 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar9 & 7));
  }
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar6 & 0xffffffff;
}

