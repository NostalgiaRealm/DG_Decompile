/*
 * FUN_180027bf8 at 180027bf8
 * undefined __cdecl FUN_180027bf8(longlong param_1)
 * Address ranges: 180027bf8-180027c03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027bf8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x668);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_180045d50(puVar2);
    FUN_180060a18(puVar2);
  }
  lVar3 = 0;
  do {
    FUN_1800456d8((longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x19d8),
                  *(longlong *)(param_1 + 0x650 + lVar3 * 8));
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  lVar3 = 0;
  do {
    uVar1 = FUN_1800456d8((longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x19d8),
                          *(longlong *)(param_1 + 0x598 + lVar3 * 8));
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x17);
  uVar1 = FUN_180049d80(uVar1,3,param_1 + 0x650);
  FUN_180049d80(uVar1,0x17,param_1 + 0x598);
  lVar3 = 0;
  do {
    if (*(longlong *)(param_1 + 0x220 + lVar3 * 0x170) != 0) {
      FUN_180033a80(lVar3 * 0x170 + param_1 + 0x148);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  return;
}

