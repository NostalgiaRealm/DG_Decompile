/*
 * FUN_10084030 at 10084030
 * undefined FUN_10084030(void)
 * Address ranges: 10084030-100840ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10084030(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_1 >> 0x12 & 3;
  uVar4 = param_1 >> 0x14 & 7;
  uVar5 = uVar4 + uVar3 + 0xff;
  uVar1 = uVar3 + 3;
  if (uVar4 < 4) {
    uVar1 = uVar5;
  }
  uVar2 = uVar3 + 2;
  if (uVar4 < 3) {
    uVar2 = uVar5;
  }
  if (1 < uVar4) {
    uVar5 = uVar3 + 1;
  }
  uVar3 = (((((uVar1 & 0x3f) << 2 | uVar2) & 0x3f) << 2 | uVar5) & 0x3f) << 2 | uVar3;
  uVar5 = 6;
  if (param_4 != 4) {
    uVar5 = (uint)(param_4 == 1);
  }
  return uVar5 | ((((uVar3 >> (ulonglong)((param_2 >> 6 & 3) << 1) & 3) << 2 |
                   uVar3 >> (ulonglong)((param_2 >> 4 & 3) << 1) & 3) << 2 |
                  uVar3 >> (ulonglong)((param_2 >> 2 & 3) << 1) & 3) << 2 |
                  (param_3 & 3 | (param_5 & 3 | (param_6 & 3) << 3) << 2) << 0x10 |
                  uVar3 >> (ulonglong)((param_2 & 3) << 1) & 3 | param_1 & 0x3f00) << 4;
}

