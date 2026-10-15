/*
 * FUN_18000e26c at 18000e26c
 * ulonglong __fastcall FUN_18000e26c(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18000e26c-18000e542
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000e26c(uint *param_1,longlong *param_2,longlong param_3)

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
  uint uVar10;
  int iStackX_24;
  int iStack_44;
  
  uVar4 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                        *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  uVar10 = (uint)uVar4;
  if (-1 < (int)uVar10) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar10 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar10 & 7);
  }
  uVar5 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                        *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  uVar8 = (uint)uVar5;
  if (-1 < (int)uVar8) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar8 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar8 & 7);
  }
  uVar6 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar2 = (uint)uVar6;
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  }
  uVar7 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar3 = (uint)uVar7;
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
  }
  iStackX_24 = (int)(uVar4 >> 0x20);
  FUN_1800019cc(param_2,0x290200100100,uVar2,uVar10,iStackX_24,0);
  iStack_44 = (int)(uVar5 >> 0x20);
  FUN_1800019cc(param_2,0x290200100100,uVar3,uVar8,iStack_44,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar2,uVar2,0,0xd8);
  FUN_1800019cc(param_2,0xc60200130700,uVar3,uVar3,0,0xe3);
  FUN_1800019cc(param_2,0x590200100700,uVar2,uVar3,0,0);
  uVar4 = FUN_18000ca0c(param_1,param_2,0xffff);
  FUN_1800019cc(param_2,0x290200100100,uVar3,uVar10,iStackX_24,0);
  uVar9 = (uint)uVar4;
  FUN_1800019cc(param_2,0x290200100100,uVar9,uVar8,iStack_44,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar3,uVar3,0,0xe3);
  FUN_1800019cc(param_2,0xc60200130700,uVar9,uVar9,0,0xd8);
  FUN_1800019cc(param_2,0x590200100700,uVar3,uVar9,0,0);
  FUN_1800019cc(param_2,0x5c0200100700,uVar2,uVar3,0,0);
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
  if (-1 < (int)uVar10) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar10 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar10 & 7));
  }
  return uVar6 & 0xffffffff;
}

