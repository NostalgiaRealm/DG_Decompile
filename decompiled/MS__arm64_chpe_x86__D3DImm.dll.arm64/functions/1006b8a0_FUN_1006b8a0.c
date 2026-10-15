/*
 * FUN_1006b8a0 at 1006b8a0
 * undefined FUN_1006b8a0(void)
 * Address ranges: 1006b8a0-1006b8eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006b8a0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
  }
  uVar1 = 0x80070057;
  if ((param_3 != (undefined4 *)0x0) && (uVar1 = 0x88760082, iVar2 != 0)) {
    uVar1 = 0;
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xd0);
  }
  return uVar1;
}

