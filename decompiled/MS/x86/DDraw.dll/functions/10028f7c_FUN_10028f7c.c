/*
 * FUN_10028f7c at 10028f7c
 * undefined1 __stdcall FUN_10028f7c(void)
 * Address ranges: 10028f7c-10028fc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10028f7c(void)

{
  WNDPROC pWVar1;
  uint uVar2;
  undefined4 uVar3;
  void *this;
  undefined1 uVar4;
  undefined **local_8;
  
  uVar4 = 0;
  pWVar1 = FUN_1005d3eb();
  if (pWVar1 != (WNDPROC)0x0) {
    local_8 = &PTR_PTR_1006c104;
    uVar2 = FUN_1002779a(pWVar1 + 0x54,(int *)&local_8);
    if (uVar2 == 0xffffffff) {
      uVar3 = FUN_1000138a(this,&local_8);
      uVar4 = (undefined1)uVar3;
    }
    else {
      uVar4 = 1;
    }
    FUN_1005d470((undefined4 *)pWVar1);
  }
  return uVar4;
}

