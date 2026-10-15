/*
 * range_start_10001000 at 10001000
 * undefined range_start_10001000(void)
 * Address ranges: 10001000-10001003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

void range_start_10001000(void)

{
  bool in_ZR;
  bool in_CY;
  int in_w16;
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x100895a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_w16 + 0x18))(8);
  return;
}

