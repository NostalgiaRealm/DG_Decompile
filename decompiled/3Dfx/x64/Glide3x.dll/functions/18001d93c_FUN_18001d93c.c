/*
 * FUN_18001d93c at 18001d93c
 * undefined __fastcall FUN_18001d93c(longlong param_1, undefined8 * param_2)
 * Address ranges: 18001d93c-18001da41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d93c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x3340);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005fc20(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar4 = (undefined8 *)FUN_18005fc40((longlong)piVar1,0xc10);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar4[1] = 0xc10;
      puVar4[3] = param_1;
      puVar5 = (undefined8 *)((longlong)puVar4 + 0x27U & 0xfffffffffffffff8);
      puVar4[2] = puVar5;
      FUN_180061330(puVar5,param_2,0xc00);
      puVar5[0x180] = 0;
      *puVar4 = FUN_18001da44;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) =
           puVar5 + 0x180;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005fd70(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18001da2f;
    }
    FUN_18005fd70(piVar1);
    Sleep(100);
    FUN_18005fc20(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = (longlong)param_2;
  plVar3[1] = param_1;
  FUN_18001da44(plVar3);
LAB_18001da2f:
  FUN_18005fd70(piVar1);
  return;
}

