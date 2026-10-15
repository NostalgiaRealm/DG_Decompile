/*
 * FUN_1009a9a9 at 1009a9a9
 * undefined4 __stdcall FUN_1009a9a9(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1009a9a9-1009aa15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009a9a9(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  uVar2 = param_2;
  iVar1 = param_1;
  uVar4 = 0x8876086c;
  if ((param_3 != (undefined4 *)0x0) &&
     (((1 < (int)param_2 && ((int)param_2 < 0x18)) || (param_2 - 0x100 < 0x100)))) {
    FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    puVar5 = param_3;
    iVar3 = FUN_10006438(uVar2);
    FUN_1001986c((void *)(iVar1 + -0x66b4),iVar3,puVar5);
    uVar4 = 0;
    FUN_10003e89((char *)((int)&param_1 + 3));
  }
  return uVar4;
}

