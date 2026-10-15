/*
 * FUN_1001a100 at 1001a100
 * undefined FUN_1001a100(void)
 * Address ranges: 1001a100-1001a167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001a100(int param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar2 = FUN_100313e8(iVar1,param_2,param_3,param_4);
  if (*param_4 == 1) {
    FUN_10032138(*(undefined4 *)(&DAT_10138998 + iVar1 * 0x228));
  }
  return uVar2;
}

