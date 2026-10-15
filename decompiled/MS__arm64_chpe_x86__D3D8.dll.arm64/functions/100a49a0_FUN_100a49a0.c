/*
 * FUN_100a49a0 at 100a49a0
 * undefined FUN_100a49a0(void)
 * Address ranges: 100a49a0-100a49cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a49a0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  *(undefined1 *)(param_1[1] + 0xd5a) = *(undefined1 *)(param_1 + 3);
  FUN_100ddc48(uVar1,uVar2,0);
  return;
}

