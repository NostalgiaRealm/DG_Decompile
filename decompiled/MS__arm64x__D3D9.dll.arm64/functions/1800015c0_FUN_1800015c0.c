/*
 * FUN_1800015c0 at 1800015c0
 * undefined FUN_1800015c0(void)
 * Address ranges: 1800015c0-180001603
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800015c0(void)

{
  ulonglong uVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = currentel;
  bVar2 = DAT_7ffe0296;
  if ((uVar1 >> 2 & 3) != 0) {
    uVar1 = id_aa64isar0_el1;
    bVar2 = 1 < (uVar1 >> 0x14 & 0xf);
  }
  DAT_18024d8a0 = bVar2 | 0x80000000;
                    /* WARNING: Could not recover jumptable at 0x0001800015f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

