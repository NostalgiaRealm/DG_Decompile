/*
 * FUN_10081360 at 10081360
 * undefined4 __stdcall FUN_10081360(int param_1, undefined4 * param_2)
 * Address ranges: 10081360-10081383
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10081360(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = 0;
    puVar3 = (undefined4 *)(param_1 + -0x34);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
  }
  return uVar1;
}

