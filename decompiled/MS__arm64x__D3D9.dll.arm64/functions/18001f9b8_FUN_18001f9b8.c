/*
 * FUN_18001f9b8 at 18001f9b8
 * undefined FUN_18001f9b8(void)
 * Address ranges: 18001f9b8-18001f9e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001f9b8(void)

{
  undefined8 uVar1;
  
  if (((*(char *)(DAT_18024de60 + 0x822) == '\0') || (*(int *)(DAT_18024de60 + 0x870) == 0)) ||
     (*(int *)(DAT_18024de60 + 0x874) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

