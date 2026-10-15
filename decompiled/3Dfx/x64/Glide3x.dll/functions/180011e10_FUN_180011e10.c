/*
 * FUN_180011e10 at 180011e10
 * undefined __fastcall FUN_180011e10(longlong * param_1)
 * Address ranges: 180011e10-180011e6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180011e10(longlong *param_1)

{
  FUN_180014218((longlong *)param_1[0x660]);
  *(undefined1 *)((longlong)param_1 + 0x2c7d) = 1;
  (**(code **)(*param_1 + 0x260))
            (param_1,(int)param_1[0x57a],*(undefined4 *)((longlong)param_1 + 0x2bd4),
             (int)param_1[0x57b],*(undefined4 *)((longlong)param_1 + 0x2bdc));
  FUN_180012e6c(param_1,(int *)((longlong)param_1 + 0x2a1c));
  return;
}

