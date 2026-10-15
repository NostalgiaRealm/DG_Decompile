/*
 * _grSstQueryBoards@4 at 1800016d8
 * undefined __fastcall _grSstQueryBoards@4(undefined4 * param_1)
 * Address ranges: 1800016d8-18000170b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstQueryBoards_4(undefined4 *param_1)

{
  undefined *puVar1;
  
                    /* 0x16d8  71  _grSstQueryBoards@4
                       0x16d8  228  grSstQueryBoards */
  puVar1 = FUN_180015044();
  FUN_180015224((longlong)puVar1);
  FUN_18005f374((undefined1 *)(param_1 + 1),0,0x90);
  *param_1 = 1;
  return;
}

