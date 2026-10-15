/*
 * grDisableAllEffects at 10001a5c
 * undefined __stdcall grDisableAllEffects(void)
 * Address ranges: 10001a5c-10001aa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDisableAllEffects,0
 */

/* __stdcall grDisableAllEffects,0 */

void grDisableAllEffects(void)

{
  int *piVar1;
  undefined *this;
  
                    /* 0x1a5c  29  _grDisableAllEffects@0 */
  this = FUN_10012ab2();
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_10013d43(this,4,0,4,0);
    FUN_10013dea(this,7);
    FUN_10013e33(this,0);
    FUN_10013cbc(this,0);
    FUN_10014256(this,0);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

