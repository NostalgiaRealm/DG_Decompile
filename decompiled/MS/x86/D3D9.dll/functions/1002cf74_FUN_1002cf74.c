/*
 * FUN_1002cf74 at 1002cf74
 * undefined __thiscall FUN_1002cf74(void * this, int param_1, DWORD param_2)
 * Address ranges: 1002cf74-1002d00b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cf74(void *this,int param_1,DWORD param_2)

{
  DWORD DVar1;
  SIZE_T SVar2;
  uint uVar3;
  LPVOID lpAddress;
  _MEMORY_BASIC_INFORMATION local_20;
  
  DVar1 = param_2;
  if ((*(int *)((int)this + 0x20) != 0) &&
     ((((*(uint *)((int)this + 0x34) >> 1 & 1) == 0 || (*(int *)((int)this + 0x24) != 0)) &&
      ((*(uint *)((int)this + 0x34) >> 3 & 1) == 0)))) {
    SVar2 = VirtualQuery(*(LPCVOID *)((int)this + 0x20),&local_20,0x1c);
    if (SVar2 != 0) {
      if (param_1 == 0 && DVar1 == 0) {
        SVar2 = (uint)*(ushort *)((int)this + 0xc) * *(int *)((int)this + 0x14);
        lpAddress = *(LPVOID *)((int)this + 0x20);
      }
      else {
        SVar2 = (DVar1 - param_1) * 0x1000;
        lpAddress = (LPVOID)(param_1 * 0x1000 + *(int *)((int)this + 0x20));
      }
      VirtualProtect(lpAddress,SVar2,local_20.Protect | 0x100,&param_2);
      if (*(int *)((int)this + 0x24) == 0) {
        uVar3 = *(uint *)((int)this + 0x34) | 2;
      }
      else {
        uVar3 = *(uint *)((int)this + 0x34) & 0xfffffffd;
      }
      *(uint *)((int)this + 0x34) = uVar3;
    }
  }
  return;
}

