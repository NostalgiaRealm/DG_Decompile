/*
 * FUN_100c3dfb at 100c3dfb
 * undefined __fastcall FUN_100c3dfb(int * param_1)
 * Address ranges: 100c3dfb-100c3e1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c3dfb(int *param_1)

{
  int iVar1;
  
  *(int *)(*param_1 + 0x18) = param_1[1] - *param_1;
  iVar1 = *param_1;
  FUN_100cafc0(iVar1,param_1[1] - iVar1,(undefined4 *)(iVar1 + 4));
  return;
}

