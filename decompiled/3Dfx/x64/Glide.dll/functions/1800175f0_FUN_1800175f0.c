/*
 * FUN_1800175f0 at 1800175f0
 * undefined __fastcall FUN_1800175f0(longlong param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, undefined8 * param_9)
 * Address ranges: 1800175f0-180017676
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800175f0(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8,undefined8 *param_9)

{
  uint uVar1;
  
  uVar1 = FUN_180017d28(param_4,param_6);
  FUN_180017678(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,
                (uVar1 & 0xffff) - 1);
  return;
}

