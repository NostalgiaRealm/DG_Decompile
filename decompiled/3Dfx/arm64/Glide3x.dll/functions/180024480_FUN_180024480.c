/*
 * FUN_180024480 at 180024480
 * undefined __cdecl FUN_180024480(longlong param_1, undefined1 param_2, undefined1 param_3)
 * Address ranges: 180024480-18002457f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024480(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_18001bf90(param_1 + 0x3668);
  lVar4 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_180038310(lVar4 + 0x12c0,0x10);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar4 + 0x14c0));
      puVar1[1] = 0x10;
      puVar1[2] = param_1;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x27U & 0xfffffffffffffff8);
      *(undefined1 *)(puVar1 + 3) = param_2;
      *(undefined1 *)((longlong)puVar1 + 0x1c) = param_3;
      *puVar3 = 0;
      *puVar1 = FUN_180024580;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_180024564;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar4 + 0x12c0));
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = param_2;
  *(undefined1 *)((longlong)plVar2 + 0xc) = param_3;
  FUN_180024580(plVar2);
LAB_180024564:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

