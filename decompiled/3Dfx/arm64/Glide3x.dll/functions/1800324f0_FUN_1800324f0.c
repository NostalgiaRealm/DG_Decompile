/*
 * FUN_1800324f0 at 1800324f0
 * undefined __cdecl FUN_1800324f0(longlong param_1, uint param_2, byte param_3)
 * Address ranges: 1800324f0-1800325e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800324f0(longlong param_1,uint param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_2 & 0xf0;
  uVar1 = (uint)param_3;
  if (uVar2 == 0x10) {
    uVar2 = *(uint *)(param_1 + ((ulonglong)param_2 & 0xf) * 4 + 0x8c);
    uVar4 = uVar2 >> 0x14 & 7;
  }
  else {
    if (uVar2 == 0x70) {
      *(undefined4 *)(param_1 + 0x13c) = 2;
      *(uint *)(param_1 + 0x140) = uVar1 << 4 | 0x102002;
      uVar2 = param_2 & 0xf;
      goto LAB_1800325e0;
    }
    if (uVar2 != 0x80) {
      if (uVar2 != 0xf0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x13c) = 2;
      *(uint *)(param_1 + 0x140) = (uint)param_3 << 4 | 0x100002;
      uVar2 = (uint)*(byte *)(param_1 + 0xa8);
      goto LAB_1800325e0;
    }
    uVar2 = *(uint *)(param_1 + ((ulonglong)param_2 & 0xf) * 4 + 0x98);
    uVar4 = uVar2 >> 0x14 & 7;
    if (uVar1 == 8) {
      uVar1 = 1 << (ulonglong)(uVar4 - 1 & 0x1f);
    }
    uVar1 = uVar1 & 0xff;
  }
  uVar3 = 0;
  if ((uVar2 & 0x40000000) != 0) {
    uVar3 = 0x600000;
  }
  *(undefined4 *)(param_1 + 0x13c) = 2;
  *(uint *)(param_1 + 0x140) =
       ~(uVar2 >> 0x1c) & 2 |
       (uVar2 & 0x33f00 | uVar3 |
       ((1 << (ulonglong)uVar4) + 0xffU & uVar1) << (ulonglong)(uVar2 >> 0x12 & 3) & 0xff) << 4;
  uVar2 = uVar2 & 0xff;
LAB_1800325e0:
  *(uint *)(param_1 + 0x144) = uVar2;
  return;
}

