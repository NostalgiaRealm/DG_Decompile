/*
 * grDisableAllEffects at 10001acb
 * undefined __stdcall grDisableAllEffects(void)
 * Address ranges: 10001acb-10001b17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDisableAllEffects,0
 */

/* __stdcall grDisableAllEffects,0 */

void grDisableAllEffects(void)

{
  int *piVar1;
  undefined *this;
  
                    /* 0x1acb  29  _grDisableAllEffects@0 */
  this = FUN_10012760();
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_100139b5(this,4,0,4,0);
    FUN_10013a5c(this,7);
    FUN_10013aa5(this,0);
    FUN_1001392e(this,0);
    FUN_10013ec8(this,0);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

