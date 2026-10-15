/*
 * FUN_180157210 at 180157210
 * undefined FUN_180157210(void)
 * Address ranges: 180157210-180157353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180157210(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar1 = param_2[8];
  lVar8 = param_2[1];
  lVar6 = *param_2;
  lVar12 = param_2[3];
  lVar10 = param_2[2];
  lVar5 = *(longlong *)(param_1 + 0xf6e0);
  lVar9 = param_2[5];
  lVar7 = param_2[4];
  lVar13 = param_2[7];
  lVar11 = param_2[6];
  FUN_180221850(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_1802218b0(lVar5 + 0x12c0,0x50);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar5 + 0x14c0);
      puVar2[1] = 0x50;
      puVar2[2] = param_1;
      puVar2[4] = lVar8;
      puVar2[3] = lVar6;
      puVar2[6] = lVar12;
      puVar2[5] = lVar10;
      puVar2[8] = lVar9;
      puVar2[7] = lVar7;
      puVar2[10] = lVar13;
      puVar2[9] = lVar11;
      *(int *)(puVar2 + 0xb) = (int)lVar1;
      puVar4 = (undefined8 *)((longlong)puVar2 + 99U & 0xfffffffffffffff8);
      DataMemoryBarrier(2,3);
      *puVar4 = 0;
      *puVar2 = FUN_180157358;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar5 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar5 + 0x1340));
        return;
      }
      goto LAB_18015733c;
    }
    FUN_180221bb0(lVar5 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar5 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar5 + 0x14a0);
  *plVar3 = param_1;
  plVar3[2] = lVar8;
  plVar3[1] = lVar6;
  plVar3[4] = lVar12;
  plVar3[3] = lVar10;
  plVar3[6] = lVar9;
  plVar3[5] = lVar7;
  plVar3[8] = lVar13;
  plVar3[7] = lVar11;
  *(int *)(plVar3 + 9) = (int)lVar1;
  FUN_180157358();
LAB_18015733c:
  FUN_180221bb0(lVar5 + 0x12c0);
  return;
}

