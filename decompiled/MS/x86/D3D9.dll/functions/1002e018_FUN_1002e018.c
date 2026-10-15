/*
 * FUN_1002e018 at 1002e018
 * undefined __fastcall FUN_1002e018(int param_1)
 * Address ranges: 1002e018-1002e06d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e018(int param_1)

{
  HANDLE pvVar1;
  
  if (*(int *)(param_1 + 0xb4) == -1) {
    if ((*(byte *)(param_1 + 0x10) & 3) == 0) {
      pvVar1 = CreateFileMappingA((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,0x8000004,0,
                                  (uint)*(ushort *)(param_1 + 0xc) * *(int *)(param_1 + 0x14) +
                                  (*(int *)(param_1 + 0x10) * 0x40 + 0xfffU & 0xfffff000) * 2,
                                  (LPCSTR)0x0);
      *(HANDLE *)(param_1 + 0xb4) = pvVar1;
      return;
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
}

