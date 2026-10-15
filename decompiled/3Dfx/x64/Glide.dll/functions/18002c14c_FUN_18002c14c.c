/*
 * FUN_18002c14c at 18002c14c
 * longlong __fastcall FUN_18002c14c(longlong param_1, longlong param_2)
 * Address ranges: 18002c14c-18002c254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18002c14c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_180026f30(param_1 + 0x34e8);
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005e510(piVar1);
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_18002c21b:
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    plVar3[1] = param_2;
    FUN_18002c258(plVar3);
  }
  else {
    puVar4 = (undefined8 *)FUN_18005e530((longlong)piVar1,0x10);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_18005e660(piVar1);
      Sleep(100);
      FUN_18005e510(piVar1);
      goto LAB_18002c21b;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar4[1] = 0x10;
    puVar4[2] = param_1;
    puVar5 = (undefined8 *)((longlong)puVar4 + 0x27U & 0xfffffffffffffff8);
    puVar4[3] = param_2;
    *puVar5 = 0;
    *puVar4 = FUN_18002c258;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
    if (*(char *)(lVar2 + 0x14c5) != '\0') {
      FUN_18005e660(piVar1);
      SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      goto LAB_18002c236;
    }
  }
  FUN_18005e660(piVar1);
LAB_18002c236:
  FUN_18005eba0(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
  return param_2;
}

