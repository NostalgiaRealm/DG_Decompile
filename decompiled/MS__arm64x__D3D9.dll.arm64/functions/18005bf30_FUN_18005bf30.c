/*
 * FUN_18005bf30 at 18005bf30
 * undefined FUN_18005bf30(void)
 * Address ranges: 18005bf30-18005bfcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005bf30(longlong *param_1,uint param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  for (uVar1 = param_2; uVar1 < param_3; uVar1 = uVar1 + 1) {
    uVar2 = (uVar1 - param_2) * 4;
    uVar3 = uVar1 * 4;
    *(undefined4 *)((longlong)param_1 + (ulonglong)uVar3 * 4 + 0x6360) =
         *(undefined4 *)(param_4 + (ulonglong)uVar2 * 4);
    *(undefined4 *)((longlong)param_1 + (ulonglong)(uVar3 + 1) * 4 + 0x6360) =
         *(undefined4 *)(param_4 + (ulonglong)(uVar2 + 1) * 4);
    *(undefined4 *)((longlong)param_1 + (ulonglong)(uVar3 + 2) * 4 + 0x6360) =
         *(undefined4 *)(param_4 + (ulonglong)(uVar2 + 2) * 4);
  }
  *(undefined1 *)((longlong)param_1 + 0xf6b7) = 1;
  return;
}

