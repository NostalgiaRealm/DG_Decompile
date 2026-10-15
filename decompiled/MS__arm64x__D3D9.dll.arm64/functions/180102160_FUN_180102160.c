/*
 * FUN_180102160 at 180102160
 * undefined FUN_180102160(void)
 * Address ranges: 180102160-1801021af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180102160(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (*__imp_KERNEL32_dll_FindResourceW)();
  if (lVar1 != 0) {
    uVar2 = (*__imp_KERNEL32_dll_SizeofResource)(param_1,lVar1);
    return uVar2;
  }
  return 0;
}

