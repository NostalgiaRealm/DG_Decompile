/*
 * FUN_180016a38 at 180016a38
 * byte __fastcall FUN_180016a38(longlong param_1)
 * Address ranges: 180016a38-180016a7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180016a38(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 1;
  bVar2 = 1;
  if (*(char *)(param_1 + 0xf9) == '\0') {
    if ((*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0x90)) ||
       (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0x94))) {
      bVar2 = 0;
    }
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x50))();
    bVar1 = bVar2 & bVar1;
  }
  return bVar1;
}

