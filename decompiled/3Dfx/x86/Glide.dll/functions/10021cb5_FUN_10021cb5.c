/*
 * FUN_10021cb5 at 10021cb5
 * undefined __thiscall FUN_10021cb5(void * this, int param_1)
 * Address ranges: 10021cb5-10021d0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10021cb5(void *this,int param_1)

{
  SIZE_T SVar1;
  _MEMORY_BASIC_INFORMATION local_24;
  DWORD local_8;
  
  if (*(char *)((int)this + 0x81) != '\0') {
    SVar1 = VirtualQuery(*(LPCVOID *)((int)this + 0x54),&local_24,0x1c);
    if (SVar1 != 0) {
      VirtualProtect(*(LPVOID *)((int)this + 0x54),
                     ((uint)(*(char *)((int)this + 0x7c) != '\0') * 2 + 2) *
                     *(int *)((int)this + 0x58) * param_1,local_24.Protect | 0x100,&local_8);
    }
  }
  return;
}

