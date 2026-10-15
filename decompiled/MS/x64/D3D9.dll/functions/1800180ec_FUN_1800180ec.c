/*
 * FUN_1800180ec at 1800180ec
 * undefined8 __fastcall FUN_1800180ec(longlong param_1)
 * Address ranges: 1800180ec-18001818d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800180ec(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  lVar1 = FUN_1800fbccc((ulonglong)(*(int *)(param_1 + 0x20) + 0x40) + 8);
  puVar2 = (undefined1 *)(lVar1 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)(puVar2 + -8) = lVar1;
  *(undefined1 **)(param_1 + 8) = puVar2;
  puVar2 = FUN_1800fbea0(puVar2,0,(ulonglong)*(uint *)(param_1 + 0x20));
  if (((*(uint *)(param_1 + 0x5c) < 2) && ((*(uint *)(param_1 + 0x50) & 0x10) == 0)) &&
     (*(char *)(param_1 + 0x88) == '\0')) {
    uVar3 = *(uint *)(param_1 + 0x50) & 0x200;
    uVar4 = 2;
    if (*(uint *)(param_1 + 0x5c) == 1) {
      uVar4 = 0;
    }
    if (uVar3 != 0) {
      uVar4 = 1;
    }
    puVar2 = (undefined1 *)
             (**(code **)(**(longlong **)(param_1 + 0x78) + 0x20))
                       (*(longlong **)(param_1 + 0x78),
                        (-(uint)(uVar3 != 0) & 0xff0) + 0x10 + *(int *)(param_1 + 0x20),uVar4);
    *(undefined1 **)(param_1 + 0x60) = puVar2;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
}

