/*
 * FUN_1000ef58 at 1000ef58
 * undefined FUN_1000ef58(void)
 * Address ranges: 1000ef58-1000f073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1000ef58(int param_1,undefined8 *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte local_10 [16];
  
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x1d0);
  }
  uVar2 = *(uint *)(param_1 + 0xe8) & *(uint *)(param_1 + 0xe4);
  uVar5 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
  uVar5 = (uint)lVar6;
  if ((1 - (uVar5 >> 5) & 0xff) != 0) {
    local_10[(int)uVar5 >> 3] =
         local_10[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    while( true ) {
      puVar1 = (uint *)(param_1 + 0xc + (int)lVar6 * 0x10);
      uVar5 = 0;
      uVar3 = *puVar1;
      uVar4 = uVar3 >> 1;
      puVar8 = (undefined8 *)(param_3 + *(int *)(param_1 + 8 + (int)lVar6 * 0x10) * 4);
      puVar9 = param_2;
      if (uVar4 != 0) {
        do {
          uVar7 = *puVar9;
          uVar5 = uVar5 + 1;
          puVar9 = puVar9 + 1;
          *puVar8 = uVar7;
          puVar8 = puVar8 + 1;
        } while (uVar5 < uVar4);
      }
      if ((uVar3 & 1) != 0) {
        *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
      }
      param_2 = (undefined8 *)((int)param_2 + *puVar1 * 4);
      uVar5 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      uVar5 = (uint)lVar6;
      if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
      local_10[(int)uVar5 >> 3] =
           local_10[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    }
  }
  return param_2;
}

