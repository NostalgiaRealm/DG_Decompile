/*
 * FUN_100b12c8 at 100b12c8
 * undefined FUN_100b12c8(void)
 * Address ranges: 100b12c8-100b1567
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b12c8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar8;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar8 = 0;
  do {
    if (*(int *)(param_1 + 0xf94 + uVar8 * 4) != 0) {
      uVar7 = (*pcVar6)();
      (*extraout_w11)(uVar7,uVar8,0,0,0,0,0,0);
      piVar2 = (int *)(param_1 + uVar8 * 4 + 0xf94);
      uVar5 = 1 << (ulonglong)(uVar8 & 0x1f);
      puVar3 = (uint *)(*piVar2 + 0x2c);
      *puVar3 = *puVar3 & (uVar5 ^ 0xffffffff);
      uVar7 = (*pcVar6)();
      (*extraout_w11_00)(uVar7);
      *piVar2 = 0;
      *(uint *)(param_1 + 0x58a4) = *(uint *)(param_1 + 0x58a4) & (uVar5 ^ 0xffffffff);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 8);
  uVar8 = 0;
  do {
    if (*(int *)(param_1 + 0x57bc + uVar8 * 4) != 0) {
      uVar7 = (*pcVar6)();
      (*extraout_w11_01)(uVar7,uVar8,0,0,0);
      puVar4 = (undefined4 *)(param_1 + uVar8 * 4 + 0x57bc);
      FUN_100c0378(*puVar4);
      *puVar4 = 0;
    }
    *(undefined4 *)(param_1 + 0x57fc + uVar8 * 4) = 0;
    iVar1 = uVar8 * 4;
    uVar8 = uVar8 + 1;
    *(undefined4 *)(param_1 + 0x583c + iVar1) = 0;
  } while (uVar8 < 0x10);
  if (*(int *)(&DAT_000057b8 + param_1) != 0) {
    uVar7 = (*pcVar6)();
    (*extraout_w11_02)(uVar7,0,0);
    FUN_100bdc38(*(undefined4 *)(&DAT_000057b8 + param_1));
    *(undefined4 *)(&DAT_000057b8 + param_1) = 0;
  }
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  uVar7 = (*pcVar6)();
  (*extraout_w11_03)(uVar7,1,1,&local_50,&local_60);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    FUN_1000a7c0(param_1,iVar1);
    *(int *)(param_1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    FUN_1000a7c0(param_1,iVar1);
    *(int *)(param_1 + 0x28) = 0;
  }
  return;
}

