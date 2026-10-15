/*
 * FUN_1007f38a at 1007f38a
 * undefined4 __stdcall FUN_1007f38a(int param_1, int param_2)
 * Address ranges: 1007f38a-1007f3dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f38a(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2;
  uVar2 = 0x8876086c;
  if (param_2 != 0) {
    FUN_10003838((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    uVar2 = FUN_1000697b((void *)(param_1 + -0x58e0),**(int **)(param_1 + -0x4e10),
                         (undefined4 *)(iVar1 + -0x5c));
    FUN_10003881((char *)((int)&param_2 + 3));
  }
  return uVar2;
}

