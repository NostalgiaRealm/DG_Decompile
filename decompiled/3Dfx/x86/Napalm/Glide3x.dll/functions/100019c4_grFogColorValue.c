/*
 * grFogColorValue at 100019c4
 * undefined __stdcall grFogColorValue(uint param_1)
 * Address ranges: 100019c4-10001a14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grFogColorValue,4
 */

/* __stdcall grFogColorValue,4 */

void grFogColorValue(uint param_1)

{
  int *this;
  undefined *puVar1;
  uint uVar2;
  
                    /* 0x19c4  44  _grFogColorValue@4 */
  puVar1 = FUN_10005411();
  if (puVar1[0x3c] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x38) = *(int *)(puVar1 + 0x38) + 1;
    UNLOCK();
    this = *(int **)(puVar1 + 0xc);
    uVar2 = FUN_10009384(this,param_1);
    if (uVar2 != *(uint *)((int)this + 0x156)) {
      (**(code **)(*this + 0xd4))(uVar2);
      *(uint *)(*(int *)(puVar1 + 0xc) + 0x156) = uVar2;
    }
    LOCK();
    *(int *)(puVar1 + 0x38) = *(int *)(puVar1 + 0x38) + -1;
    UNLOCK();
  }
  return;
}

