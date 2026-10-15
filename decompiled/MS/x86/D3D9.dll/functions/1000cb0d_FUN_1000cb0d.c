/*
 * FUN_1000cb0d at 1000cb0d
 * uint __fastcall FUN_1000cb0d(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000cb0d-1000cd4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000cb0d(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  iVar7 = (int)(uVar9 >> 0x20);
  uVar2 = (uint)uVar9;
  FUN_1000b9b4((int)param_1,uVar2);
  uVar10 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                        *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  iVar8 = (int)(uVar10 >> 0x20);
  uVar3 = (uint)uVar10;
  FUN_1000b9b4((int)param_1,uVar3);
  uVar4 = FUN_1000b55c(extraout_ECX,param_2,0xffff);
  FUN_1000b9b4((int)param_1,uVar4);
  uVar5 = FUN_1000b55c(extraout_ECX_00,param_2,0xffff);
  FUN_1000b9b4((int)param_1,uVar5);
  FUN_10001877(param_2,uVar4,0x100100,0x2902,uVar2,iVar7,0);
  FUN_10001877(param_2,uVar5,0x100100,0x2902,uVar3,iVar8,0);
  FUN_10001877(param_2,uVar4,0x130700,0xc602,uVar4,0,0xd8);
  FUN_10001877(param_2,uVar5,0x130700,0xc602,uVar5,0,0xe3);
  FUN_10001877(param_2,uVar4,0x100700,0x5902,uVar5,0,0);
  uVar6 = FUN_1000b55c(param_1,param_2,0xffff);
  FUN_10001877(param_2,uVar5,0x100100,0x2902,uVar2,iVar7,0);
  FUN_10001877(param_2,uVar6,0x100100,0x2902,uVar3,iVar8,0);
  FUN_10001877(param_2,uVar5,0x130700,0xc602,uVar5,0,0xe3);
  FUN_10001877(param_2,uVar6,0x130700,0xc602,uVar6,0,0xd8);
  FUN_10001877(param_2,uVar5,0x100700,0x5902,uVar6,0,0);
  FUN_10001877(param_2,uVar4,0x100700,0x5c02,uVar5,0,0);
  if (-1 < (int)uVar5) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
  }
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  if ((uVar10 & 0x80000000) == 0) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if ((uVar9 & 0x80000000) == 0) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar4;
}

