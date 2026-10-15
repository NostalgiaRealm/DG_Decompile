/*
 * FUN_180078f18 at 180078f18
 * undefined FUN_180078f18(void)
 * Address ranges: 180078f18-1800791af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180078f18(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  uint local_e0 [4];
  uint local_d0;
  undefined1 local_cc;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined1 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_80 [48];
  
  uVar2 = func_0x000180213038(*(undefined4 *)(param_2 + 0x20));
  uVar1 = param_4;
  if (((int)uVar2 != 0x51) && (*(char *)(param_2 + 0x75) != '\0')) {
    uVar1 = FUN_1800f42d0(param_2 + 0x20,4,0);
    FUN_1800f5730(param_2 + 0x20,param_3,0xe,uVar1,3,param_4,0xff,*(undefined4 *)(param_2 + 0x2d4),
                  0x54,0,0);
    FUN_1800f5730(param_2 + 0x20,param_3,0,uVar1,3,param_4,0x54,uVar1,0x54,0);
    uVar2 = FUN_1800f5730(param_2 + 0x20,param_3,0x36,uVar1,0xc,param_4,0xea,0);
  }
  auVar7 = func_0x00018018b228(uVar2,param_2,*(undefined4 *)(param_2 + 0x1c0),0xf,&uStack_b0);
  func_0x00018018b228(auVar7._0_8_,auVar7._8_8_,*(undefined4 *)(param_2 + 0x1c4));
  local_cc = 0xe4;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0xffffffff;
  local_c0 = -1;
  uStack_bc = 0xffffffff;
  local_d0 = uVar1;
  FUN_1800f58b8(param_2 + 0x20,param_3,0x36,&uStack_b0,&local_d0,0);
  uVar2 = FUN_1800f58b8(param_2 + 0x20,param_3,0x36,auStack_80,&local_d0,0);
  uVar1 = 0;
  uVar3 = (uint)*(undefined8 *)(param_2 + 8);
  uVar4 = (uVar3 & 0x2a) >> 1 | (uVar3 & 0x15) << 1;
  local_e0[0] = uVar3 & 0x3f;
  lVar6 = LZCOUNT(((uVar4 & 0x33333333) >> 2 |
                  ((uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x3030303) << 2) << 4) << 0x18);
  uVar4 = (uint)lVar6;
  if ((1 - (uVar4 >> 5) & 0xff) == 0) {
    lVar6 = 0xffffffff;
  }
  else {
    *(byte *)((longlong)local_e0 + (longlong)((int)uVar4 >> 3)) =
         *(byte *)((longlong)local_e0 + (longlong)((int)uVar4 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
  }
  iVar5 = (int)lVar6;
  uVar4 = local_e0[0];
  while (iVar5 != -1) {
    func_0x00018018b228(uVar2,param_2,((undefined4 *)(param_2 + 0x1c0))[(uVar1 >> 2) + 0xd],
                        1 << (ulonglong)(uVar1 & 3),auStack_80);
    local_d0 = *(uint *)(param_2 + 0x2cc);
    local_ac = 0xe4;
    local_cc = 0xe4;
    uStack_98 = 0xffffffffffffffff;
    local_a0 = 0xffffffffffffffff;
    local_c0 = (uint)lVar6 * 0x10 + 0x20;
    uStack_bc = 0xffffffff;
    uStack_b8 = 0xffffffff;
    uStack_b4 = 0xffffffff;
    uStack_b0 = param_4;
    uVar2 = FUN_1800f58b8(param_2 + 0x20,param_3,0x11,auStack_80,&uStack_b0,&local_d0,0);
    uVar1 = uVar1 + 1;
    *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) | 1 << (ulonglong)((uint)lVar6 & 0x1f);
    uVar3 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    lVar6 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
    uVar3 = (uint)lVar6;
    if ((1 - (uVar3 >> 5) & 0xff) == 0) {
      lVar6 = 0xffffffff;
    }
    else {
      *(byte *)((longlong)local_e0 + (longlong)((int)uVar3 >> 3)) =
           *(byte *)((longlong)local_e0 + (longlong)((int)uVar3 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
      uVar4 = local_e0[0];
    }
    iVar5 = (int)lVar6;
  }
  return;
}

