/*
 * FUN_1002e8e5 at 1002e8e5
 * undefined __fastcall FUN_1002e8e5(int param_1, uint param_2, uint param_3)
 * Address ranges: 1002e8e5-1002e96e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e8e5(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar2 = param_3 & 0xf0;
  uVar3 = (undefined1)param_2;
  if (uVar2 == 0x10) {
    uVar2 = param_3 & 0xf;
    pbVar1 = (byte *)(uVar2 + 0x38 + param_1);
    *pbVar1 = *pbVar1 | 7;
    if (param_2 < *(byte *)(uVar2 + 0xa5 + param_1)) {
      *(undefined1 *)(uVar2 + 0xa5 + param_1) = uVar3;
    }
  }
  else if (uVar2 == 0x20) {
    uVar2 = param_3 & 0xf;
    pbVar1 = (byte *)(uVar2 + 0x38 + param_1);
    *pbVar1 = *pbVar1 | 7;
    if (param_2 < *(byte *)(uVar2 + 0xab + param_1)) {
      *(undefined1 *)(uVar2 + 0xab + param_1) = uVar3;
    }
  }
  else if (uVar2 == 0x30) {
    uVar2 = param_3 & 0xf;
    pbVar1 = (byte *)(uVar2 + 0x38 + param_1);
    *pbVar1 = *pbVar1 | 7;
    if (param_2 < *(byte *)(uVar2 + 0xa8 + param_1)) {
      *(undefined1 *)(uVar2 + 0xa8 + param_1) = uVar3;
    }
  }
  else if (uVar2 == 0x40) {
    *(byte *)(param_1 + 0x3b) = *(byte *)(param_1 + 0x3b) | ((param_3 & 0x1000) != 0) + 7U;
  }
  return;
}

