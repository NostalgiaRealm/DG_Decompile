/*
 * FUN_180030790 at 180030790
 * undefined __cdecl FUN_180030790(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, longlong param_5)
 * Address ranges: 180030790-1800307a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_1800292e8(param_5 + 0x34e8);
  lVar4 = *(longlong *)(param_5 + 0x31c0);
  FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1800436a0(lVar4 + 0x12c0,0x18);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_180061700((uint *)(lVar4 + 0x14c0));
      puVar1[1] = 0x18;
      puVar1[2] = param_5;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x2fU & 0xfffffffffffffff8);
      *(undefined4 *)(puVar1 + 3) = param_1;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = param_2;
      *(undefined4 *)(puVar1 + 4) = param_3;
      *(undefined4 *)((longlong)puVar1 + 0x24) = param_4;
      *puVar3 = 0;
      *puVar1 = FUN_1800308b0;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_180030890;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    Sleep(100);
    FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *(undefined4 *)(plVar2 + 1) = param_1;
  *(undefined4 *)((longlong)plVar2 + 0xc) = param_2;
  *(undefined4 *)(plVar2 + 2) = param_3;
  *(undefined4 *)((longlong)plVar2 + 0x14) = param_4;
  *plVar2 = param_5;
  FUN_1800308b0(plVar2);
LAB_180030890:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

