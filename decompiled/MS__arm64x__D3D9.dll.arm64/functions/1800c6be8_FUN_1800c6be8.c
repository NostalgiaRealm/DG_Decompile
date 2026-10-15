/*
 * FUN_1800c6be8 at 1800c6be8
 * undefined FUN_1800c6be8(void)
 * Address ranges: 1800c6be8-1800c6c33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c6be8(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_18000e138(param_1 + 8,&local_20);
  if (-1 < iVar1) {
    *(undefined4 *)(param_2 + 4) = local_20;
    *(undefined4 *)(param_2 + 8) = uStack_1c;
    *(undefined4 *)(param_2 + 0xc) = local_18;
    *(undefined4 *)(param_2 + 0x10) = uStack_14;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
  }
  return;
}

