/*
 * FUN_180104770 at 180104770
 * undefined FUN_180104770(void)
 * Address ranges: 180104770-18010479b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180104770(ulonglong param_1)

{
  if ((ulonglong)DAT_180246160 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180104790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_18010479c +
              (ulonglong)
              *(ushort *)
               (&DAT_18010479c + (param_1 & 0xf | ((ulonglong)DAT_180246160 & 1) << 4) * 2) * 4))();
    return;
  }
  FUN_180104350();
  return;
}

