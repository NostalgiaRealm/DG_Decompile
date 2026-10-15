/*
 * FUN_18000cbf8 at 18000cbf8
 * undefined __cdecl FUN_18000cbf8(longlong param_1, longlong param_2)
 * Address ranges: 18000cbf8-18000cdc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000cbf8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 local_180;
  undefined8 uStack_178;
  longlong local_170 [41];
  undefined4 local_28;
  
  plVar11 = *(longlong **)(param_1 + 0x3308);
  (**(code **)(*plVar11 + 8))(plVar11,0,0);
  lVar10 = plVar11[0x45];
  local_28 = 0;
  uStack_178 = 0;
  local_180 = 0;
  local_170[1] = 0;
  local_170[0] = 0;
  local_170[3] = 0;
  local_170[2] = 0;
  local_170[5] = 0;
  local_170[4] = 0;
  local_170[7] = 0;
  local_170[6] = 0;
  local_170[9] = 0;
  local_170[8] = 0;
  local_170[0x28] = 0xffffffff00000000;
  local_170[0xb] = 0;
  local_170[10] = 0;
  local_170[0xd] = 0;
  local_170[0xc] = 0;
  local_170[0xf] = 0;
  local_170[0xe] = 0;
  local_170[0x11] = 0;
  local_170[0x10] = 0;
  local_170[0x13] = 0;
  local_170[0x12] = 0;
  local_170[0x15] = 0;
  local_170[0x14] = 0;
  local_170[0x17] = 0;
  local_170[0x16] = 0;
  local_170[0x19] = 0;
  local_170[0x18] = 0;
  local_170[0x1b] = 0;
  local_170[0x1a] = 0;
  local_170[0x1d] = 0;
  local_170[0x1c] = 0;
  local_170[0x1f] = 0;
  local_170[0x1e] = 0;
  local_170[0x21] = 0;
  local_170[0x20] = 0;
  local_170[0x23] = 0;
  local_170[0x22] = 0;
  local_170[0x25] = 0;
  local_170[0x24] = 0;
  local_170[0x27] = 0;
  local_170[0x26] = 0;
  lVar9 = 0;
  do {
    bVar2 = (&DAT_180066988)[lVar9];
    cVar3 = (&DAT_180066978)[lVar9];
    lVar1 = lVar9 + 1;
    *(uint *)((longlong)&local_180 + lVar9 * 0x18 + 4) = (uint)bVar2;
    *(int *)(local_170 + lVar9 * 3 + -1) = (int)cVar3;
    local_170[lVar9 * 3] = lVar10 + 0x3270 + (ulonglong)bVar2 * 4;
    lVar9 = lVar1;
  } while (lVar1 != 0xe);
  FUN_18000b9a0((longlong)&local_180,lVar10 + 0x3270,0,0,1);
  thunk_FUN_1800010d8(plVar11 + 1,&local_180,0x160);
  uVar8 = 1;
  uVar7 = 1;
  lVar9 = param_2 + 0x38;
LAB_18000ccf4:
  do {
    iVar6 = (int)uVar7;
    if (*(int *)(lVar9 + uVar7 * 4) != 0) {
      FUN_18000b9a0((longlong)(plVar11 + 1),plVar11[0x45] + 0x3270,uVar7,
                    *(undefined4 *)(param_2 + uVar7 * 4),1);
      if (iVar6 == 5) {
        uVar5 = 0;
        uVar4 = 0;
        FUN_18000b9a0((longlong)(plVar11 + 1),plVar11[0x45] + 0x3270,3,0,0);
        FUN_18000b9a0((longlong)(plVar11 + 1),plVar11[0x45] + 0x3270,4,uVar4,uVar5);
        uVar7 = (ulonglong)(iVar6 + 1);
        goto LAB_18000ccf4;
      }
      if (iVar6 - 3U < 2) {
        FUN_18000b9a0((longlong)(plVar11 + 1),plVar11[0x45] + 0x3270,5,0,0);
      }
    }
    uVar7 = (ulonglong)(iVar6 + 1U);
    if (0xd < iVar6 + 1U) {
      *(uint *)(plVar11[0x45] + 0x32c0) =
           *(uint *)(plVar11[0x45] + 0x32c0) & 0xffffc001 | *(uint *)(plVar11 + 0x2b);
      *(char *)(plVar11[0x45] + 0x32f0) = (char)uVar8;
      *(char *)(param_1 + 0x32f0) = (char)uVar8;
      return;
    }
  } while( true );
}

