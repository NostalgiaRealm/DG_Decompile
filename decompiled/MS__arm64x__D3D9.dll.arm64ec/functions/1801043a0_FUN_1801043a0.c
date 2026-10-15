/*
 * FUN_1801043a0 at 1801043a0
 * undefined FUN_1801043a0(void)
 * Address ranges: 1801043a0-1801043cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801043a0(ulonglong param_1)

{
  if ((ulonglong)DAT_180246160 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001801043c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_1801043cc +
              (ulonglong)(byte)(&DAT_1801043cc)[param_1 & 0xf | ((ulonglong)DAT_180246160 & 1) << 4]
              * 4))();
    return;
  }
  FUN_180104350();
  return;
}

