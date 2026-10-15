/*
 * FUN_18002b72c at 18002b72c
 * undefined __fastcall FUN_18002b72c(longlong param_1)
 * Address ranges: 18002b72c-18002b821
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002b72c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005e070(piVar1);
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_18002b7ee:
    **(longlong **)(lVar2 + 0x14a0) = param_1;
  }
  else {
    puVar3 = (undefined8 *)FUN_18005e090((longlong)piVar1,8);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_18005e1c0(piVar1);
      Sleep(100);
      FUN_18005e070(piVar1);
      goto LAB_18002b7ee;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar3[1] = 8;
    puVar4 = (undefined8 *)((longlong)puVar3 + 0x1fU & 0xfffffffffffffff8);
    puVar3[2] = param_1;
    *puVar4 = 0;
    *puVar3 = ConvertAndDownLoadRLE;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar4;
    if (*(char *)(lVar2 + 0x14c5) != '\0') {
      FUN_18005e1c0(piVar1);
      SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      goto LAB_18002b800;
    }
  }
  FUN_18005e1c0(piVar1);
LAB_18002b800:
  FUN_18005e700(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
  return;
}

