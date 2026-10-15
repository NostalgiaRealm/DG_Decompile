/*
 * FUN_1800141f4 at 1800141f4
 * undefined8 __fastcall FUN_1800141f4(longlong param_1)
 * Address ranges: 1800141f4-1800142a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800141f4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  byte bVar4;
  uint uVar5;
  
  lVar2 = FUN_1800fbccc((ulonglong)(*(int *)(param_1 + 0x20) + 0x40) + 8);
  puVar3 = (undefined1 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)(puVar3 + -8) = lVar2;
  *(undefined1 **)(param_1 + 8) = puVar3;
  puVar3 = FUN_1800fbea0(puVar3,0,(ulonglong)*(uint *)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 3) {
    bVar4 = 2;
    uVar5 = *(uint *)(param_1 + 0x50) & 0x200;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      bVar4 = -((*(uint *)(param_1 + 0x50) & 0x10) != 0) & 3;
    }
    else if (iVar1 == 2) {
      bVar4 = 3;
    }
    if (uVar5 != 0) {
      bVar4 = 1;
    }
    puVar3 = (undefined1 *)
             (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))
                       (*(longlong **)(param_1 + 0x68),
                        (-(uint)(uVar5 != 0) & 0x1000) + *(int *)(param_1 + 0x20),bVar4,
                        *(int *)(param_1 + 0x54) == 0x66);
    *(undefined1 **)(param_1 + 0x60) = puVar3;
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}

