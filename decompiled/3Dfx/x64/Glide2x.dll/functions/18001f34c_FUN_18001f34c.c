/*
 * FUN_18001f34c at 18001f34c
 * undefined __fastcall FUN_18001f34c(longlong * param_1, undefined4 * param_2)
 * Address ranges: 18001f34c-18001f40c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f34c(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,2);
  if (*(int *)(param_1[0x631] + 0x54) != 1) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
    *(undefined4 *)(param_1[0x631] + 0x54) = 1;
  }
  FUN_180035f70((undefined8 *)param_1[0x631],1,1);
  FUN_18001e5e0(param_1[0x631],param_2,1,0);
  **(int **)(param_1[0x631] + 0x48) = *(int *)(param_1[0x631] + 0x50) + -1;
  *(longlong *)(param_1[0x631] + 0x48) = *(longlong *)(param_1[0x631] + 0x48) + 4;
  if ((*(byte *)((longlong)param_1 + 0x2b4c) & 2) != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018001f406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x630] + 0x90))();
  return;
}

