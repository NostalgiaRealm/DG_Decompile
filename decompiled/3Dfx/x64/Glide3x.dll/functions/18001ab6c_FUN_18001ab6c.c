/*
 * FUN_18001ab6c at 18001ab6c
 * undefined __fastcall FUN_18001ab6c(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18001ab6c-18001ac7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ab6c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    puVar4 = (undefined8 *)FUN_18005fc40((longlong)piVar1,0x18);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar4[1] = 0x18;
      puVar4[2] = param_1;
      puVar5 = (undefined8 *)((longlong)puVar4 + 0x2bU & 0xfffffffffffffff8);
      *(undefined4 *)(puVar4 + 3) = param_2;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = param_3;
      *(undefined4 *)(puVar4 + 4) = param_4;
      *puVar5 = 0;
      *puVar4 = FUN_18001ac7c;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005fd70(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18001ac66;
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
  FUN_18001ac7c(plVar3);
LAB_18001ac66:
  FUN_18005fd70(piVar1);
  return;
}

