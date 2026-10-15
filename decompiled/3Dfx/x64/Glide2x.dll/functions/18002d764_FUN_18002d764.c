/*
 * FUN_18002d764 at 18002d764
 * undefined __fastcall FUN_18002d764(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 18002d764-18002d89a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002d764(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_180026a88(param_1 + 0x34e8);
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005e070(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar4 = (undefined8 *)FUN_18005e090((longlong)piVar1,0x20);
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
      *puVar4 = FUN_18002d89c;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005e1c0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18002d886;
    }
    FUN_18005e1c0(piVar1);
    Sleep(100);
    FUN_18005e070(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
  *(undefined4 *)(plVar3 + 2) = param_4;
  *(undefined4 *)((longlong)plVar3 + 0x14) = param_5;
  *(undefined4 *)(plVar3 + 3) = param_6;
  FUN_18002d89c(plVar3);
LAB_18002d886:
  FUN_18005e1c0(piVar1);
  return;
}

