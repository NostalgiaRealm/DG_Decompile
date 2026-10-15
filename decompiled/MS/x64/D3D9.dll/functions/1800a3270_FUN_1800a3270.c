/*
 * FUN_1800a3270 at 1800a3270
 * undefined __fastcall FUN_1800a3270(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1800a3270-1800a33a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a3270(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar6 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x10) * 0x1ac0 +
          *(longlong *)(param_1 + -0xb0);
  uVar4 = FUN_1800a2bc8(param_1 + -0x100);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + -0xb0);
  piVar1 = (int *)(lVar6 + 0x1bc0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar6 + 0x1dc4) != '\0') {
    puVar5 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x20);
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar6 + 0x1dc0) = *(int *)(lVar6 + 0x1dc0) + 1;
      UNLOCK();
      puVar5[1] = 0x20;
      puVar5[2] = uVar3;
      puVar7 = (undefined8 *)((longlong)puVar5 + 0x37U & 0xfffffffffffffff8);
      puVar5[3] = uVar4;
      puVar5[4] = uVar2;
      *(undefined4 *)(puVar5 + 5) = param_2;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = param_3;
      *puVar7 = 0;
      *puVar5 = FUN_1800a33a4;
      *(undefined8 **)(lVar6 + 0x1c50 + (ulonglong)*(uint *)(lVar6 + 0x1dbc) * 0x28) = puVar7;
      if (*(char *)(lVar6 + 0x1dc5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar6 + 0x1c40));
        return;
      }
      goto LAB_1800a338b;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  puVar5 = *(undefined8 **)(lVar6 + 0x1da0);
  *puVar5 = uVar3;
  puVar5[1] = uVar4;
  puVar5[2] = uVar2;
  *(undefined4 *)(puVar5 + 3) = param_2;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = param_3;
  FUN_1800a33a4(puVar5);
LAB_1800a338b:
  FUN_1800facb0(piVar1);
  return;
}

