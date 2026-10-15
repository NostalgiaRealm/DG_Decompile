/*
 * FUN_180056c30 at 180056c30
 * undefined __cdecl FUN_180056c30(longlong param_1, uint param_2)
 * Address ranges: 180056c30-180056c63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056c30(longlong param_1,uint param_2)

{
  if (param_2 != 0) {
    *(byte *)(*(longlong *)(param_1 + 0x30) + ((ulonglong)param_2 & 0xff)) =
         *(byte *)(*(longlong *)(param_1 + 0x30) + ((ulonglong)param_2 & 0xff)) &
         ((byte)((1 << (ulonglong)(param_2 >> 0x14 & 7)) + 0xff << (ulonglong)(param_2 >> 0x12 & 3))
         ^ 0xff);
  }
  return;
}

