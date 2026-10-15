/*
 * FUN_100531f0 at 100531f0
 * undefined FUN_100531f0(void)
 * Address ranges: 100531f0-1005349f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100531f0(int param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_50 [16];
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 0x21) == '\0') {
    iVar5 = *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 200) * 0x16c0;
    FUN_10130fb8(iVar5 + 0x1880);
    FUN_101138b0(*(int *)(iVar5 + 0x19c4) + 4,0);
    FUN_1011b9f8(*(undefined4 *)(iVar5 + 0x19c0),*(undefined8 *)(*(int *)(iVar5 + 0x19c4) + 0x940));
    uVar7 = 0;
    if (*(uint *)(iVar1 + 0xd8) != 0) {
      do {
        FUN_100528c0(*(undefined4 *)(*(int *)(iVar1 + 0xd4) + uVar7 * 4));
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar1 + 0xd8));
    }
  }
  else {
    iVar5 = *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 200) * 0x16c0;
    FUN_10130fb8(iVar5 + 0x1880);
    FUN_101138b0(*(int *)(iVar5 + 0x19c4) + 4,0);
    FUN_1011b9f8(*(undefined4 *)(iVar5 + 0x19c0),*(undefined8 *)(*(int *)(iVar5 + 0x19c4) + 0x940));
    uVar7 = 0;
    if (*(uint *)(iVar1 + 0xe4) != 0) {
      do {
        FUN_100528c0(*(undefined4 *)(*(int *)(iVar1 + 0xe0) + uVar7 * 4));
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar1 + 0xe4));
    }
  }
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,param_2,param_3,0,0);
  if (*(int *)((int)param_2 + 0xc) == 0) {
    iVar1 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 0x16c0;
    uVar7 = *(uint *)(**(int **)(param_1 + 0x24) + 0x28);
    if (*(char *)(param_1 + 0x21) == '\0') {
      uVar6 = *(uint *)(iVar1 + 0x1a5c);
      if (uVar6 < uVar7 << 1) {
        iVar5 = 2;
        if (uVar7 <= uVar6 * 3) {
          iVar5 = 3;
        }
        uVar6 = iVar5 * uVar7;
      }
      iVar5 = 0x1a60;
    }
    else {
      uVar6 = *(uint *)(iVar1 + 0x1abc);
      if (uVar6 < uVar7 << 1) {
        iVar5 = 2;
        if (uVar7 <= uVar6 * 3) {
          iVar5 = 3;
        }
        uVar6 = iVar5 * uVar7;
      }
      iVar5 = 0x1ac0;
    }
    *(int *)(iVar1 + iVar5) = *(int *)(iVar1 + iVar5) + uVar6;
    uVar3 = (*pcVar2)();
    puVar4 = (undefined8 *)(*extraout_w11_00)(uVar3,auStack_50,param_3,0,0);
    uVar8 = *puVar4;
    param_2[1] = puVar4[1];
    *param_2 = uVar8;
  }
  return param_2;
}

