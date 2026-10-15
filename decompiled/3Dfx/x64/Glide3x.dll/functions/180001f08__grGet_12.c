/*
 * _grGet@12 at 180001f08
 * undefined __fastcall _grGet@12(uint param_1, uint param_2, uint * param_3)
 * Address ranges: 180001f08-180001f28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGet_12(uint param_1,uint param_2,uint *param_3)

{
  WNDPROC pWVar1;
  
                    /* 0x1f08  40  _grGet@12
                       0x1f08  140  grGet */
  pWVar1 = (WNDPROC)FUN_1800069ac();
  FUN_180005e24(pWVar1,param_1,param_2,param_3);
  return;
}

