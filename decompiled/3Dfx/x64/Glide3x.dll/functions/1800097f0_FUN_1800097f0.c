/*
 * FUN_1800097f0 at 1800097f0
 * undefined __fastcall FUN_1800097f0(longlong param_1, undefined4 * param_2, ulonglong param_3, int param_4)
 * Address ranges: 1800097f0-18000983d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800097f0(longlong param_1,undefined4 *param_2,ulonglong param_3,int param_4)

{
  if (param_4 != 0) {
    do {
      FUN_180009770(param_1,param_2,0);
      *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) + 0x50;
      param_2 = (undefined4 *)((longlong)param_2 + (param_3 & 0xffffffff));
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

