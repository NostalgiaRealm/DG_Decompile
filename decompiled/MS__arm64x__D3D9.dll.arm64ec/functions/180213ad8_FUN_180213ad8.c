/*
 * FUN_180213ad8 at 180213ad8
 * undefined FUN_180213ad8(void)
 * Address ranges: 180213ad8-180213d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180213ad8(undefined4 *param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  int local_100 [2];
  uint local_f8;
  undefined4 local_f0;
  uint local_e8;
  undefined4 local_e0;
  uint local_c0;
  uint local_bc;
  uint auStack_b8 [34];
  
  iVar1 = FUN_180213038(*param_1);
  if ((iVar1 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar1 - 0x40U & 0x1f) & 1) != 0)) {
    uVar2 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_c0 = param_3;
    lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
    if ((1 - ((uint)lVar3 >> 5) & 0xff) != 0) {
      do {
        uVar2 = (uint)lVar3;
        *(byte *)((longlong)&local_c0 + (longlong)((int)uVar2 >> 3)) =
             *(byte *)((longlong)&local_c0 + (longlong)((int)uVar2 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
        local_f8 = *(uint *)(param_5 + 4 + lVar3 * 8) & 0xf;
        lVar3 = (ulonglong)*(uint *)(param_5 + lVar3 * 8) * 0x18;
        local_f8 = local_f8 | (local_f8 | (local_f8 | local_f8 << 4) << 4) << 4;
        local_100[0] = *(int *)(param_4 + lVar3) + uVar2;
        FUN_180215058(param_2,4,(*(uint *)(param_4 + 0x14 + lVar3) & 0x1f) << 0xb | 0x4000058,
                      0x107000,local_100,0x10);
        uVar2 = (local_c0 & 0xaaaaaaaa) >> 1 | (local_c0 & 0x55555555) << 1;
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
      } while ((1 - ((uint)lVar3 >> 5) & 0xff) != 0);
    }
  }
  else if (iVar1 == 0x51) {
    local_bc = 0;
    lVar3 = 0x20;
    puVar4 = auStack_b8;
    do {
      lVar3 = lVar3 + -1;
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
    uVar2 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_c0 = param_3;
    lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
    uVar2 = (uint)lVar3;
    if ((1 - (uVar2 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)&local_c0 + (longlong)((int)uVar2 >> 3)) =
           *(byte *)((longlong)&local_c0 + (longlong)((int)uVar2 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
      while( true ) {
        uVar2 = *(uint *)(param_5 + lVar3 * 8);
        *(byte *)((longlong)auStack_b8 + (longlong)((int)uVar2 >> 3) + -4) =
             *(byte *)((longlong)auStack_b8 + (longlong)((int)uVar2 >> 3) + -4) |
             (byte)(1 << (ulonglong)(uVar2 & 7));
        auStack_b8[uVar2] = *(uint *)(param_5 + 4 + lVar3 * 8);
        uVar2 = (local_c0 & 0xaaaaaaaa) >> 1 | (local_c0 & 0x55555555) << 1;
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (uint)lVar3;
        if ((1 - (uVar2 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)&local_c0 + (longlong)((int)uVar2 >> 3)) =
             *(byte *)((longlong)&local_c0 + (longlong)((int)uVar2 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
      }
    }
    local_c0 = local_bc;
    uVar2 = (local_bc & 0xaaaaaaaa) >> 1 | (local_bc & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    while( true ) {
      lVar3 = LZCOUNT(uVar2);
      uVar2 = (uint)lVar3;
      if ((1 - (uVar2 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)&local_c0 + (longlong)((int)uVar2 >> 3)) =
           *(byte *)((longlong)&local_c0 + (longlong)((int)uVar2 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
      local_e8 = auStack_b8[lVar3] & 0xf;
      lVar3 = param_4 + lVar3 * 0x18;
      local_e8 = local_e8 | (local_e8 | (local_e8 | local_e8 << 4) << 4) << 4;
      local_f0 = *(undefined4 *)(lVar3 + 0xc);
      local_e0 = *(undefined4 *)(lVar3 + 0x10);
      local_100[0] = *(int *)(lVar3 + 4);
      local_f8 = *(undefined4 *)(lVar3 + 8);
      FUN_180215058(param_2,7,(*(uint *)(lVar3 + 0x14) & 0x1f) << 0xb | 0x7000058,0x307000,local_100
                    ,0x28);
      uVar2 = (local_c0 & 0xaaaaaaaa) >> 1 | (local_c0 & 0x55555555) << 1;
      uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    }
  }
  return;
}

