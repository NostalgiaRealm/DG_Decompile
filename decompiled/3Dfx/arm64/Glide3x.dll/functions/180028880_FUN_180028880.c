/*
 * FUN_180028880 at 180028880
 * undefined __cdecl FUN_180028880(longlong * param_1, undefined4 param_2, longlong param_3, longlong param_4)
 * Address ranges: 180028880-180028887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028880(longlong *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x43bc) = param_2;
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,2);
  if (*(int *)(param_1[0x661] + 0x274) != 2) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
    *(undefined4 *)(param_1[0x661] + 0x274) = 2;
  }
  FUN_180014ce8((undefined8 *)param_1[0x661],2,2);
  uVar1 = 0;
  FUN_18000bc30(param_1[0x661],param_3,0,1);
  FUN_18000bc30(param_1[0x661],param_4,uVar1,1);
  **(int **)(param_1[0x661] + 0x268) = *(int *)(param_1[0x661] + 0x270) + -2;
  *(int *)(*(longlong *)(param_1[0x661] + 0x268) + 4) = *(int *)(param_1[0x661] + 0x270) + -1;
  *(longlong *)(param_1[0x661] + 0x268) = *(longlong *)(param_1[0x661] + 0x268) + 8;
  if ((*(uint *)((longlong)param_1 + 0x2be4) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  (**(code **)(*(longlong *)param_1[0x660] + 0x90))();
  return;
}

