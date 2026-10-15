/*
 * _grLfbWriteColorFormat@4 at 180002c3c
 * undefined __fastcall _grLfbWriteColorFormat@4(uint param_1)
 * Address ranges: 180002c3c-180002c8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbWriteColorFormat_4(uint param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x2c3c  55  _grLfbWriteColorFormat@4
                       0x2c3c  155  grLfbWriteColorFormat */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(byte *)((longlong)plVar1 + 0x13d)) {
      (**(code **)(*plVar1 + 0x100))(plVar1,param_1);
      *(char *)(*(longlong *)(puVar2 + 0x18) + 0x13d) = (char)param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

