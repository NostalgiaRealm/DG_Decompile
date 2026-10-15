/*
 * FUN_18003d4b8 at 18003d4b8
 * undefined __cdecl FUN_18003d4b8(longlong param_1, uint param_2, byte param_3)
 * Address ranges: 18003d4b8-18003d58f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003d4b8(longlong param_1,uint param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_2 & 0xf0;
  uVar2 = (uint)param_3;
  if (uVar3 == 0x70) {
    *(undefined4 *)(param_1 + 0x13c) = 2;
    *(uint *)(param_1 + 0x140) = uVar2 << 4 | 0x102002;
    uVar3 = param_2 & 0xf;
  }
  else if (uVar3 == 0x80) {
    uVar3 = *(uint *)(param_1 + ((ulonglong)param_2 & 0xf) * 4 + 0x98);
    uVar1 = uVar3 >> 0x14 & 7;
    if (uVar2 == 8) {
      uVar2 = 1 << (ulonglong)(uVar1 - 1 & 0x1f);
    }
    uVar4 = 0;
    if ((uVar3 & 0x40000000) != 0) {
      uVar4 = 0x600000;
    }
    *(undefined4 *)(param_1 + 0x13c) = 2;
    *(uint *)(param_1 + 0x140) =
         ~(uVar3 >> 0x1c) & 2 |
         (uVar3 & 0x33f00 | uVar4 |
         ((1 << (ulonglong)uVar1) + 0xffU & uVar2 & 0xff) << (ulonglong)(uVar3 >> 0x12 & 3) & 0xff)
         << 4;
    uVar3 = uVar3 & 0xff;
  }
  else {
    if (uVar3 != 0xf0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x13c) = 2;
    *(uint *)(param_1 + 0x140) = (uint)param_3 << 4 | 0x100002;
    uVar3 = (uint)*(byte *)(param_1 + 0xa8);
  }
  *(uint *)(param_1 + 0x144) = uVar3;
  return;
}

