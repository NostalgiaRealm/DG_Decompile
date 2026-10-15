/*
 * FUN_1800808f0 at 1800808f0
 * undefined FUN_1800808f0(void)
 * Address ranges: 1800808f0-180080b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1800808f0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
             int param_6,uint param_7)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 extraout_w15;
  undefined4 local_50 [4];
  
  plVar5 = (longlong *)FUN_180102f80(0x170);
  if (plVar5 != (longlong *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar6 = (ulonglong)uVar2;
    iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x7c);
    plVar5[2] = 0;
    plVar5[3] = 0;
    *(uint *)(plVar5 + 4) = uVar2;
    *(undefined4 *)((longlong)plVar5 + 0x24) = param_2;
    *(undefined4 *)(plVar5 + 5) = param_3;
    *(int *)((longlong)plVar5 + 0x2c) = param_4;
    *(uint *)(plVar5 + 8) = param_7;
    *(int *)((longlong)plVar5 + 0x44) = param_6;
    *(undefined1 *)((longlong)plVar5 + 0x4d) = 0;
    *(bool *)((longlong)plVar5 + 0x4c) = iVar3 != 2;
    iVar3 = param_5;
    if ((param_7 & 4) != 0) {
      iVar3 = 1;
    }
    *plVar5 = (longlong)&PTR_D3DPERF_GetStatus_180235d90;
    plVar5[1] = param_1;
    uVar7 = 1;
    if (param_6 == 2 || param_6 == 5) {
      uVar7 = 6;
    }
    *(int *)(plVar5 + 6) = iVar3;
    *(undefined4 *)((longlong)plVar5 + 0x34) = uVar7;
    if ((param_7 & 4) == 0) {
      param_5 = 0;
    }
    *(int *)(plVar5 + 7) = param_5;
    *(undefined4 *)(plVar5 + 9) = 0;
    if ((param_5 == 0) || (10 < param_4 - 0x15U)) {
      param_5 = (int)plVar5[6];
    }
    *(int *)((longlong)plVar5 + 0x3c) = param_5;
    if (param_4 - 0x27U < 3) {
      *(uint *)(plVar5 + 8) = param_7 | 8;
    }
    FUN_1800a29c0(local_50,plVar5[1],param_4);
    plVar1 = plVar5 + 0x1c;
    *(undefined4 *)(plVar5 + 9) = local_50[0];
    *plVar5 = (longlong)&PTR_D3DPERF_GetStatus_180235050;
    lVar9 = *(longlong *)(param_1 + 0x1cf10);
    plVar5[10] = lVar9;
    lVar8 = *(longlong *)(param_1 + 0x1cf10);
    *(int *)(plVar5 + 0xd) = (int)uVar6;
    plVar5[0x10] = 0;
    plVar5[0x11] = 0;
    plVar5[0x12] = 0;
    plVar5[0x13] = 0;
    plVar5[0xc] = lVar8;
    plVar5[0xe] = lVar8 + (uVar6 & 0xffffffff) * 0x18c0 + 0x6b0;
    plVar5[0xf] = 0;
    lVar8 = *(longlong *)(param_1 + 0x1cf10);
    *(int *)(plVar5 + 0x15) = (int)uVar6;
    plVar5[0x18] = 0;
    plVar5[0x19] = 0;
    plVar5[0x1a] = 0;
    plVar5[0x1b] = 0;
    plVar5[0x14] = lVar8;
    *(undefined4 *)(plVar5 + 0x1d) = extraout_w15;
    plVar5[0x16] = lVar8 + (uVar6 & 0xffffffff) * 0x18c0 + 0x6b0;
    plVar5[0x17] = 0;
    plVar5[0xb] = lVar9 + (uVar6 & 0xffffffff) * 0x18c0 + 0x6b0;
    plVar5[0x1f] = 0;
    plVar5[0x1e] = 0;
    plVar5[0x21] = 0;
    plVar5[0x20] = 0;
    *plVar5 = (longlong)&PTR_FUN_180234d78;
    plVar5[0x1c] = (longlong)&PTR_FUN_180234cd0;
    plVar5[0x22] = param_1;
    lVar8 = *(longlong *)(param_1 + 0x1cf10);
    *(uint *)(plVar5 + 0x24) = *(uint *)(plVar5 + 4);
    plVar5[0x27] = 0;
    plVar5[0x28] = 0;
    plVar5[0x29] = 0;
    plVar5[0x2a] = 0;
    plVar5[0x23] = lVar8;
    plVar5[0x25] = lVar8 + (ulonglong)*(uint *)(plVar5 + 4) * 0x18c0 + 0x6b0;
    plVar5[0x26] = 0;
    plVar5[0x2c] = 0;
    plVar5[0x2b] = 0;
    *(undefined4 *)(plVar5 + 0x2d) = 0x100;
    *(undefined4 *)(plVar5 + 0x1d) = extraout_w15;
    cVar4 = (**(code **)(*plVar5 + 0xe0))(plVar5);
    if (cVar4 != '\0') {
      if (plVar5 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
    (**(code **)*plVar1)(plVar1,1);
  }
  return (longlong *)0x0;
}

