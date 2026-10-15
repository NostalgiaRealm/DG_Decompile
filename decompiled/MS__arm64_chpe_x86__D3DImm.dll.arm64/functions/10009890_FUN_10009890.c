/*
 * FUN_10009890 at 10009890
 * undefined FUN_10009890(void)
 * Address ranges: 10009890-100098d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10009890(int param_1)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0x17c) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x178) + uVar1 * 4) != -1) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x17c));
  }
  return 0;
}

