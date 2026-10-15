/*
 * FUN_1800291a4 at 1800291a4
 * undefined __fastcall FUN_1800291a4(longlong param_1, longlong * param_2, undefined8 * param_3, longlong * param_4, undefined1 param_5)
 * Address ranges: 1800291a4-180029429
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800291a4(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  undefined1 param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
  FUN_180026a88(param_1 + 0x34e8);
  lVar4 = param_4[4];
  lVar5 = *(longlong *)((longlong)param_3 + 0x2c);
  lVar6 = *(longlong *)((longlong)param_3 + 0x34);
  uVar7 = *(undefined8 *)((longlong)param_4 + 0x2c);
  uVar8 = *(undefined8 *)((longlong)param_4 + 0x34);
  uVar9 = *param_3;
  uVar10 = param_3[1];
  uVar11 = param_3[2];
  uVar12 = param_3[3];
  lVar13 = *param_4;
  lVar14 = param_4[1];
  lVar15 = param_4[2];
  lVar16 = param_4[3];
  uVar17 = *(undefined8 *)((longlong)param_2 + 0x2c);
  uVar18 = *(undefined8 *)((longlong)param_2 + 0x34);
  lVar19 = *param_2;
  lVar20 = param_2[1];
  lVar21 = param_2[2];
  lVar22 = param_2[3];
  uStack_d0 = (undefined4)param_4[5];
  uVar23 = param_3[4];
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  uStack_cc = (undefined4)uVar7;
  uStack_110 = (undefined4)param_3[5];
  lVar24 = param_2[4];
  piVar1 = (int *)(lVar2 + 0x12c0);
  uStack_150 = (undefined4)param_2[5];
  uStack_14c = (undefined4)uVar17;
  uStack_10c = (undefined4)lVar5;
  FUN_18005e070(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar25 = (undefined8 *)FUN_18005e090((longlong)piVar1,0xc0);
    if (puVar25 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar25[1] = 0xc0;
      puVar26 = (undefined8 *)((longlong)puVar25 + 0xd7U & 0xfffffffffffffff8);
      puVar25[2] = param_1;
      puVar25[3] = lVar19;
      puVar25[4] = lVar20;
      puVar25[5] = lVar21;
      puVar25[6] = lVar22;
      puVar25[7] = lVar24;
      puVar25[8] = CONCAT44(uStack_14c,uStack_150);
      *(undefined8 *)((longlong)puVar25 + 0x44) = uVar17;
      *(undefined8 *)((longlong)puVar25 + 0x4c) = uVar18;
      *(undefined8 *)((longlong)puVar25 + 0x54) = uVar9;
      *(undefined8 *)((longlong)puVar25 + 0x5c) = uVar10;
      *(undefined8 *)((longlong)puVar25 + 100) = uVar11;
      *(undefined8 *)((longlong)puVar25 + 0x6c) = uVar12;
      *(undefined8 *)((longlong)puVar25 + 0x74) = uVar23;
      *(ulonglong *)((longlong)puVar25 + 0x7c) = CONCAT44(uStack_10c,uStack_110);
      puVar25[0x10] = lVar5;
      puVar25[0x11] = lVar6;
      puVar25[0x12] = lVar13;
      puVar25[0x13] = lVar14;
      puVar25[0x14] = lVar15;
      puVar25[0x15] = lVar16;
      puVar25[0x16] = lVar4;
      puVar25[0x17] = CONCAT44(uStack_cc,uStack_d0);
      *(undefined8 *)((longlong)puVar25 + 0xbc) = uVar7;
      *(undefined8 *)((longlong)puVar25 + 0xc4) = uVar8;
      *(undefined1 *)((longlong)puVar25 + 0xcc) = param_5;
      *puVar26 = 0;
      *puVar25 = FUN_18002942c;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar26;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005e1c0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_1800293e0;
    }
    FUN_18005e1c0(piVar1);
    Sleep(100);
    FUN_18005e070(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  plVar3[1] = lVar19;
  plVar3[2] = lVar20;
  plVar3[3] = lVar21;
  plVar3[4] = lVar22;
  plVar3[5] = lVar24;
  plVar3[6] = CONCAT44(uStack_14c,uStack_150);
  *(undefined8 *)((longlong)plVar3 + 0x34) = uVar17;
  *(undefined8 *)((longlong)plVar3 + 0x3c) = uVar18;
  *(undefined8 *)((longlong)plVar3 + 0x44) = uVar9;
  *(undefined8 *)((longlong)plVar3 + 0x4c) = uVar10;
  *(undefined8 *)((longlong)plVar3 + 0x54) = uVar11;
  *(undefined8 *)((longlong)plVar3 + 0x5c) = uVar12;
  *(undefined8 *)((longlong)plVar3 + 100) = uVar23;
  *(ulonglong *)((longlong)plVar3 + 0x6c) = CONCAT44(uStack_10c,uStack_110);
  plVar3[0xe] = lVar5;
  plVar3[0xf] = lVar6;
  plVar3[0x10] = lVar13;
  plVar3[0x11] = lVar14;
  plVar3[0x12] = lVar15;
  plVar3[0x13] = lVar16;
  plVar3[0x14] = lVar4;
  plVar3[0x15] = CONCAT44(uStack_cc,uStack_d0);
  *(undefined8 *)((longlong)plVar3 + 0xac) = uVar7;
  *(undefined8 *)((longlong)plVar3 + 0xb4) = uVar8;
  *(undefined1 *)((longlong)plVar3 + 0xbc) = param_5;
  FUN_18002942c(plVar3);
LAB_1800293e0:
  FUN_18005e1c0(piVar1);
  return;
}

