/*
 * grDisableAllEffects at 1000195e
 * undefined __stdcall grDisableAllEffects(void)
 * Address ranges: 1000195e-100019aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDisableAllEffects,0
 */

/* __stdcall grDisableAllEffects,0 */

void grDisableAllEffects(void)

{
  int *piVar1;
  undefined *this;
  
                    /* 0x195e  26  _grDisableAllEffects@0 */
  this = FUN_1000504c();
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_100063ab(this,4,0,4,0);
    FUN_10006452(this,7);
    FUN_1000649b(this,0);
    FUN_10006324(this,0);
    FUN_1000682b(this,0);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

