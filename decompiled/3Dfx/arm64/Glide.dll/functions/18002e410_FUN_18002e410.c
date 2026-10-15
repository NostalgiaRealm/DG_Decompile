/*
 * FUN_18002e410 at 18002e410
 * undefined4 __cdecl FUN_18002e410(longlong param_1)
 * Address ranges: 18002e410-18002e51f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18002e410(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 local_40 [4];
  
  FUN_1800292e8(param_1 + 0x34e8);
  lVar4 = *(longlong *)(param_1 + 0x31c0);
  local_40[0] = 0;
  FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) == '\0') {
LAB_18002e4e8:
    plVar2 = *(longlong **)(lVar4 + 0x14a0);
    *plVar2 = param_1;
    plVar2[1] = (longlong)local_40;
    FUN_18002e520(plVar2);
  }
  else {
    puVar1 = (undefined8 *)FUN_1800436a0(lVar4 + 0x12c0,0x10);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      Sleep(100);
      FUN_1800437d0((uint *)(lVar4 + 0x12c0));
      goto LAB_18002e4e8;
    }
    FUN_180061700((uint *)(lVar4 + 0x14c0));
    puVar1[1] = 0x10;
    puVar1[2] = param_1;
    puVar1[3] = local_40;
    puVar3 = (undefined8 *)((longlong)puVar1 + 0x27U & 0xfffffffffffffff8);
    *puVar3 = 0;
    *puVar1 = FUN_18002e520;
    *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
    if (*(char *)(lVar4 + 0x14c5) != '\0') {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar4 + 0x1340));
      goto LAB_18002e4fc;
    }
  }
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
LAB_18002e4fc:
  FUN_180043f90(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
  return local_40[0];
}

