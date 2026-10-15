/*
 * FUN_18000a03c at 18000a03c
 * undefined __fastcall FUN_18000a03c(longlong * param_1, undefined4 * param_2, char param_3)
 * Address ranges: 18000a03c-18000a113
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a03c(longlong *param_1,undefined4 *param_2,char param_3)

{
  undefined7 in_register_00000081;
  
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))
            ((longlong *)param_1[0x660],0,CONCAT71(in_register_00000081,2));
  if (*(int *)(param_1[0x661] + 0x274) != 1) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
    *(undefined4 *)(param_1[0x661] + 0x274) = 1;
  }
  FUN_180012898((undefined8 *)param_1[0x661],1,1);
  if (param_3 == '\0') {
    FUN_180009588(param_1[0x661],(longlong)param_2,0,1);
  }
  else {
    FUN_1800097f0(param_1[0x661],param_2,0,1);
  }
  **(int **)(param_1[0x661] + 0x268) = *(int *)(param_1[0x661] + 0x270) + -1;
  *(longlong *)(param_1[0x661] + 0x268) = *(longlong *)(param_1[0x661] + 0x268) + 4;
  if ((*(byte *)((longlong)param_1 + 0x2be4) & 2) != 0) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018000a10d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x660] + 0x90))();
  return;
}

