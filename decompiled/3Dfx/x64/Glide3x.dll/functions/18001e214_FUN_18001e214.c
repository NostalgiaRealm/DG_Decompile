/*
 * FUN_18001e214 at 18001e214
 * longlong __fastcall FUN_18001e214(longlong param_1, longlong param_2)
 * Address ranges: 18001e214-18001e31c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18001e214(longlong param_1,longlong param_2)

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
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_18001e2e3:
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    plVar3[1] = param_2;
    FUN_18001e320(plVar3);
  }
  else {
    puVar4 = (undefined8 *)FUN_18005fc40((longlong)piVar1,0x10);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_18005fd70(piVar1);
      Sleep(100);
      FUN_18005fc20(piVar1);
      goto LAB_18001e2e3;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar4[1] = 0x10;
    puVar4[2] = param_1;
    puVar5 = (undefined8 *)((longlong)puVar4 + 0x27U & 0xfffffffffffffff8);
    puVar4[3] = param_2;
    *puVar5 = 0;
    *puVar4 = FUN_18001e320;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
    if (*(char *)(lVar2 + 0x14c5) != '\0') {
      FUN_18005fd70(piVar1);
      SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      goto LAB_18001e2fe;
    }
  }
  FUN_18005fd70(piVar1);
LAB_18001e2fe:
  FUN_1800602b0(*(longlong *)(param_1 + 0x3340) + 0x12c0);
  return param_2;
}

