/*
 * FUN_180213628 at 180213628
 * undefined FUN_180213628(void)
 * Address ranges: 180213628-18021368b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180213628(longlong param_1,uint param_2,char param_3)

{
  if (param_3 == '\x01') {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1 << (ulonglong)(param_2 & 0x1f);
  }
  else if (param_3 == '\x02') {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1 << (ulonglong)(param_2 & 0x1f);
  }
  else if (param_3 == '\x04') {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1 << (ulonglong)(param_2 & 0x1f);
  }
  return;
}

