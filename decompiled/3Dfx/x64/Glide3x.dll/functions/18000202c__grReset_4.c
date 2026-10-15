/*
 * _grReset@4 at 18000202c
 * bool __fastcall _grReset@4(uint param_1)
 * Address ranges: 18000202c-18000206b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grReset_4(uint param_1)

{
  char cVar1;
  undefined *puVar2;
  ulonglong uVar3;
  bool bVar4;
  
                    /* 0x202c  61  _grReset@4
                       0x202c  161  grReset */
  uVar3 = (ulonglong)param_1;
  puVar2 = FUN_1800069ac();
  bVar4 = false;
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    cVar1 = (**(code **)(**(longlong **)(puVar2 + 0x18) + 0x248))
                      (*(longlong **)(puVar2 + 0x18),uVar3 & 0xffffffff);
    bVar4 = cVar1 != '\0';
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return bVar4;
}

