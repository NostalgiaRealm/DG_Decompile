/*
 * FUN_18003224c at 18003224c
 * undefined1 __fastcall FUN_18003224c(longlong param_1, undefined8 param_2)
 * Address ranges: 18003224c-1800322bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_18003224c(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar4 = 1;
  if (*(int *)(lVar2 + 0xa0) == 3 || *(int *)(lVar2 + 0xa0) == 4) {
    cVar3 = (**(code **)(**(longlong **)(lVar2 + 0x68) + 0x70))
                      (*(longlong **)(lVar2 + 0x68),param_2,*(undefined8 *)(lVar2 + 0x70));
    uVar1 = *(uint *)(lVar2 + 0x88);
    if (cVar3 == '\0') {
      if (uVar1 == 0xffffffff) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(**(longlong **)(lVar2 + 0x68) + 0x70))
                          (*(longlong **)(lVar2 + 0x68),param_2,
                           *(undefined8 *)(*(longlong *)(lVar2 + 0x78) + (ulonglong)uVar1 * 8));
      }
    }
    else {
      uVar4 = uVar1 == 0xffffffff;
    }
  }
  return uVar4;
}

