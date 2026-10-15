/*
 * _grDitherMode@4 at 180001e18
 * undefined __fastcall _grDitherMode@4(uint param_1)
 * Address ranges: 180001e18-180001e6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDitherMode_4(uint param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x1e18  32  _grDitherMode@4
                       0x1e18  189  grDitherMode */
  puVar2 = FUN_180015044();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(byte *)((longlong)plVar1 + 0x113)) {
      (**(code **)(*plVar1 + 400))(plVar1,param_1);
      *(char *)(*(longlong *)(puVar2 + 0x18) + 0x113) = (char)param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

