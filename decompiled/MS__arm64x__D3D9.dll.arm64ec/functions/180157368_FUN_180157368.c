/*
 * FUN_180157368 at 180157368
 * undefined FUN_180157368(void)
 * Address ranges: 180157368-1801574ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180157368(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar4 = param_3[0xc];
  uVar10 = param_3[1];
  uVar7 = *param_3;
  uVar16 = param_3[3];
  uVar13 = param_3[2];
  uVar1 = *(undefined4 *)(param_3 + 0xd);
  uVar11 = param_3[5];
  uVar8 = param_3[4];
  uVar17 = param_3[7];
  uVar14 = param_3[6];
  lVar6 = *(longlong *)(param_1 + 0xf6e0);
  uVar12 = param_3[9];
  uVar9 = param_3[8];
  uVar18 = param_3[0xb];
  uVar15 = param_3[10];
  FUN_180221850(lVar6 + 0x12c0);
  if (*(char *)(lVar6 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_1802218b0(lVar6 + 0x12c0,0x78);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar6 + 0x14c0);
      puVar2[1] = 0x78;
      puVar2[2] = param_1;
      *(undefined4 *)(puVar2 + 3) = param_2;
      *(undefined8 *)((longlong)puVar2 + 0x24) = uVar10;
      *(undefined8 *)((longlong)puVar2 + 0x1c) = uVar7;
      *(undefined8 *)((longlong)puVar2 + 0x34) = uVar16;
      *(undefined8 *)((longlong)puVar2 + 0x2c) = uVar13;
      *(undefined8 *)((longlong)puVar2 + 0x44) = uVar11;
      *(undefined8 *)((longlong)puVar2 + 0x3c) = uVar8;
      *(undefined8 *)((longlong)puVar2 + 0x54) = uVar17;
      *(undefined8 *)((longlong)puVar2 + 0x4c) = uVar14;
      *(undefined8 *)((longlong)puVar2 + 100) = uVar12;
      *(undefined8 *)((longlong)puVar2 + 0x5c) = uVar9;
      *(undefined8 *)((longlong)puVar2 + 0x74) = uVar18;
      *(undefined8 *)((longlong)puVar2 + 0x6c) = uVar15;
      *(undefined8 *)((longlong)puVar2 + 0x7c) = uVar4;
      *(undefined4 *)((longlong)puVar2 + 0x84) = uVar1;
      puVar5 = (undefined8 *)((longlong)puVar2 + 0x8fU & 0xfffffffffffffff8);
      DataMemoryBarrier(2,3);
      *puVar5 = 0;
      *puVar2 = FUN_1801574f8;
      *(undefined8 **)(lVar6 + (ulonglong)*(uint *)(lVar6 + 0x14bc) * 0x28 + 0x1350) = puVar5;
      if (*(char *)(lVar6 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar6 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar6 + 0x1340));
        return;
      }
      goto LAB_1801574d4;
    }
    FUN_180221bb0(lVar6 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar6 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar6 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(undefined8 *)((longlong)plVar3 + 0x14) = uVar10;
  *(undefined8 *)((longlong)plVar3 + 0xc) = uVar7;
  *(undefined8 *)((longlong)plVar3 + 0x24) = uVar16;
  *(undefined8 *)((longlong)plVar3 + 0x1c) = uVar13;
  *(undefined8 *)((longlong)plVar3 + 0x34) = uVar11;
  *(undefined8 *)((longlong)plVar3 + 0x2c) = uVar8;
  *(undefined8 *)((longlong)plVar3 + 0x44) = uVar17;
  *(undefined8 *)((longlong)plVar3 + 0x3c) = uVar14;
  *(undefined8 *)((longlong)plVar3 + 0x54) = uVar12;
  *(undefined8 *)((longlong)plVar3 + 0x4c) = uVar9;
  *(undefined8 *)((longlong)plVar3 + 100) = uVar18;
  *(undefined8 *)((longlong)plVar3 + 0x5c) = uVar15;
  *(undefined8 *)((longlong)plVar3 + 0x6c) = uVar4;
  *(undefined4 *)((longlong)plVar3 + 0x74) = uVar1;
  FUN_1801574f8();
LAB_1801574d4:
  FUN_180221bb0(lVar6 + 0x12c0);
  return;
}

