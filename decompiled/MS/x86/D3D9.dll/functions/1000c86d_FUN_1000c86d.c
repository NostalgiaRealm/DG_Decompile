/*
 * FUN_1000c86d at 1000c86d
 * uint __fastcall FUN_1000c86d(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000c86d-1000c96a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000c86d(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint extraout_EDX;
  ulonglong uVar5;
  
  uVar5 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\x01','\0');
  uVar2 = (uint)uVar5;
  FUN_1000b9b4((int)param_1,uVar2);
  uVar5 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 5),*(byte *)(param_3 + 9),
                       *(char *)(param_3 + 0xc),*(byte *)(param_3 + 0xf),'\0','\0');
  iVar4 = (int)(uVar5 >> 0x20);
  uVar3 = (uint)uVar5;
  FUN_1000b9b4((int)param_1,uVar3);
  FUN_10001877(param_2,uVar2,0x100700,0x5c02,extraout_EDX,iVar4,0);
  uVar5 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  FUN_10001877(param_2,uVar2,0x100700,0x5902,(uint)uVar5,(int)(uVar5 >> 0x20),0);
  FUN_10001877(param_2,uVar2,0x100700,0x5802,uVar3,iVar4,0);
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar2;
}

