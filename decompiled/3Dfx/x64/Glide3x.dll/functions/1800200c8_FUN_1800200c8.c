/*
 * FUN_1800200c8 at 1800200c8
 * undefined __fastcall FUN_1800200c8(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1800200c8-1800201fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800200c8(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1800192c4(param_1 + 0x3668);
  lVar2 = *(longlong *)(param_1 + 0x3340);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005fc20(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar4 = (undefined8 *)FUN_18005fc40((longlong)piVar1,0x20);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar4[1] = 0x20;
      puVar5 = (undefined8 *)((longlong)puVar4 + 0x33U & 0xfffffffffffffff8);
      puVar4[2] = param_1;
      *(undefined4 *)(puVar4 + 3) = param_2;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = param_3;
      *(undefined4 *)(puVar4 + 4) = param_4;
      *(undefined4 *)((longlong)puVar4 + 0x24) = param_5;
      *(undefined4 *)(puVar4 + 5) = param_6;
      *puVar5 = 0;
      *puVar4 = FUN_180020200;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005fd70(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_1800201ea;
    }
    FUN_18005fd70(piVar1);
    Sleep(100);
    FUN_18005fc20(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
  *(undefined4 *)(plVar3 + 2) = param_4;
  *(undefined4 *)((longlong)plVar3 + 0x14) = param_5;
  *(undefined4 *)(plVar3 + 3) = param_6;
  FUN_180020200(plVar3);
LAB_1800201ea:
  FUN_18005fd70(piVar1);
  return;
}

