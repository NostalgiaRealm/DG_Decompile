/*
 * FUN_180063bfc at 180063bfc
 * undefined __fastcall FUN_180063bfc(longlong * param_1, int param_2, int param_3, undefined4 * param_4)
 * Address ranges: 180063bfc-180063c48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063bfc(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  puVar2 = (undefined4 *)((longlong)param_1 + ((ulonglong)(uint)(param_2 * 4) + 0x41c) * 4);
  for (uVar1 = (ulonglong)(uint)((param_3 - param_2) * 4); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xf6b5) = 1;
  return;
}

