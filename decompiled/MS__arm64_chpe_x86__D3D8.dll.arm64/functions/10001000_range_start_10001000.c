/*
 * range_start_10001000 at 10001000
 * undefined range_start_10001000(void)
 * Address ranges: 10001000-10001003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

bool range_start_10001000(undefined8 param_1,int param_2,int param_3)

{
  bool in_ZR;
  bool in_CY;
  int *in_w8;
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 != 0) {
    in_w8 = (int *)(param_3 + 0x5c);
  }
  return *(int *)(param_2 + 0x5c) == *in_w8;
}

