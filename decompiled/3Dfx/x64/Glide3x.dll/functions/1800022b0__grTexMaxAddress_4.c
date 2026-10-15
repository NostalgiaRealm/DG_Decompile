/*
 * _grTexMaxAddress@4 at 1800022b0
 * int __fastcall _grTexMaxAddress@4(int param_1)
 * Address ranges: 1800022b0-180002317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grTexMaxAddress_4(int param_1)

{
  char cVar1;
  int iVar2;
  WNDPROC pWVar3;
  
                    /* 0x22b0  82  _grTexMaxAddress@4
                       0x22b0  182  grTexMaxAddress */
  pWVar3 = (WNDPROC)FUN_1800069ac();
  cVar1 = FUN_180006b64(pWVar3);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (param_1 < *(int *)(*(longlong *)(pWVar3 + 0x30) + 0x833)) {
      if (pWVar3[100] == (WNDPROC)0x0) {
        iVar2 = *(int *)(*(longlong *)(pWVar3 + 0x30) + 0x82f);
      }
      else {
        LOCK();
        *(int *)(pWVar3 + 0x60) = *(int *)(pWVar3 + 0x60) + 1;
        UNLOCK();
        iVar2 = *(int *)((longlong)param_1 * 0x4e8 + 0x334 + *(longlong *)(pWVar3 + 0x18));
        LOCK();
        *(int *)(pWVar3 + 0x60) = *(int *)(pWVar3 + 0x60) + -1;
        UNLOCK();
      }
    }
    iVar2 = iVar2 + -0x10;
  }
  return iVar2;
}

