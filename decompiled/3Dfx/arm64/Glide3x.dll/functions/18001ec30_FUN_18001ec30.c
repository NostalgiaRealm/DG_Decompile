/*
 * FUN_18001ec30 at 18001ec30
 * undefined __cdecl FUN_18001ec30(longlong param_1, undefined4 param_2, longlong param_3, longlong param_4)
 * Address ranges: 18001ec30-18001ed9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ec30(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 auStack_f0 [20];
  
  FUN_18001bf90(param_1 + 0x3668);
  lVar5 = 0x42a0;
  *(undefined4 *)(param_1 + 0x4714) = param_2;
  uVar2 = FUN_18001e900(param_1 + 0x42a0,param_3,auStack_f0);
  FUN_18001e900(param_1 + lVar5,param_4,(undefined8 *)((longlong)auStack_f0 + (ulonglong)uVar2 * 4))
  ;
  lVar5 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar5 + 0x12c0));
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    uVar1 = uVar2 * 8;
    puVar3 = (undefined8 *)FUN_180038310(lVar5 + 0x12c0,uVar1 + 0x18);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar5 + 0x14c0));
      puVar3[1] = (ulonglong)(uVar1 + 0x18);
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x2fU & 0xfffffffffffffff8);
      puVar3[3] = param_1;
      *(uint *)(puVar3 + 4) = uVar2;
      *(undefined4 *)((longlong)puVar3 + 0x24) = param_2;
      puVar3[2] = puVar6;
      thunk_FUN_1800010d8(puVar6,auStack_f0,(ulonglong)uVar1);
      *(undefined8 *)((longlong)puVar6 + (ulonglong)uVar1) = 0;
      *puVar3 = FUN_18001eda0;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) =
           (undefined8 *)((longlong)puVar6 + (ulonglong)uVar1);
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar5 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar5 + 0x1340));
        return;
      }
      goto LAB_18001ed7c;
    }
    *(undefined4 *)(lVar5 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar5 + 0x12c0));
  }
  plVar4 = *(longlong **)(lVar5 + 0x14a0);
  *plVar4 = (longlong)auStack_f0;
  plVar4[1] = param_1;
  *(uint *)(plVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)plVar4 + 0x14) = param_2;
  FUN_18001eda0(plVar4);
LAB_18001ed7c:
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
  return;
}

