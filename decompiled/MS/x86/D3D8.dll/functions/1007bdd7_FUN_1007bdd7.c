/*
 * FUN_1007bdd7 at 1007bdd7
 * undefined4 __stdcall FUN_1007bdd7(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1007bdd7-1007be25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007bdd7(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  uVar2 = 0x8876086c;
  if ((param_2 < 6) && (param_3 != (undefined4 *)0x0)) {
    FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    FUN_10015bae((void *)(iVar1 + -0x58e0),param_2,param_3);
    FUN_10003881((char *)((int)&param_1 + 3));
    uVar2 = 0;
  }
  return uVar2;
}

