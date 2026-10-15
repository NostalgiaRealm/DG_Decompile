/*
 * FUN_1009b1f6 at 1009b1f6
 * undefined4 __stdcall FUN_1009b1f6(int param_1, uint param_2, undefined4 * param_3, int param_4)
 * Address ranges: 1009b1f6-1009b253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b1f6(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = param_2;
  FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  if (uVar1 < 0x10) {
    iVar2 = param_4;
    if (0x10 < uVar1 + param_4) {
      iVar2 = 0x10 - uVar1;
    }
  }
  else {
    iVar2 = 0;
  }
  puVar3 = (undefined4 *)(uVar1 * 0x10 + param_1 + 0x134);
  puVar4 = param_3;
  for (iVar2 = iVar2 << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_10003e89((char *)((int)&param_2 + 3));
  return 0;
}

