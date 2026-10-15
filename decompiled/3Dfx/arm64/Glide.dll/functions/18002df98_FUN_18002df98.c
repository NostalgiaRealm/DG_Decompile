/*
 * FUN_18002df98 at 18002df98
 * undefined __cdecl FUN_18002df98(longlong param_1)
 * Address ranges: 18002df98-18002e0bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002df98(longlong param_1)

{
  BOOL BVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  DWORD local_40 [4];
  
  FUN_1800292e8(param_1 + 0x34e8);
  lVar5 = *(longlong *)(param_1 + 0x31c0);
  FUN_1800437d0((uint *)(lVar5 + 0x12c0));
  if (*(char *)(lVar5 + 0x14c4) == '\0') {
LAB_18002e064:
    plVar3 = *(longlong **)(lVar5 + 0x14a0);
    *plVar3 = param_1;
    FUN_18002df88(plVar3);
  }
  else {
    puVar2 = (undefined8 *)FUN_1800436a0(lVar5 + 0x12c0,8);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar5 + 0x12c0) = 0;
      Sleep(100);
      FUN_1800437d0((uint *)(lVar5 + 0x12c0));
      goto LAB_18002e064;
    }
    FUN_180061700((uint *)(lVar5 + 0x14c0));
    puVar2[1] = 8;
    puVar2[2] = param_1;
    puVar4 = (undefined8 *)((longlong)puVar2 + 0x1fU & 0xfffffffffffffff8);
    *puVar4 = 0;
    *puVar2 = FUN_18002df88;
    *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
    if (*(char *)(lVar5 + 0x14c5) != '\0') {
      *(undefined4 *)(lVar5 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar5 + 0x1340));
      goto LAB_18002e074;
    }
  }
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
LAB_18002e074:
  lVar5 = *(longlong *)(param_1 + 0x31c0);
  local_40[0] = 0;
  BVar1 = GetHandleInformation(*(HANDLE *)(lVar5 + 0x1338),local_40);
  if (BVar1 == 0) {
    *(undefined8 *)(lVar5 + 0x1338) = 0;
    *(undefined4 *)(lVar5 + 0x14c0) = 0;
  }
  FUN_180043f90(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
  return;
}

