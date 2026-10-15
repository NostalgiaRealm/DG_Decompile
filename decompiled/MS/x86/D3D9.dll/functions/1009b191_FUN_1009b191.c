/*
 * FUN_1009b191 at 1009b191
 * undefined4 __stdcall FUN_1009b191(int param_1, uint param_2, undefined4 * param_3, int param_4)
 * Address ranges: 1009b191-1009b1f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b191(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = param_2;
  uVar1 = *(uint *)(param_1 + -0x58e0);
  if (param_2 < uVar1) {
    iVar3 = param_4;
    if (uVar1 < param_2 + param_4) {
      iVar3 = uVar1 - param_2;
    }
  }
  else {
    iVar3 = 0;
  }
  FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  puVar4 = (undefined4 *)(param_1 + -0x5408 + uVar2 * 0x10);
  puVar5 = param_3;
  for (iVar3 = iVar3 << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_10003e89((char *)((int)&param_2 + 3));
  return 0;
}

