/*
 * _grSstVRetraceOn@0 at 180001404
 * bool __fastcall _grSstVRetraceOn@0(void)
 * Address ranges: 180001404-18000143c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grSstVRetraceOn_0(void)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  
                    /* 0x1404  78  _grSstVRetraceOn@0
                       0x1404  235  grSstVRetraceOn */
  puVar2 = FUN_180015044();
  bVar3 = false;
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    cVar1 = (**(code **)(**(longlong **)(puVar2 + 0x18) + 0x88))();
    bVar3 = cVar1 != '\0';
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return bVar3;
}

