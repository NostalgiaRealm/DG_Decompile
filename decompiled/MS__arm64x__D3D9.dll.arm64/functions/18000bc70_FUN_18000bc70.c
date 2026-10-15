/*
 * FUN_18000bc70 at 18000bc70
 * undefined FUN_18000bc70(void)
 * Address ranges: 18000bc70-18000bdff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000bc70(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    if ((((param_2 == *(longlong *)(lVar2 + 0x30)) || (param_2 == *(longlong *)(lVar2 + 0x38))) ||
        (param_2 == *(longlong *)(lVar2 + 0x40))) ||
       ((param_2 == *(longlong *)(lVar2 + 0x48) || (param_2 == *(longlong *)(lVar2 + 0x50))))) {
LAB_18000bcfc:
      (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x28))();
    }
    else if (*(longlong *)(param_2 + 0x30) != 0) {
      uVar3 = 0;
      do {
        if (*(longlong *)(param_2 + 0x30) == *(longlong *)(lVar2 + 0x1338 + uVar3 * 8))
        goto LAB_18000bcfc;
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 < 0x10);
    }
    FUN_180024798(*(undefined8 *)(param_2 + 8));
  }
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (((param_1 == *(longlong *)(lVar2 + 0x30)) || (param_1 == *(longlong *)(lVar2 + 0x38))) ||
       ((param_1 == *(longlong *)(lVar2 + 0x40) ||
        ((param_1 == *(longlong *)(lVar2 + 0x48) || (param_1 == *(longlong *)(lVar2 + 0x50))))))) {
LAB_18000bd8c:
      (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x28))();
    }
    else if (*(longlong *)(param_1 + 0x30) != 0) {
      uVar3 = 0;
      do {
        if (*(longlong *)(param_1 + 0x30) == *(longlong *)(lVar2 + 0x1338 + uVar3 * 8))
        goto LAB_18000bd8c;
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 < 0x10);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(uint *)(lVar2 + 0x88) != 0xffffffff) {
      (**(code **)(**(longlong **)(lVar2 + 0x68) + 0x80))
                (*(longlong **)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70),
                 *(undefined8 *)
                  (*(longlong *)(lVar2 + 0x78) + (ulonglong)*(uint *)(lVar2 + 0x88) * 8));
      *(undefined4 *)(lVar2 + 0x88) = 0xffffffff;
    }
    FUN_180024798(*(undefined8 *)(param_1 + 8));
    lVar2 = *(longlong *)(param_1 + 8);
    (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x30))
              (*(longlong **)(lVar2 + 0x70),*(undefined4 *)(lVar2 + 0x94),
               *(undefined4 *)(lVar2 + 0x98),1);
  }
  return;
}

