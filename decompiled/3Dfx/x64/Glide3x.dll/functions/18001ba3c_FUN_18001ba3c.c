/*
 * FUN_18001ba3c at 18001ba3c
 * undefined __fastcall FUN_18001ba3c(longlong param_1, undefined4 param_2, longlong param_3, longlong param_4, longlong param_5)
 * Address ranges: 18001ba3c-18001bbfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ba3c(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_138 [31];
  
  FUN_1800192c4(param_1 + 0x3668);
  lVar1 = param_1 + 0x42a0;
  *(undefined4 *)(param_1 + 0x4714) = param_2;
  uVar4 = FUN_18001b598(lVar1,param_3,(undefined4 *)local_138);
  FUN_18001b598(lVar1,param_4,(undefined4 *)((longlong)local_138 + (ulonglong)uVar4 * 4));
  FUN_18001b598(lVar1,param_5,(undefined4 *)((longlong)local_138 + (ulonglong)(uVar4 * 2) * 4));
  lVar1 = *(longlong *)(param_1 + 0x3340);
  piVar2 = (int *)(lVar1 + 0x12c0);
  FUN_18005fc20(piVar2);
  if (*(char *)(lVar1 + 0x14c4) != '\0') {
    uVar8 = uVar4 * 0xc + 7;
    uVar7 = (uVar8 & 0xfffffff8) + 0x18;
    puVar5 = (undefined8 *)FUN_18005fc40((longlong)piVar2,uVar7);
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar1 + 0x14c0) = *(int *)(lVar1 + 0x14c0) + 1;
      UNLOCK();
      puVar5[1] = (ulonglong)uVar7;
      puVar5[3] = param_1;
      *(uint *)(puVar5 + 4) = uVar4;
      puVar6 = (undefined8 *)((longlong)puVar5 + 0x2fU & 0xfffffffffffffff8);
      *(undefined4 *)((longlong)puVar5 + 0x24) = param_2;
      puVar5[2] = puVar6;
      FUN_180061330(puVar6,local_138,(ulonglong)(uVar4 * 0xc));
      puVar6 = (undefined8 *)(((ulonglong)uVar8 & 0xfffffff8) + (longlong)puVar6);
      *puVar6 = 0;
      *puVar5 = FUN_18001bc00;
      *(undefined8 **)(lVar1 + 0x1350 + (ulonglong)*(uint *)(lVar1 + 0x14bc) * 0x28) = puVar6;
      if (*(char *)(lVar1 + 0x14c5) != '\0') {
        FUN_18005fd70(piVar2);
        SetEvent(*(HANDLE *)(lVar1 + 0x1340));
        return;
      }
      goto LAB_18001bbe2;
    }
    FUN_18005fd70(piVar2);
    Sleep(100);
    FUN_18005fc20(piVar2);
  }
  plVar3 = *(longlong **)(lVar1 + 0x14a0);
  *plVar3 = (longlong)local_138;
  plVar3[1] = param_1;
  *(uint *)(plVar3 + 2) = uVar4;
  *(undefined4 *)((longlong)plVar3 + 0x14) = param_2;
  FUN_18001bc00(plVar3);
LAB_18001bbe2:
  FUN_18005fd70(piVar2);
  return;
}

