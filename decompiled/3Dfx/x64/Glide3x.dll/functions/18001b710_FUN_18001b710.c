/*
 * FUN_18001b710 at 18001b710
 * undefined __fastcall FUN_18001b710(longlong param_1, undefined4 param_2, longlong param_3)
 * Address ranges: 18001b710-18001b886
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b710(longlong param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 local_98 [11];
  
  FUN_1800192c4(param_1 + 0x3668);
  *(undefined4 *)(param_1 + 0x4714) = param_2;
  iVar4 = FUN_18001b598(param_1 + 0x42a0,param_3,(undefined4 *)local_98);
  lVar2 = *(longlong *)(param_1 + 0x3340);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005fc20(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    uVar8 = iVar4 * 4 + 7;
    uVar5 = (uVar8 & 0xfffffff8) + 0x18;
    puVar6 = (undefined8 *)FUN_18005fc40((longlong)piVar1,uVar5);
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar6[1] = (ulonglong)uVar5;
      puVar6[3] = param_1;
      *(int *)(puVar6 + 4) = iVar4;
      puVar7 = (undefined8 *)((longlong)puVar6 + 0x2fU & 0xfffffffffffffff8);
      *(undefined4 *)((longlong)puVar6 + 0x24) = param_2;
      puVar6[2] = puVar7;
      FUN_180061330(puVar7,local_98,(ulonglong)(uint)(iVar4 * 4));
      puVar7 = (undefined8 *)(((ulonglong)uVar8 & 0xfffffff8) + (longlong)puVar7);
      *puVar7 = 0;
      *puVar6 = FUN_18001b888;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar7;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005fd70(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18001b86e;
    }
    FUN_18005fd70(piVar1);
    Sleep(100);
    FUN_18005fc20(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = (longlong)local_98;
  plVar3[1] = param_1;
  *(int *)(plVar3 + 2) = iVar4;
  *(undefined4 *)((longlong)plVar3 + 0x14) = param_2;
  FUN_18001b888(plVar3);
LAB_18001b86e:
  FUN_18005fd70(piVar1);
  return;
}

