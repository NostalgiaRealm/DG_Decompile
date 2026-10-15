/*
 * FUN_180061770 at 180061770
 * undefined __cdecl FUN_180061770(void)
 * Address ranges: 180061770-1800617b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180061770(void)

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
  DAT_18006c840 = bVar2 | 0x80000000;
                    /* WARNING: Could not recover jumptable at 0x0001800617a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

