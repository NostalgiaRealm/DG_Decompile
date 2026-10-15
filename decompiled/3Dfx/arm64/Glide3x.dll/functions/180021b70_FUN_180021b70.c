/*
 * FUN_180021b70 at 180021b70
 * undefined1 __cdecl FUN_180021b70(longlong param_1)
 * Address ranges: 180021b70-180021c73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180021b70(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_40 [16];
  
  local_40[0] = 0;
  lVar4 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) == '\0') {
LAB_180021c3c:
    plVar2 = *(longlong **)(lVar4 + 0x14a0);
    *plVar2 = param_1;
    plVar2[1] = (longlong)local_40;
    FUN_180021c78((longlong)plVar2);
  }
  else {
    puVar1 = (undefined8 *)FUN_180038310(lVar4 + 0x12c0,0x10);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      Sleep(100);
      FUN_180038440((uint *)(lVar4 + 0x12c0));
      goto LAB_180021c3c;
    }
    FUN_1800643e0((uint *)(lVar4 + 0x14c0));
    puVar1[1] = 0x10;
    puVar1[2] = param_1;
    puVar1[3] = local_40;
    puVar3 = (undefined8 *)((longlong)puVar1 + 0x27U & 0xfffffffffffffff8);
    *puVar3 = 0;
    *puVar1 = FUN_180021c78;
    *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
    if (*(char *)(lVar4 + 0x14c5) != '\0') {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar4 + 0x1340));
      goto LAB_180021c50;
    }
  }
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
LAB_180021c50:
  FUN_180038c00(*(longlong *)(param_1 + 0x3340) + 0x12c0);
  return local_40[0];
}

