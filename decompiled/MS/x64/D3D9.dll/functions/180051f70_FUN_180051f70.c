/*
 * FUN_180051f70 at 180051f70
 * undefined __fastcall FUN_180051f70(longlong param_1, int param_2, int param_3, undefined8 * param_4)
 * Address ranges: 180051f70-180052097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051f70(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    uVar4 = (param_3 - param_2) * 0x10;
    puVar3 = (undefined8 *)FUN_1800fab80((longlong)piVar1,uVar4 + 0x18);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar3[1] = (ulonglong)(uVar4 + 0x18);
      puVar3[3] = param_1;
      puVar5 = (undefined8 *)((longlong)puVar3 + 0x2fU & 0xfffffffffffffff8);
      *(int *)(puVar3 + 4) = param_2;
      *(int *)((longlong)puVar3 + 0x24) = param_3;
      puVar3[2] = puVar5;
      FUN_1800fbec0(puVar5,param_4,(ulonglong)uVar4);
      *(undefined8 *)((ulonglong)uVar4 + (longlong)puVar5) = 0;
      *puVar3 = FUN_180052098;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) =
           (undefined8 *)((ulonglong)uVar4 + (longlong)puVar5);
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18005207f;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x14a0);
  *puVar3 = param_4;
  puVar3[1] = param_1;
  *(int *)(puVar3 + 2) = param_2;
  *(int *)((longlong)puVar3 + 0x14) = param_3;
  FUN_180052098(puVar3);
LAB_18005207f:
  FUN_1800facb0(piVar1);
  return;
}

