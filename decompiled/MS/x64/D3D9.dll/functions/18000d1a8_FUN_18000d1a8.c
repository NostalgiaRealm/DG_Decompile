/*
 * FUN_18000d1a8 at 18000d1a8
 * ulonglong __fastcall FUN_18000d1a8(uint * param_1, longlong * param_2, longlong param_3, ulonglong param_4)
 * Address ranges: 18000d1a8-18000d3b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000d1a8(uint *param_1,longlong *param_2,longlong param_3,ulonglong param_4)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  ushort uVar10;
  int iStackX_c;
  
  if (param_4 == 0x530200100700) {
    cVar8 = *(char *)(param_3 + 10);
  }
  else {
    cVar8 = '\x02';
  }
  uVar5 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),cVar8,
                        *(byte *)(param_3 + 0xd),'\0','\0');
  uVar3 = (uint)uVar5;
  if ((uVar5 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
  }
  if ((*(char *)(param_3 + 0x13) == -0x3d) &&
     ((*(char *)(param_3 + 0x10) == '\0' || (*(char *)(param_3 + 0x10) == '\x0f')))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar10 = 0xffff;
  if (bVar2) {
    uVar10 = *(ushort *)(param_3 + 0x11);
  }
  uVar6 = FUN_18000ca0c(param_1,param_2,uVar10);
  uVar4 = (uint)uVar6;
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
  }
  uVar7 = FUN_18000ca0c(param_1,param_2,0xffff);
  iStackX_c = (int)(uVar5 >> 0x20);
  FUN_1800019cc(param_2,param_4,uVar4,uVar3,iStackX_c,0);
  uVar9 = (uint)uVar7;
  FUN_1800019cc(param_2,0x290200100100,uVar9,uVar4,0,0);
  FUN_1800019cc(param_2,0x540200100700,uVar9,param_1[1] | 0x80000000,0x100,0);
  FUN_1800019cc(param_2,0xc20200130700,uVar9,param_1[1] | 0x80000000,0x150,4);
  FUN_1800019cc(param_2,0x540200100700,uVar4,uVar9,0,0);
  FUN_1800019cc(param_2,0x550200100700,uVar9,param_1[1] | 0x80000000,0x160,0);
  FUN_1800019cc(param_2,0x560200100700,uVar4,uVar9,0,0);
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  if ((uVar5 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  return uVar6 & 0xffffffff;
}

