/*
 * FUN_18001e9f0 at 18001e9f0
 * undefined __cdecl FUN_18001e9f0(longlong param_1, undefined4 param_2, longlong param_3)
 * Address ranges: 18001e9f0-18001eb4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e9f0(longlong param_1,undefined4 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 auStack_a0 [10];
  
  FUN_18001bf90(param_1 + 0x3668);
  *(undefined4 *)(param_1 + 0x4714) = param_2;
  iVar3 = FUN_18001e900(param_1 + 0x42a0,param_3,auStack_a0);
  lVar7 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar7 + 0x12c0));
  if (*(char *)(lVar7 + 0x14c4) != '\0') {
    uVar1 = iVar3 * 4 + 7;
    uVar2 = (uVar1 & 0xfffffff8) + 0x18;
    puVar4 = (undefined8 *)FUN_180038310(lVar7 + 0x12c0,uVar2);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar7 + 0x14c0));
      puVar4[1] = (ulonglong)uVar2;
      puVar4[3] = param_1;
      *(int *)(puVar4 + 4) = iVar3;
      *(undefined4 *)((longlong)puVar4 + 0x24) = param_2;
      puVar8 = (undefined8 *)((longlong)puVar4 + 0x2fU & 0xfffffffffffffff8);
      puVar4[2] = puVar8;
      thunk_FUN_1800010d8(puVar8,auStack_a0,(ulonglong)(uint)(iVar3 * 4));
      uVar6 = (ulonglong)uVar1 & 0xfffffff8;
      *(undefined8 *)(uVar6 + (longlong)puVar8) = 0;
      *puVar4 = FUN_18001eb50;
      *(ulonglong *)(lVar7 + (ulonglong)*(uint *)(lVar7 + 0x14bc) * 0x28 + 0x1350) =
           uVar6 + (longlong)puVar8;
      if (*(char *)(lVar7 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar7 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar7 + 0x1340));
        return;
      }
      goto LAB_18001eb30;
    }
    *(undefined4 *)(lVar7 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar7 + 0x12c0));
  }
  plVar5 = *(longlong **)(lVar7 + 0x14a0);
  *plVar5 = (longlong)auStack_a0;
  plVar5[1] = param_1;
  *(int *)(plVar5 + 2) = iVar3;
  *(undefined4 *)((longlong)plVar5 + 0x14) = param_2;
  FUN_18001eb50(plVar5);
LAB_18001eb30:
  *(undefined4 *)(lVar7 + 0x12c0) = 0;
  return;
}

