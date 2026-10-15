/*
 * _grQueryResolutions@8 at 18000200c
 * undefined __fastcall _grQueryResolutions@8(int * param_1, uint * param_2)
 * Address ranges: 18000200c-180002029
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grQueryResolutions_8(int *param_1,uint *param_2)

{
  WNDPROC pWVar1;
  
                    /* 0x200c  59  _grQueryResolutions@8
                       0x200c  159  grQueryResolutions */
  pWVar1 = (WNDPROC)FUN_1800069ac();
  FUN_180006494(pWVar1,param_1,param_2);
  return;
}

