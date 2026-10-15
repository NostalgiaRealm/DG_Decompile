/*
 * FUN_18000d538 at 18000d538
 * undefined __fastcall FUN_18000d538(uint * param_1, longlong * param_2, longlong param_3, char param_4)
 * Address ranges: 18000d538-18000d60b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d538(uint *param_1,longlong *param_2,longlong param_3,char param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong local_res18 [2];
  ulonglong local_28 [2];
  
  local_28[0] = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                              *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  uVar2 = (uint)local_28[0];
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
  }
  local_res18[0] =
       FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                     *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  uVar3 = (uint)local_res18[0];
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
  }
  FUN_18000d3b4(param_1,param_2,(int *)local_28,(int *)local_res18,param_4);
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return;
}

