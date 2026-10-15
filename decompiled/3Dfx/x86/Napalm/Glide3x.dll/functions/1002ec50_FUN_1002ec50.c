/*
 * FUN_1002ec50 at 1002ec50
 * undefined4 __thiscall FUN_1002ec50(void * this, DWORD param_1, LPCVOID param_2, DWORD * param_3)
 * Address ranges: 1002ec50-1002ecaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002ec50(void *this,DWORD param_1,LPCVOID param_2,DWORD *param_3)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD local_8;
  
  hFile = *(HANDLE *)((int)this + 4);
  local_8 = 0;
  if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
    BVar1 = WriteFile(hFile,param_2,param_1,&local_8,(LPOVERLAPPED)0x0);
    if (BVar1 == 1) {
      if (param_3 != (DWORD *)0x0) {
        *param_3 = local_8;
        return 0;
      }
      if (local_8 == param_1) {
        return 0;
      }
    }
  }
  return 1;
}

