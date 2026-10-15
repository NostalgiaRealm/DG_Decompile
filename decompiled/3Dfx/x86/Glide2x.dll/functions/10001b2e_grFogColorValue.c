/*
 * grFogColorValue at 10001b2e
 * undefined __stdcall grFogColorValue(uint param_1)
 * Address ranges: 10001b2e-10001b7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grFogColorValue,4
 */

/* __stdcall grFogColorValue,4 */

void grFogColorValue(uint param_1)

{
  int *this;
  undefined *puVar1;
  uint uVar2;
  
                    /* 0x1b2e  39  _grFogColorValue@4 */
  puVar1 = FUN_10012760();
  if (puVar1[0x3c] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x38) = *(int *)(puVar1 + 0x38) + 1;
    UNLOCK();
    this = *(int **)(puVar1 + 0xc);
    uVar2 = FUN_10019ccd(this,param_1);
    if (uVar2 != *(uint *)((int)this + 0x133)) {
      (**(code **)(*this + 0xd0))(uVar2);
      *(uint *)(*(int *)(puVar1 + 0xc) + 0x133) = uVar2;
    }
    LOCK();
    *(int *)(puVar1 + 0x38) = *(int *)(puVar1 + 0x38) + -1;
    UNLOCK();
  }
  return;
}

