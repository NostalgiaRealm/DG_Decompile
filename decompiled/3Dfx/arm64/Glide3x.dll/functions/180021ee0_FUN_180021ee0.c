/*
 * FUN_180021ee0 at 180021ee0
 * undefined __cdecl FUN_180021ee0(longlong param_1, longlong param_2)
 * Address ranges: 180021ee0-180021eeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021ee0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) == '\0') {
LAB_180021fa8:
    plVar2 = *(longlong **)(lVar4 + 0x14a0);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    FUN_180021fd8(plVar2);
  }
  else {
    puVar1 = (undefined8 *)FUN_180038310(lVar4 + 0x12c0,0x10);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      Sleep(100);
      FUN_180038440((uint *)(lVar4 + 0x12c0));
      goto LAB_180021fa8;
    }
    FUN_1800643e0((uint *)(lVar4 + 0x14c0));
    puVar1[1] = 0x10;
    puVar1[2] = param_1;
    puVar3 = (undefined8 *)((longlong)puVar1 + 0x27U & 0xfffffffffffffff8);
    puVar1[3] = param_2;
    *puVar3 = 0;
    *puVar1 = FUN_180021fd8;
    *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
    if (*(char *)(lVar4 + 0x14c5) != '\0') {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar4 + 0x1340));
      goto LAB_180021fb8;
    }
  }
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
LAB_180021fb8:
  FUN_180038c00(*(longlong *)(param_1 + 0x3340) + 0x12c0);
  return;
}

