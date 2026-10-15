/*
 * FUN_10008d70 at 10008d70
 * undefined FUN_10008d70(void)
 * Address ranges: 10008d70-10008e0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10008d70(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_10027470(param_1,param_2,0x8876086c);
  if (-1 < iVar2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3b4) + *param_2 * 4 + -4);
    FUN_1000bfb0(param_1,param_1 + 0x60ac,iVar1 + 0xa118,*(undefined4 *)(param_1 + 0xdd4));
    FUN_1000bfb0(param_1,param_1 + 0x64ac,iVar1 + 0xa91c,0xe0);
  }
  return iVar2;
}

