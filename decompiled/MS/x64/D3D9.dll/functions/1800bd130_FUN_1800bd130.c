/*
 * FUN_1800bd130 at 1800bd130
 * undefined8 __fastcall FUN_1800bd130(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800bd130-1800bd27b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bd130(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char cVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 local_res10 [24];
  
  uVar9 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    lVar13 = 2;
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    puVar6 = param_2;
    do {
      puVar14 = puVar6;
      puVar10 = puVar5;
      uVar9 = puVar10[1];
      *puVar14 = *puVar10;
      puVar14[1] = uVar9;
      uVar9 = puVar10[3];
      puVar14[2] = puVar10[2];
      puVar14[3] = uVar9;
      uVar9 = puVar10[5];
      puVar14[4] = puVar10[4];
      puVar14[5] = uVar9;
      uVar9 = puVar10[7];
      puVar14[6] = puVar10[6];
      puVar14[7] = uVar9;
      uVar9 = puVar10[9];
      puVar14[8] = puVar10[8];
      puVar14[9] = uVar9;
      uVar9 = puVar10[0xb];
      puVar14[10] = puVar10[10];
      puVar14[0xb] = uVar9;
      uVar9 = puVar10[0xd];
      puVar14[0xc] = puVar10[0xc];
      puVar14[0xd] = uVar9;
      uVar9 = puVar10[0xf];
      puVar14[0xe] = puVar10[0xe];
      puVar14[0xf] = uVar9;
      lVar13 = lVar13 + -1;
      puVar5 = puVar10 + 0x10;
      puVar6 = puVar14 + 0x10;
    } while (lVar13 != 0);
    uVar9 = puVar10[0x11];
    puVar14[0x10] = puVar10[0x10];
    puVar14[0x11] = uVar9;
    uVar7 = *(undefined4 *)((longlong)puVar10 + 0x94);
    uVar3 = *(undefined4 *)(puVar10 + 0x13);
    uVar4 = *(undefined4 *)((longlong)puVar10 + 0x9c);
    *(undefined4 *)(puVar14 + 0x12) = *(undefined4 *)(puVar10 + 0x12);
    *(undefined4 *)((longlong)puVar14 + 0x94) = uVar7;
    *(undefined4 *)(puVar14 + 0x13) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0x9c) = uVar4;
    uVar7 = *(undefined4 *)((longlong)puVar10 + 0xa4);
    uVar3 = *(undefined4 *)(puVar10 + 0x15);
    uVar4 = *(undefined4 *)((longlong)puVar10 + 0xac);
    *(undefined4 *)(puVar14 + 0x14) = *(undefined4 *)(puVar10 + 0x14);
    *(undefined4 *)((longlong)puVar14 + 0xa4) = uVar7;
    *(undefined4 *)(puVar14 + 0x15) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0xac) = uVar4;
    lVar13 = *(longlong *)(param_1 + 0x50);
    uVar1 = *(uint *)(param_1 + -0x59d4);
    *(uint *)((longlong)param_2 + 4) = uVar1;
    uVar15 = (ulonglong)uVar1;
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(*(longlong *)(lVar13 + 0x78) + uVar15 * 0x10);
    if (*(int *)(*(longlong *)(lVar13 + 0x78) + 4 + uVar15 * 0x10) == 0) {
      uVar7 = *(undefined4 *)(*(longlong *)(lVar13 + 0x78) + 8 + uVar15 * 0x10);
    }
    else {
      uVar7 = 0;
    }
    *(undefined4 *)(param_2 + 0x1d) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0xe4) =
         *(undefined4 *)(*(longlong *)(lVar13 + 0x78) + 4 + uVar15 * 0x10);
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + -0x59d0);
    *(undefined4 *)(param_2 + 0x19) = *(undefined4 *)(param_1 + -0x59bc);
    plVar2 = *(longlong **)(&DAT_1801128f0 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600);
    if (plVar2 == (longlong *)0x0) {
      iVar8 = (**(code **)(*DAT_180111f18 + 0x50))
                        (DAT_180111f18,
                         (&DAT_1801128fc)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x96]);
      cVar12 = 2 < iVar8;
    }
    else {
      pcVar11 = (char *)(**(code **)(*plVar2 + 0x18))(plVar2,local_res10);
      cVar12 = *pcVar11;
    }
    if (cVar12 == '\0') {
      *(uint *)((longlong)param_2 + 0x1c) = *(uint *)((longlong)param_2 + 0x1c) & 0xfeffffff;
      *(uint *)((longlong)param_2 + 0xd4) = *(uint *)((longlong)param_2 + 0xd4) & 0xfffffff7;
      *(undefined4 *)(param_2 + 0x1b) = 0;
    }
    uVar9 = 0;
  }
  return uVar9;
}

