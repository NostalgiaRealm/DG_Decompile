/*
 * FUN_180054920 at 180054920
 * undefined __fastcall FUN_180054920(longlong param_1, int param_2, int param_3, undefined8 * param_4)
 * Address ranges: 180054920-180054a72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180054920(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar3 = *(longlong *)(param_1 + 0xf6e0);
  piVar2 = (int *)(lVar3 + 0x12c0);
  FUN_1800fab60(piVar2);
  if (*(char *)(lVar3 + 0x14c4) != '\0') {
    uVar4 = (param_3 - param_2) * 4;
    uVar1 = uVar4 + 7;
    uVar5 = (uVar1 & 0xfffffff8) + 0x18;
    puVar6 = (undefined8 *)FUN_1800fab80((longlong)piVar2,uVar5);
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
      UNLOCK();
      puVar6[1] = (ulonglong)uVar5;
      puVar6[3] = param_1;
      *(int *)(puVar6 + 4) = param_2;
      puVar7 = (undefined8 *)((longlong)puVar6 + 0x2fU & 0xfffffffffffffff8);
      *(int *)((longlong)puVar6 + 0x24) = param_3;
      puVar6[2] = puVar7;
      FUN_1800fbec0(puVar7,param_4,(ulonglong)uVar4);
      puVar7 = (undefined8 *)(((ulonglong)uVar1 & 0xfffffff8) + (longlong)puVar7);
      *puVar7 = 0;
      *puVar6 = FUN_180054a74;
      *(undefined8 **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar7;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar2);
        SetEvent(*(HANDLE *)(lVar3 + 0x1340));
        return;
      }
      goto LAB_180054a56;
    }
    FUN_1800facb0(piVar2);
    Sleep(100);
    FUN_1800fab60(piVar2);
  }
  puVar6 = *(undefined8 **)(lVar3 + 0x14a0);
  *puVar6 = param_4;
  puVar6[1] = param_1;
  *(int *)(puVar6 + 2) = param_2;
  *(int *)((longlong)puVar6 + 0x14) = param_3;
  FUN_180054a74(puVar6);
LAB_180054a56:
  FUN_1800facb0(piVar2);
  return;
}

