/*
 * _grReset@4 at 180003a78
 * bool __cdecl _grReset@4(undefined4 param_1)
 * Address ranges: 180003a78-180003adf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grReset_4(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
                    /* 0x3a78  61  _grReset@4
                       0x3a78  161  grReset */
  lVar3 = FUN_180008ce0();
  bVar1 = false;
  if (*(char *)(lVar3 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar3 + 0x60));
    cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x248))
                      (*(longlong **)(lVar3 + 0x18),param_1);
    bVar1 = cVar2 != '\0';
    FUN_1800643d0((uint *)(lVar3 + 0x60));
  }
  return bVar1;
}

