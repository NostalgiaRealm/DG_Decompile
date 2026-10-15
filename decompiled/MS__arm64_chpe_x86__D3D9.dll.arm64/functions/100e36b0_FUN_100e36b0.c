/*
 * FUN_100e36b0 at 100e36b0
 * undefined FUN_100e36b0(void)
 * Address ranges: 100e36b0-100e374f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e36b0(int param_1,uint param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar1 = -0x7789f794;
  if ((param_2 < *(uint *)(param_1 + 0xd98)) &&
     (iVar1 = FUN_10020100(*(undefined4 *)(*(int *)(param_1 + 0xd94) + param_2 * 4),&local_30),
     -1 < iVar1)) {
    *(undefined4 *)(param_3 + 4) = local_30;
    *(undefined4 *)(param_3 + 8) = uStack_2c;
    *(undefined4 *)(param_3 + 0x10) = uStack_24;
    *(undefined4 *)(param_3 + 0xc) = local_28;
    *(undefined4 *)(param_1 + 0xde0) = uStack_24;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
  }
  return iVar1;
}

