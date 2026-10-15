/*
 * FUN_18003c710 at 18003c710
 * undefined __cdecl FUN_18003c710(longlong param_1, uint param_2, uint param_3)
 * Address ranges: 18003c710-18003c7c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003c710(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  
  uVar2 = param_3 & 0xf0;
  uVar3 = (undefined1)param_2;
  if (uVar2 == 0x10) {
    lVar1 = param_1 + (ulonglong)(param_3 & 0xf);
    *(byte *)(lVar1 + 0x40) = *(byte *)(lVar1 + 0x40) | 7;
    if (param_2 < *(byte *)(lVar1 + 0xad)) {
      *(undefined1 *)(lVar1 + 0xad) = uVar3;
    }
  }
  else if (uVar2 == 0x20) {
    lVar1 = param_1 + (ulonglong)(param_3 & 0xf);
    *(byte *)(lVar1 + 0x40) = *(byte *)(lVar1 + 0x40) | 7;
    if (param_2 < *(byte *)(lVar1 + 0xb3)) {
      *(undefined1 *)(lVar1 + 0xb3) = uVar3;
    }
  }
  else if (uVar2 == 0x30) {
    lVar1 = param_1 + (ulonglong)(param_3 & 0xf);
    *(byte *)(lVar1 + 0x40) = *(byte *)(lVar1 + 0x40) | 7;
    if (param_2 < *(byte *)(lVar1 + 0xb0)) {
      *(undefined1 *)(lVar1 + 0xb0) = uVar3;
    }
  }
  else if (uVar2 == 0x40) {
    bVar4 = 7;
    if ((param_3 & 0x1000) != 0) {
      bVar4 = 8;
    }
    *(byte *)(param_1 + 0x43) = bVar4 | *(byte *)(param_1 + 0x43);
  }
  return;
}

