/*
 * FUN_180015058 at 180015058
 * undefined __cdecl FUN_180015058(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, longlong * param_5)
 * Address ranges: 180015058-1800150bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180015058(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5)

{
  (**(code **)(*param_5 + 0x2e0))();
  *(undefined4 *)(param_5 + 0x59e) = param_1;
  *(undefined4 *)((longlong)param_5 + 0x2cf4) = param_2;
  *(undefined4 *)(param_5 + 0x59f) = param_3;
  *(undefined4 *)((longlong)param_5 + 0x2cfc) = param_4;
  *(undefined1 *)(param_5 + 0x65e) = 1;
  return;
}

