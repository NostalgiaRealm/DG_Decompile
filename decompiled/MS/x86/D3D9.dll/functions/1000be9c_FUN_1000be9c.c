/*
 * FUN_1000be9c at 1000be9c
 * uint __fastcall FUN_1000be9c(uint * param_1, int * param_2, int param_3, char param_4)
 * Address ranges: 1000be9c-1000bf38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000be9c(uint *param_1,int *param_2,int param_3,char param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  ulonglong local_14;
  ulonglong local_c;
  
  local_c = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                         *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  FUN_1000b9b4((int)param_1,(uint)local_c);
  local_14 = FUN_1000b651(extraout_ECX,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                          *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  uVar2 = (uint)local_14;
  FUN_1000b9b4((int)param_1,uVar2);
  uVar3 = FUN_1000bd63(extraout_ECX_00,param_2,(uint *)&local_c,(uint *)&local_14,param_4);
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  if (-1 < (int)(uint)local_c) {
    pbVar1 = (byte *)((int)param_1 + ((int)(uint)local_c >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << ((uint)local_c & 7));
  }
  return uVar3;
}

