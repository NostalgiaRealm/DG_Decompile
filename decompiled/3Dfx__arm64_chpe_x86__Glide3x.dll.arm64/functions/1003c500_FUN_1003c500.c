/*
 * FUN_1003c500 at 1003c500
 * undefined FUN_1003c500(void)
 * Address ranges: 1003c500-1003c687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003c500(int param_1,uint param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0xf0;
  uVar1 = (uint)param_3;
  if (uVar3 < 0x80) {
    if (uVar3 == 0x10) {
      param_2 = *(uint *)(param_1 + (param_2 & 0xf) * 4 + 0x84);
      *(undefined4 *)(param_1 + 0x134) = 2;
      uVar3 = 0;
      if ((param_2 & 0x40000000) != 0) {
        uVar3 = 0x600000;
      }
      *(uint *)(param_1 + 0x138) =
           ~(param_2 >> 0x1b) >> 1 & 2 |
           (((1 << (ulonglong)(param_2 >> 0x14 & 7)) + 0xffU & uVar1) <<
            (ulonglong)(param_2 >> 0x12 & 3) & 0xff | uVar3 | param_2 & 0x33f00) << 4;
      param_2 = param_2 & 0xff;
    }
    else {
      if (uVar3 != 0x70) {
        return;
      }
      *(undefined4 *)(param_1 + 0x134) = 2;
      *(uint *)(param_1 + 0x138) = uVar1 << 4 | 0x102002;
      param_2 = param_2 & 0xf;
    }
  }
  else if (uVar3 < 0x81) {
    param_2 = *(uint *)(param_1 + (param_2 & 0xf) * 4 + 0x90);
    uVar3 = param_2 >> 0x14 & 7;
    if (uVar1 == 8) {
      uVar1 = 1 << (ulonglong)(uVar3 - 1 & 0x1f) & 0xff;
    }
    uVar2 = 0;
    if ((param_2 & 0x40000000) != 0) {
      uVar2 = 0x600000;
    }
    *(undefined4 *)(param_1 + 0x134) = 2;
    *(uint *)(param_1 + 0x138) =
         ~(param_2 >> 0x1b) >> 1 & 2 |
         (((1 << (ulonglong)uVar3) + 0xffU & uVar1) << (ulonglong)(param_2 >> 0x12 & 3) & 0xff |
          uVar2 | param_2 & 0x33f00) << 4;
    param_2 = param_2 & 0xff;
  }
  else {
    if (uVar3 != 0xf0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x134) = 2;
    *(uint *)(param_1 + 0x138) = uVar1 << 4 | 0x100002;
    param_2 = (uint)*(byte *)(param_1 + 0xa0);
  }
  *(uint *)(param_1 + 0x13c) = param_2;
  return;
}

