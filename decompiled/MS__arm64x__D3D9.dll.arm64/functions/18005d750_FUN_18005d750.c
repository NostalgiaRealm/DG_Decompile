/*
 * FUN_18005d750 at 18005d750
 * undefined FUN_18005d750(void)
 * Address ranges: 18005d750-18005dd1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d750(undefined8 param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint extraout_w1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint local_160;
  uint local_15c [3];
  uint local_150 [64];
  
  uVar3 = param_2[0x2d];
  uVar5 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  local_160 = uVar3;
  local_15c[0] = 0;
  lVar7 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
  uVar4 = (uint)lVar7;
  uVar5 = 1 - (uVar4 >> 5);
  uVar6 = uVar5 & 0xff;
  if ((uVar5 & 0xff) != 0) {
    *(byte *)((longlong)local_15c + (longlong)((int)uVar4 >> 3) + -4) =
         *(byte *)((longlong)local_15c + (longlong)((int)uVar4 >> 3) + -4) &
         ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    while( true ) {
      uVar5 = (uint)lVar7;
      if (((uint)((param_4 & 0xffffffffffff) >> ((ulonglong)(uVar5 * 3) & 0x3f)) & 7) - 5 < 2) {
        *(byte *)((longlong)local_15c + (longlong)((int)uVar5 >> 3)) =
             *(byte *)((longlong)local_15c + (longlong)((int)uVar5 >> 3)) |
             (byte)(1 << (ulonglong)(uVar5 & 7));
      }
      uVar5 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      lVar7 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      uVar5 = (uint)lVar7;
      if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_15c + (longlong)((int)uVar5 >> 3) + -4) =
           *(byte *)((longlong)local_15c + (longlong)((int)uVar5 >> 3) + -4) &
           ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    }
  }
  uVar5 = local_15c[0];
  iVar2 = func_0x000180213038(*param_2);
  if ((iVar2 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar2 - 0x40U & 0x1f) & 1) != 0)) {
    uVar4 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    local_160 = uVar3;
    lVar7 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
    if (uVar6 != 0) {
      iVar2 = (int)(uint)lVar7 >> 3;
      *(byte *)((longlong)local_15c + (longlong)iVar2 + -4) =
           *(byte *)((longlong)local_15c + (longlong)iVar2 + -4) &
           ((byte)(1 << (ulonglong)((uint)lVar7 & 7)) ^ 0xff);
      while( true ) {
        local_15c[0] = uVar5;
        uVar1 = 0x300085a;
        if ((*(byte *)((longlong)local_15c + (longlong)((int)(uint)lVar7 >> 3)) >>
             (ulonglong)((uint)lVar7 & 7) & 1) == 0) {
          uVar1 = 0x300005a;
        }
        FUN_1800f5b00(param_3,3,uVar1,0x106000);
        uVar3 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
        uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        lVar7 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
        uVar3 = (uint)lVar7;
        if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) =
             *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) &
             ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
      }
    }
  }
  else if (iVar2 == 0x51) {
    uVar6 = uVar3 & (uVar5 ^ 0xffffffff);
    if (uVar6 != 0) {
      FUN_1800f5b00(uVar6,param_3,6,0x600005a,0x306000,0,0,0xf,0);
    }
    if ((uVar3 & uVar5) != 0) {
      FUN_1800f5b00(param_3,6,0x600085a,0x306000,1,0x10,0x1f,0);
    }
  }
  local_160 = param_2[0x2d];
  uVar3 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  lVar7 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar6 = (uint)lVar7;
  uVar3 = 1 - (uVar6 >> 5);
  uVar5 = uVar3 & 0xff;
  if ((uVar3 & 0xff) == 0) {
LAB_18005da84:
    iVar2 = func_0x000180213038(*param_2);
    if ((iVar2 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar2 - 0x40U & 0x1f) & 1) != 0)) {
      uVar3 = (extraout_w1 & 0xaaaaaaaa) >> 1 | (extraout_w1 & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      local_160 = extraout_w1;
      lVar7 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      if (uVar5 != 0) {
        iVar2 = (int)(uint)lVar7 >> 3;
        *(byte *)((longlong)local_15c + (longlong)iVar2 + -4) =
             *(byte *)((longlong)local_15c + (longlong)iVar2 + -4) &
             ((byte)(1 << (ulonglong)((uint)lVar7 & 7)) ^ 0xff);
        while( true ) {
          uVar3 = local_150[lVar7 * 2 + 0x21] & 0xf;
          FUN_1800f5b00(param_3,4,
                        (*(uint *)(&DAT_180234924 + (ulonglong)local_150[lVar7 * 2 + 0x20] * 0x18) &
                        0x1f) << 0xb | 0x4000058,0x107000,
                        *(int *)(&DAT_180234910 + (ulonglong)local_150[lVar7 * 2 + 0x20] * 0x18) +
                        (int)lVar7,uVar3 | (uVar3 | (uVar3 | uVar3 << 4) << 4) << 4);
          uVar3 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
          uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          lVar7 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
          uVar3 = (uint)lVar7;
          if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) =
               *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) &
               ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
        }
      }
    }
    else if (iVar2 == 0x51) {
      uVar3 = (extraout_w1 & 0xaaaaaaaa) >> 1 | (extraout_w1 & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      local_160 = extraout_w1;
      local_15c[0] = 0;
      lVar7 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      local_150[2] = 0xffffffff;
      local_150[3] = 0xffffffff;
      local_150[0] = 0xffffffff;
      local_150[1] = 0xffffffff;
      local_150[6] = 0xffffffff;
      local_150[7] = 0xffffffff;
      local_150[4] = 0xffffffff;
      local_150[5] = 0xffffffff;
      local_150[10] = 0xffffffff;
      local_150[0xb] = 0xffffffff;
      local_150[8] = 0xffffffff;
      local_150[9] = 0xffffffff;
      local_150[0xe] = 0xffffffff;
      local_150[0xf] = 0xffffffff;
      local_150[0xc] = 0xffffffff;
      local_150[0xd] = 0xffffffff;
      local_150[0x12] = 0xffffffff;
      local_150[0x13] = 0xffffffff;
      local_150[0x10] = 0xffffffff;
      local_150[0x11] = 0xffffffff;
      local_150[0x16] = 0xffffffff;
      local_150[0x17] = 0xffffffff;
      local_150[0x14] = 0xffffffff;
      local_150[0x15] = 0xffffffff;
      local_150[0x1a] = 0xffffffff;
      local_150[0x1b] = 0xffffffff;
      local_150[0x18] = 0xffffffff;
      local_150[0x19] = 0xffffffff;
      local_150[0x1e] = 0xffffffff;
      local_150[0x1f] = 0xffffffff;
      local_150[0x1c] = 0xffffffff;
      local_150[0x1d] = 0xffffffff;
      if (uVar5 != 0) {
        iVar2 = (int)(uint)lVar7 >> 3;
        *(byte *)((longlong)local_15c + (longlong)iVar2 + -4) =
             *(byte *)((longlong)local_15c + (longlong)iVar2 + -4) &
             ((byte)(1 << (ulonglong)((uint)lVar7 & 7)) ^ 0xff);
        while( true ) {
          uVar3 = local_150[lVar7 * 2 + 0x20];
          *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3)) =
               *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3)) |
               (byte)(1 << (ulonglong)(uVar3 & 7));
          local_150[uVar3] = local_150[lVar7 * 2 + 0x21];
          uVar3 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
          uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          lVar7 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
          uVar3 = (uint)lVar7;
          if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) =
               *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) &
               ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
        }
      }
      uVar3 = (local_15c[0] & 0xaaaaaaaa) >> 1 | (local_15c[0] & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      local_160 = local_15c[0];
      lVar7 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar3 = (uint)lVar7;
      if ((1 - (uVar3 >> 5) & 0xff) != 0) {
        *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) =
             *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) &
             ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
        while( true ) {
          uVar3 = local_150[lVar7] & 0xf;
          lVar7 = lVar7 * 0x18;
          FUN_1800f5b00(param_3,7,(*(uint *)(&DAT_180234924 + lVar7) & 0x1f) << 0xb | 0x7000058,
                        0x307000,*(undefined4 *)(&DAT_180234914 + lVar7),
                        *(undefined4 *)(&DAT_180234918 + lVar7),
                        *(undefined4 *)(&DAT_18023491c + lVar7),
                        uVar3 | (uVar3 | (uVar3 | uVar3 << 4) << 4) << 4,
                        *(undefined4 *)(&DAT_180234920 + lVar7));
          uVar3 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
          uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          lVar7 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
          uVar3 = (uint)lVar7;
          if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) =
               *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) &
               ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
        }
      }
    }
    return;
  }
  *(byte *)((longlong)local_15c + (longlong)((int)uVar6 >> 3) + -4) =
       *(byte *)((longlong)local_15c + (longlong)((int)uVar6 >> 3) + -4) &
       ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
  do {
    uVar6 = (uint)lVar7;
    local_150[lVar7 * 2 + 0x21] = 5;
    uVar8 = (param_4 & 0xffffffffffff) >> ((ulonglong)(uVar6 * 3) & 0x3f);
    uVar3 = (uint)uVar8 & 7;
    if ((0xb2U >> (ulonglong)uVar3 & 1) == 0) {
      if ((uVar3 - 2 & 0xfffffffb) == 0) {
        uVar4 = 1;
      }
      else {
        if (((uVar8 & 7) == 0) || (uVar3 != 3)) goto LAB_18005d9f4;
        uVar4 = 2;
      }
    }
    else {
LAB_18005d9f4:
      uVar4 = 0;
    }
    local_150[lVar7 * 2 + 0x20] = uVar4;
    if ((0xb2U >> (ulonglong)uVar3 & 1) == 0) {
      if ((uVar3 - 2 & 0xfffffffb) == 0) {
        param_2[8] = param_2[8] | 1 << (ulonglong)(uVar6 & 0x1f);
      }
      else {
        if (uVar3 != 3) goto LAB_18005da3c;
        param_2[9] = param_2[9] | 1 << (ulonglong)(uVar6 & 0x1f);
      }
    }
    else {
LAB_18005da3c:
      param_2[7] = param_2[7] | 1 << (ulonglong)(uVar6 & 0x1f);
    }
    uVar3 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    lVar7 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
    uVar3 = (uint)lVar7;
    if ((1 - (uVar3 >> 5) & 0xff) == 0) goto LAB_18005da84;
    *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) =
         *(byte *)((longlong)local_15c + (longlong)((int)uVar3 >> 3) + -4) &
         ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
  } while( true );
}

