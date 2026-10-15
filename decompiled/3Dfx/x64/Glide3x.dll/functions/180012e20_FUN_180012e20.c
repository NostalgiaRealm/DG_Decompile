/*
 * FUN_180012e20 at 180012e20
 * undefined __fastcall FUN_180012e20(longlong * param_1, uint param_2)
 * Address ranges: 180012e20-180012e69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012e20(longlong *param_1,uint param_2)

{
  uint uVar1;
  
  (**(code **)(*param_1 + 0x2e0))();
  if (*(int *)(param_1[1] + 0xeb) == 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = -(uint)(*(int *)(param_1[1] + 0xeb) != 0) & param_2;
  }
  *(uint *)((longlong)param_1 + 0x2d04) = uVar1;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

