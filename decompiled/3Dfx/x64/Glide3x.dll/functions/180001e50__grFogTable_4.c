/*
 * _grFogTable@4 at 180001e50
 * undefined __fastcall _grFogTable@4(undefined8 * param_1)
 * Address ranges: 180001e50-180001ea8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFogTable_4(undefined8 *param_1)

{
  undefined *puVar1;
  
                    /* 0x1e50  39  _grFogTable@4
                       0x1e50  139  grFogTable */
  puVar1 = FUN_1800069ac();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x1d0))(*(longlong **)(puVar1 + 0x18),param_1);
    FUN_180061330((undefined8 *)(*(longlong *)(puVar1 + 0x18) + 0x2a8),param_1,
                  (ulonglong)*(uint *)(*(longlong *)(puVar1 + 0x18) + 0xe8));
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

