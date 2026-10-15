/*
 * FUN_18001c97c at 18001c97c
 * undefined1 __fastcall FUN_18001c97c(longlong param_1, int param_2)
 * Address ranges: 18001c97c-18001ca9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_18001c97c(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((((param_2 != 0x17) && (param_2 != 0x1d)) && (param_2 != 0x1e)) && (param_2 != 0x21)) {
    if (param_2 != 0x29) {
      return 0;
    }
    FUN_18001b660(param_1 + 0x42a0);
  }
  lVar2 = *(longlong *)(param_1 + 0x3340);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005fc20(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar4 = (undefined8 *)FUN_18005fc40((longlong)piVar1,0x10);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar4[1] = 0x10;
      puVar4[2] = param_1;
      puVar5 = (undefined8 *)((longlong)puVar4 + 0x23U & 0xfffffffffffffff8);
      *(int *)(puVar4 + 3) = param_2;
      *puVar5 = 0;
      *puVar4 = FUN_18001ca9c;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005fd70(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return 1;
      }
      goto LAB_18001ca85;
    }
    FUN_18005fd70(piVar1);
    Sleep(100);
    FUN_18005fc20(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  *(int *)(plVar3 + 1) = param_2;
  FUN_18001ca9c(plVar3);
LAB_18001ca85:
  FUN_18005fd70(piVar1);
  return 1;
}

