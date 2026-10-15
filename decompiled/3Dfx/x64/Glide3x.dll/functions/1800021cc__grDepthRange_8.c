/*
 * _grDepthRange@8 at 1800021cc
 * undefined __fastcall _grDepthRange@8(undefined4 param_1)
 * Address ranges: 1800021cc-180002203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthRange_8(undefined4 param_1)

{
  undefined *puVar1;
  
                    /* 0x21cc  24  _grDepthRange@8
                       0x21cc  124  grDepthRange */
  puVar1 = FUN_1800069ac();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 600))(*(longlong **)(puVar1 + 0x18),param_1);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

