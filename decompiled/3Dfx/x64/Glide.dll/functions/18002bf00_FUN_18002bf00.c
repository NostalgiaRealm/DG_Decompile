/*
 * FUN_18002bf00 at 18002bf00
 * undefined4 __fastcall FUN_18002bf00(longlong param_1)
 * Address ranges: 18002bf00-18002c019
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18002bf00(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  local_res8[0] = 0;
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005e510(piVar1);
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_18002bfd3:
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    plVar3[1] = (longlong)local_res8;
    FUN_18002c01c(plVar3);
  }
  else {
    puVar4 = (undefined8 *)FUN_18005e530((longlong)piVar1,0x10);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_18005e660(piVar1);
      Sleep(100);
      FUN_18005e510(piVar1);
      goto LAB_18002bfd3;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar4[1] = 0x10;
    puVar4[2] = param_1;
    puVar5 = (undefined8 *)((longlong)puVar4 + 0x27U & 0xfffffffffffffff8);
    puVar4[3] = local_res8;
    *puVar5 = 0;
    *puVar4 = FUN_18002c01c;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
    if (*(char *)(lVar2 + 0x14c5) != '\0') {
      FUN_18005e660(piVar1);
      SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      goto LAB_18002bff3;
    }
  }
  FUN_18005e660(piVar1);
LAB_18002bff3:
  FUN_18005eba0(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
  return local_res8[0];
}

