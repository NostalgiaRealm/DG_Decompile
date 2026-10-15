/*
 * FUN_1801bb7b8 at 1801bb7b8
 * undefined FUN_1801bb7b8(void)
 * Address ranges: 1801bb7b8-1801bb80f;1801bb830-1801bb847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801bb7b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1802229a8(0x298);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_18022f230;
    puVar1[1] = 0;
    puVar1[2] = puVar1;
    puVar1[3] = param_1;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(puVar1 + 4,param_2,0x254);
  }
  return 0;
}

