/*
 * FUN_180007940 at 180007940
 * undefined FUN_180007940(void)
 * Address ranges: 180007940-180007c23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

longlong FUN_180007940(longlong *param_1,uint *param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  uint local_2a0 [5];
  undefined4 local_28c;
  char acStack_28b [3];
  undefined2 local_288;
  undefined4 local_264;
  undefined2 local_260;
  undefined2 local_25c;
  undefined1 local_25a;
  undefined1 local_259;
  undefined2 local_258;
  char acStack_254 [456];
  undefined1 local_8c [76];
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)*param_2;
  uVar9 = 0;
  if (uVar4 != 0) {
    uVar6 = 0;
    uVar5 = uVar4;
    do {
      uVar9 = uVar5 + uVar6 >> 1;
      uVar8 = *(ulonglong *)(*param_1 + (ulonglong)uVar9 * 0x260);
      uVar3 = uVar9;
      if (uVar8 <= uVar10) {
        if (uVar10 <= uVar8) break;
        uVar6 = uVar9 + 1;
        uVar9 = uVar9 + 1;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
    } while (uVar5 != uVar6);
    if ((uVar9 != uVar4) && (*(ulonglong *)(*param_1 + (ulonglong)uVar9 * 0x260) == uVar10))
    goto LAB_180007bf8;
  }
  if (uVar4 == *(uint *)(param_1 + 1)) {
    uVar8 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    lVar7 = uVar8 * 0x260;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    if (SUB168(auVar2 * ZEXT816(0x260),8) != 0) {
      lVar7 = -1;
    }
    lVar7 = thunk_FUN_180102f80(lVar7);
    if (lVar7 != 0) {
      uVar8 = 0;
      if ((int)param_1[1] != 0) {
        do {
          thunk_FUN_180001218(lVar7 + uVar8 * 0x260,*param_1 + uVar8 * 0x260,0x260);
          uVar4 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_180102fc0(*param_1);
      *param_1 = lVar7;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  while (lVar7 = *param_1, uVar9 < uVar4) {
    thunk_FUN_180001218(lVar7 + (ulonglong)uVar4 * 0x260,lVar7 + (ulonglong)(uVar4 - 1) * 0x260,
                        0x260);
    uVar4 = uVar4 - 1;
  }
  lVar11 = (ulonglong)uVar9 * 0x260;
  *(ulonglong *)(lVar7 + lVar11) = uVar10;
  uVar4 = *param_2;
  *(uint *)(lVar11 + *param_1 + 8) = uVar4;
  FUN_1800797d0(local_2a0);
  local_28c = 0x100400;
  local_288 = 3;
  local_2a0[0] = uVar4;
  local_2a0[3] = 0x10;
  local_2a0[4] = 1;
  lVar7 = 1;
  local_2a0[1] = 0;
  local_2a0[2] = 1;
  local_8c[0] = 0;
  if ((uVar4 >> 1 & 1) != 0) {
    local_260 = 4;
    local_264 = 0x4040400;
    local_8c[1] = 5;
    local_2a0[2] = 2;
    local_2a0[3] = 0x14;
    lVar7 = 2;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    local_25a = 4;
    local_25c = 0x400;
    local_258 = 4;
    local_259 = (char)(local_2a0[3] >> 2);
    local_8c[lVar7] = 6;
    local_2a0[2] = local_2a0[2] + 1;
    local_2a0[3] = local_2a0[3] + 4;
  }
  uVar6 = 0;
  do {
    if ((8 << (ulonglong)(uVar6 & 0x1f) & uVar4) != 0) {
      local_2b0 = 0x100000000;
      uStack_2a8 = 0x300000002;
      uVar5 = uVar4 >> (ulonglong)((uVar6 + 9) * 2 & 0x1f) & 3;
      uVar10 = (ulonglong)(uVar6 + 7);
      lVar7 = uVar10 * 8;
      cVar1 = (char)uVar5 + '\x01';
      *(undefined1 *)(&stack0xfffffffffffffd74 + uVar10 * 2) = 0;
      acStack_28b[lVar7] = cVar1;
      acStack_28b[lVar7 + 1] = cVar1 * '\x04';
      *(undefined1 *)((longlong)&local_288 + lVar7 + 1) = 0;
      acStack_28b[lVar7 + 2] = (char)(local_2a0[3] >> 2);
      *(char *)(&local_288 + uVar10 * 4) =
           (char)*(undefined4 *)((longlong)&local_2b0 + (ulonglong)uVar5 * 4);
      local_8c[local_2a0[2]] = (char)(uVar6 + 7);
      local_2a0[2] = local_2a0[2] + 1;
      local_2a0[3] = (byte)acStack_28b[lVar7 + 1] + local_2a0[3];
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  thunk_FUN_180001218(lVar11 + *param_1 + 0xc,local_2a0,0x254);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_180007bf8:
  return ((ulonglong)uVar9 * 0x260 | 0xc) + *param_1;
}

