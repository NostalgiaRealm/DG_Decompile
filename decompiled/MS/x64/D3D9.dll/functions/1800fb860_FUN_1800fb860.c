/*
 * FUN_1800fb860 at 1800fb860
 * undefined8 __fastcall FUN_1800fb860(longlong param_1, LONG param_2, int param_3, DWORD * param_4)
 * Address ranges: 1800fb860-1800fb8b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800fb860(longlong param_1,LONG param_2,int param_3,DWORD *param_4)

{
  DWORD DVar1;
  
  if ((longlong)*(HANDLE *)(param_1 + 8) - 1U < 0xfffffffffffffffe) {
    if (param_3 == 1) {
      DVar1 = 1;
    }
    else if (param_3 == 2) {
      DVar1 = 2;
    }
    else {
      DVar1 = 0;
    }
    DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 8),param_2,(PLONG)0x0,DVar1);
    if (param_4 != (DWORD *)0x0) {
      *param_4 = DVar1;
    }
    return 0;
  }
  return 1;
}

