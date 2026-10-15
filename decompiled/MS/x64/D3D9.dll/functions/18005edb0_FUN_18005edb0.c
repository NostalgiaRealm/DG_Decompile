/*
 * FUN_18005edb0 at 18005edb0
 * undefined __fastcall FUN_18005edb0(longlong * param_1, uint param_2)
 * Address ranges: 18005edb0-18005edf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005edb0(longlong *param_1,uint param_2)

{
  uint uVar1;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0xf6c3) = 1;
  uVar1 = param_2 & 0xff ^ 1;
  *(uint *)((longlong)param_1 + 0x646c) = uVar1;
  *(uint *)((longlong)param_1 + 0x69a4) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  return;
}

