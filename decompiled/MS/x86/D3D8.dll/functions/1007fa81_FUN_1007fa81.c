/*
 * FUN_1007fa81 at 1007fa81
 * undefined4 __stdcall FUN_1007fa81(int param_1, int param_2, undefined4 * param_3, int param_4)
 * Address ranges: 1007fa81-1007fac8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007fa81(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  puVar3 = (undefined4 *)(iVar1 + -0x46c0 + param_2 * 0x10);
  puVar4 = param_3;
  for (iVar2 = param_4 << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return 0;
}

