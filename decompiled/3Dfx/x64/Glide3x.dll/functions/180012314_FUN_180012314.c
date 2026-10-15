/*
 * FUN_180012314 at 180012314
 * undefined __fastcall FUN_180012314(longlong * param_1, int param_2)
 * Address ranges: 180012314-180012377
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012314(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(int *)(param_1 + 0x593) = param_2;
  if (*(int *)((longlong)param_1 + 0x2a14) != param_2) {
    *(int *)((longlong)param_1 + 0x2a14) = param_2;
    FUN_18000a4c8((longlong)param_1,(int)param_1[0x57a],*(int *)((longlong)param_1 + 0x2bd4),
                  (int)param_1[0x57b],*(int *)((longlong)param_1 + 0x2bdc));
  }
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

