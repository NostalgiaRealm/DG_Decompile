/*
 * FUN_10012bd0 at 10012bd0
 * undefined FUN_10012bd0(void)
 * Address ranges: 10012bd0-10012c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012bd0(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x14)) {
    *(uint *)(param_1 + 0x14) = param_2;
  }
  puVar1 = (uint *)(param_1 + 0x18);
  if (*puVar1 < param_3) {
    *puVar1 = param_3;
    if (*(uint *)(param_1 + 0x10) < param_3) {
      *puVar1 = *(uint *)(param_1 + 0x10);
    }
  }
  return;
}

