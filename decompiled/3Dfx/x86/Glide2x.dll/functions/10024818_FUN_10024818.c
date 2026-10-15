/*
 * FUN_10024818 at 10024818
 * undefined __cdecl FUN_10024818(int * param_1)
 * Address ranges: 10024818-10024838
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10024818(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = FUN_1001c0cf(*(int *)(*param_1 + 0x315c));
  *(bool *)iVar1 = iVar2 != 0;
  return;
}

