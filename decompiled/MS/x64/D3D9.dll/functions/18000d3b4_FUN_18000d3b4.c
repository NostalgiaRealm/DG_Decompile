/*
 * FUN_18000d3b4 at 18000d3b4
 * ulonglong __fastcall FUN_18000d3b4(uint * param_1, longlong * param_2, int * param_3, int * param_4, char param_5)
 * Address ranges: 18000d3b4-18000d536
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000d3b4(uint *param_1,longlong *param_2,int *param_3,int *param_4,char param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar2 = (uint)uVar4;
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  }
  uVar4 = FUN_18000ca0c(param_1,param_2,0xffff);
  uVar3 = (uint)uVar4;
  FUN_1800019cc(param_2,0x290200100100,uVar3,*param_3,param_3[1],0);
  FUN_1800019cc(param_2,0x590200100700,uVar3,*param_4,param_4[1],0);
  FUN_1800019cc(param_2,0x120200100700,uVar2,uVar3,0,0);
  FUN_1800019cc(param_2,(-(ulonglong)(param_5 != '\0') & 0xfffffffffee00000) + 0x580201300700,uVar3,
                uVar2,0,0);
  FUN_1800019cc(param_2,0x290200100100,uVar2,uVar3,0,0x55);
  FUN_1800019cc(param_2,0xc60200130700,uVar2,uVar3,0,0x55);
  FUN_1800019cc(param_2,0x580201300700,uVar3,uVar2,0,0);
  FUN_1800019cc(param_2,0xc60200130700,uVar3,uVar3,0,0);
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar4 & 0xffffffff;
}

