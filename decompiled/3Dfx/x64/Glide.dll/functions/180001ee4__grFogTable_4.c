/*
 * _grFogTable@4 at 180001ee4
 * undefined __fastcall _grFogTable@4(undefined8 * param_1)
 * Address ranges: 180001ee4-180001f3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFogTable_4(undefined8 *param_1)

{
  undefined *puVar1;
  
                    /* 0x1ee4  43  _grFogTable@4
                       0x1ee4  204  grFogTable */
  puVar1 = FUN_180015384();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x1b0))(*(longlong **)(puVar1 + 0x18),param_1);
    FUN_18005f1b0((undefined8 *)(*(longlong *)(puVar1 + 0x18) + 0x22c),param_1,
                  (ulonglong)*(uint *)(*(longlong *)(puVar1 + 0x18) + 0xe8));
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

