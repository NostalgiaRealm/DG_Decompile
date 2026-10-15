/*
 * FUN_1003fdd0 at 1003fdd0
 * undefined FUN_1003fdd0(void)
 * Address ranges: 1003fdd0-1003ff9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1003fdd0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
  byte local_40 [16];
  
  uVar3 = *(undefined1 *)(param_1 + 0x87);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xd9b0);
  puVar6 = (undefined4 *)FUN_100febf0(0x50);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar4 = *(undefined1 *)(param_3 + 0x125);
    uVar5 = *(undefined1 *)(param_3 + 0x126);
    *puVar6 = &PTR_FUN_101296c0;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0;
    puVar6[2] = &PTR_FUN_101296c8;
    *(undefined8 *)(puVar6 + 8) = 0;
    puVar6[10] = iVar2;
    puVar6[0xb] = iVar1;
    puVar6[0xd] = 0;
    *(undefined1 *)(puVar6 + 0xf) = uVar3;
    puVar6[0xe] = *(undefined4 *)(iVar2 + iVar1 * 0x28 + 0x38);
    *puVar6 = &PTR_FUN_101296b8;
    puVar6[2] = &PTR_FUN_101296b0;
    uVar10 = 0xffffffffff000000;
    puVar6[0x10] = (uint)CONCAT11(uVar4,uVar5);
    puVar6[0x11] = param_2;
    puVar6[0x12] = param_4;
    puVar6[1] = param_3;
    uVar7 = (uint)*(byte *)(param_3 + 0xcc);
    uVar8 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    lVar9 = LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
    uVar8 = (uint)lVar9;
    if ((1 - (uVar8 >> 5) & 0xff) != 0) {
      local_40[(int)uVar8 >> 3] =
           local_40[(int)uVar8 >> 3] & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
      while( true ) {
        uVar10 = 7L << ((ulonglong)(uint)((int)lVar9 * 3) & 0x3f) | uVar10;
        uVar8 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
        lVar9 = LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
        uVar8 = (uint)lVar9;
        if ((1 - (uVar8 >> 5) & 0xff) == 0) break;
        local_40[(int)uVar8 >> 3] =
             local_40[(int)uVar8 >> 3] & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
      }
    }
    *(ulonglong *)(puVar6 + 4) = uVar10;
  }
  return puVar6;
}

