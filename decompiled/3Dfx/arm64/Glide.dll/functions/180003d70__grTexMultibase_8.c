/*
 * _grTexMultibase@8 at 180003d70
 * undefined __cdecl _grTexMultibase@8(int param_1, int param_2)
 * Address ranges: 180003d70-180003e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMultibase_8(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
                    /* 0x3d70  102  _grTexMultibase@8
                       0x3d70  263  grTexMultibase */
  lVar2 = FUN_180017788();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      lVar1 = (longlong)param_1 * 0x41 + *(longlong *)(lVar2 + 0x18);
      if ((bool)*(char *)(lVar1 + 0x1a1) != (param_2 != 0)) {
        *(bool *)(lVar1 + 0x1a1) = param_2 != 0;
        FUN_180019968(lVar2,param_1);
      }
    }
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return;
}

