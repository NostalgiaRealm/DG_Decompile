/*
 * FUN_1800021c8 at 1800021c8
 * undefined FUN_1800021c8(void)
 * Address ranges: 1800021c8-18000221b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800021c8(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 == 2) {
    puVar2 = &DAT_180248c48;
  }
  else {
    puVar2 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0 + 0x180248df8);
  }
  if (*(uint *)(param_1 + 0x10) < 2) {
    uVar1 = *(undefined4 *)(DAT_18024de60 + 0x9e7);
  }
  else {
    uVar1 = *puVar2;
  }
  return uVar1;
}

