/*
 * FUN_1800435f8 at 1800435f8
 * undefined FUN_1800435f8(void)
 * Address ranges: 1800435f8-18004376b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800435f8(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint local_50 [4];
  
  uVar2 = *(undefined1 *)(param_1 + 0xaf);
  lVar8 = *(longlong *)(param_1 + 0xf6d8);
  uVar6 = *(uint *)(param_1 + 0x18);
  puVar5 = (undefined8 *)FUN_180102f80(0x78);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar3 = *(undefined1 *)(param_3 + 0x126d);
    uVar4 = *(undefined1 *)(param_3 + 0x126e);
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[8] = lVar8;
    *(uint *)(puVar5 + 9) = uVar6;
    *(undefined4 *)(puVar5 + 10) = 0;
    *(undefined1 *)(puVar5 + 0xb) = uVar2;
    *puVar5 = &PTR_FUN_180233f90;
    puVar5[2] = &PTR_D3DPERF_GetStatus_1802345e8;
    puVar5[3] = 0;
    puVar5[6] = 0;
    puVar5[7] = lVar8 + (ulonglong)uVar6 * 0x1ac0 + 0x22d8;
    uVar1 = *(undefined4 *)(lVar8 + (ulonglong)uVar6 * 0x28 + 0x38);
    *(uint *)(puVar5 + 0xc) = (uint)CONCAT11(uVar3,uVar4);
    uVar7 = 0xffff000000000000;
    puVar5[0xd] = param_2;
    puVar5[0xe] = param_4;
    *(undefined4 *)((longlong)puVar5 + 0x54) = uVar1;
    puVar5[2] = &PTR_FUN_1802345c8;
    *puVar5 = &PTR_FUN_1802345d8;
    puVar5[1] = param_3;
    local_50[0] = (uint)*(ushort *)(param_3 + 0x1214);
    uVar6 = (local_50[0] & 0xaaaaaaaa) >> 1 | (local_50[0] & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    lVar8 = LZCOUNT((uVar6 >> 8 | (uVar6 & 0xff00ff) << 8) << 0x10);
    uVar6 = (uint)lVar8;
    if ((1 - (uVar6 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_50 + (longlong)((int)uVar6 >> 3)) =
           *(byte *)((longlong)local_50 + (longlong)((int)uVar6 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
      while( true ) {
        uVar7 = 7L << ((ulonglong)(uint)((int)lVar8 * 3) & 0x3f) | uVar7;
        uVar6 = (local_50[0] & 0xaaaaaaaa) >> 1 | (local_50[0] & 0x55555555) << 1;
        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        lVar8 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
        uVar6 = (uint)lVar8;
        if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_50 + (longlong)((int)uVar6 >> 3)) =
             *(byte *)((longlong)local_50 + (longlong)((int)uVar6 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
      }
    }
    puVar5[3] = uVar7;
  }
  return puVar5;
}

