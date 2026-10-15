/*
 * FUN_180030ea0 at 180030ea0
 * undefined __cdecl FUN_180030ea0(longlong param_1, longlong * param_2)
 * Address ranges: 180030ea0-180030fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030ea0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_1800292e8(param_1 + 0x34e8);
  lVar4 = *(longlong *)(param_1 + 0x31c0);
  lVar6 = param_2[1];
  lVar5 = *param_2;
  FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1800436a0(lVar4 + 0x12c0,0x18);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_180061700((uint *)(lVar4 + 0x14c0));
      puVar1[1] = 0x18;
      puVar1[2] = param_1;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x2fU & 0xfffffffffffffff8);
      puVar1[4] = lVar6;
      puVar1[3] = lVar5;
      *puVar3 = 0;
      *puVar1 = FUN_180030fb0;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_180030f94;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    Sleep(100);
    FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_1;
  plVar2[2] = lVar6;
  plVar2[1] = lVar5;
  FUN_180030fb0(plVar2);
LAB_180030f94:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

