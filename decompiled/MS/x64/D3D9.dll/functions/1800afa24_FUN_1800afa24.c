/*
 * FUN_1800afa24 at 1800afa24
 * uint __fastcall FUN_1800afa24(longlong param_1, int param_2, uint param_3, uint * param_4, RECT * param_5, uint param_6)
 * Address ranges: 1800afa24-1800afa68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800afa24(longlong param_1,int param_2,uint param_3,uint *param_4,RECT *param_5,
                  uint param_6)

{
  uint uVar1;
  
  if ((param_3 == 0) ||
     (uVar1 = 0x8876086c, (*(uint *)(*(longlong *)(param_1 + 0x18) + 0x50) & 0x400) == 0)) {
    uVar1 = FUN_180017cfc(param_1 + -0x98,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

