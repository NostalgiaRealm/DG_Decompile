/*
 * FUN_1800d8778 at 1800d8778
 * undefined FUN_1800d8778(void)
 * Address ranges: 1800d8778-1800d8837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800d8778(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar1 = *(int *)(param_1 + 0x7c) + param_3;
  if (*(uint *)(param_1 + 0x78) < iVar1 + 1U) {
    iVar1 = iVar1 * 2 + 2;
    lVar2 = thunk_FUN_180102f80(iVar1);
    if (lVar2 != 0) {
      thunk_FUN_180001218(lVar2,*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x7c));
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x70));
    }
    *(longlong *)(param_1 + 0x70) = lVar2;
    *(int *)(param_1 + 0x78) = iVar1;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    thunk_FUN_180001218(*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x7c),param_2
                        ,param_3);
    iVar3 = *(int *)(param_1 + 0x7c);
    *(int *)(param_1 + 0x7c) = iVar3 + param_3;
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uint)(iVar3 + param_3)) = 0;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  }
  return iVar3;
}

