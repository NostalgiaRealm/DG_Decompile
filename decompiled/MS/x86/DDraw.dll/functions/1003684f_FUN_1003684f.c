/*
 * FUN_1003684f at 1003684f
 * uint __stdcall FUN_1003684f(uint param_1, uint param_2)
 * Address ranges: 1003684f-100368a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003684f(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = 0;
  uVar4 = DAT_100707b8;
  if (DAT_100707b8 != 0) {
    do {
      uVar3 = uVar4 + uVar6 >> 1;
      uVar1 = *(uint *)(DAT_100707b4 + uVar3 * 0x10);
      uVar2 = *(uint *)(DAT_100707b4 + 4 + uVar3 * 0x10);
      if (uVar2 < param_2) {
LAB_10036895:
        uVar3 = uVar3 + 1;
        uVar5 = uVar4;
        uVar6 = uVar3;
      }
      else {
        uVar5 = uVar3;
        if ((uVar2 == param_2) && (uVar1 <= param_1)) {
          if (param_2 < uVar2) {
            return uVar3;
          }
          if ((param_2 <= uVar2) && (param_1 <= uVar1)) {
            return uVar3;
          }
          goto LAB_10036895;
        }
      }
      uVar4 = uVar5;
    } while (uVar5 != uVar6);
  }
  return uVar3;
}

