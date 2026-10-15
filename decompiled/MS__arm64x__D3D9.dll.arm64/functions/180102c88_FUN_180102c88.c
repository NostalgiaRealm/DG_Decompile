/*
 * FUN_180102c88 at 180102c88
 * undefined FUN_180102c88(void)
 * Address ranges: 180102c88-180102d2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180102c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (*__imp_KERNEL32_dll_FindResourceW)(param_2,param_3,param_4);
  if (lVar2 != 0) {
    iVar1 = (*__imp_KERNEL32_dll_SizeofResource)(param_2,lVar2);
    if (((iVar1 != 0) && (lVar2 = (*__imp_KERNEL32_dll_LoadResource)(param_2,lVar2), lVar2 != 0)) &&
       (lVar2 = (*__imp_KERNEL32_dll_LockResource)(), lVar2 != 0)) {
      thunk_FUN_180001218(param_5,lVar2,iVar1);
      return 1;
    }
  }
  return 0;
}

