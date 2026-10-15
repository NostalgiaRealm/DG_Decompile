/*
 * FUN_10090fe8 at 10090fe8
 * undefined4 __stdcall FUN_10090fe8(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 10090fe8-10091024
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10090fe8(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x24)) && (param_3 != (undefined4 *)0x0)) {
    iVar3 = *(int *)(*(int *)(param_1 + -0x28) + param_2 * 4) * 0x228;
    uVar1 = *(undefined4 *)(&DAT_100df448 + iVar3);
    *param_3 = *(undefined4 *)(&DAT_100df444 + iVar3);
    uVar2 = 0;
    param_3[1] = uVar1;
  }
  return uVar2;
}

