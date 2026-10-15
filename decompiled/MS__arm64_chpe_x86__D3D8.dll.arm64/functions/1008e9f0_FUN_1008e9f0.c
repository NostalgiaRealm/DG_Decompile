/*
 * FUN_1008e9f0 at 1008e9f0
 * undefined FUN_1008e9f0(void)
 * Address ranges: 1008e9f0-1008ea53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008e9f0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + -0x80);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      FUN_100ff690(iVar1,0,0x400);
    }
    else {
      FUN_100ff660(iVar1,param_2,0x400);
    }
    *(undefined1 *)(param_1 + 0x51) = 1;
    FUN_1008cc68(param_1 + -0x88,0);
  }
  return;
}

