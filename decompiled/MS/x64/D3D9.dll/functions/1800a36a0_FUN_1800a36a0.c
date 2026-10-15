/*
 * FUN_1800a36a0 at 1800a36a0
 * undefined __fastcall FUN_1800a36a0(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 1800a36a0-1800a37f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a36a0(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar5 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28) * 0x1ac0 +
          *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1cf10);
  piVar1 = (int *)(lVar5 + 0x1bc0);
  uVar3 = FUN_1800fb1b0((longlong)piVar1);
  if ((char)uVar3 != '\0') {
    FUN_1800e1a24(param_2,param_3,2,*(longlong **)(*(longlong *)(lVar5 + 0x1e00) + 0x18),
                  *(ulonglong *)(*(longlong *)(lVar5 + 0x1e08) + 0xb78));
    return;
  }
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar5 + 0x1dc4) != '\0') {
    puVar4 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x18);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar5 + 0x1dc0) = *(int *)(lVar5 + 0x1dc0) + 1;
      UNLOCK();
      puVar4[1] = 0x18;
      puVar4[2] = lVar5 + 0x900;
      puVar6 = (undefined8 *)((longlong)puVar4 + 0x2fU & 0xfffffffffffffff8);
      puVar4[3] = param_2;
      *(uint *)(puVar4 + 4) = param_3;
      *(undefined4 *)((longlong)puVar4 + 0x24) = 2;
      *puVar6 = 0;
      *puVar4 = FUN_18009a740;
      *(undefined8 **)(lVar5 + 0x1c50 + (ulonglong)*(uint *)(lVar5 + 0x1dbc) * 0x28) = puVar6;
      if (*(char *)(lVar5 + 0x1dc5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar5 + 0x1c40));
        return;
      }
      goto LAB_1800a37b2;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar2 = *(longlong **)(lVar5 + 0x1da0);
  *plVar2 = lVar5 + 0x900;
  plVar2[1] = param_2;
  *(uint *)(plVar2 + 2) = param_3;
  *(undefined4 *)((longlong)plVar2 + 0x14) = 2;
  FUN_18009a740(plVar2);
LAB_1800a37b2:
  FUN_1800facb0(piVar1);
  return;
}

