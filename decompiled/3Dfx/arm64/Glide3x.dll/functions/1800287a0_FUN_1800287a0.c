/*
 * FUN_1800287a0 at 1800287a0
 * undefined __cdecl FUN_1800287a0(longlong * param_1, undefined4 param_2, longlong param_3)
 * Address ranges: 1800287a0-1800287a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800287a0(longlong *param_1,undefined4 param_2,longlong param_3)

{
  *(undefined4 *)((longlong)param_1 + 0x43bc) = param_2;
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,2);
  if (*(int *)(param_1[0x661] + 0x274) != 1) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
    *(undefined4 *)(param_1[0x661] + 0x274) = 1;
  }
  FUN_180014ce8((undefined8 *)param_1[0x661],1,1);
  FUN_18000bc30(param_1[0x661],param_3,0,1);
  **(int **)(param_1[0x661] + 0x268) = *(int *)(param_1[0x661] + 0x270) + -1;
  *(longlong *)(param_1[0x661] + 0x268) = *(longlong *)(param_1[0x661] + 0x268) + 4;
  if ((*(uint *)((longlong)param_1 + 0x2be4) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  (**(code **)(*(longlong *)param_1[0x660] + 0x90))();
  return;
}

