/*
 * grConstantColorValue at 1000185b
 * undefined __stdcall grConstantColorValue(uint param_1)
 * Address ranges: 1000185b-100018ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grConstantColorValue,4
 */

/* __stdcall grConstantColorValue,4 */

void grConstantColorValue(uint param_1)

{
  int *this;
  undefined *puVar1;
  uint uVar2;
  
                    /* 0x185b  22  _grConstantColorValue@4 */
  puVar1 = FUN_10005411();
  if (puVar1[0x3c] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x38) = *(int *)(puVar1 + 0x38) + 1;
    UNLOCK();
    this = *(int **)(puVar1 + 0xc);
    uVar2 = FUN_10009384(this,param_1);
    if (uVar2 != *(uint *)((int)this + 0x109)) {
      (**(code **)(*this + 0xbc))(uVar2);
      *(uint *)(*(int *)(puVar1 + 0xc) + 0x109) = uVar2;
    }
    LOCK();
    *(int *)(puVar1 + 0x38) = *(int *)(puVar1 + 0x38) + -1;
    UNLOCK();
  }
  return;
}

