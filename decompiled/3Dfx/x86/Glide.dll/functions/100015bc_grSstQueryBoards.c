/*
 * grSstQueryBoards at 100015bc
 * undefined __stdcall grSstQueryBoards(undefined4 * param_1)
 * Address ranges: 100015bc-100015eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstQueryBoards,4
 */

/* __stdcall grSstQueryBoards,4 */

void grSstQueryBoards(undefined4 *param_1)

{
  undefined *puVar1;
  
                    /* 0x15bc  75  _grSstQueryBoards@4 */
  puVar1 = FUN_10012ab2();
  FUN_10012c78((int)puVar1);
  FUN_10050561(param_1 + 1,0,0x90);
  *param_1 = 1;
  return;
}

