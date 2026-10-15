/*
 * _grSstStatus@0 at 1800023e8
 * undefined4 __cdecl _grSstStatus@0(void)
 * Address ranges: 1800023e8-18000243b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _grSstStatus_0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
                    /* 0x23e8  77  _grSstStatus@0
                       0x23e8  234  grSstStatus */
  lVar2 = FUN_180016878();
  uVar1 = 0;
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    uVar1 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x98))();
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return uVar1;
}

