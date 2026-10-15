/*
 * FUN_18000d828 at 18000d828
 * ulonglong __fastcall FUN_18000d828(uint * param_1, longlong * param_2, longlong param_3, char param_4, char param_5)
 * Address ranges: 18000d828-18000dd65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000d828(uint *param_1,longlong *param_2,longlong param_3,char param_4,char param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iStackX_1c;
  
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
  uVar7 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                        *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),param_5,'\0');
  uVar9 = (uint)uVar7;
  if (param_5 != '\0') {
    FUN_1800019cc(param_2,0x540200100700,uVar9,param_1[1] | 0x80000000,0x70,0);
  }
  if (-1 < (int)uVar9) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar9 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
  }
  uVar8 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                        *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  FUN_1800019cc(param_2,0x290200100100,uVar2,(int)uVar8,(int)(uVar8 >> 0x20),0);
  iStackX_1c = (int)(uVar7 >> 0x20);
  FUN_1800019cc(param_2,0x590200100700,uVar2,uVar9,iStackX_1c,0);
  uVar7 = FUN_18000cafc(param_1,param_2,*(short *)(param_3 + 3) + 1,*(byte *)(param_3 + 8),
                        *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  FUN_1800019cc(param_2,0x290200100100,uVar3,(int)uVar7,(int)(uVar7 >> 0x20),0);
  FUN_1800019cc(param_2,0x590200100700,uVar3,uVar9,iStackX_1c,0);
  uVar7 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar4 = (uint)uVar7;
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
  }
  FUN_1800019cc(param_2,0x290200100100,uVar4,uVar2,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar4,uVar3,0,0x44);
  uVar7 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar5 = (uint)uVar7;
  if (-1 < (int)uVar5) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
  }
  uVar7 = FUN_18000cafc(param_1,param_2,*(short *)(param_3 + 3) + 2,*(byte *)(param_3 + 8),
                        *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  FUN_1800019cc(param_2,0x290200100100,uVar5,(int)uVar7,(int)(uVar7 >> 0x20),0);
  FUN_1800019cc(param_2,0x590200100700,uVar5,uVar9,iStackX_1c,0);
  if ((param_4 == '\0') && (-1 < (int)uVar9)) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar9 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar9 & 7));
  }
  FUN_1800019cc(param_2,0xc60200130700,uVar2,uVar3,0,0xee);
  if (param_4 == '\0') {
    FUN_1800019cc(param_2,0x570200100700,uVar3,uVar3,0,0);
  }
  else {
    uVar7 = FUN_18000cafc(param_1,param_2,*(short *)(param_3 + 3) + 3,*(byte *)(param_3 + 8),
                          *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
    FUN_1800019cc(param_2,0x290200100100,uVar3,(int)uVar7,(int)(uVar7 >> 0x20),0);
    FUN_1800019cc(param_2,0x590200100700,uVar3,uVar9,iStackX_1c,0);
    if (-1 < (int)uVar9) {
      pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar9 >> 3) + 0x14);
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar9 & 7));
    }
  }
  FUN_1800019cc(param_2,0x580200100700,uVar2,uVar4,0,0);
  FUN_1800019cc(param_2,0x290200100100,uVar4,uVar5,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar4,uVar3,0,0x44);
  FUN_1800019cc(param_2,0xc60200130700,uVar5,uVar3,0,0xee);
  FUN_1800019cc(param_2,0x580200100700,uVar4,uVar5,0,0);
  FUN_1800019cc(param_2,0x290200100100,uVar5,uVar2,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar5,uVar4,0,0x88);
  FUN_1800019cc(param_2,0xc60200130700,uVar2,uVar4,0,0xdd);
  FUN_1800019cc(param_2,0x580200100700,uVar2,uVar5,0,0);
  if (-1 < (int)uVar5) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
  }
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
  return uVar6 & 0xffffffff;
}

