/*
 * FUN_1800ab328 at 1800ab328
 * uint __fastcall FUN_1800ab328(undefined8 param_1, uint param_2, int param_3, int param_4, longlong param_5)
 * Address ranges: 1800ab328-1800ab3bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800ab328(undefined8 param_1,uint param_2,int param_3,int param_4,longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = FUN_1800a9828(param_1,param_3,param_5,param_2);
  uVar3 = 0;
  if (param_4 != 0) {
    lVar2 = (longlong)param_4 * 0x2c;
    uVar3 = (uVar1 >> ((&DAT_18010ff32)[lVar2] + 0x18 & 0x1f)) << ((&DAT_18010ff33)[lVar2] & 0x1f) |
            (uVar1 >> ((&DAT_18010ff2c)[lVar2] + 0x18 & 0x1f)) << ((&DAT_18010ff2d)[lVar2] & 0x1f) |
            (uVar1 >> ((&DAT_18010ff2e)[lVar2] + 0x10 & 0x1f)) << ((&DAT_18010ff2f)[lVar2] & 0x1f) |
            (uVar1 >> ((&DAT_18010ff30)[lVar2] + 8 & 0x1f)) << ((&DAT_18010ff31)[lVar2] & 0x1f);
  }
  return uVar3;
}

