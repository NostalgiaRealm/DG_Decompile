/*
 * FUN_10002240 at 10002240
 * undefined FUN_10002240(void)
 * Address ranges: 10002240-1000228f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10002240(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if ((&DAT_100be150)[uVar2 * 0x8a] == (&DAT_100be150)[param_2 * 0x8a]) {
      iVar1 = (&DAT_100be154)[uVar2 * 0x8a] + iVar1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  return iVar1;
}

