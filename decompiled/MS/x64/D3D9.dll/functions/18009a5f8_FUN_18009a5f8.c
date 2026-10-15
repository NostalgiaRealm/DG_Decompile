/*
 * FUN_18009a5f8 at 18009a5f8
 * undefined __fastcall FUN_18009a5f8(longlong param_1, longlong param_2, uint param_3, int param_4)
 * Address ranges: 18009a5f8-18009a73f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009a5f8(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_3 == 0xffffffff) {
    return;
  }
  uVar4 = FUN_1800fb1b0(*(longlong *)(param_1 + 0xc) + 0x12c0);
  lVar2 = *(longlong *)(param_1 + 0xc);
  if ((char)uVar4 != '\0') {
    FUN_1800e1a24(param_2,param_3,param_4,*(longlong **)(*(longlong *)(lVar2 + 0x1500) + 0x18),
                  *(ulonglong *)(*(longlong *)(lVar2 + 0x1508) + 0xb78));
    return;
  }
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar5 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x18);
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar5[1] = 0x18;
      puVar5[2] = lVar2;
      puVar6 = (undefined8 *)((longlong)puVar5 + 0x2fU & 0xfffffffffffffff8);
      puVar5[3] = param_2;
      *(uint *)(puVar5 + 4) = param_3;
      *(int *)((longlong)puVar5 + 0x24) = param_4;
      *puVar6 = 0;
      *puVar5 = FUN_18009a740;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar6;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18009a700;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = lVar2;
  plVar3[1] = param_2;
  *(uint *)(plVar3 + 2) = param_3;
  *(int *)((longlong)plVar3 + 0x14) = param_4;
  FUN_18009a740(plVar3);
LAB_18009a700:
  FUN_1800facb0(piVar1);
  return;
}

