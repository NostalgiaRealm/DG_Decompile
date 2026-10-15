/*
 * FUN_1800c14e8 at 1800c14e8
 * uint __fastcall FUN_1800c14e8(longlong param_1, uint * param_2, RECT * param_3, uint param_4)
 * Address ranges: 1800c14e8-1800c1512
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800c14e8(longlong param_1,uint *param_2,RECT *param_3,uint param_4)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + -0x18) == 0) ||
     (uVar1 = 0x8876086c, (*(uint *)(param_1 + -0x30) & 0x400) == 0)) {
    uVar1 = FUN_180015724(param_1 + -0x80,param_2,param_3,param_4,'\0');
  }
  return uVar1;
}

