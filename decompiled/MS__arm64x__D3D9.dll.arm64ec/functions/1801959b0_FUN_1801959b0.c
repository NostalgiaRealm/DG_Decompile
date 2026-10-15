/*
 * FUN_1801959b0 at 1801959b0
 * undefined FUN_1801959b0(void)
 * Address ranges: 1801959b0-180195a37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801959b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x1cf10);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + 0x318 + lVar4 * 0x60);
      if (lVar1 != 0) {
        thunk_FUN_180223a04(lVar1,0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 8);
    if (*(short *)(lVar3 + 0xc) != 0) {
      uVar2 = thunk_FUN_1802239b4(0);
      thunk_FUN_180224008(*(undefined2 *)(lVar3 + 0xc),uVar2);
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        thunk_FUN_1802236bc();
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x1cf10) = 0;
  }
  return;
}

