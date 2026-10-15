/*
 * FUN_180213838 at 180213838
 * undefined FUN_180213838(void)
 * Address ranges: 180213838-1802138fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180213838(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 >> 0x12 & 3;
  uVar1 = param_1 & 0x700000;
  uVar5 = (param_1 >> 0x14 & 7) + uVar4 + 0xff;
  uVar2 = uVar4 + 3;
  if (uVar1 < 0x300001) {
    uVar2 = uVar5;
  }
  uVar3 = uVar4 + 2;
  if (uVar1 < 0x200001) {
    uVar3 = uVar5;
  }
  if (0x100000 < uVar1) {
    uVar5 = uVar4 + 1;
  }
  uVar4 = (((((uVar2 & 0x3f) << 2 | uVar3) & 0x3f) << 2 | uVar5) & 0x3f) << 2 | uVar4;
  uVar5 = 6;
  if (param_4 != 4) {
    uVar5 = (uint)(param_4 == 1);
  }
  return uVar5 | (param_1 & 0x3f00 | (param_3 & 3 | (param_5 & 3 | (param_6 & 3) << 3) << 2) << 0x10
                  | (((uVar4 >> (ulonglong)((param_2 >> 6 & 3) << 1) & 3) << 2 |
                     uVar4 >> (ulonglong)((param_2 >> 4 & 3) << 1) & 3) << 2 |
                    uVar4 >> (ulonglong)((param_2 >> 2 & 3) << 1) & 3) << 2 |
                 uVar4 >> (ulonglong)((param_2 & 3) << 1) & 3) << 4;
}

