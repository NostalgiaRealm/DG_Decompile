/*
 * FUN_10031a1a at 10031a1a
 * int __fastcall FUN_10031a1a(uint * param_1, uint * param_2)
 * Address ranges: 10031a1a-10031a58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10031a1a(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint3 uVar3;
  int iVar2;
  
  uVar1 = param_1[3] & param_2[3] | param_1[2] & param_2[2] | param_1[1] & param_2[1] |
          *param_1 & *param_2;
  uVar3 = (uint3)(uVar1 >> 8);
  if ((((uVar1 == 0) || ((*param_1 & *param_2) != *param_2)) ||
      ((param_1[1] & param_2[1]) != param_2[1])) || ((param_1[2] & param_2[2]) != param_2[2])) {
    iVar2 = (uint)uVar3 << 8;
  }
  else {
    iVar2 = CONCAT31(uVar3,(param_1[3] & param_2[3]) == param_2[3]);
  }
  return iVar2;
}

