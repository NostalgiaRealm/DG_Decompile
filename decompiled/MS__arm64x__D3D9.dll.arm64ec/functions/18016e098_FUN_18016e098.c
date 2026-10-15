/*
 * FUN_18016e098 at 18016e098
 * undefined FUN_18016e098(void)
 * Address ranges: 18016e098-18016e6cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016e098(undefined8 param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_w1;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  uint local_1a0 [2];
  uint local_198;
  undefined4 local_190;
  uint local_188;
  undefined4 local_180;
  uint local_160;
  uint local_15c;
  undefined4 *local_158;
  ulonglong uStack_150;
  uint auStack_148 [32];
  uint auStack_c8 [34];
  
  uVar6 = param_2[0x2d];
  uVar5 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  local_160 = uVar6;
  local_15c = 0;
  lVar8 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
  uVar4 = (uint)lVar8;
  uVar5 = 1 - (uVar4 >> 5);
  uVar7 = uVar5 & 0xff;
  if ((uVar5 & 0xff) != 0) {
    *(byte *)((longlong)&local_160 + (longlong)((int)uVar4 >> 3)) =
         *(byte *)((longlong)&local_160 + (longlong)((int)uVar4 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    while( true ) {
      uVar5 = (uint)lVar8;
      if (((uint)((param_4 & 0xffffffffffff) >> ((ulonglong)(uVar5 * 3) & 0x3f)) & 7) - 5 < 2) {
        *(byte *)((longlong)&local_15c + (longlong)((int)uVar5 >> 3)) =
             *(byte *)((longlong)&local_15c + (longlong)((int)uVar5 >> 3)) |
             (byte)(1 << (ulonglong)(uVar5 & 7));
      }
      uVar5 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      lVar8 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      uVar5 = (uint)lVar8;
      if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)&local_160 + (longlong)((int)uVar5 >> 3)) =
           *(byte *)((longlong)&local_160 + (longlong)((int)uVar5 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    }
  }
  uVar5 = local_15c;
  iVar2 = FUN_180213038(*param_2);
  if ((iVar2 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar2 - 0x40U & 0x1f) & 1) != 0)) {
    uVar4 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    local_160 = uVar6;
    lVar8 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
    if (uVar7 != 0) {
      local_158 = param_2;
      uStack_150 = param_4;
      iVar2 = (int)(uint)lVar8 >> 3;
      *(byte *)((longlong)&local_160 + (longlong)iVar2) =
           *(byte *)((longlong)&local_160 + (longlong)iVar2) &
           ((byte)(1 << (ulonglong)((uint)lVar8 & 7)) ^ 0xff);
      while( true ) {
        local_1a0[0] = (uint)lVar8;
        local_15c = uVar5;
        uVar1 = 0x300085a;
        if ((*(byte *)((longlong)&local_15c + (longlong)((int)local_1a0[0] >> 3)) >>
             (ulonglong)(local_1a0[0] & 7) & 1) == 0) {
          uVar1 = 0x300005a;
        }
        FUN_180215058(param_3,3,uVar1,0x106000,local_1a0,8);
        uVar6 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        lVar8 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
        uVar6 = (uint)lVar8;
        param_2 = local_158;
        param_4 = uStack_150;
        if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)&local_160 + (longlong)((int)uVar6 >> 3)) =
             *(byte *)((longlong)&local_160 + (longlong)((int)uVar6 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
      }
    }
  }
  else if (iVar2 == 0x51) {
    if ((uVar6 & (uVar5 ^ 0xffffffff)) != 0) {
      local_188 = 0;
      local_190 = 0xf;
      local_198 = 0;
      local_1a0[0] = 0;
      FUN_180215058(param_3,6,0x600005a,0x306000,local_1a0,0x20);
    }
    if ((uVar6 & uVar5) != 0) {
      local_188 = 0;
      local_190 = 0x1f;
      local_198 = 0x10;
      local_1a0[0] = 1;
      FUN_180215058(param_3,6,0x600085a,0x306000,local_1a0,0x20);
    }
  }
  uVar6 = param_2[0x2d];
  uVar5 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  local_160 = uVar6;
  lVar8 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
  uVar5 = (uint)lVar8;
  if ((1 - (uVar5 >> 5) & 0xff) == 0) {
LAB_18016e400:
    iVar2 = FUN_180213038(*param_2);
    if ((iVar2 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar2 - 0x40U & 0x1f) & 1) != 0)) {
      uVar5 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_160 = uVar6;
      lVar8 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      if (extraout_w1 != 0) {
        iVar2 = (int)(uint)lVar8 >> 3;
        *(byte *)((longlong)&local_160 + (longlong)iVar2) =
             *(byte *)((longlong)&local_160 + (longlong)iVar2) &
             ((byte)(1 << (ulonglong)((uint)lVar8 & 7)) ^ 0xff);
        while( true ) {
          local_198 = auStack_148[lVar8 * 2 + 1] & 0xf;
          local_198 = local_198 | (local_198 | (local_198 | local_198 << 4) << 4) << 4;
          local_1a0[0] = *(int *)(&DAT_18022c2b0 + (ulonglong)auStack_148[lVar8 * 2] * 0x18) +
                         (int)lVar8;
          FUN_180215058(param_3,4,
                        (*(uint *)(&DAT_18022c2c4 + (ulonglong)auStack_148[lVar8 * 2] * 0x18) & 0x1f
                        ) << 0xb | 0x4000058,0x107000,local_1a0,0x10);
          uVar6 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
          uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          lVar8 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
          uVar6 = (uint)lVar8;
          if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)&local_160 + (longlong)((int)uVar6 >> 3)) =
               *(byte *)((longlong)&local_160 + (longlong)((int)uVar6 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
        }
      }
    }
    else if (iVar2 == 0x51) {
      local_15c = 0;
      lVar8 = 0x20;
      puVar9 = auStack_c8;
      do {
        lVar8 = lVar8 + -1;
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 1;
      } while (lVar8 != 0);
      uVar5 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_160 = uVar6;
      lVar8 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      if (extraout_w1 != 0) {
        iVar2 = (int)(uint)lVar8 >> 3;
        *(byte *)((longlong)&local_160 + (longlong)iVar2) =
             *(byte *)((longlong)&local_160 + (longlong)iVar2) &
             ((byte)(1 << (ulonglong)((uint)lVar8 & 7)) ^ 0xff);
        while( true ) {
          uVar6 = auStack_148[lVar8 * 2];
          *(byte *)((longlong)&local_15c + (longlong)((int)uVar6 >> 3)) =
               *(byte *)((longlong)&local_15c + (longlong)((int)uVar6 >> 3)) |
               (byte)(1 << (ulonglong)(uVar6 & 7));
          auStack_c8[uVar6] = auStack_148[lVar8 * 2 + 1];
          uVar6 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
          uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          lVar8 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
          uVar6 = (uint)lVar8;
          if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)&local_160 + (longlong)((int)uVar6 >> 3)) =
               *(byte *)((longlong)&local_160 + (longlong)((int)uVar6 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
        }
      }
      uVar6 = (local_15c & 0xaaaaaaaa) >> 1 | (local_15c & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      local_160 = local_15c;
      lVar8 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      uVar6 = (uint)lVar8;
      if ((1 - (uVar6 >> 5) & 0xff) != 0) {
        *(byte *)((longlong)&local_160 + (longlong)((int)uVar6 >> 3)) =
             *(byte *)((longlong)&local_160 + (longlong)((int)uVar6 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
        while( true ) {
          local_188 = auStack_c8[lVar8] & 0xf;
          lVar8 = lVar8 * 0x18;
          local_188 = local_188 | (local_188 | (local_188 | local_188 << 4) << 4) << 4;
          local_190 = *(undefined4 *)(&DAT_18022c2bc + lVar8);
          local_180 = *(undefined4 *)(&DAT_18022c2c0 + lVar8);
          local_1a0[0] = *(uint *)(&DAT_18022c2b4 + lVar8);
          local_198 = *(uint *)(&DAT_18022c2b8 + lVar8);
          FUN_180215058(param_3,7,(*(uint *)(&DAT_18022c2c4 + lVar8) & 0x1f) << 0xb | 0x7000058,
                        0x307000,local_1a0,0x28);
          uVar6 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
          uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          lVar8 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
          uVar6 = (uint)lVar8;
          if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)&local_160 + (longlong)((int)uVar6 >> 3)) =
               *(byte *)((longlong)&local_160 + (longlong)((int)uVar6 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
        }
      }
    }
    return;
  }
  *(byte *)((longlong)&local_160 + (longlong)((int)uVar5 >> 3)) =
       *(byte *)((longlong)&local_160 + (longlong)((int)uVar5 >> 3)) &
       ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
  do {
    uVar7 = (uint)lVar8;
    auStack_148[lVar8 * 2 + 1] = 5;
    uVar3 = (param_4 & 0xffffffffffff) >> ((ulonglong)(uVar7 * 3) & 0x3f);
    uVar5 = (uint)uVar3 & 7;
    if ((0xb2U >> (ulonglong)uVar5 & 1) == 0) {
      if ((uVar5 - 2 & 0xfffffffb) == 0) {
        uVar4 = 1;
      }
      else {
        if (((uVar3 & 7) == 0) || (uVar5 != 3)) goto LAB_18016e370;
        uVar4 = 2;
      }
    }
    else {
LAB_18016e370:
      uVar4 = 0;
    }
    auStack_148[lVar8 * 2] = uVar4;
    if ((0xb2U >> (ulonglong)uVar5 & 1) == 0) {
      if ((uVar5 - 2 & 0xfffffffb) == 0) {
        param_2[8] = param_2[8] | 1 << (ulonglong)(uVar7 & 0x1f);
      }
      else {
        if (uVar5 != 3) goto LAB_18016e3b8;
        param_2[9] = param_2[9] | 1 << (ulonglong)(uVar7 & 0x1f);
      }
    }
    else {
LAB_18016e3b8:
      param_2[7] = param_2[7] | 1 << (ulonglong)(uVar7 & 0x1f);
    }
    uVar5 = (local_160 & 0xaaaaaaaa) >> 1 | (local_160 & 0x55555555) << 1;
    uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    lVar8 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
    uVar5 = (uint)lVar8;
    if ((1 - (uVar5 >> 5) & 0xff) == 0) goto LAB_18016e400;
    *(byte *)((longlong)&local_160 + (longlong)((int)uVar5 >> 3)) =
         *(byte *)((longlong)&local_160 + (longlong)((int)uVar5 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
  } while( true );
}

