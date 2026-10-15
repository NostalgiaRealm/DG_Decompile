/*
 * FUN_18002aab0 at 18002aab0
 * undefined __cdecl FUN_18002aab0(longlong param_1, longlong param_2)
 * Address ranges: 18002aab0-18002ab2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002aab0(longlong param_1,longlong param_2)

{
  int iVar1;
  SIZE_T SVar2;
  DWORD aDStack_50 [2];
  _MEMORY_BASIC_INFORMATION _Stack_48;
  
  if ((*(char *)(param_1 + 0x99) != '\0') &&
     (SVar2 = VirtualQuery(*(LPCVOID *)(param_1 + 0x60),&_Stack_48,0x30), SVar2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x68) << 2;
    if (*(char *)(param_1 + 0x94) == '\0') {
      iVar1 = *(int *)(param_1 + 0x68) << 1;
    }
    VirtualProtect(*(LPVOID *)(param_1 + 0x60),(longlong)iVar1 * (longlong)param_2,
                   _Stack_48.Protect | 0x100,aDStack_50);
  }
  return;
}

