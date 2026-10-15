/*
 * FUN_18001f7f4 at 18001f7f4
 * undefined __fastcall FUN_18001f7f4(longlong * param_1, undefined4 * param_2)
 * Address ranges: 18001f7f4-18001f8b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f7f4(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,2);
  if (*(int *)(param_1[0x631] + 0x54) != 1) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
    *(undefined4 *)(param_1[0x631] + 0x54) = 1;
  }
  FUN_180036418((undefined8 *)param_1[0x631],1,1);
  FUN_18001ea88(param_1[0x631],param_2,1,0);
  **(int **)(param_1[0x631] + 0x48) = *(int *)(param_1[0x631] + 0x50) + -1;
  *(longlong *)(param_1[0x631] + 0x48) = *(longlong *)(param_1[0x631] + 0x48) + 4;
  if ((*(byte *)((longlong)param_1 + 0x2b4c) & 2) != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018001f8ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x630] + 0x90))();
  return;
}

