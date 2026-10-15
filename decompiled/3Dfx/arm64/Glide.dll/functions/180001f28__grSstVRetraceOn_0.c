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
  
                    /* 0x1f28  84  _grSstVRetraceOn@0
                       0x1f28  245  grSstVRetraceOn */
  lVar3 = FUN_180017788();
  bVar1 = false;
  if (*(char *)(lVar3 + 100) != '\0') {
    FUN_180061700((uint *)(lVar3 + 0x60));
    cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x88))();
    bVar1 = cVar2 != '\0';
    FUN_1800616f0((uint *)(lVar3 + 0x60));
  }
  return bVar1;
}

