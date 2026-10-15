/*
 * FUN_180017150 at 180017150
 * undefined __fastcall FUN_180017150(longlong param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, undefined8 * param_9)
 * Address ranges: 180017150-1800171d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017150(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8,undefined8 *param_9)

{
  uint uVar1;
  
  uVar1 = FUN_180017888(param_4,param_6);
  FUN_1800171d8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,
                (uVar1 & 0xffff) - 1);
  return;
}

