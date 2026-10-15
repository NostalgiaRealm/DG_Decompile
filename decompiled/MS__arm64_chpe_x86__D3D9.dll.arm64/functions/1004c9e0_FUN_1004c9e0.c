/*
 * FUN_1004c9e0 at 1004c9e0
 * undefined FUN_1004c9e0(void)
 * Address ranges: 1004c9e0-1004cbb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1004c9e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte local_50 [16];
  
  uVar3 = *(undefined1 *)(param_1 + 0x87);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xf6b0);
  puVar6 = (undefined4 *)FUN_101321c0(0x50);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar4 = *(undefined1 *)(param_3 + 0x126d);
    uVar5 = *(undefined1 *)(param_3 + 0x126e);
    *puVar6 = &PTR_FUN_1015eb34;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0;
    puVar6[2] = &PTR_D3DPERF_GetStatus_native_1015eb3c;
    *(undefined8 *)(puVar6 + 8) = 0;
    puVar6[10] = iVar2;
    puVar6[0xb] = iVar1;
    puVar6[0xd] = 0;
    *(undefined1 *)(puVar6 + 0xf) = uVar3;
    puVar6[0xe] = *(undefined4 *)(iVar2 + iVar1 * 0x28 + 0x38);
    *puVar6 = &PTR_FUN_1015eb2c;
    puVar6[2] = &PTR_FUN_1015eb24;
    uVar10 = 0xffff000000000000;
    puVar6[0x10] = (uint)CONCAT11(uVar4,uVar5);
    puVar6[0x11] = param_2;
    puVar6[0x12] = param_4;
    puVar6[1] = param_3;
    uVar7 = (uint)*(ushort *)(param_3 + 0x1214);
    uVar8 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
    lVar9 = LZCOUNT((uVar8 >> 8 | (uVar8 & 0xff00ff) << 8) << 0x10);
    uVar8 = (uint)lVar9;
    if ((1 - (uVar8 >> 5) & 0xff) != 0) {
      local_50[(int)uVar8 >> 3] =
           local_50[(int)uVar8 >> 3] & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
      while( true ) {
        uVar10 = 7L << ((ulonglong)(uint)((int)lVar9 * 3) & 0x3f) | uVar10;
        uVar8 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
        lVar9 = LZCOUNT((uVar8 >> 8 | (uVar8 & 0xff00ff) << 8) << 0x10);
        uVar8 = (uint)lVar9;
        if ((1 - (uVar8 >> 5) & 0xff) == 0) break;
        local_50[(int)uVar8 >> 3] =
             local_50[(int)uVar8 >> 3] & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
      }
    }
    *(ulonglong *)(puVar6 + 4) = uVar10;
  }
  return puVar6;
}

