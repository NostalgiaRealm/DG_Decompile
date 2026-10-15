/*
 * grDisableAllEffects at 10001961
 * undefined __stdcall grDisableAllEffects(void)
 * Address ranges: 10001961-100019ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDisableAllEffects,0
 */

/* __stdcall grDisableAllEffects,0 */

void grDisableAllEffects(void)

{
  int *piVar1;
  undefined *this;
  
                    /* 0x1961  33  _grDisableAllEffects@0 */
  this = FUN_10005411();
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_1000679f(this,4,0,4,0);
    FUN_10006870(this,7);
    FUN_100068b9(this,0);
    FUN_10006718(this,0);
    FUN_10006c8f(this,0);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

