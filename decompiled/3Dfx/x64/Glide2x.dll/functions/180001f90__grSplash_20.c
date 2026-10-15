/*
 * _grSplash@20 at 180001f90
 * undefined __fastcall _grSplash@20(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5)
 * Address ranges: 180001f90-180001fc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSplash_20(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  
                    /* 0x1f90  62  _grSplash@20
                       0x1f90  219  grSplash */
  puVar1 = FUN_180015044();
  if ((*(longlong *)(puVar1 + 0x70) != 0) && (puVar1[0x99] != '\0')) {
    (**(code **)(puVar1 + 0x90))(param_1,param_2);
  }
  return;
}

