/*
 * FUN_18000a114 at 18000a114
 * undefined __fastcall FUN_18000a114(longlong * param_1, undefined4 * param_2, undefined4 * param_3, char param_4)
 * Address ranges: 18000a114-18000a239
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a114(longlong *param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,2);
  if (*(int *)(param_1[0x661] + 0x274) != 2) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
    *(undefined4 *)(param_1[0x661] + 0x274) = 2;
  }
  FUN_180012898((undefined8 *)param_1[0x661],2,2);
  if (param_4 == '\0') {
    FUN_180009588(param_1[0x661],(longlong)param_2,0,1);
    FUN_180009588(param_1[0x661],(longlong)param_3,0,1);
  }
  else {
    FUN_1800097f0(param_1[0x661],param_2,0,1);
    FUN_1800097f0(param_1[0x661],param_3,0,1);
  }
  **(int **)(param_1[0x661] + 0x268) = *(int *)(param_1[0x661] + 0x270) + -2;
  *(int *)(*(longlong *)(param_1[0x661] + 0x268) + 4) = *(int *)(param_1[0x661] + 0x270) + -1;
  *(longlong *)(param_1[0x661] + 0x268) = *(longlong *)(param_1[0x661] + 0x268) + 8;
  if ((*(byte *)((longlong)param_1 + 0x2be4) & 2) != 0) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018000a233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x660] + 0x90))();
  return;
}

