/*
 * FUN_10014140 at 10014140
 * undefined FUN_10014140(void)
 * Address ranges: 10014140-100141a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014140(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + -0x80);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      FUN_100917d0(iVar1,0,0x400);
    }
    else {
      FUN_100917a0(iVar1,param_2,0x400);
    }
    *(undefined1 *)(param_1 + 0x51) = 1;
    FUN_100123b8(param_1 + -0x88,0);
  }
  return;
}

