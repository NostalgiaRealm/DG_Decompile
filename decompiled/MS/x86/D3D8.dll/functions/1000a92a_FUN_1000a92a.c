/*
 * FUN_1000a92a at 1000a92a
 * uint __fastcall FUN_1000a92a(uint * param_1, int * param_2, int param_3, char param_4)
 * Address ranges: 1000a92a-1000a9c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000a92a(uint *param_1,int *param_2,int param_3,char param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  ulonglong local_14;
  ulonglong local_c;
  
  local_14 = FUN_1000a138(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                          *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0');
  FUN_1000a457((int)param_1,(uint)local_14);
  local_c = FUN_1000a138(extraout_ECX,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                         *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0');
  FUN_1000a457((int)param_1,(uint)local_c);
  uVar2 = FUN_1000a7f1(extraout_ECX_00,param_2,(uint *)&local_14,(uint *)&local_c,param_4);
  if (-1 < (int)(uint)local_c) {
    pbVar1 = (byte *)((int)param_1 + ((int)(uint)local_c >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << ((uint)local_c & 7));
  }
  if (-1 < (int)(uint)local_14) {
    pbVar1 = (byte *)((int)param_1 + ((int)(uint)local_14 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << ((uint)local_14 & 7));
  }
  return uVar2;
}

