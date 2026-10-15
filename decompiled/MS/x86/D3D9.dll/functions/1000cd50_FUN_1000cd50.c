/*
 * FUN_1000cd50 at 1000cd50
 * uint __fastcall FUN_1000cd50(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000cd50-1000cf0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000cd50(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  iVar6 = (int)(uVar7 >> 0x20);
  uVar2 = (uint)uVar7;
  FUN_1000b9b4((int)param_1,uVar2);
  uVar8 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  uVar3 = (uint)uVar8;
  FUN_1000b9b4((int)param_1,uVar3);
  uVar4 = FUN_1000b55c(extraout_ECX,param_2,0xffff);
  FUN_1000b9b4((int)param_1,uVar4);
  uVar5 = FUN_1000b55c(extraout_ECX_00,param_2,0xffff);
  FUN_1000b9b4((int)param_1,uVar5);
  FUN_10001877(param_2,uVar4,0x100700,0x5702,uVar4,0,0);
  FUN_10001877(param_2,uVar5,0x100700,0x5702,uVar5,0,0);
  FUN_10001877(param_2,uVar4,0x130700,0xc202,uVar2,iVar6,6);
  FUN_10001877(param_2,uVar5,0x130700,0xc202,uVar2,iVar6,1);
  FUN_10001877(param_2,uVar4,0x100700,0x5402,param_1[1] | 0x80000000,0x130,0);
  FUN_10001877(param_2,uVar5,0x100700,0x5402,param_1[1] | 0x80000000,0x120,0);
  FUN_10001877(param_2,uVar4,0x100700,0x5602,uVar5,0,0);
  if (-1 < (int)uVar5) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
  }
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  if ((uVar8 & 0x80000000) == 0) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if ((uVar7 & 0x80000000) == 0) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar4;
}

