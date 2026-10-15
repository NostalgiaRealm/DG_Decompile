/*
 * FUN_1801021dc at 1801021dc
 * undefined FUN_1801021dc(void)
 * Address ranges: 1801021dc-18010227f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801021dc(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = (*__imp_KERNEL32_dll_SizeofResource)();
  if (iVar1 != 0) {
    uVar2 = thunk_FUN_180102f80(iVar1);
    lVar3 = (*__imp_KERNEL32_dll_FindResourceW)();
    if (lVar3 != 0) {
      iVar1 = (*__imp_KERNEL32_dll_SizeofResource)();
      if (((iVar1 != 0) && (lVar3 = (*__imp_KERNEL32_dll_LoadResource)(), lVar3 != 0)) &&
         (lVar3 = (*__imp_KERNEL32_dll_LockResource)(), lVar3 != 0)) {
        thunk_FUN_180001218(uVar2,lVar3,iVar1);
        return uVar2;
      }
    }
    thunk_FUN_180102fc0(uVar2);
  }
  return 0;
}

