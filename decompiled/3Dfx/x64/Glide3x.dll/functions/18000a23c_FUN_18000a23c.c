/*
 * FUN_18000a23c at 18000a23c
 * undefined __fastcall FUN_18000a23c(longlong * param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, char param_5)
 * Address ranges: 18000a23c-18000a3b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a23c(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  char param_5)

{
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,2);
  if (*(int *)(param_1[0x661] + 0x274) != 4) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
    *(undefined4 *)(param_1[0x661] + 0x274) = 4;
  }
  FUN_180012898((undefined8 *)param_1[0x661],3,3);
  if (param_5 == '\0') {
    FUN_180009588(param_1[0x661],(longlong)param_2,0,1);
    FUN_180009588(param_1[0x661],(longlong)param_3,0,1);
    FUN_180009588(param_1[0x661],(longlong)param_4,0,1);
  }
  else {
    FUN_1800097f0(param_1[0x661],param_2,0,1);
    FUN_1800097f0(param_1[0x661],param_3,0,1);
    FUN_1800097f0(param_1[0x661],param_4,0,1);
  }
  **(int **)(param_1[0x661] + 0x268) = *(int *)(param_1[0x661] + 0x270) + -3;
  *(int *)(*(longlong *)(param_1[0x661] + 0x268) + 4) = *(int *)(param_1[0x661] + 0x270) + -2;
  *(int *)(*(longlong *)(param_1[0x661] + 0x268) + 8) = *(int *)(param_1[0x661] + 0x270) + -1;
  *(longlong *)(param_1[0x661] + 0x268) = *(longlong *)(param_1[0x661] + 0x268) + 0xc;
  if ((*(byte *)((longlong)param_1 + 0x2be4) & 2) != 0) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018000a3ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x660] + 0x90))();
  return;
}

