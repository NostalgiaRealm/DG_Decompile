/*
 * FUN_100b1930 at 100b1930
 * undefined FUN_100b1930(void)
 * Address ranges: 100b1930-100b19bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b1930(int param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar3;
  
  uVar2 = FUN_1000a840(param_1);
  if ((uVar2 & 1) == 0) {
    if ((*(uint *)(param_1 + 0xb0c) >> 7 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x58bf) = 0;
      return;
    }
    *(bool *)(param_1 + 0x58bf) = *(int *)(param_1 + 0x4f0) != 0;
    if ((*(uint *)(param_1 + 0x5940) & 1) == 0) {
      return;
    }
    puVar1 = (uint *)FUN_100bd300(param_1 + 0x58f8,*(uint *)(param_1 + 0x5940));
    if (puVar1 == (uint *)0x0) {
      return;
    }
    bVar3 = (byte)(*puVar1 >> 4) & 1;
  }
  else {
    bVar3 = 1;
  }
  *(byte *)(param_1 + 0x58bf) = bVar3;
  return;
}

