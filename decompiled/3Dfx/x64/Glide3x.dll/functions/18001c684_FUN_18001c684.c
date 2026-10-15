/*
 * FUN_18001c684 at 18001c684
 * undefined __fastcall FUN_18001c684(longlong param_1, uint param_2, undefined4 param_3, int param_4)
 * Address ranges: 18001c684-18001c7a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c684(longlong param_1,uint param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x3340);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005fc20(piVar1);
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_18001c758:
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    *(uint *)(plVar3 + 1) = param_2;
    *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
    *(int *)(plVar3 + 2) = param_4;
    FUN_18001c7ac(plVar3);
  }
  else {
    puVar4 = (undefined8 *)FUN_18005fc40((longlong)piVar1,0x18);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_18005fd70(piVar1);
      Sleep(100);
      FUN_18005fc20(piVar1);
      goto LAB_18001c758;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar4[1] = 0x18;
    puVar4[2] = param_1;
    puVar5 = (undefined8 *)((longlong)puVar4 + 0x2bU & 0xfffffffffffffff8);
    *(uint *)(puVar4 + 3) = param_2;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = param_3;
    *(int *)(puVar4 + 4) = param_4;
    *puVar5 = 0;
    *puVar4 = FUN_18001c7ac;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
    if (*(char *)(lVar2 + 0x14c5) != '\0') {
      FUN_18005fd70(piVar1);
      SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      goto LAB_18001c77a;
    }
  }
  FUN_18005fd70(piVar1);
LAB_18001c77a:
  FUN_180009388(param_1 + 0x42a0,param_1 + 0x45c0,param_2,param_3,param_4 != 0);
  return;
}

