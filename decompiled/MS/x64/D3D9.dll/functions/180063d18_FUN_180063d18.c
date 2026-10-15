/*
 * FUN_180063d18 at 180063d18
 * undefined __fastcall FUN_180063d18(longlong * param_1, uint param_2, int param_3, undefined4 * param_4)
 * Address ranges: 180063d18-180063d5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063d18(longlong *param_1,uint param_2,int param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  puVar2 = (undefined4 *)((longlong)param_1 + ((ulonglong)param_2 + 0x18c8) * 4);
  for (uVar1 = (ulonglong)(param_3 - param_2); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xf6b6) = 1;
  return;
}

