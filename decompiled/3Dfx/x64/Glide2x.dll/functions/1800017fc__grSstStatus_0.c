/*
 * _grSstStatus@0 at 1800017fc
 * undefined __fastcall _grSstStatus@0(void)
 * Address ranges: 1800017fc-18000182b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstStatus_0(void)

{
  undefined *puVar1;
  
                    /* 0x17fc  77  _grSstStatus@0
                       0x17fc  234  grSstStatus */
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x98))();
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

