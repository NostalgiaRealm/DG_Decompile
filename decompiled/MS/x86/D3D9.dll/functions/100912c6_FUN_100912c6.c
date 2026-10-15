/*
 * FUN_100912c6 at 100912c6
 * undefined1 __stdcall FUN_100912c6(void)
 * Address ranges: 100912c6-1009130c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100912c6(void)

{
  WNDPROC pWVar1;
  uint uVar2;
  undefined4 uVar3;
  void *this;
  undefined1 uVar4;
  undefined **local_8;
  
  uVar4 = 0;
  pWVar1 = FUN_100cc325();
  if (pWVar1 != (WNDPROC)0x0) {
    local_8 = &PTR_PTR_100de964;
    uVar2 = FUN_100086bd(pWVar1 + 0x54,(int *)&local_8);
    if (uVar2 == 0xffffffff) {
      uVar3 = FUN_10003d8f(this,&local_8);
      uVar4 = (undefined1)uVar3;
    }
    else {
      uVar4 = 1;
    }
    FUN_100cc3aa((undefined4 *)pWVar1);
  }
  return uVar4;
}

