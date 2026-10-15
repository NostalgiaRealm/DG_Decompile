/*
 * _grCoordinateSpace@4 at 180002194
 * undefined __fastcall _grCoordinateSpace@4(int param_1)
 * Address ranges: 180002194-1800021ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grCoordinateSpace_4(int param_1)

{
  undefined *puVar1;
  
                    /* 0x2194  18  _grCoordinateSpace@4
                       0x2194  118  grCoordinateSpace */
  puVar1 = FUN_1800069ac();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x250))
              (*(longlong **)(puVar1 + 0x18),param_1 != 0);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

