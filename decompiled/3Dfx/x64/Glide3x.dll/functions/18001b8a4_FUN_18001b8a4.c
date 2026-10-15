/*
 * FUN_18001b8a4 at 18001b8a4
 * undefined __fastcall FUN_18001b8a4(longlong param_1, undefined4 param_2, longlong param_3, longlong param_4)
 * Address ranges: 18001b8a4-18001ba17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b8a4(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 local_e8 [21];
  
  FUN_1800192c4(param_1 + 0x3668);
  *(undefined4 *)(param_1 + 0x4714) = param_2;
  uVar4 = FUN_18001b598(param_1 + 0x42a0,param_3,(undefined4 *)local_e8);
  FUN_18001b598(param_1 + 0x42a0,param_4,(undefined4 *)((longlong)local_e8 + (ulonglong)uVar4 * 4));
  lVar2 = *(longlong *)(param_1 + 0x3340);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005fc20(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    uVar7 = uVar4 * 8;
    puVar5 = (undefined8 *)FUN_18005fc40((longlong)piVar1,uVar7 + 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar5[1] = (ulonglong)(uVar7 + 0x18);
      puVar5[3] = param_1;
      puVar6 = (undefined8 *)((longlong)puVar5 + 0x2fU & 0xfffffffffffffff8);
      *(uint *)(puVar5 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar5 + 0x24) = param_2;
      puVar5[2] = puVar6;
      FUN_180061330(puVar6,local_e8,(ulonglong)uVar7);
      puVar6 = (undefined8 *)((longlong)puVar6 + (ulonglong)uVar7);
      *puVar6 = 0;
      *puVar5 = FUN_18001ba18;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar6;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005fd70(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18001b9fc;
    }
    FUN_18005fd70(piVar1);
    Sleep(100);
    FUN_18005fc20(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = (longlong)local_e8;
  plVar3[1] = param_1;
  *(uint *)(plVar3 + 2) = uVar4;
  *(undefined4 *)((longlong)plVar3 + 0x14) = param_2;
  FUN_18001ba18(plVar3);
LAB_18001b9fc:
  FUN_18005fd70(piVar1);
  return;
}

