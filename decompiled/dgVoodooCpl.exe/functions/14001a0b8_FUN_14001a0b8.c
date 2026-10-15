/*
 * FUN_14001a0b8 at 14001a0b8
 * undefined __fastcall FUN_14001a0b8(undefined8 * param_1, longlong param_2, uint param_3, uint param_4)
 * Address ranges: 14001a0b8-14001a147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001a0b8(undefined8 *param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint local_res18 [4];
  char local_108 [256];
  
  local_res18[0] = param_3 & param_4;
  local_108[0] = '\0';
  uVar1 = 0;
  if (local_res18[0] != 0) {
    for (; (local_res18[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (local_res18[0] != 0) {
    pbVar2 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar1 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    while( true ) {
      FUN_140024cc4(local_108,*(char **)(param_2 + (ulonglong)(uVar1 & 0xff) * 8));
      uVar1 = 0;
      if (local_res18[0] != 0) {
        for (; (local_res18[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (local_res18[0] == 0) break;
      pbVar2 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar1 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
      FUN_140024cc4(local_108,", ");
    }
  }
  FUN_140019e4c(param_1,local_108);
  return;
}

