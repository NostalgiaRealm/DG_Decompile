/*
 * FUN_180008d50 at 180008d50
 * bool __cdecl FUN_180008d50(longlong param_1)
 * Address ranges: 180008d50-1800096eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180008d50(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong extraout_x10;
  longlong lVar12;
  longlong extraout_x13;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong extraout_d17;
  undefined4 local_1d0 [2];
  longlong lStack_1c8;
  undefined8 auStack_1b0 [44];
  
  if (*(longlong *)(param_1 + 0x18) != 0) goto LAB_1800096a4;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x800);
    if ((uVar3 < 7) && ((0x69U >> (ulonglong)(uVar3 & 0x1f) & 1) != 0)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x826) = 1;
    }
    uVar11 = DAT_18006f9c0;
    lVar12 = *(longlong *)(param_1 + 0x30);
    if ((*(int *)(lVar12 + 0x800) - 5U < 2) || (*(int *)(lVar12 + 0x800) == 0)) {
      uVar3 = *(uint *)(lVar12 + 0x8d2);
      if (uVar3 < 2) {
LAB_180008ebc:
        uVar8 = 0;
      }
      else if (uVar3 == 2) {
        uVar8 = 1;
      }
      else if (uVar3 == 3) {
        uVar8 = 2;
      }
      else {
        if (uVar3 != 4) goto LAB_180008ebc;
        uVar8 = 3;
      }
      puVar9 = (undefined8 *)FUN_1800636c0(0x490);
      if (puVar9 == (undefined8 *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)FUN_18005b2e0(puVar9,uVar11,uVar8);
        *plVar10 = (longlong)&PTR_FUN_180068ee8;
        plVar10[0x90] = 0;
        *(undefined4 *)(plVar10 + 0x91) = 0xc000;
        *(undefined1 *)(plVar10 + 0x8f) = 0;
      }
    }
    else {
      FUN_180047380(local_1d0,(int *)(lVar12 + 0x800));
      uVar3 = *(uint *)(extraout_x13 + 0x8d2);
      if (uVar3 < 2) {
LAB_180008e10:
        uVar8 = 0;
      }
      else if (uVar3 == 2) {
        uVar8 = 1;
      }
      else if (uVar3 == 3) {
        uVar8 = 2;
      }
      else {
        if (uVar3 != 4) goto LAB_180008e10;
        uVar8 = 3;
      }
      puVar9 = (undefined8 *)FUN_1800636c0(0x4a0);
      if (puVar9 == (undefined8 *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)FUN_18005b2e0(puVar9,uVar11,uVar8);
        *plVar10 = (longlong)&PTR_FUN_180068fb8;
        plVar10[0x90] = 0;
        plVar10[0x92] = lStack_1c8;
        plVar10[0x91] = extraout_d17;
        plVar10[0x93] = extraout_x10;
        *(undefined8 *)((longlong)plVar10 + 0x43c) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)plVar10 + 0x434) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)plVar10 + 0x44c) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)plVar10 + 0x444) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)plVar10 + 0x45c) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)plVar10 + 0x454) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)plVar10 + 0x46c) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)plVar10 + 0x464) = 0xffffffffffffffff;
        *(bool *)(plVar10 + 0x8f) = (int)plVar10[0x91] == 5;
      }
    }
    *(longlong **)(param_1 + 0x28) = plVar10;
    if (plVar10 == (longlong *)0x0) goto LAB_1800096a4;
    lVar12 = *plVar10;
    uVar11 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x60))
                       (*(longlong **)(param_1 + 0x30),&DAT_180065470);
    cVar6 = (**(code **)(lVar12 + 8))(plVar10,*(longlong *)(param_1 + 0x30) + 0x800,uVar11);
    if (cVar6 == '\0') goto LAB_1800096a4;
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    if ((cVar6 == '\0') ||
       (iVar7 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))(), iVar7 == 0)) {
      puVar9 = *(undefined8 **)(param_1 + 0x28);
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,1);
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_1800096a4;
    }
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x70))(*(longlong **)(param_1 + 0x28),0);
    *(undefined4 *)(param_1 + 0x20) = uVar8;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x808);
    iVar7 = 0;
    if (iVar4 != 0) {
      iVar7 = iVar4 + -1;
    }
    *(int *)(param_1 + 0x24) = iVar7;
  }
  bVar5 = true;
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))();
  if (iVar7 == 2) {
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    lVar12 = FUN_1800636c0(0xd878);
    puVar13 = (undefined8 *)(lVar12 + 0x17U & 0xfffffffffffffff0);
    puVar13[-1] = lVar12;
    puVar1 = puVar13 + 0xef6;
    puVar2 = puVar13 + 0x8ee;
    FUN_1800135d0(puVar13,uVar8,puVar13 + 0x6cd,puVar13 + 0x854,puVar2,puVar1,puVar13 + 0x14fe);
    *puVar13 = &PTR_FUN_180066a20;
    puVar13[0x666] = 0;
    puVar13[0x53d] = &PTR_LAB_180066d40;
    *(undefined4 *)(puVar13 + 0x667) = uVar8;
    *(undefined4 *)(puVar13 + 0x66a) = 0;
    puVar13[0x668] = 0;
    puVar13[0x669] = 0;
    puVar13[0x66b] = 0;
    puVar13[0x66c] = 0;
    puVar13[0x66d] = 0;
    puVar13[0x66e] = 0;
    puVar13[0x66f] = 0;
    puVar13[0x670] = 0;
    puVar13[0x671] = 0;
    puVar13[0x672] = 0;
    *(undefined4 *)(puVar13 + 0x674) = 0xffffffff;
    puVar13[0x673] = 0;
    *(undefined2 *)((longlong)puVar13 + 0x3794) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x3796) = 0;
    puVar13[0x6ce] = puVar13;
    puVar13[0x6cf] = 0;
    *(undefined4 *)(puVar13 + 0x6d3) = 1;
    puVar13[0x6d4] = 0;
    *(undefined4 *)(puVar13 + 0x6d5) = 0;
    *(undefined4 *)(puVar13 + 0x6f2) = 0;
    puVar13[0x6f3] = 0;
    puVar13[0x6f4] = 0;
    puVar13[0x6d1] = 0;
    puVar13[0x6d0] = 0;
    puVar13[0x6d2] = 0;
    puVar13[0x6d7] = 0;
    puVar13[0x6d6] = 0;
    puVar13[0x6d9] = 0;
    puVar13[0x6d8] = 0;
    puVar13[0x6db] = 0;
    puVar13[0x6da] = 0;
    puVar13[0x6dd] = 0;
    puVar13[0x6dc] = 0;
    puVar13[0x6df] = 0;
    puVar13[0x6de] = 0;
    puVar13[0x6e1] = 0;
    puVar13[0x6e0] = 0;
    puVar13[0x6e3] = 0;
    puVar13[0x6e2] = 0;
    puVar13[0x6e5] = 0;
    puVar13[0x6e4] = 0;
    puVar13[0x6e7] = 0;
    puVar13[0x6e6] = 0;
    puVar13[0x6e9] = 0;
    puVar13[0x6e8] = 0;
    puVar13[0x6eb] = 0;
    puVar13[0x6ea] = 0;
    puVar13[0x6ed] = 0;
    puVar13[0x6ec] = 0;
    puVar13[0x6ef] = 0;
    puVar13[0x6ee] = 0;
    puVar13[0x6f1] = 0;
    puVar13[0x6f0] = 0;
    puVar13[0x6cd] = &PTR__grErrorSetCallback_4_180067768;
    puVar13[0x6f5] = puVar13;
    puVar9 = puVar13 + 0x6f6;
    lVar12 = 7;
    do {
      puVar9[0x15] = 0;
      puVar9[0x14] = 0;
      puVar9[0x17] = 0;
      puVar9[0x16] = 0;
      lVar12 = lVar12 + -1;
      puVar9 = puVar9 + 0x2e;
    } while (lVar12 != 0);
    puVar13[0x852] = 0;
    *(undefined4 *)(puVar13 + 0x853) = 0;
    puVar13[0x839] = 0;
    puVar13[0x838] = 0;
    puVar13[0x83b] = 0;
    puVar13[0x83a] = 0;
    puVar13[0x83d] = 0;
    puVar13[0x83c] = 0;
    puVar13[0x83f] = 0;
    puVar13[0x83e] = 0;
    puVar13[0x841] = 0;
    puVar13[0x840] = 0;
    puVar13[0x843] = 0;
    puVar13[0x842] = 0;
    puVar13[0x845] = 0;
    puVar13[0x844] = 0;
    puVar13[0x847] = 0;
    puVar13[0x846] = 0;
    puVar13[0x849] = 0;
    puVar13[0x848] = 0;
    puVar13[0x84b] = 0;
    puVar13[0x84a] = 0;
    puVar13[0x84d] = 0;
    puVar13[0x84c] = 0;
    puVar13[0x84e] = 0;
    puVar13[0x850] = 0;
    puVar13[0x84f] = 0;
    puVar13[0x851] = 0;
    FUN_180014c40(puVar13 + 0x854,puVar13);
    puVar13[0x854] = &PTR_FUN_180067830;
    puVar13[0x8a4] = puVar13;
    *(undefined4 *)(puVar13 + 0x8af) = 0;
    *(undefined4 *)(puVar13 + 0x8b2) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x457c) = 0;
    puVar13[0x8b0] = 0;
    puVar13[0x8b1] = 0;
    uVar11 = thunk_FUN_1800636c0(0xc000);
    puVar13[0x8b3] = uVar11;
    puVar13[0x8b4] = 0x400;
    puVar13[0x8b5] = puVar13 + 0x8b2;
    puVar13[0x8b6] = 0;
    puVar13[0x8b7] = 0;
    *(undefined4 *)((longlong)puVar13 + 0x4744) = 0x3f800000;
    *(undefined4 *)(puVar13 + 0x8e9) = 0x3f800000;
    *(undefined4 *)((longlong)puVar13 + 0x472c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar13 + 0x474c) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x4764) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x4754) = 0x3f800000;
    *(undefined4 *)(puVar13 + 0x8ec) = 0x3f800000;
    *(undefined4 *)((longlong)puVar13 + 0x476c) = 0x3f800000;
    *(undefined4 *)(puVar13 + 0x89a) = 0xffffffff;
    puVar13[0x8e4] = 0;
    *(undefined4 *)(puVar13 + 0x8e5) = 0;
    puVar13[0x8e6] = 0;
    puVar13[0x8e7] = 0;
    *(undefined4 *)(puVar13 + 0x8e8) = 0;
    puVar13[0x8eb] = 0;
    puVar9 = (undefined8 *)FUN_18000b900(auStack_1b0,(longlong)(puVar13 + 0x8e4));
    thunk_FUN_1800010d8(puVar13 + 0x8b8,puVar9,0x160);
    *(undefined4 *)((longlong)puVar13 + 0x4514) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x44d4) = 0;
    puVar13[0x89e] = 0;
    puVar13[0x8ac] = 0;
    puVar13[0x8ad] = 0;
    puVar13[0x89c] = 0;
    puVar13[0x89d] = 0;
    puVar13[0x8a0] = 0;
    puVar13[0x8a1] = 0;
    *(undefined1 *)(puVar13 + 0x89f) = 0;
    puVar13[0x8ef] = puVar13;
    puVar13[0x8f0] = puVar13 + 0x5b2;
    *(undefined2 *)(puVar13 + 0xef2) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x7792) = 0;
    puVar13[0x8f1] = 0;
    FUN_180063e98((undefined1 *)(puVar13 + 0x8f2),0,0x1000);
    FUN_180063e98((undefined1 *)(puVar13 + 0xaf2),0,0x1000);
    FUN_180063e98((undefined1 *)(puVar13 + 0xcf2),0,0x1000);
    *puVar2 = &PTR_FUN_180067828;
    puVar13[0xef3] = puVar13;
    puVar13[0xef5] = 0;
    *(undefined4 *)(puVar13 + 0xef4) = 0x1000;
    puVar13[0xef7] = puVar13;
    puVar13[0xef8] = puVar13 + 0x5e6;
    puVar13[0xef9] = 1;
    *(undefined2 *)(puVar13 + 0x14fa) = 0;
    *(undefined1 *)((longlong)puVar13 + 0xa7d2) = 0;
    FUN_180063e98((undefined1 *)(puVar13 + 0xefa),0,0x1000);
    FUN_180063e98((undefined1 *)(puVar13 + 0x10fa),0,0x1000);
    FUN_180063e98((undefined1 *)(puVar13 + 0x12fa),0,0x1000);
    *puVar1 = &PTR_FUN_180067828;
    puVar13[0x14fb] = puVar13;
    *(undefined4 *)(puVar13 + 0x14fc) = 0x1000;
    puVar13[0x14fd] = 0;
    puVar13[0x1500] = puVar13 + 0x61a;
    puVar13[0x1501] = 2;
    *(undefined1 *)((longlong)puVar13 + 0xd812) = 0;
    puVar13[0x14ff] = puVar13;
    *(undefined2 *)(puVar13 + 0x1b02) = 0;
    FUN_180063e98((undefined1 *)(puVar13 + 0x1502),0,0x1000);
    FUN_180063e98((undefined1 *)(puVar13 + 0x1702),0,0x1000);
    FUN_180063e98((undefined1 *)(puVar13 + 0x1902),0,0x1000);
    puVar13[0x1b03] = puVar13;
    puVar13[0x14fe] = &PTR_FUN_180067828;
    *(undefined4 *)(puVar13 + 0x1b04) = 0x1000;
    puVar13[0x1b05] = 0;
    puVar13[0x1b06] = puVar2;
    puVar13[0x1b09] = 0;
    puVar13[0x1b0a] = 0;
    puVar13[0x1b07] = puVar1;
    puVar13[0x1b08] = puVar13 + 0x14fe;
    *(undefined8 **)(param_1 + 0x18) = puVar13;
    bVar5 = false;
  }
  if ((*(longlong *)(param_1 + 0x18) == 0) && (bVar5)) {
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    lVar12 = FUN_1800636c0(0xd978);
    puVar14 = (undefined8 *)(lVar12 + 0x17U & 0xfffffffffffffff0);
    puVar14[-1] = lVar12;
    puVar1 = puVar14 + 0x1500;
    puVar2 = puVar14 + 0xed8;
    puVar13 = puVar14 + 0x8b0;
    FUN_1800135d0(puVar14,uVar8,puVar14 + 0x6b4,puVar14 + 0x84c,puVar13,puVar2,puVar1);
    *puVar14 = &PTR_FUN_180066d48;
    puVar14[0x666] = 0;
    puVar14[0x53d] = &PTR_LAB_180066d40;
    *(undefined4 *)(puVar14 + 0x667) = uVar8;
    *(undefined2 *)((longlong)puVar14 + 0x36cc) = 0;
    *(undefined4 *)(puVar14 + 0x6ba) = 1;
    *(undefined1 *)((longlong)puVar14 + 0x36ce) = 0;
    puVar14[0x6b5] = puVar14;
    puVar14[0x6b6] = 0;
    puVar14[0x6da] = 0;
    puVar14[0x6db] = 0;
    puVar14[0x6bb] = 0;
    *(undefined4 *)(puVar14 + 0x6bc) = 0;
    *(undefined4 *)(puVar14 + 0x6d9) = 0;
    puVar14[0x6b8] = 0;
    puVar14[0x6b7] = 0;
    puVar14[0x6b9] = 0;
    puVar14[0x6be] = 0;
    puVar14[0x6bd] = 0;
    puVar14[0x6c0] = 0;
    puVar14[0x6bf] = 0;
    puVar14[0x6c2] = 0;
    puVar14[0x6c1] = 0;
    puVar14[0x6c4] = 0;
    puVar14[0x6c3] = 0;
    puVar14[0x6c6] = 0;
    puVar14[0x6c5] = 0;
    puVar14[0x6c8] = 0;
    puVar14[0x6c7] = 0;
    puVar14[0x6ca] = 0;
    puVar14[0x6c9] = 0;
    puVar14[0x6cc] = 0;
    puVar14[0x6cb] = 0;
    puVar14[0x6ce] = 0;
    puVar14[0x6cd] = 0;
    puVar14[0x6d0] = 0;
    puVar14[0x6cf] = 0;
    puVar14[0x6d2] = 0;
    puVar14[0x6d1] = 0;
    puVar14[0x6d4] = 0;
    puVar14[0x6d3] = 0;
    puVar14[0x6d6] = 0;
    puVar14[0x6d5] = 0;
    puVar14[0x6d8] = 0;
    puVar14[0x6d7] = 0;
    puVar14[0x6b4] = &PTR__grErrorSetCallback_4_180067870;
    puVar14[0x6dc] = puVar14;
    lVar12 = 7;
    puVar9 = puVar14 + 0x6dd;
    do {
      puVar9[0x15] = 0;
      puVar9[0x14] = 0;
      puVar9[0x17] = 0;
      puVar9[0x16] = 0;
      lVar12 = lVar12 + -1;
      puVar9 = puVar9 + 0x30;
    } while (lVar12 != 0);
    puVar14[0x84a] = 0;
    puVar14[0x84b] = 0;
    FUN_180063e98((undefined1 *)(puVar14 + 0x6dd),0,0xa80);
    puVar14[0x82e] = 0;
    puVar14[0x82d] = 0;
    puVar14[0x830] = 0;
    puVar14[0x82f] = 0;
    puVar14[0x832] = 0;
    puVar14[0x831] = 0;
    puVar14[0x834] = 0;
    puVar14[0x833] = 0;
    puVar14[0x836] = 0;
    puVar14[0x835] = 0;
    puVar14[0x838] = 0;
    puVar14[0x837] = 0;
    puVar14[0x83a] = 0;
    puVar14[0x839] = 0;
    puVar14[0x83c] = 0;
    puVar14[0x83b] = 0;
    puVar14[0x83e] = 0;
    puVar14[0x83d] = 0;
    puVar14[0x840] = 0;
    puVar14[0x83f] = 0;
    puVar14[0x842] = 0;
    puVar14[0x841] = 0;
    puVar14[0x843] = 0;
    puVar14[0x845] = 0;
    puVar14[0x844] = 0;
    puVar14[0x846] = 0;
    puVar14[0x848] = 0;
    puVar14[0x847] = 0;
    puVar14[0x849] = 0;
    FUN_180014c40(puVar14 + 0x84c,puVar14);
    puVar14[0x89c] = puVar14;
    puVar14[0x84c] = &PTR_FUN_180067910;
    *(undefined4 *)(puVar14 + 0x8a7) = 0;
    *(undefined1 *)((longlong)puVar14 + 0x453c) = 0;
    puVar14[0x8a8] = 0;
    puVar14[0x8a9] = 0;
    *(undefined4 *)(puVar14 + 0x8aa) = 0;
    uVar11 = thunk_FUN_1800636c0(0xc000);
    puVar14[0x8ab] = uVar11;
    puVar14[0x8ac] = 0x400;
    puVar14[0x8ad] = puVar14 + 0x8aa;
    puVar14[0x8ae] = 0;
    puVar14[0x8af] = 0;
    *(undefined4 *)((longlong)puVar14 + 0x44d4) = 0;
    *(undefined8 *)((longlong)puVar14 + 0x4494) = 0;
    puVar14[0x8a4] = 0;
    puVar14[0x8a5] = 0;
    puVar14[0x894] = 0;
    puVar14[0x895] = 0;
    puVar14[0x896] = 0;
    puVar14[0x898] = 0;
    puVar14[0x899] = 0;
    *(undefined1 *)(puVar14 + 0x897) = 0;
    FUN_180028208(puVar13,puVar14,puVar14 + 0x5b2,0);
    FUN_180028208(puVar2,puVar14,puVar14 + 0x5e6,1);
    FUN_180028208(puVar1,puVar14,puVar14 + 0x61a,2);
    puVar14[0x1b2a] = puVar1;
    puVar14[0x1b28] = puVar13;
    puVar14[0x1b29] = puVar2;
    puVar14[0x675] = 0;
    puVar14[0x674] = 0;
    puVar14[0x677] = 0;
    puVar14[0x676] = 0;
    puVar14[0x679] = 0;
    puVar14[0x678] = 0;
    puVar14[0x67b] = 0;
    puVar14[0x67a] = 0;
    puVar14[0x67d] = 0;
    puVar14[0x67c] = 0;
    puVar14[0x67f] = 0;
    puVar14[0x67e] = 0;
    puVar14[0x681] = 0;
    puVar14[0x680] = 0;
    puVar14[0x683] = 0;
    puVar14[0x682] = 0;
    puVar14[0x685] = 0;
    puVar14[0x684] = 0;
    puVar14[0x687] = 0;
    puVar14[0x686] = 0;
    puVar14[0x689] = 0;
    puVar14[0x688] = 0;
    puVar14[0x68b] = 0;
    puVar14[0x68a] = 0;
    puVar14[0x68d] = 0;
    puVar14[0x68c] = 0;
    puVar14[0x68f] = 0;
    puVar14[0x68e] = 0;
    puVar14[0x691] = 0;
    puVar14[0x690] = 0;
    puVar14[0x693] = 0;
    puVar14[0x692] = 0;
    puVar14[0x695] = 0;
    puVar14[0x694] = 0;
    puVar14[0x697] = 0;
    puVar14[0x696] = 0;
    puVar14[0x699] = 0;
    puVar14[0x698] = 0;
    puVar14[0x69b] = 0;
    puVar14[0x69a] = 0;
    puVar14[0x69d] = 0;
    puVar14[0x69c] = 0;
    puVar14[0x69f] = 0;
    puVar14[0x69e] = 0;
    puVar14[0x6a1] = 0;
    puVar14[0x6a0] = 0;
    puVar14[0x6a3] = 0;
    puVar14[0x6a2] = 0;
    puVar14[0x6a5] = 0;
    puVar14[0x6a4] = 0;
    puVar14[0x6a7] = 0;
    puVar14[0x6a6] = 0;
    puVar14[0x6a9] = 0;
    puVar14[0x6a8] = 0;
    puVar14[0x6ab] = 0;
    puVar14[0x6aa] = 0;
    puVar14[0x6ad] = 0;
    puVar14[0x6ac] = 0;
    puVar14[0x6af] = 0;
    puVar14[0x6ae] = 0;
    puVar14[0x6b1] = 0;
    puVar14[0x6b0] = 0;
    puVar14[0x6b3] = 0;
    puVar14[0x6b2] = 0;
    *(undefined8 **)(param_1 + 0x18) = puVar14;
  }
  FUN_1800096f0(param_1);
LAB_1800096a4:
  return *(longlong *)(param_1 + 0x18) != 0;
}

