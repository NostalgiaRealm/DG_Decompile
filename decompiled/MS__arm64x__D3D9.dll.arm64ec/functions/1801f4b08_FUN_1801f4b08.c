/*
 * FUN_1801f4b08 at 1801f4b08
 * undefined FUN_1801f4b08(void)
 * Address ranges: 1801f4b08-1801f4b63;1801f4b6c-1801f4b8f;1801f4bb0-1801f4bc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801f4b08(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x7c) + param_3;
  if (*(uint *)(param_1 + 0x78) < iVar1 + 1U) {
    iVar1 = iVar1 * 2 + 2;
    lVar2 = FUN_1802229a8(iVar1);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar2,*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x7c));
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(int *)(param_1 + 0x78) = iVar1;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x7c),param_2
                        ,param_3);
  }
  return 0xffffffff;
}

