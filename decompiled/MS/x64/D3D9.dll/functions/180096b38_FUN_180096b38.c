/*
 * FUN_180096b38 at 180096b38
 * undefined8 __fastcall FUN_180096b38(longlong param_1, undefined4 param_2, undefined4 param_3, longlong param_4, longlong param_5, longlong * param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * Address ranges: 180096b38-180096cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180096b38(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
             longlong param_5,longlong *param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  BOOL BVar7;
  undefined8 *puVar8;
  undefined4 extraout_var;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x1cf18);
  piVar1 = (int *)(lVar3 + 0x12c0);
  lVar5 = *param_6;
  lVar6 = param_6[1];
  lVar2 = param_6[2];
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar3 + 0x14c4) == '\0') {
LAB_180096c65:
    plVar4 = *(longlong **)(lVar3 + 0x14a0);
    *plVar4 = param_1;
    *(undefined4 *)(plVar4 + 1) = param_2;
    *(undefined4 *)((longlong)plVar4 + 0xc) = param_3;
    plVar4[2] = param_4;
    plVar4[3] = param_5;
    plVar4[4] = lVar5;
    plVar4[5] = lVar6;
    plVar4[6] = lVar2;
    *(undefined4 *)(plVar4 + 7) = param_7;
    *(undefined4 *)((longlong)plVar4 + 0x3c) = param_8;
    *(undefined4 *)(plVar4 + 8) = param_9;
    FUN_180096cd4(plVar4);
  }
  else {
    puVar8 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x48);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_1800facb0(piVar1);
      Sleep(100);
      FUN_1800fab60(piVar1);
      goto LAB_180096c65;
    }
    LOCK();
    *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
    UNLOCK();
    puVar8[1] = 0x48;
    puVar8[2] = param_1;
    puVar10 = (undefined8 *)((longlong)puVar8 + 0x5bU & 0xfffffffffffffff8);
    *(undefined4 *)(puVar8 + 3) = param_2;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = param_3;
    puVar8[4] = param_4;
    puVar8[5] = param_5;
    puVar8[6] = lVar5;
    puVar8[7] = lVar6;
    puVar8[8] = lVar2;
    *(undefined4 *)(puVar8 + 9) = param_7;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = param_8;
    *(undefined4 *)(puVar8 + 10) = param_9;
    *puVar10 = 0;
    *puVar8 = FUN_180096cd4;
    *(undefined8 **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar10;
    if (*(char *)(lVar3 + 0x14c5) != '\0') {
      FUN_1800facb0(piVar1);
      BVar7 = SetEvent(*(HANDLE *)(lVar3 + 0x1340));
      uVar9 = CONCAT44(extraout_var,BVar7);
      goto LAB_180096cbb;
    }
  }
  uVar9 = FUN_1800facb0(piVar1);
LAB_180096cbb:
  return CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
}

