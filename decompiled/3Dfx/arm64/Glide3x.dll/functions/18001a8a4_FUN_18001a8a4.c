/*
 * FUN_18001a8a4 at 18001a8a4
 * undefined __cdecl FUN_18001a8a4(longlong param_1)
 * Address ranges: 18001a8a4-18001a97b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a8a4(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0xc28);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_180048a90(puVar2);
    FUN_180063700(puVar2);
  }
  lVar3 = 0;
  do {
    FUN_180048418((longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x19d8),
                  *(longlong *)(param_1 + 0xc10 + lVar3 * 8));
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  lVar3 = 0;
  do {
    uVar1 = FUN_180048418((longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x19d8),
                          *(longlong *)(param_1 + 0xb58 + lVar3 * 8));
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x17);
  uVar1 = FUN_18004cac0(uVar1,3,param_1 + 0xc10);
  FUN_18004cac0(uVar1,0x17,param_1 + 0xb58);
  lVar3 = 0;
  do {
    if (*(longlong *)(param_1 + 0x220 + lVar3 * 0x170) != 0) {
      FUN_1800275e8(lVar3 * 0x170 + param_1 + 0x148);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 7);
  return;
}

