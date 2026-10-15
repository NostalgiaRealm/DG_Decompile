/*
 * FUN_10053b40 at 10053b40
 * undefined FUN_10053b40(void)
 * Address ranges: 10053b40-10053ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10053b40(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_20 [4];
  
  local_20[0] = param_2;
  piVar1 = (int *)FUN_100596d0(param_1 + 0x17b8,local_20);
  if (piVar1 == (int *)0x0) {
    iVar2 = FUN_10062f40(*(undefined4 *)(*(int *)(param_1 + 0xa70) + 0xc),param_2);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = *piVar1;
  }
  return iVar2;
}

