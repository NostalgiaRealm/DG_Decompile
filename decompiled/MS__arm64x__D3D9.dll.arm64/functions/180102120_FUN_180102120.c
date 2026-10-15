/*
 * FUN_180102120 at 180102120
 * undefined FUN_180102120(void)
 * Address ranges: 180102120-18010215f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180102120(longlong param_1)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  iVar1 = (*__imp_KERNEL32_dll_GetFileSizeEx)(*(undefined8 *)(param_1 + 8),&local_10);
  if ((iVar1 != 0) && (local_c == 0)) {
    return local_10;
  }
  return 0;
}

