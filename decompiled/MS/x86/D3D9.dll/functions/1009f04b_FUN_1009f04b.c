/*
 * FUN_1009f04b at 1009f04b
 * undefined4 __stdcall FUN_1009f04b(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1009f04b-1009f085
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009f04b(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = 0x8876086c;
  if ((param_2 < *(ushort *)(param_1 + -0x98)) && (param_3 != (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + -0x90 + param_2 * 4) + 0x68);
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = *puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

