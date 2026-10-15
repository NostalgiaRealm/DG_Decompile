/*
 * FUN_1800214d0 at 1800214d0
 * undefined __cdecl FUN_1800214d0(longlong param_1)
 * Address ranges: 1800214d0-1800215f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800214d0(longlong param_1)

{
  BOOL BVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  DWORD local_40 [4];
  
  FUN_18001bf90(param_1 + 0x3668);
  lVar5 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar5 + 0x12c0));
  if (*(char *)(lVar5 + 0x14c4) == '\0') {
LAB_18002159c:
    plVar3 = *(longlong **)(lVar5 + 0x14a0);
    *plVar3 = param_1;
    FUN_1800214c0(plVar3);
  }
  else {
    puVar2 = (undefined8 *)FUN_180038310(lVar5 + 0x12c0,8);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar5 + 0x12c0) = 0;
      Sleep(100);
      FUN_180038440((uint *)(lVar5 + 0x12c0));
      goto LAB_18002159c;
    }
    FUN_1800643e0((uint *)(lVar5 + 0x14c0));
    puVar2[1] = 8;
    puVar2[2] = param_1;
    puVar4 = (undefined8 *)((longlong)puVar2 + 0x1fU & 0xfffffffffffffff8);
    *puVar4 = 0;
    *puVar2 = FUN_1800214c0;
    *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
    if (*(char *)(lVar5 + 0x14c5) != '\0') {
      *(undefined4 *)(lVar5 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar5 + 0x1340));
      goto LAB_1800215ac;
    }
  }
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
LAB_1800215ac:
  lVar5 = *(longlong *)(param_1 + 0x3340);
  local_40[0] = 0;
  BVar1 = GetHandleInformation(*(HANDLE *)(lVar5 + 0x1338),local_40);
  if (BVar1 == 0) {
    *(undefined8 *)(lVar5 + 0x1338) = 0;
    *(undefined4 *)(lVar5 + 0x14c0) = 0;
  }
  FUN_180038c00(*(longlong *)(param_1 + 0x3340) + 0x12c0);
  return;
}

