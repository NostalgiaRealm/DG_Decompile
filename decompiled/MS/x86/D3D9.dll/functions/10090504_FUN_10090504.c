/*
 * FUN_10090504 at 10090504
 * uint __fastcall FUN_10090504(undefined4 * param_1)
 * Address ranges: 10090504-10090538
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10090504(undefined4 *param_1)

{
  uint uVar1;
  undefined3 extraout_var;
  
  uVar1 = FUN_100035f8(param_1);
  if ((char)uVar1 != '\0') {
    FUN_10090293((int)param_1);
    FUN_1002920b(param_1 + 0x19,DAT_100dea74,
                 -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x18));
    return CONCAT31(extraout_var,1);
  }
  return uVar1 & 0xffffff00;
}

