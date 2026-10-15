/*
 * FUN_1008bf00 at 1008bf00
 * undefined FUN_1008bf00(void)
 * Address ranges: 1008bf00-1008bf5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008bf00(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1 + 0xdb) = 0;
  uVar2 = param_2 + *(int *)(param_1 + 0x2c) * param_3;
  pbVar1 = (byte *)((uVar2 >> 3 & 3) + param_1 + ((uVar2 >> 5) + 0x33) * 4);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    *(char *)(param_1 + 0x3d) = '\x02';
  }
  return;
}

