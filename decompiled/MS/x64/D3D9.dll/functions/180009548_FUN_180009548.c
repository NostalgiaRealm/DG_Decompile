/*
 * FUN_180009548 at 180009548
 * undefined __fastcall FUN_180009548(longlong param_1, uint param_2, char param_3)
 * Address ranges: 180009548-180009585
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180009548(longlong param_1,uint param_2,char param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint local_res18 [4];
  
  local_res18[0] = param_2;
  uVar2 = 0;
  bVar4 = param_2 == 0;
  if (!bVar4) {
    for (; (param_2 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  while (!bVar4) {
    pbVar1 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar2 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
    uVar3 = uVar2 & 0xff;
    uVar2 = 0;
    bVar4 = local_res18[0] == 0;
    if (!bVar4) {
      for (; (local_res18[0] >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    *(undefined1 *)(*(longlong *)(&DAT_000066c8 + (ulonglong)uVar3 * 8 + param_1) + 0x8a) = 0;
  }
  if (param_3 != '\0') {
    *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x72) = 0;
  }
  return;
}

