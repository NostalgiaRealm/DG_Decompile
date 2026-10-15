/*
 * FUN_180028990 at 180028990
 * undefined __cdecl FUN_180028990(longlong * param_1, undefined4 param_2, longlong param_3, longlong param_4, longlong param_5)
 * Address ranges: 180028990-180028997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028990(longlong *param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  uint uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x43bc) = param_2;
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,2);
  if (*(int *)(param_1[0x661] + 0x274) != 4) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
    *(undefined4 *)(param_1[0x661] + 0x274) = 4;
  }
  FUN_180014ce8((undefined8 *)param_1[0x661],3,3);
  uVar1 = 0;
  FUN_18000bc30(param_1[0x661],param_3,0,1);
  FUN_18000bc30(param_1[0x661],param_4,uVar1,1);
  FUN_18000bc30(param_1[0x661],param_5,uVar1,1);
  **(int **)(param_1[0x661] + 0x268) = *(int *)(param_1[0x661] + 0x270) + -3;
  *(int *)(*(longlong *)(param_1[0x661] + 0x268) + 4) = *(int *)(param_1[0x661] + 0x270) + -2;
  *(int *)(*(longlong *)(param_1[0x661] + 0x268) + 8) = *(int *)(param_1[0x661] + 0x270) + -1;
  *(longlong *)(param_1[0x661] + 0x268) = *(longlong *)(param_1[0x661] + 0x268) + 0xc;
  if ((*(uint *)((longlong)param_1 + 0x2be4) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  (**(code **)(*(longlong *)param_1[0x660] + 0x90))();
  return;
}

