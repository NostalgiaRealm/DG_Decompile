/*
 * FUN_1007a797 at 1007a797
 * undefined1 __stdcall FUN_1007a797(void)
 * Address ranges: 1007a797-1007a7dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1007a797(void)

{
  WNDPROC pWVar1;
  uint uVar2;
  undefined4 uVar3;
  void *this;
  undefined1 uVar4;
  undefined **local_8;
  
  uVar4 = 0;
  pWVar1 = FUN_100a9a56();
  if (pWVar1 != (WNDPROC)0x0) {
    local_8 = &PTR_PTR_100ba094;
    uVar2 = FUN_10007b6a(pWVar1 + 0x54,(int *)&local_8);
    if (uVar2 == 0xffffffff) {
      uVar3 = FUN_10003787(this,&local_8);
      uVar4 = (undefined1)uVar3;
    }
    else {
      uVar4 = 1;
    }
    FUN_100a9adb((undefined4 *)pWVar1);
  }
  return uVar4;
}

