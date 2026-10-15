/*
 * FUN_10011650 at 10011650
 * undefined FUN_10011650(void)
 * Address ranges: 10011650-100116af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10011650(int param_1,int param_2,int param_3)

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

