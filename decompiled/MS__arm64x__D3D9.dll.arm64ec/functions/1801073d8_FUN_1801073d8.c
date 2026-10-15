/*
 * FUN_1801073d8 at 1801073d8
 * undefined FUN_1801073d8(void)
 * Address ranges: 1801073d8-180107427
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801073d8(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 == 2) {
    puVar2 = &DAT_180246338;
  }
  else {
    puVar2 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0 + 0x1802464e8);
  }
  if (*(uint *)(param_1 + 0x10) < 2) {
    uVar1 = *(undefined4 *)(DAT_18024d928 + 0x9e7);
  }
  else {
    uVar1 = *puVar2;
  }
  return uVar1;
}

