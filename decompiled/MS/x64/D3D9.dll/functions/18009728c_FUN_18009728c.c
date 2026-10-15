/*
 * FUN_18009728c at 18009728c
 * undefined8 __fastcall FUN_18009728c(longlong param_1, undefined4 param_2, undefined4 param_3, longlong param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * Address ranges: 18009728c-180097424
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18009728c(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x1cf18);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_1800973b1:
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    *(undefined4 *)(plVar3 + 1) = param_2;
    *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
    plVar3[2] = param_4;
    *(undefined4 *)(plVar3 + 3) = param_5;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = param_6;
    *(undefined4 *)(plVar3 + 4) = param_7;
    *(undefined4 *)((longlong)plVar3 + 0x24) = param_8;
    *(undefined4 *)(plVar3 + 5) = param_9;
    FUN_180097428(plVar3);
  }
  else {
    puVar5 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x30);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_1800facb0(piVar1);
      Sleep(100);
      FUN_1800fab60(piVar1);
      goto LAB_1800973b1;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar7 = (undefined8 *)((longlong)puVar5 + 0x43U & 0xfffffffffffffff8);
    puVar5[1] = 0x30;
    puVar5[2] = param_1;
    *(undefined4 *)(puVar5 + 3) = param_2;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = param_3;
    puVar5[4] = param_4;
    *(undefined4 *)(puVar5 + 5) = param_5;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = param_6;
    *(undefined4 *)(puVar5 + 6) = param_7;
    *(undefined4 *)((longlong)puVar5 + 0x34) = param_8;
    *(undefined4 *)(puVar5 + 7) = param_9;
    *puVar7 = 0;
    *puVar5 = FUN_180097428;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar7;
    if (*(char *)(lVar2 + 0x14c5) != '\0') {
      FUN_1800facb0(piVar1);
      BVar4 = SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      uVar6 = CONCAT44(extraout_var,BVar4);
      goto LAB_180097416;
    }
  }
  uVar6 = FUN_1800facb0(piVar1);
LAB_180097416:
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}

