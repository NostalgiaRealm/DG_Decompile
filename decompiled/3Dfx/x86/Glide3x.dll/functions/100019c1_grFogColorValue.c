/*
 * grFogColorValue at 100019c1
 * undefined __stdcall grFogColorValue(uint param_1)
 * Address ranges: 100019c1-10001a11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grFogColorValue,4
 */

/* __stdcall grFogColorValue,4 */

void grFogColorValue(uint param_1)

{
  int *this;
  undefined *puVar1;
  uint uVar2;
  
                    /* 0x19c1  37  _grFogColorValue@4 */
  puVar1 = FUN_1000504c();
  if (puVar1[0x3c] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x38) = *(int *)(puVar1 + 0x38) + 1;
    UNLOCK();
    this = *(int **)(puVar1 + 0xc);
    uVar2 = FUN_10008b77(this,param_1);
    if (uVar2 != *(uint *)((int)this + 0x133)) {
      (**(code **)(*this + 0xe0))(uVar2);
      *(uint *)(*(int *)(puVar1 + 0xc) + 0x133) = uVar2;
    }
    LOCK();
    *(int *)(puVar1 + 0x38) = *(int *)(puVar1 + 0x38) + -1;
    UNLOCK();
  }
  return;
}

