/*
 * FUN_180050ee8 at 180050ee8
 * undefined __fastcall FUN_180050ee8(longlong param_1, undefined4 param_2, undefined4 * param_3)
 * Address ranges: 180050ee8-180051038
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050ee8(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar6 = *(longlong *)(param_1 + 0xf6e0);
  uVar2 = param_3[3];
  uVar3 = param_3[2];
  piVar1 = (int *)(lVar6 + 0x12c0);
  uVar4 = param_3[1];
  uVar5 = *param_3;
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar6 + 0x14c4) != '\0') {
    puVar8 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x20);
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar6 + 0x14c0) = *(int *)(lVar6 + 0x14c0) + 1;
      UNLOCK();
      puVar8[1] = 0x20;
      puVar8[2] = param_1;
      puVar9 = (undefined8 *)((longlong)puVar8 + 0x33U & 0xfffffffffffffff8);
      *(undefined4 *)(puVar8 + 3) = param_2;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar5;
      *(undefined4 *)(puVar8 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0x24) = uVar3;
      *(undefined4 *)(puVar8 + 5) = uVar2;
      *puVar9 = 0;
      *puVar8 = FUN_18005103c;
      *(undefined8 **)(lVar6 + 0x1350 + (ulonglong)*(uint *)(lVar6 + 0x14bc) * 0x28) = puVar9;
      if (*(char *)(lVar6 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar6 + 0x1340));
        return;
      }
      goto LAB_180051012;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar7 = *(longlong **)(lVar6 + 0x14a0);
  *plVar7 = param_1;
  *(undefined4 *)(plVar7 + 1) = param_2;
  *(undefined4 *)((longlong)plVar7 + 0xc) = uVar5;
  *(undefined4 *)(plVar7 + 2) = uVar4;
  *(undefined4 *)((longlong)plVar7 + 0x14) = uVar3;
  *(undefined4 *)(plVar7 + 3) = uVar2;
  FUN_18005103c(plVar7);
LAB_180051012:
  FUN_1800facb0(piVar1);
  return;
}

