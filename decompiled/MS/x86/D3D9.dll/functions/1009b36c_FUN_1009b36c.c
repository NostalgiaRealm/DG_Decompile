/*
 * FUN_1009b36c at 1009b36c
 * undefined4 __stdcall FUN_1009b36c(int param_1, int param_2, undefined4 * param_3, int param_4)
 * Address ranges: 1009b36c-1009b3ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b36c(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  puVar3 = (undefined4 *)(iVar1 + param_2 * 4 + 0x174);
  puVar4 = param_3;
  for (iVar2 = param_4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return 0;
}

