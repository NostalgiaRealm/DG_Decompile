/*
 * _grSstVRetraceOn@0 at 180001f28
 * bool __cdecl _grSstVRetraceOn@0(void)
 * Address ranges: 180001f28-180001f7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grSstVRetraceOn_0(void)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
                    /* 0x1f28  78  _grSstVRetraceOn@0
                       0x1f28  235  grSstVRetraceOn */
  lVar3 = FUN_180016878();
  bVar1 = false;
  if (*(char *)(lVar3 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar3 + 0x60));
    cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x88))();
    bVar1 = cVar2 != '\0';
    FUN_1800608a0((uint *)(lVar3 + 0x60));
  }
  return bVar1;
}

