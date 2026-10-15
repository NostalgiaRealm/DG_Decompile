/*
 * FUN_180032ec0 at 180032ec0
 * undefined __fastcall FUN_180032ec0(longlong param_1)
 * Address ranges: 180032ec0-180032f2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032ec0(longlong param_1)

{
  HANDLE pvVar1;
  
  if (*(longlong *)(param_1 + 0xf8) == -1) {
    if ((*(uint *)(param_1 + 0x18) & 3) == 0) {
      pvVar1 = CreateFileMappingA((HANDLE)0xffffffffffffffff,(LPSECURITY_ATTRIBUTES)0x0,0x8000004,0,
                                  (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c) +
                                  (*(uint *)(param_1 + 0x18) * 0x40 + 0xfff & 0xfffff000) * 2,
                                  (LPCSTR)0x0);
      *(HANDLE *)(param_1 + 0xf8) = pvVar1;
    }
    else {
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
  }
  return;
}

