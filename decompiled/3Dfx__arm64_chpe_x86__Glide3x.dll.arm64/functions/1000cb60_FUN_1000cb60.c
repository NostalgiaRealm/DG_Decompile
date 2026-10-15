/*
 * FUN_1000cb60 at 1000cb60
 * undefined FUN_1000cb60(void)
 * Address ranges: 1000cb60-1000cd0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000cb60(int param_1,int param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  byte local_10 [16];
  
  iVar1 = param_1 + param_3 * 0x50 + 0x10c;
  if ((param_4 & 1) == 0) {
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1d0);
    }
    uVar5 = *(uint *)(param_1 + 0xe8) & *(uint *)(param_1 + 0xe4);
    uVar7 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    lVar9 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    uVar7 = (uint)lVar9;
    if ((1 - (uVar7 >> 5) & 0xff) != 0) {
      local_10[(int)uVar7 >> 3] =
           local_10[(int)uVar7 >> 3] & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      while( true ) {
        iVar8 = (int)lVar9;
        piVar3 = (int *)(param_1 + 4 + iVar8 * 0x10);
        iVar6 = *(int *)(param_1 + 0xc + iVar8 * 0x10);
        puVar4 = (undefined4 *)(param_1 + 0x10 + iVar8 * 0x10);
        *(undefined4 *)*puVar4 = *(undefined4 *)(*piVar3 + param_2);
        *(undefined4 *)(iVar1 + *(int *)(param_1 + 8 + iVar8 * 0x10) * 4) = *(undefined4 *)*puVar4;
        if (iVar6 != 1) {
          piVar2 = piVar3 + 3;
          *(undefined4 *)(*piVar2 + 4) = *(undefined4 *)(*piVar3 + param_2 + 4);
          *(undefined4 *)(iVar1 + (piVar3[1] + 1) * 4) = *(undefined4 *)(*piVar2 + 4);
          if (iVar6 != 2) {
            *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(*piVar3 + param_2 + 8);
            *(undefined4 *)(iVar1 + piVar3[1] * 4 + 8) = *(undefined4 *)(*piVar2 + 8);
          }
        }
        uVar7 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        lVar9 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
        uVar7 = (uint)lVar9;
        if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
        local_10[(int)uVar7 >> 3] =
             local_10[(int)uVar7 >> 3] & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      }
    }
  }
  else {
    FUN_1000d0b8(param_1,param_2,iVar1);
  }
  return;
}

