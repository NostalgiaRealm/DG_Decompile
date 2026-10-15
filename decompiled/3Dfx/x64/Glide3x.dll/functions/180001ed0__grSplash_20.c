/*
 * _grSplash@20 at 180001ed0
 * undefined __fastcall _grSplash@20(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5)
 * Address ranges: 180001ed0-180001f07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSplash_20(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  
                    /* 0x1ed0  64  _grSplash@20
                       0x1ed0  164  grSplash */
  puVar1 = FUN_1800069ac();
  if ((*(longlong *)(puVar1 + 0x70) != 0) && (puVar1[0x99] != '\0')) {
    (**(code **)(puVar1 + 0x90))(param_1,param_2);
  }
  return;
}

