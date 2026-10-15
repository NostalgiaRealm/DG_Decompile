/*
 * FUN_180104350 at 180104350
 * undefined FUN_180104350(void)
 * Address ranges: 180104350-180104393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180104350(void)

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
  DAT_180246160 = bVar2 | 0x80000000;
                    /* WARNING: Could not recover jumptable at 0x000180104384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

