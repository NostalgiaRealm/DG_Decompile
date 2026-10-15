/*
 * FUN_1800a357c at 1800a357c
 * undefined __fastcall FUN_1800a357c(longlong param_1)
 * Address ranges: 1800a357c-1800a3673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a357c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 0x28) * 0x1ac0 +
          *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1cf10);
  piVar1 = (int *)(lVar4 + 0x1bc0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar4 + 0x1dc4) != '\0') {
    puVar3 = (undefined8 *)FUN_1800fab80((longlong)piVar1,8);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar4 + 0x1dc0) = *(int *)(lVar4 + 0x1dc0) + 1;
      UNLOCK();
      puVar3[1] = 8;
      puVar5 = (undefined8 *)((longlong)puVar3 + 0x1fU & 0xfffffffffffffff8);
      puVar3[2] = param_1 + -0x20;
      *puVar5 = 0;
      *puVar3 = FUN_1800a3674;
      *(undefined8 **)(lVar4 + 0x1c50 + (ulonglong)*(uint *)(lVar4 + 0x1dbc) * 0x28) = puVar5;
      if (*(char *)(lVar4 + 0x1dc5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar4 + 0x1c40));
        return;
      }
      goto LAB_1800a365c;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar2 = *(longlong **)(lVar4 + 0x1da0);
  *plVar2 = param_1 + -0x20;
  FUN_1800a3674(plVar2);
LAB_1800a365c:
  FUN_1800facb0(piVar1);
  return;
}

