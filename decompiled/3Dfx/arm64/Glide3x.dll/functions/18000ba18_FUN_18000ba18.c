/*
 * FUN_18000ba18 at 18000ba18
 * undefined __cdecl FUN_18000ba18(longlong param_1, undefined8 * param_2, ulonglong param_3, uint param_4)
 * Address ranges: 18000ba18-18000bc2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ba18(longlong param_1,undefined8 *param_2,ulonglong param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_10 [4];
  
  lVar9 = param_1 + (param_3 & 0xffffffff) * 0x50 + 0x184;
  if ((param_4 & 1) == 0) {
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_1 + 0x260);
    }
    local_10[0] = *(uint *)(param_1 + 0x15c) & *(uint *)(param_1 + 0x158);
    uVar7 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    uVar7 = (uint)lVar8;
    if ((1 - (uVar7 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_10 + (longlong)((int)uVar7 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar7 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      lVar1 = param_1 + 8;
      while( true ) {
        lVar8 = lVar8 * 0x18;
        lVar2 = lVar8 + param_1;
        iVar3 = *(int *)(lVar2 + 0x10);
        **(undefined4 **)(lVar2 + 0x18) =
             *(undefined4 *)((longlong)param_2 + (longlong)*(int *)(lVar1 + lVar8));
        *(undefined4 *)(lVar9 + (ulonglong)*(uint *)(lVar2 + 0xc) * 4) =
             **(undefined4 **)(lVar2 + 0x18);
        if (iVar3 != 1) {
          *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 4) =
               *(undefined4 *)((longlong)param_2 + (longlong)*(int *)(lVar1 + lVar8) + 4);
          *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(lVar2 + 0xc) + 1) * 4) =
               *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 4);
          if (iVar3 != 2) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 8) =
                 *(undefined4 *)((longlong)param_2 + (longlong)*(int *)(lVar1 + lVar8) + 8);
            *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(lVar2 + 0xc) + 2) * 4) =
                 *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 8);
          }
        }
        uVar7 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
        uVar7 = (uint)lVar8;
        if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_10 + (longlong)((int)uVar7 >> 3)) =
             *(byte *)((longlong)local_10 + (longlong)((int)uVar7 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      }
    }
  }
  else {
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_1 + 0x260);
    }
    local_10[0] = *(uint *)(param_1 + 0x15c) & *(uint *)(param_1 + 0x158);
    uVar7 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    uVar7 = (uint)lVar8;
    if ((1 - (uVar7 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_10 + (longlong)((int)uVar7 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar7 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      while( true ) {
        lVar1 = param_1 + lVar8 * 0x18;
        uVar7 = *(uint *)(lVar1 + 0x10);
        puVar5 = (undefined8 *)(lVar9 + (ulonglong)*(uint *)(lVar1 + 0xc) * 4);
        puVar6 = param_2;
        for (uVar4 = uVar7 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = *puVar6;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        if ((uVar7 & 1) != 0) {
          *(undefined4 *)puVar5 = *(undefined4 *)puVar6;
        }
        uVar7 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
        uVar7 = (uint)lVar8;
        if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
        param_2 = (undefined8 *)((longlong)param_2 + (ulonglong)*(uint *)(lVar1 + 0x10) * 4);
        *(byte *)((longlong)local_10 + (longlong)((int)uVar7 >> 3)) =
             *(byte *)((longlong)local_10 + (longlong)((int)uVar7 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      }
    }
  }
  return;
}

