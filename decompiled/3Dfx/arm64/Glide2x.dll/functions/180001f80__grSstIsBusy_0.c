/*
 * _grSstIsBusy@0 at 180001f80
 * undefined1 __cdecl _grSstIsBusy@0(void)
 * Address ranges: 180001f80-180001fd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 _grSstIsBusy_0(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
                    /* 0x1f80  68  _grSstIsBusy@0
                       0x1f80  225  grSstIsBusy */
  lVar2 = FUN_180016878();
  uVar1 = 0;
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    uVar1 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0xa8))();
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return uVar1;
}

