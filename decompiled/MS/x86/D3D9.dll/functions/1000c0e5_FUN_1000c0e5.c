/*
 * FUN_1000c0e5 at 1000c0e5
 * uint __fastcall FUN_1000c0e5(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000c0e5-1000c1bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000c0e5(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *extraout_ECX;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  iVar4 = (int)(uVar5 >> 0x20);
  uVar2 = (uint)uVar5;
  FUN_1000b9b4((int)param_1,uVar2);
  uVar3 = FUN_1000b55c(extraout_ECX,param_2,0xffff);
  FUN_10001877(param_2,uVar3,0x1400700,0x5b02,uVar2,iVar4,0);
  FUN_10001877(param_2,uVar3,0x100700,0x5b02,uVar3,0,0);
  FUN_10001877(param_2,uVar3,0x100700,0x5c02,uVar2,iVar4,0);
  FUN_10001877(param_2,uVar3,0x100700,0x5702,param_1[1] | 0x80000000,0x110,0);
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar3;
}

