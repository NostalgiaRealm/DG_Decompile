/*
 * _grTexMultibase@8 at 180003d78
 * undefined __cdecl _grTexMultibase@8(int param_1, int param_2)
 * Address ranges: 180003d78-180003e0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMultibase_8(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
                    /* 0x3d78  98  _grTexMultibase@8
                       0x3d78  255  grTexMultibase */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      lVar1 = (longlong)param_1 * 0x41 + *(longlong *)(lVar2 + 0x18);
      if ((bool)*(char *)(lVar1 + 0x1a1) != (param_2 != 0)) {
        *(bool *)(lVar1 + 0x1a1) = param_2 != 0;
        FUN_180018b18(lVar2,param_1);
      }
    }
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return;
}

