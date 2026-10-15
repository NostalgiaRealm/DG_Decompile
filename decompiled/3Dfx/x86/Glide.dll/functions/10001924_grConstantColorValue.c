/*
 * grConstantColorValue at 10001924
 * undefined __stdcall grConstantColorValue(uint param_1)
 * Address ranges: 10001924-10001974
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grConstantColorValue,4
 */

/* __stdcall grConstantColorValue,4 */

void grConstantColorValue(uint param_1)

{
  int *this;
  undefined *puVar1;
  uint uVar2;
  
                    /* 0x1924  23  _grConstantColorValue@4 */
  puVar1 = FUN_10012ab2();
  if (puVar1[0x3c] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x38) = *(int *)(puVar1 + 0x38) + 1;
    UNLOCK();
    this = *(int **)(puVar1 + 0xc);
    uVar2 = FUN_1001a058(this,param_1);
    if (uVar2 != *(uint *)((int)this + 0xe6)) {
      (**(code **)(*this + 0xb0))(uVar2);
      *(uint *)(*(int *)(puVar1 + 0xc) + 0xe6) = uVar2;
    }
    LOCK();
    *(int *)(puVar1 + 0x38) = *(int *)(puVar1 + 0x38) + -1;
    UNLOCK();
  }
  return;
}

