/*
 * FUN_1005f750 at 1005f750
 * undefined FUN_1005f750(void)
 * Address ranges: 1005f750-1005f7bb;10060194-100601bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x1005f7b8 */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_1005f750(undefined8 param_1,undefined4 *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)*param_2;
  if ((bVar1 < 4 || 0xd < bVar1) && bVar1 != 0xe) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

