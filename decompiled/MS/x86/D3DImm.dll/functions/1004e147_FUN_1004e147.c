/*
 * FUN_1004e147 at 1004e147
 * undefined4 __stdcall FUN_1004e147(int param_1, undefined4 * param_2)
 * Address ranges: 1004e147-1004e16d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004e147(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = 0;
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + 0x5c);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
  }
  return uVar1;
}

