/*
 * FUN_100ea7a0 at 100ea7a0
 * undefined FUN_100ea7a0(void)
 * Address ranges: 100ea7a0-100ea807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100ea7a0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_10020100(param_1 + 8,&local_20);
  if (-1 < iVar1) {
    *(undefined4 *)(param_2 + 4) = local_20;
    *(undefined4 *)(param_2 + 8) = uStack_1c;
    *(undefined4 *)(param_2 + 0x10) = uStack_14;
    *(undefined4 *)(param_2 + 0xc) = local_18;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
  }
  return iVar1;
}

