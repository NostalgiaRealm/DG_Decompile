/*
 * FUN_1800f45d8 at 1800f45d8
 * undefined FUN_1800f45d8(void)
 * Address ranges: 1800f45d8-1800f489b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f45d8(undefined4 *param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint local_d0;
  uint local_cc [3];
  uint local_c0 [32];
  
  iVar1 = func_0x000180213038(*param_1);
  if ((iVar1 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar1 - 0x40U & 0x1f) & 1) != 0)) {
    uVar2 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_d0 = param_3;
    lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
    uVar2 = (uint)lVar3;
    if ((1 - (uVar2 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) =
           *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) &
           ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
      while( true ) {
        uVar2 = *(uint *)(param_5 + 4 + lVar3 * 8) & 0xf;
        lVar4 = (ulonglong)*(uint *)(param_5 + lVar3 * 8) * 0x18;
        FUN_1800f5b00(param_2,4,(*(uint *)(param_4 + 0x14 + lVar4) & 0x1f) << 0xb | 0x4000058,
                      0x107000,*(int *)(param_4 + lVar4) + (int)lVar3,
                      uVar2 | (uVar2 | (uVar2 | uVar2 << 4) << 4) << 4);
        uVar2 = (local_d0 & 0xaaaaaaaa) >> 1 | (local_d0 & 0x55555555) << 1;
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (uint)lVar3;
        if ((1 - (uVar2 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) =
             *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) &
             ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
      }
    }
  }
  else if (iVar1 == 0x51) {
    uVar2 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
    local_d0 = param_3;
    local_cc[0] = 0;
    uVar2 = (uint)lVar3;
    local_c0[2] = 0xffffffff;
    local_c0[3] = 0xffffffff;
    local_c0[0] = 0xffffffff;
    local_c0[1] = 0xffffffff;
    local_c0[6] = 0xffffffff;
    local_c0[7] = 0xffffffff;
    local_c0[4] = 0xffffffff;
    local_c0[5] = 0xffffffff;
    local_c0[10] = 0xffffffff;
    local_c0[0xb] = 0xffffffff;
    local_c0[8] = 0xffffffff;
    local_c0[9] = 0xffffffff;
    local_c0[0xe] = 0xffffffff;
    local_c0[0xf] = 0xffffffff;
    local_c0[0xc] = 0xffffffff;
    local_c0[0xd] = 0xffffffff;
    local_c0[0x12] = 0xffffffff;
    local_c0[0x13] = 0xffffffff;
    local_c0[0x10] = 0xffffffff;
    local_c0[0x11] = 0xffffffff;
    local_c0[0x16] = 0xffffffff;
    local_c0[0x17] = 0xffffffff;
    local_c0[0x14] = 0xffffffff;
    local_c0[0x15] = 0xffffffff;
    local_c0[0x1a] = 0xffffffff;
    local_c0[0x1b] = 0xffffffff;
    local_c0[0x18] = 0xffffffff;
    local_c0[0x19] = 0xffffffff;
    local_c0[0x1e] = 0xffffffff;
    local_c0[0x1f] = 0xffffffff;
    local_c0[0x1c] = 0xffffffff;
    local_c0[0x1d] = 0xffffffff;
    if ((1 - (uVar2 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) =
           *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) &
           ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
      while( true ) {
        uVar2 = *(uint *)(param_5 + lVar3 * 8);
        *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3)) =
             *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3)) |
             (byte)(1 << (ulonglong)(uVar2 & 7));
        local_c0[uVar2] = *(uint *)(param_5 + 4 + lVar3 * 8);
        uVar2 = (local_d0 & 0xaaaaaaaa) >> 1 | (local_d0 & 0x55555555) << 1;
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (uint)lVar3;
        if ((1 - (uVar2 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) =
             *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) &
             ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
      }
    }
    uVar2 = (local_cc[0] & 0xaaaaaaaa) >> 1 | (local_cc[0] & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_d0 = local_cc[0];
    lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
    uVar2 = (uint)lVar3;
    if ((1 - (uVar2 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) =
           *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) &
           ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
      while( true ) {
        uVar2 = local_c0[lVar3] & 0xf;
        lVar3 = param_4 + lVar3 * 0x18;
        FUN_1800f5b00(param_2,7,(*(uint *)(lVar3 + 0x14) & 0x1f) << 0xb | 0x7000058,0x307000,
                      *(undefined4 *)(lVar3 + 4),*(undefined4 *)(lVar3 + 8),
                      *(undefined4 *)(lVar3 + 0xc),uVar2 | (uVar2 | (uVar2 | uVar2 << 4) << 4) << 4,
                      *(undefined4 *)(lVar3 + 0x10));
        uVar2 = (local_d0 & 0xaaaaaaaa) >> 1 | (local_d0 & 0x55555555) << 1;
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        lVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (uint)lVar3;
        if ((1 - (uVar2 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) =
             *(byte *)((longlong)local_cc + (longlong)((int)uVar2 >> 3) + -4) &
             ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
      }
    }
  }
  return;
}

