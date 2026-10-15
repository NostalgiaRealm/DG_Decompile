/*
 * FUN_1000cee0 at 1000cee0
 * undefined FUN_1000cee0(void)
 * Address ranges: 1000cee0-1000d0b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000cee0(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  byte local_50 [16];
  
  uVar11 = 0;
  if (param_4 != 0) {
    piVar1 = (int *)(param_1 + 0x1d0);
    do {
      uVar5 = *(uint *)(param_1 + 0xe8) & *(uint *)(param_1 + 0xe4);
      uVar8 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
      uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      lVar10 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
      uVar8 = (uint)lVar10;
      if ((1 - (uVar8 >> 5) & 0xff) != 0) {
        iVar6 = *piVar1;
        local_50[(int)uVar8 >> 3] =
             local_50[(int)uVar8 >> 3] & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
        while( true ) {
          iVar9 = (int)lVar10;
          piVar3 = (int *)(param_1 + 4 + iVar9 * 0x10);
          iVar7 = *(int *)(param_1 + 0xc + iVar9 * 0x10);
          puVar4 = (undefined4 *)(param_1 + 0x10 + iVar9 * 0x10);
          *(undefined4 *)*puVar4 = *(undefined4 *)(*piVar3 + param_2);
          *(undefined4 *)(iVar6 + *(int *)(param_1 + 8 + iVar9 * 0x10) * 4) = *(undefined4 *)*puVar4
          ;
          if (iVar7 != 1) {
            piVar2 = piVar3 + 3;
            *(undefined4 *)(*piVar2 + 4) = *(undefined4 *)(*piVar3 + param_2 + 4);
            *(undefined4 *)(iVar6 + (piVar3[1] + 1) * 4) = *(undefined4 *)(*piVar2 + 4);
            if (iVar7 != 2) {
              *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(*piVar3 + param_2 + 8);
              *(undefined4 *)(iVar6 + piVar3[1] * 4 + 8) = *(undefined4 *)(*piVar2 + 8);
            }
          }
          uVar8 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
          uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          lVar10 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
          uVar8 = (uint)lVar10;
          if ((1 - (uVar8 >> 5) & 0xff) == 0) break;
          local_50[(int)uVar8 >> 3] =
               local_50[(int)uVar8 >> 3] & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
        }
      }
      uVar11 = uVar11 + 1;
      param_2 = param_2 + param_3;
      *piVar1 = *piVar1 + 0x50;
    } while (uVar11 < param_4);
  }
  return;
}

