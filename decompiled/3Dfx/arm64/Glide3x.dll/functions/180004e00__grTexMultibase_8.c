/*
 * _grTexMultibase@8 at 180004e00
 * undefined __cdecl _grTexMultibase@8(int param_1, int param_2)
 * Address ranges: 180004e00-180004e97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMultibase_8(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
                    /* 0x4e00  85  _grTexMultibase@8
                       0x4e00  185  grTexMultibase */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar2 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      lVar1 = (longlong)param_1 * 0x55 + *(longlong *)(lVar2 + 0x18);
      if ((bool)*(char *)(lVar1 + 499) != (param_2 != 0)) {
        *(bool *)(lVar1 + 499) = param_2 != 0;
        FUN_180008ae0(lVar2,param_1,1);
      }
    }
    FUN_1800643d0((uint *)(lVar2 + 0x60));
  }
  return;
}

