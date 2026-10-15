/*
 * FUN_180216ce0 at 180216ce0
 * undefined FUN_180216ce0(void)
 * Address ranges: 180216ce0-180216d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180216ce0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1801042d0(param_1 + 3);
  if ((iVar1 == 0) && (param_1 != (undefined8 *)0x0)) {
    *param_1 = &PTR_FUN_1802392b0;
    FUN_1802229d8(param_1[2]);
    FUN_1802229d8(param_1,0x20);
  }
  return iVar1;
}

