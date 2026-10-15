/*
 * FUN_18000dd68 at 18000dd68
 * ulonglong __fastcall FUN_18000dd68(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18000dd68-18000e073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000dd68(uint *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iStackX_c;
  
  uVar5 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                        *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\x01','\0');
  uVar4 = (uint)uVar5;
  FUN_1800019cc(param_2,0x540200100700,uVar4,param_1[1] | 0x80000000,0x70,0);
  if ((uVar5 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
  }
  uVar6 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar2 = (uint)uVar6;
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
  uVar6 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                        *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  FUN_1800019cc(param_2,0x290200100100,uVar2,(int)uVar6,(int)(uVar6 >> 0x20),0);
  iStackX_c = (int)(uVar5 >> 0x20);
  FUN_1800019cc(param_2,0x590200100700,uVar2,uVar4,iStackX_c,0);
  uVar5 = FUN_18000cafc(param_1,param_2,*(short *)(param_3 + 3) + 1,*(byte *)(param_3 + 8),
                        *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  FUN_1800019cc(param_2,0x290200100100,uVar3,(int)uVar5,(int)(uVar5 >> 0x20),0);
  FUN_1800019cc(param_2,0x590200100700,uVar3,uVar4,iStackX_c,0);
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  uVar5 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar4 = (uint)uVar5;
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
  }
  FUN_1800019cc(param_2,0x290200100100,uVar4,uVar2,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar4,uVar3,0,0x44);
  FUN_1800019cc(param_2,0xc60200130700,uVar2,uVar3,0,0xee);
  FUN_1800019cc(param_2,0x580200100700,uVar4,uVar2,0,0);
  FUN_1800019cc(param_2,0x290200100100,uVar2,uVar4,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar4,uVar4,0,0x31);
  FUN_1800019cc(param_2,0x580200100700,uVar4,uVar2,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar4,uVar4,0,8);
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  return uVar5 & 0xffffffff;
}

