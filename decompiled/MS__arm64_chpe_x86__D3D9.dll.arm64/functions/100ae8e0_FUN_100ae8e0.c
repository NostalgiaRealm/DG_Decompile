/*
 * FUN_100ae8e0 at 100ae8e0
 * undefined FUN_100ae8e0(void)
 * Address ranges: 100ae8e0-100ae943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ae8e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + -0x80);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      FUN_101325d0(iVar1,0,0x400);
    }
    else {
      FUN_101325a0(iVar1,param_2,0x400);
    }
    *(undefined1 *)(param_1 + 0x51) = 1;
    FUN_100acb38(param_1 + -0x88,0);
  }
  return;
}

