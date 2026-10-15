/*
 * FUN_10028f48 at 10028f48
 * undefined FUN_10028f48(void)
 * Address ranges: 10028f48-1002905b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10028f48(int param_1,int param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte local_10 [16];
  
  iVar4 = 0;
  uVar2 = *(uint *)(param_1 + 0x328) & *(uint *)(param_1 + 0x324);
  uVar5 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  lVar8 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
  uVar5 = (uint)lVar8;
  if ((1 - (uVar5 >> 5) & 0xff) != 0) {
    local_10[(int)uVar5 >> 3] =
         local_10[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    while( true ) {
      puVar1 = (uint *)(param_1 + 0x24c + (int)lVar8 * 0x10);
      uVar5 = 0;
      uVar7 = *puVar1;
      uVar3 = uVar7 >> 1;
      puVar10 = (undefined8 *)(*(int *)(param_1 + 0x244 + (int)lVar8 * 0x10) + param_2);
      puVar6 = param_3;
      if (uVar3 != 0) {
        do {
          uVar9 = *puVar10;
          uVar5 = uVar5 + 1;
          puVar10 = puVar10 + 1;
          *puVar6 = uVar9;
          puVar6 = puVar6 + 1;
        } while (uVar5 < uVar3);
      }
      if ((uVar7 & 1) != 0) {
        *(undefined4 *)puVar6 = *(undefined4 *)puVar10;
      }
      uVar5 = *puVar1;
      iVar4 = uVar5 + iVar4;
      uVar7 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
      uVar7 = (uint)lVar8;
      if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
      param_3 = (undefined8 *)((int)param_3 + uVar5 * 4);
      local_10[(int)uVar7 >> 3] =
           local_10[(int)uVar7 >> 3] & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    }
  }
  return iVar4;
}

