/*
 * FUN_18010d360 at 18010d360
 * undefined FUN_18010d360(void)
 * Address ranges: 18010d360-18010d43f;18010d450-18010d483;18010d488-18010d60b;18010d618-18010d643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

longlong FUN_18010d360(longlong *param_1,uint *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
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
  
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  uVar11 = (ulonglong)*param_2;
  uVar10 = 0;
  if (uVar6 != 0) {
    uVar7 = 0;
    uVar5 = uVar6;
    do {
      uVar10 = uVar5 + uVar7 >> 1;
      uVar9 = *(ulonglong *)(*param_1 + (ulonglong)uVar10 * 0x260);
      uVar4 = uVar10;
      if (uVar9 <= uVar11) {
        if (uVar11 <= uVar9) break;
        uVar7 = uVar10 + 1;
        uVar10 = uVar10 + 1;
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar5 != uVar7);
    if ((uVar10 != uVar6) && (*(ulonglong *)(*param_1 + (ulonglong)uVar10 * 0x260) == uVar11)) {
      return ((ulonglong)uVar10 * 0x260 | 0xc) + *param_1;
    }
  }
  if (uVar6 == *(uint *)(param_1 + 1)) {
    uVar9 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    lVar8 = uVar9 * 0x260;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar9;
    if (SUB168(auVar3 * ZEXT816(0x260),8) != 0) {
      lVar8 = -1;
    }
    lVar8 = FUN_1802229a8(lVar8);
    if (lVar8 != 0) {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar8,*param_1,0x260);
      }
      FUN_1802229d8(*param_1);
      *param_1 = lVar8;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  lVar8 = *param_1;
  if (uVar10 < uVar6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(lVar8 + (ulonglong)uVar6 * 0x260,lVar8 + (ulonglong)(uVar6 - 1) * 0x260,
                        0x260);
  }
  lVar12 = (ulonglong)uVar10 * 0x260;
  *(ulonglong *)(lVar8 + lVar12) = uVar11;
  uVar10 = *param_2;
  *(uint *)(lVar12 + *param_1 + 8) = uVar10;
  FUN_18018de28(local_2a0);
  local_28c = 0x100400;
  local_288 = 3;
  local_2a0[0] = uVar10;
  local_2a0[3] = 0x10;
  local_2a0[4] = 1;
  lVar8 = 1;
  local_2a0[1] = 0;
  local_2a0[2] = 1;
  local_8c[0] = 0;
  if ((uVar10 >> 1 & 1) != 0) {
    local_260 = 4;
    local_264 = 0x4040400;
    local_8c[1] = 5;
    local_2a0[2] = 2;
    local_2a0[3] = 0x14;
    lVar8 = 2;
  }
  if ((uVar10 >> 2 & 1) != 0) {
    local_25a = 4;
    local_25c = 0x400;
    local_258 = 4;
    local_259 = (char)(local_2a0[3] >> 2);
    local_8c[lVar8] = 6;
    local_2a0[2] = local_2a0[2] + 1;
    local_2a0[3] = local_2a0[3] + 4;
  }
  uVar6 = 0;
  do {
    if ((8 << (ulonglong)(uVar6 & 0x1f) & uVar10) != 0) {
      local_2b0 = 0x100000000;
      uStack_2a8 = 0x300000002;
      uVar7 = uVar10 >> (ulonglong)((uVar6 + 9) * 2 & 0x1f) & 3;
      uVar11 = (ulonglong)(uVar6 + 7);
      lVar8 = uVar11 * 8;
      cVar2 = (char)uVar7 + '\x01';
      *(undefined1 *)(&stack0xfffffffffffffd74 + uVar11 * 2) = 0;
      uVar1 = *(undefined4 *)((longlong)&local_2b0 + (ulonglong)uVar7 * 4);
      acStack_28b[lVar8] = cVar2;
      acStack_28b[lVar8 + 1] = cVar2 * '\x04';
      *(undefined1 *)((longlong)&local_288 + lVar8 + 1) = 0;
      *(char *)(&local_288 + uVar11 * 4) = (char)uVar1;
      acStack_28b[lVar8 + 2] = (char)(local_2a0[3] >> 2);
      local_8c[local_2a0[2]] = (char)(uVar6 + 7);
      local_2a0[2] = local_2a0[2] + 1;
      local_2a0[3] = (byte)acStack_28b[lVar8 + 1] + local_2a0[3];
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(lVar12 + *param_1 + 0xc,local_2a0,0x254);
}

