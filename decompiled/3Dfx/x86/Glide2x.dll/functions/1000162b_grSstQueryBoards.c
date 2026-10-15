/*
 * grSstQueryBoards at 1000162b
 * undefined __stdcall grSstQueryBoards(undefined4 * param_1)
 * Address ranges: 1000162b-1000165a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstQueryBoards,4
 */

/* __stdcall grSstQueryBoards,4 */

void grSstQueryBoards(undefined4 *param_1)

{
  undefined *puVar1;
  
                    /* 0x162b  69  _grSstQueryBoards@4 */
  puVar1 = FUN_10012760();
  FUN_10012926((int)puVar1);
  FUN_100501d1(param_1 + 1,0,0x90);
  *param_1 = 1;
  return;
}

