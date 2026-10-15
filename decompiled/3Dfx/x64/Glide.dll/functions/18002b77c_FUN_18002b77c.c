/*
 * FUN_18002b77c at 18002b77c
 * undefined __fastcall FUN_18002b77c(longlong param_1)
 * Address ranges: 18002b77c-18002b864
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002b77c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005e510(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar4 = (undefined8 *)FUN_18005e530((longlong)piVar1,8);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar4[1] = 8;
      puVar5 = (undefined8 *)((longlong)puVar4 + 0x1fU & 0xfffffffffffffff8);
      puVar4[2] = param_1;
      *puVar5 = 0;
      *puVar4 = FUN_18002b868;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005e660(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18002b84d;
    }
    FUN_18005e660(piVar1);
    Sleep(100);
    FUN_18005e510(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  FUN_18002b868(plVar3);
LAB_18002b84d:
  FUN_18005e660(piVar1);
  return;
}

