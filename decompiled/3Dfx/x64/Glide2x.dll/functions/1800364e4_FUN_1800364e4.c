/*
 * FUN_1800364e4 at 1800364e4
 * undefined __fastcall FUN_1800364e4(longlong * param_1, uint param_2)
 * Address ranges: 1800364e4-18003652d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800364e4(longlong *param_1,uint param_2)

{
  uint uVar1;
  
  (**(code **)(*param_1 + 0x2a0))();
  if (*(int *)(param_1[1] + 0xeb) == 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = -(uint)(*(int *)(param_1[1] + 0xeb) != 0) & param_2;
  }
  *(uint *)((longlong)param_1 + 0x2c64) = uVar1;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

