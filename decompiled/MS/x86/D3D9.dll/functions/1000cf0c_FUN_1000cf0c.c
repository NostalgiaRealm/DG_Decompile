/*
 * FUN_1000cf0c at 1000cf0c
 * uint __fastcall FUN_1000cf0c(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000cf0c-1000cfa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000cf0c(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  uVar2 = (uint)uVar3;
  FUN_1000b9b4((int)param_1,uVar2);
  uVar4 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\x01','\0');
  FUN_10001877(param_2,(uint)uVar4,0x130700,0xc202,uVar2,(int)(uVar3 >> 0x20),
               (uint)(byte)(&DAT_100d4bff)[*(byte *)(param_3 + 9)]);
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return (uint)uVar4;
}

