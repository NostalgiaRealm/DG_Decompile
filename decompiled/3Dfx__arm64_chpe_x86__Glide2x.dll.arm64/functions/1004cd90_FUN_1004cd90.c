/*
 * FUN_1004cd90 at 1004cd90
 * undefined FUN_1004cd90(void)
 * Address ranges: 1004cd90-1004ce93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004cd90(int param_1,uint param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2 & 0xf0;
  uVar2 = (uint)param_3;
  if (uVar1 == 0x70) {
    *(undefined4 *)(param_1 + 0x134) = 2;
    *(uint *)(param_1 + 0x138) = uVar2 << 4 | 0x102002;
    param_2 = param_2 & 0xf;
  }
  else if (uVar1 == 0x80) {
    param_2 = *(uint *)(param_1 + (param_2 & 0xf) * 4 + 0x90);
    uVar1 = param_2 >> 0x14 & 7;
    if (uVar2 == 8) {
      uVar2 = 1 << (ulonglong)(uVar1 - 1 & 0x1f) & 0xff;
    }
    uVar3 = 0;
    if ((param_2 & 0x40000000) != 0) {
      uVar3 = 0x600000;
    }
    *(undefined4 *)(param_1 + 0x134) = 2;
    *(uint *)(param_1 + 0x138) =
         ~(param_2 >> 0x1b) >> 1 & 2 |
         (((1 << (ulonglong)uVar1) + 0xffU & uVar2) << (ulonglong)(param_2 >> 0x12 & 3) & 0xff |
          uVar3 | param_2 & 0x33f00) << 4;
    param_2 = param_2 & 0xff;
  }
  else {
    if (uVar1 != 0xf0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x134) = 2;
    *(uint *)(param_1 + 0x138) = (uint)param_3 << 4 | 0x100002;
    param_2 = (uint)*(byte *)(param_1 + 0xa0);
  }
  *(uint *)(param_1 + 0x13c) = param_2;
  return;
}

