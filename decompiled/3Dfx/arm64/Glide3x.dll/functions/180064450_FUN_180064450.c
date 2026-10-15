/*
 * FUN_180064450 at 180064450
 * undefined __cdecl FUN_180064450(void)
 * Address ranges: 180064450-180064493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180064450(void)

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
  DAT_18006f9a0 = bVar2 | 0x80000000;
                    /* WARNING: Could not recover jumptable at 0x000180064484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

