/*
 * FUN_1000dd79 at 1000dd79
 * uint __fastcall FUN_1000dd79(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000dd79-1000de2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000dd79(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  ulonglong uVar4;
  
  uVar4 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),'\x02',
                       *(byte *)(param_3 + 0xd),'\x01','\0');
  uVar3 = (uint)uVar4;
  FUN_1000b9b4((int)param_1,uVar3);
  uVar2 = FUN_1000d841(extraout_ECX,param_2,uVar3);
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  FUN_1000b9b4((int)param_1,uVar2);
  uVar4 = FUN_1000b651(extraout_ECX_00,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  FUN_10001877(param_2,uVar2,0x100700,0x5902,(uint)uVar4,0,0);
  uVar3 = FUN_1000d0c0(param_1,param_2,uVar2);
  FUN_1000b9b4((int)param_1,uVar2);
  return uVar3;
}

