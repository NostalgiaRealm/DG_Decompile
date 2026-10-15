/*
 * FUN_180063818 at 180063818
 * undefined __fastcall FUN_180063818(longlong * param_1, int param_2, int param_3, undefined4 * param_4)
 * Address ranges: 180063818-180063864
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063818(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  puVar2 = (undefined4 *)((longlong)param_1 + ((ulonglong)(uint)(param_2 * 4) + 0x46c) * 4);
  for (uVar1 = (ulonglong)(uint)((param_3 - param_2) * 4); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xf6b5) = 1;
  return;
}

