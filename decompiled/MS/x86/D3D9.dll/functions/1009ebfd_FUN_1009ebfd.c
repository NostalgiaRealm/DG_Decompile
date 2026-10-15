/*
 * FUN_1009ebfd at 1009ebfd
 * undefined4 __stdcall FUN_1009ebfd(int param_1, undefined4 * param_2)
 * Address ranges: 1009ebfd-1009ec20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009ebfd(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = 0;
    puVar3 = (undefined4 *)(param_1 + -0x28);
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
  }
  return uVar1;
}

