/*
 * FUN_180021a8c at 180021a8c
 * undefined __cdecl FUN_180021a8c(longlong param_1)
 * Address ranges: 180021a8c-180021b6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021a8c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar3 + 0x12c0));
  if (*(char *)(lVar3 + 0x14c4) == '\0') {
LAB_180021b40:
    **(longlong **)(lVar3 + 0x14a0) = param_1;
  }
  else {
    puVar1 = (undefined8 *)FUN_180038310(lVar3 + 0x12c0,8);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar3 + 0x12c0) = 0;
      Sleep(100);
      FUN_180038440((uint *)(lVar3 + 0x12c0));
      goto LAB_180021b40;
    }
    FUN_1800643e0((uint *)(lVar3 + 0x14c0));
    puVar1[1] = 8;
    puVar1[2] = param_1;
    puVar2 = (undefined8 *)((longlong)puVar1 + 0x1fU & 0xfffffffffffffff8);
    *puVar2 = 0;
    *puVar1 = _grErrorSetCallback_4;
    *(undefined8 **)(lVar3 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28 + 0x1350) = puVar2;
    if (*(char *)(lVar3 + 0x14c5) != '\0') {
      *(undefined4 *)(lVar3 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar3 + 0x1340));
      goto LAB_180021b4c;
    }
  }
  *(undefined4 *)(lVar3 + 0x12c0) = 0;
LAB_180021b4c:
  FUN_180038c00(*(longlong *)(param_1 + 0x3340) + 0x12c0);
  return;
}

