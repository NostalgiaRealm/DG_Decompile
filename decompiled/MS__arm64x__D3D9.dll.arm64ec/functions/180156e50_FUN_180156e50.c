/*
 * FUN_180156e50 at 180156e50
 * undefined FUN_180156e50(void)
 * Address ranges: 180156e50-180157033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180156e50(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
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
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  
  lVar5 = *(longlong *)(param_1 + 0xf6e0);
  if (param_2 == (longlong *)0x0) {
    FUN_180221850(lVar5 + 0x12c0);
    if (*(char *)(lVar5 + 0x14c4) != '\0') {
      puVar2 = (undefined8 *)FUN_1802218b0(lVar5 + 0x12c0,8);
      if (puVar2 != (undefined8 *)0x0) {
        FUN_1801042e0(lVar5 + 0x14c0);
        puVar2[1] = 8;
        puVar2[2] = param_1;
        uVar1 = (longlong)puVar2 + 0x1f;
        DataMemoryBarrier(2,3);
        pcVar4 = FUN_180157048;
        goto LAB_180156fb4;
      }
      FUN_180221bb0(lVar5 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar5 + 0x12c0);
    }
    **(longlong **)(lVar5 + 0x14a0) = param_1;
    FUN_180157048();
  }
  else {
    lVar10 = param_2[1];
    lVar6 = *param_2;
    lVar18 = param_2[3];
    lVar14 = param_2[2];
    lVar11 = param_2[5];
    lVar7 = param_2[4];
    lVar19 = param_2[7];
    lVar15 = param_2[6];
    lVar12 = param_2[9];
    lVar8 = param_2[8];
    lVar20 = param_2[0xb];
    lVar16 = param_2[10];
    lVar13 = param_2[0xd];
    lVar9 = param_2[0xc];
    lVar21 = param_2[0xf];
    lVar17 = param_2[0xe];
    FUN_180221850(lVar5 + 0x12c0);
    if (*(char *)(lVar5 + 0x14c4) != '\0') {
      puVar2 = (undefined8 *)FUN_1802218b0(lVar5 + 0x12c0,0x88);
      if (puVar2 != (undefined8 *)0x0) {
        FUN_1801042e0(lVar5 + 0x14c0);
        puVar2[1] = 0x88;
        puVar2[2] = param_1;
        uVar1 = (longlong)puVar2 + 0x9f;
        puVar2[4] = lVar10;
        puVar2[3] = lVar6;
        puVar2[6] = lVar18;
        puVar2[5] = lVar14;
        puVar2[8] = lVar11;
        puVar2[7] = lVar7;
        puVar2[10] = lVar19;
        puVar2[9] = lVar15;
        puVar2[0xc] = lVar12;
        puVar2[0xb] = lVar8;
        puVar2[0xe] = lVar20;
        puVar2[0xd] = lVar16;
        puVar2[0x10] = lVar13;
        puVar2[0xf] = lVar9;
        puVar2[0x12] = lVar21;
        puVar2[0x11] = lVar17;
        DataMemoryBarrier(2,3);
        pcVar4 = FUN_180157038;
LAB_180156fb4:
        *(undefined8 *)(uVar1 & 0xfffffffffffffff8) = 0;
        *puVar2 = pcVar4;
        *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) =
             (undefined8 *)(uVar1 & 0xfffffffffffffff8);
        if (*(char *)(lVar5 + 0x14c5) != '\0') {
          FUN_180221bb0(lVar5 + 0x12c0);
          thunk_FUN_180223874(*(undefined8 *)(lVar5 + 0x1340));
          return;
        }
        goto LAB_18015701c;
      }
      FUN_180221bb0(lVar5 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar5 + 0x12c0);
    }
    plVar3 = *(longlong **)(lVar5 + 0x14a0);
    *plVar3 = param_1;
    plVar3[2] = lVar10;
    plVar3[1] = lVar6;
    plVar3[4] = lVar18;
    plVar3[3] = lVar14;
    plVar3[6] = lVar11;
    plVar3[5] = lVar7;
    plVar3[8] = lVar19;
    plVar3[7] = lVar15;
    plVar3[10] = lVar12;
    plVar3[9] = lVar8;
    plVar3[0xc] = lVar20;
    plVar3[0xb] = lVar16;
    plVar3[0xe] = lVar13;
    plVar3[0xd] = lVar9;
    plVar3[0x10] = lVar21;
    plVar3[0xf] = lVar17;
    FUN_180157038();
  }
LAB_18015701c:
  FUN_180221bb0(lVar5 + 0x12c0);
  return;
}

