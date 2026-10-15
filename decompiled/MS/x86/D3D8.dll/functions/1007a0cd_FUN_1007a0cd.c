/*
 * FUN_1007a0cd at 1007a0cd
 * undefined4 __stdcall FUN_1007a0cd(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1007a0cd-1007a0fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007a0cd(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x24)) && (param_3 != (undefined4 *)0x0)) {
    FUN_10003167((void *)(param_1 + -0x70),*(int *)(*(int *)(param_1 + -0x28) + param_2 * 4),param_3
                );
    uVar1 = 0;
  }
  return uVar1;
}

