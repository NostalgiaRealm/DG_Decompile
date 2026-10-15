/*
 * FUN_10004623 at 10004623
 * int __fastcall FUN_10004623(byte * param_1, int * param_2)
 * Address ranges: 10004623-1000464b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10004623(byte *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  for (; (bVar1 = *param_1, *param_2 = iVar2, 0x2f < bVar1 && (*param_1 < 0x3a));
      param_1 = param_1 + 1) {
    iVar2 = iVar2 * 10 + -0x30 + (uint)*param_1;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

