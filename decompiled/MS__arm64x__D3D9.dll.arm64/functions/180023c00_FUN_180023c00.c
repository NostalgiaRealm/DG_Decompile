/*
 * FUN_180023c00 at 180023c00
 * undefined FUN_180023c00(void)
 * Address ranges: 180023c00-180023c8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180023c00(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar4 + 0xa0) - 3U < 2) {
    cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x68) + 0x70))
                      (*(longlong **)(lVar4 + 0x68),param_2,*(undefined8 *)(lVar4 + 0x70));
    uVar1 = *(uint *)(lVar4 + 0x88);
    if (cVar2 == '\0') {
      if (uVar1 == 0xffffffff) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x68) + 0x70))
                          (*(longlong **)(lVar4 + 0x68),param_2,
                           *(undefined8 *)(*(longlong *)(lVar4 + 0x78) + (ulonglong)uVar1 * 8));
      }
    }
    else {
      uVar3 = (ulonglong)(uVar1 == 0xffffffff);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

