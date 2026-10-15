/*
 * FUN_180020250 at 180020250
 * undefined __cdecl FUN_180020250(longlong param_1, longlong * param_2)
 * Address ranges: 180020250-1800204ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020250(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
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
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 local_190;
  undefined8 uStack_188;
  longlong local_180 [41];
  undefined4 local_38;
  
  lVar22 = param_2[1];
  lVar19 = *param_2;
  lVar15 = param_2[3];
  lVar11 = param_2[2];
  lVar10 = *(longlong *)(param_1 + 0x3340);
  lVar23 = param_2[5];
  lVar20 = param_2[4];
  lVar16 = param_2[7];
  lVar12 = param_2[6];
  lVar24 = param_2[9];
  lVar21 = param_2[8];
  lVar17 = param_2[0xb];
  lVar13 = param_2[10];
  lVar18 = param_2[0xd];
  lVar14 = param_2[0xc];
  FUN_180038440((uint *)(lVar10 + 0x12c0));
  if (*(char *)(lVar10 + 0x14c4) == '\0') {
LAB_180020358:
    plVar4 = *(longlong **)(lVar10 + 0x14a0);
    *plVar4 = param_1;
    plVar4[2] = lVar22;
    plVar4[1] = lVar19;
    plVar4[4] = lVar15;
    plVar4[3] = lVar11;
    plVar4[6] = lVar23;
    plVar4[5] = lVar20;
    plVar4[8] = lVar16;
    plVar4[7] = lVar12;
    plVar4[10] = lVar24;
    plVar4[9] = lVar21;
    plVar4[0xc] = lVar17;
    plVar4[0xb] = lVar13;
    plVar4[0xe] = lVar18;
    plVar4[0xd] = lVar14;
    FUN_180020500(plVar4);
  }
  else {
    puVar3 = (undefined8 *)FUN_180038310(lVar10 + 0x12c0,0x78);
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar10 + 0x12c0) = 0;
      Sleep(100);
      FUN_180038440((uint *)(lVar10 + 0x12c0));
      goto LAB_180020358;
    }
    FUN_1800643e0((uint *)(lVar10 + 0x14c0));
    puVar3[1] = 0x78;
    puVar3[2] = param_1;
    puVar3[4] = lVar22;
    puVar3[3] = lVar19;
    puVar3[6] = lVar15;
    puVar3[5] = lVar11;
    puVar3[8] = lVar23;
    puVar3[7] = lVar20;
    puVar3[10] = lVar16;
    puVar3[9] = lVar12;
    puVar3[0xc] = lVar24;
    puVar3[0xb] = lVar21;
    puVar3[0xe] = lVar17;
    puVar3[0xd] = lVar13;
    puVar3[0x10] = lVar18;
    puVar3[0xf] = lVar14;
    puVar9 = (undefined8 *)((longlong)puVar3 + 0x8fU & 0xfffffffffffffff8);
    *puVar9 = 0;
    *puVar3 = FUN_180020500;
    *(undefined8 **)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0x14bc) * 0x28 + 0x1350) = puVar9;
    if (*(char *)(lVar10 + 0x14c5) != '\0') {
      *(undefined4 *)(lVar10 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar10 + 0x1340));
      goto LAB_18002038c;
    }
  }
  *(undefined4 *)(lVar10 + 0x12c0) = 0;
LAB_18002038c:
  local_38 = 0;
  lVar10 = *(longlong *)(param_1 + 0x44c8) + 0x3270;
  uStack_188 = 0;
  local_190 = 0;
  local_180[1] = 0;
  local_180[0] = 0;
  local_180[3] = 0;
  local_180[2] = 0;
  local_180[5] = 0;
  local_180[4] = 0;
  local_180[7] = 0;
  local_180[6] = 0;
  local_180[9] = 0;
  local_180[8] = 0;
  local_180[0x28] = 0xffffffff00000000;
  local_180[0xb] = 0;
  local_180[10] = 0;
  local_180[0xd] = 0;
  local_180[0xc] = 0;
  local_180[0xf] = 0;
  local_180[0xe] = 0;
  local_180[0x11] = 0;
  local_180[0x10] = 0;
  local_180[0x13] = 0;
  local_180[0x12] = 0;
  local_180[0x15] = 0;
  local_180[0x14] = 0;
  local_180[0x17] = 0;
  local_180[0x16] = 0;
  local_180[0x19] = 0;
  local_180[0x18] = 0;
  local_180[0x1b] = 0;
  local_180[0x1a] = 0;
  local_180[0x1d] = 0;
  local_180[0x1c] = 0;
  local_180[0x1f] = 0;
  local_180[0x1e] = 0;
  local_180[0x21] = 0;
  local_180[0x20] = 0;
  local_180[0x23] = 0;
  local_180[0x22] = 0;
  local_180[0x25] = 0;
  local_180[0x24] = 0;
  local_180[0x27] = 0;
  local_180[0x26] = 0;
  lVar11 = 0;
  do {
    bVar1 = (&DAT_180066988)[lVar11];
    cVar2 = (&DAT_180066978)[lVar11];
    lVar12 = lVar11 + 1;
    *(uint *)((longlong)&local_190 + lVar11 * 0x18 + 4) = (uint)bVar1;
    *(int *)(local_180 + lVar11 * 3 + -1) = (int)cVar2;
    local_180[lVar11 * 3] = lVar10 + (ulonglong)bVar1 * 4;
    lVar11 = lVar12;
  } while (lVar12 != 0xe);
  FUN_18000b9a0((longlong)&local_190,lVar10,0,0,1);
  thunk_FUN_1800010d8((undefined8 *)(param_1 + 0x45c0),&local_190,0x160);
  uVar8 = 1;
  plVar4 = param_2 + 7;
LAB_180020454:
  do {
    iVar7 = (int)uVar8;
    if (*(int *)((longlong)plVar4 + uVar8 * 4) != 0) {
      FUN_18000b9a0(param_1 + 0x45c0,*(longlong *)(param_1 + 0x44c8) + 0x3270,uVar8,
                    *(undefined4 *)((longlong)param_2 + uVar8 * 4),1);
      if (iVar7 == 5) {
        uVar6 = 0;
        uVar5 = 0;
        FUN_18000b9a0(param_1 + 0x45c0,*(longlong *)(param_1 + 0x44c8) + 0x3270,3,0,0);
        FUN_18000b9a0(param_1 + 0x45c0,*(longlong *)(param_1 + 0x44c8) + 0x3270,4,uVar5,uVar6);
        uVar8 = (ulonglong)(iVar7 + 1);
        goto LAB_180020454;
      }
      if (iVar7 - 3U < 2) {
        FUN_18000b9a0(param_1 + 0x45c0,*(longlong *)(param_1 + 0x44c8) + 0x3270,5,0,0);
      }
    }
    uVar8 = (ulonglong)(iVar7 + 1U);
    if (0xd < iVar7 + 1U) {
      return;
    }
  } while( true );
}

