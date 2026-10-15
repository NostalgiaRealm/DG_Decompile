/*
 * FUN_100ce540 at 100ce540
 * undefined4 __thiscall FUN_100ce540(void * this, int param_1)
 * Address ranges: 100ce540-100ce614
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100ce540(void *this,int param_1)

{
  uint uVar1;
  DWORD DVar2;
  tagMSG local_20;
  
  if ((uint)((*(int *)((int)this + *(int *)((int)this + 0x124) * 0x14 + 0x6c) -
             *(int *)((int)this + *(int *)((int)this + 0x124) * 0x14 + 0x68)) +
            *(int *)((int)this + 0x118)) <= param_1 + 0xcU) {
    ResetEvent(*(HANDLE *)((int)this + *(int *)((int)this + 0x124) * 0x14 + 0x74));
    uVar1 = *(int *)((int)this + 0x124) + 1U & 7;
    DVar2 = WaitForSingleObject(*(HANDLE *)((int)this + uVar1 * 0x14 + 0x74),100);
    while (DVar2 != 0) {
      PeekMessageA(&local_20,(HWND)0x0,0,0,0x400000);
      if (*(char *)((int)this + 300) == '\0') {
        return 0;
      }
      DVar2 = WaitForSingleObject(*(HANDLE *)((int)this + uVar1 * 0x14 + 0x74),100);
    }
    **(undefined4 **)((int)this + uVar1 * 0x14 + 0x6c) = 0;
    *(undefined4 *)((int)this + uVar1 * 0x14 + 0x68) =
         *(undefined4 *)((int)this + uVar1 * 0x14 + 0x6c);
    *(uint *)((int)this + 0x124) = uVar1;
  }
  return *(undefined4 *)((int)this + *(int *)((int)this + 0x124) * 0x14 + 0x68);
}

