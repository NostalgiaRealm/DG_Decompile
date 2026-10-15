/*
 * FUN_180156720 at 180156720
 * undefined FUN_180156720(void)
 * Address ranges: 180156720-180156873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180156720(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar12 = param_5[1];
  lVar9 = *param_5;
  lVar4 = *(longlong *)(param_1 + 0xf6e0);
  lVar13 = param_4[5];
  lVar10 = param_4[4];
  lVar7 = param_4[7];
  lVar5 = param_4[6];
  lVar14 = param_4[1];
  lVar11 = *param_4;
  lVar8 = param_4[3];
  lVar6 = param_4[2];
  FUN_180221850(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1802218b0(lVar4 + 0x12c0,0x60);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar4 + 0x14c0);
      puVar1[1] = 0x60;
      puVar1[2] = param_1;
      *(undefined4 *)(puVar1 + 3) = param_2;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = param_3;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x77U & 0xfffffffffffffff8);
      puVar1[5] = lVar14;
      puVar1[4] = lVar11;
      puVar1[7] = lVar8;
      puVar1[6] = lVar6;
      puVar1[9] = lVar13;
      puVar1[8] = lVar10;
      puVar1[0xb] = lVar7;
      puVar1[10] = lVar5;
      puVar1[0xd] = lVar12;
      puVar1[0xc] = lVar9;
      DataMemoryBarrier(2,3);
      *puVar3 = 0;
      *puVar1 = FUN_180156878;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar4 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_180156858;
    }
    FUN_180221bb0(lVar4 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar4 + 0x12c0);
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_1;
  *(undefined4 *)(plVar2 + 1) = param_2;
  *(undefined4 *)((longlong)plVar2 + 0xc) = param_3;
  plVar2[3] = lVar14;
  plVar2[2] = lVar11;
  plVar2[5] = lVar8;
  plVar2[4] = lVar6;
  plVar2[7] = lVar13;
  plVar2[6] = lVar10;
  plVar2[9] = lVar7;
  plVar2[8] = lVar5;
  plVar2[0xb] = lVar12;
  plVar2[10] = lVar9;
  FUN_180156878();
LAB_180156858:
  FUN_180221bb0(lVar4 + 0x12c0);
  return;
}

