/*
 * FUN_1800c2918 at 1800c2918
 * uint __fastcall FUN_1800c2918(longlong param_1, uint param_2, uint * param_3, RECT * param_4, uint param_5)
 * Address ranges: 1800c2918-1800c295e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800c2918(longlong param_1,uint param_2,uint *param_3,RECT *param_4,uint param_5)

{
  uint uVar1;
  
  if ((param_2 == 0) ||
     (uVar1 = 0x8876086c, (*(uint *)(*(longlong *)(param_1 + 0x18) + 0x50) & 0x400) == 0)) {
    uVar1 = FUN_180017cfc(param_1 + -0x98,0,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

