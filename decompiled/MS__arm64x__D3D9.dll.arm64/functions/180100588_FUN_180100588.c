/*
 * FUN_180100588 at 180100588
 * undefined FUN_180100588(void)
 * Address ranges: 180100588-180100607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180100588(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  
  pcVar1 = __imp_KERNEL32_dll_CloseHandle;
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    (*pcVar1)(*(undefined8 *)(param_1 + 0x3c0));
    (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(param_1 + 0x3c8));
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    if ((param_2 & 1) != 0) {
      thunk_FUN_180001218(param_1 + 0x5dc,param_1 + 0x3d0,0x20c);
      *(undefined1 *)(param_1 + 0x7e9) = 1;
      return 1;
    }
  }
  return 0;
}

