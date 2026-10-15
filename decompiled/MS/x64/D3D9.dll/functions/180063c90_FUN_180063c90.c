/*
 * FUN_180063c90 at 180063c90
 * undefined __fastcall FUN_180063c90(longlong * param_1, uint param_2, uint param_3, longlong param_4)
 * Address ranges: 180063c90-180063d16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063c90(longlong *param_1,uint param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  for (uVar3 = param_2; uVar3 < param_3; uVar3 = uVar3 + 1) {
    uVar1 = uVar3 * 4;
    uVar2 = (uVar3 - param_2) * 4;
    *(undefined4 *)((longlong)param_1 + (ulonglong)uVar1 * 4 + 0x6360) =
         *(undefined4 *)(param_4 + (ulonglong)uVar2 * 4);
    *(undefined4 *)((longlong)param_1 + (ulonglong)(uVar1 + 1) * 4 + 0x6360) =
         *(undefined4 *)(param_4 + (ulonglong)(uVar2 + 1) * 4);
    *(undefined4 *)((longlong)param_1 + (ulonglong)(uVar1 + 2) * 4 + 0x6360) =
         *(undefined4 *)(param_4 + (ulonglong)(uVar2 + 2) * 4);
  }
  *(undefined1 *)((longlong)param_1 + 0xf6b7) = 1;
  return;
}

