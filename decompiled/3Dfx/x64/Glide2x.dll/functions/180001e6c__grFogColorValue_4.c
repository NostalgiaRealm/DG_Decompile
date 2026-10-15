/*
 * _grFogColorValue@4 at 180001e6c
 * undefined __fastcall _grFogColorValue@4(uint param_1)
 * Address ranges: 180001e6c-180001ec8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFogColorValue_4(uint param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
                    /* 0x1e6c  41  _grFogColorValue@4
                       0x1e6c  198  grFogColorValue */
  uVar2 = (ulonglong)param_1;
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(puVar1 + 0x18);
    uVar2 = FUN_18001e1d4((longlong)plVar3,uVar2);
    if ((int)uVar2 != *(int *)((longlong)plVar3 + 0x143)) {
      (**(code **)(*plVar3 + 0x1a0))(plVar3,uVar2 & 0xffffffff);
      *(int *)(*(longlong *)(puVar1 + 0x18) + 0x143) = (int)uVar2;
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

