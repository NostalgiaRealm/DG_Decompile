/*
 * FUN_10007560 at 10007560
 * undefined FUN_10007560(void)
 * Address ranges: 10007560-100075af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10007560(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while (((*(uint *)(param_1 + 0x520 + uVar1 * 100) & 0x30000) == 0 &&
         ((*(uint *)(param_1 + uVar1 * 100 + 0x554) & 0xff) == 0))) {
    uVar1 = uVar1 + 1;
    if (7 < uVar1) {
      return 0;
    }
  }
  return 1;
}

