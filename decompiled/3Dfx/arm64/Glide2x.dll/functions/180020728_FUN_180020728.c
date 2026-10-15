/*
 * FUN_180020728 at 180020728
 * undefined __cdecl FUN_180020728(longlong * param_1, undefined4 * param_2)
 * Address ranges: 180020728-1800207fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020728(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,2);
  if (*(int *)(param_1[0x631] + 0x54) != 1) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
    *(undefined4 *)(param_1[0x631] + 0x54) = 1;
  }
  FUN_180039768((undefined8 *)param_1[0x631],1,1);
  FUN_18001f7e0(param_1[0x631],param_2,1,0);
  **(int **)(param_1[0x631] + 0x48) = *(int *)(param_1[0x631] + 0x50) + -1;
  *(longlong *)(param_1[0x631] + 0x48) = *(longlong *)(param_1[0x631] + 0x48) + 4;
  if ((*(uint *)((longlong)param_1 + 0x2b4c) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
  (**(code **)(*(longlong *)param_1[0x630] + 0x90))();
  return;
}

