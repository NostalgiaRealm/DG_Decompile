/*
 * FUN_1801021b0 at 1801021b0
 * undefined FUN_1801021b0(void)
 * Address ranges: 1801021b0-1801021db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801021b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (*__imp_KERNEL32_dll_FindResourceW)();
  if ((lVar2 != 0) && (iVar1 = (*__imp_KERNEL32_dll_SizeofResource)(param_1,lVar2), iVar1 != 0)) {
    uVar3 = thunk_FUN_180102f80(iVar1);
    lVar2 = (*__imp_KERNEL32_dll_FindResourceW)(param_1,param_2,param_3);
    if (lVar2 != 0) {
      iVar1 = (*__imp_KERNEL32_dll_SizeofResource)(param_1,lVar2);
      if (((iVar1 != 0) && (lVar2 = (*__imp_KERNEL32_dll_LoadResource)(param_1,lVar2), lVar2 != 0))
         && (lVar2 = (*__imp_KERNEL32_dll_LockResource)(), lVar2 != 0)) {
        thunk_FUN_180001218(uVar3,lVar2,iVar1);
        return uVar3;
      }
    }
    thunk_FUN_180102fc0(uVar3);
  }
  return 0;
}

