/*
 * FUN_10004cf0 at 10004cf0
 * undefined4 __thiscall FUN_10004cf0(void * this, LONG param_1, int param_2, DWORD * param_3)
 * Address ranges: 10004cf0-10004d40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10004cf0(void *this,LONG param_1,int param_2,DWORD *param_3)

{
  HANDLE hFile;
  DWORD DVar1;
  
  hFile = *(HANDLE *)((int)this + 4);
  if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
    if (param_2 == 1) {
      DVar1 = 1;
    }
    else if (param_2 == 2) {
      DVar1 = 2;
    }
    else {
      DVar1 = 0;
    }
    DVar1 = SetFilePointer(hFile,param_1,(PLONG)0x0,DVar1);
    if (param_3 != (DWORD *)0x0) {
      *param_3 = DVar1;
    }
    return 0;
  }
  return 1;
}

