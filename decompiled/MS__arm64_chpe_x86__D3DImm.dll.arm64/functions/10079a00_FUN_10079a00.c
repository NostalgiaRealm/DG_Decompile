/*
 * FUN_10079a00 at 10079a00
 * undefined FUN_10079a00(void)
 * Address ranges: 10079a00-10079a5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079a00(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar2 = param_2 >> 0x12 & 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x30) + (param_2 & 0xff));
    *pbVar1 = *pbVar1 & ((byte)((1 << (ulonglong)(param_2 >> 0x14 & 7)) + 0xff << (ulonglong)uVar2)
                        ^ 0xff);
    pbVar1 = (byte *)(*(int *)(param_1 + 0x30) + (param_2 & 0xff));
    *pbVar1 = (byte)((1 << (ulonglong)(param_3 & 0x1f)) + 0xff << (ulonglong)uVar2) | *pbVar1;
  }
  return;
}

