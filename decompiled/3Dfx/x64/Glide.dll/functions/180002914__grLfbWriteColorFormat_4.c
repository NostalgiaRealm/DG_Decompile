/*
 * _grLfbWriteColorFormat@4 at 180002914
 * undefined __fastcall _grLfbWriteColorFormat@4(uint param_1)
 * Address ranges: 180002914-180002966
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbWriteColorFormat_4(uint param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x2914  61  _grLfbWriteColorFormat@4
                       0x2914  222  grLfbWriteColorFormat */
  puVar2 = FUN_180015384();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(byte *)((longlong)plVar1 + 0x13d)) {
      (**(code **)(*plVar1 + 0xe0))(plVar1,param_1);
      *(char *)(*(longlong *)(puVar2 + 0x18) + 0x13d) = (char)param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

