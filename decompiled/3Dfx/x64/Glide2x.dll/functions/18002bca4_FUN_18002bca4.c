/*
 * FUN_18002bca4 at 18002bca4
 * longlong __fastcall FUN_18002bca4(longlong param_1, longlong param_2)
 * Address ranges: 18002bca4-18002bdac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18002bca4(longlong param_1,longlong param_2)

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
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_18002bd73:
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    plVar3[1] = param_2;
    FUN_18002bdb0(plVar3);
  }
  else {
    puVar4 = (undefined8 *)FUN_18005e090((longlong)piVar1,0x10);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_18005e1c0(piVar1);
      Sleep(100);
      FUN_18005e070(piVar1);
      goto LAB_18002bd73;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar4[1] = 0x10;
    puVar4[2] = param_1;
    puVar5 = (undefined8 *)((longlong)puVar4 + 0x27U & 0xfffffffffffffff8);
    puVar4[3] = param_2;
    *puVar5 = 0;
    *puVar4 = FUN_18002bdb0;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
    if (*(char *)(lVar2 + 0x14c5) != '\0') {
      FUN_18005e1c0(piVar1);
      SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      goto LAB_18002bd8e;
    }
  }
  FUN_18005e1c0(piVar1);
LAB_18002bd8e:
  FUN_18005e700(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
  return param_2;
}

