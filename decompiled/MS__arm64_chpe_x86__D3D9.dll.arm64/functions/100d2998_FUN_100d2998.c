/*
 * FUN_100d2998 at 100d2998
 * undefined FUN_100d2998(void)
 * Address ranges: 100d2998-100d2e0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d2998(int param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  uint uVar7;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar7 = 0;
  do {
    if (*(int *)(param_1 + 0x1258 + uVar7 * 4) != 0) {
      uVar6 = (*pcVar5)();
      (*extraout_w11)(uVar6,uVar7,0,0,0,0,0,0);
      piVar3 = (int *)(param_1 + uVar7 * 4 + 0x1258);
      uVar4 = 1 << (ulonglong)(uVar7 & 0x1f);
      puVar2 = (uint *)(*piVar3 + 0x2c);
      *puVar2 = *puVar2 & (uVar4 ^ 0xffffffff);
      uVar6 = (*pcVar5)();
      (*extraout_w11_00)(uVar6);
      *piVar3 = 0;
      *(uint *)(param_1 + 0x6678) = *(uint *)(param_1 + 0x6678) & (uVar4 ^ 0xffffffff);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x10);
  uVar7 = 0;
  do {
    if (*(int *)(param_1 + 0x1298 + uVar7 * 4) != 0) {
      uVar6 = (*pcVar5)();
      (*extraout_w11_01)(uVar6,uVar7,0,0,0);
      uVar6 = (*pcVar5)();
      (*extraout_w11_02)(uVar6);
      *(undefined4 *)(param_1 + uVar7 * 4 + 0x1298) = 0;
      *(uint *)(param_1 + 0x6684) =
           *(uint *)(param_1 + 0x6684) & (1 << (ulonglong)(uVar7 & 0x1f) ^ 0xffffffffU);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 5);
  uVar7 = 0;
  do {
    if (*(int *)(param_1 + 26000 + uVar7 * 4) != 0) {
      uVar6 = (*pcVar5)();
      (*extraout_w11_03)(uVar6,uVar7,0,0,0);
      piVar3 = (int *)(param_1 + uVar7 * 4 + 26000);
      *(undefined4 *)(*piVar3 + 0x5c) = 0xffffffff;
      uVar6 = (*pcVar5)();
      (*extraout_w11_04)(uVar6);
      *piVar3 = 0;
    }
    *(undefined4 *)(param_1 + 0x65d0 + uVar7 * 4) = 0;
    iVar1 = uVar7 * 4;
    uVar7 = uVar7 + 1;
    *(undefined4 *)(param_1 + 0x6610 + iVar1) = 0;
  } while (uVar7 < 0x10);
  if (*(int *)(&DAT_0000658c + param_1) != 0) {
    uVar6 = (*pcVar5)();
    (*extraout_w11_05)(uVar6,0,0);
    *(undefined1 *)(*(int *)(&DAT_0000658c + param_1) + 0x48) = 0;
    uVar6 = (*pcVar5)();
    (*extraout_w11_06)(uVar6);
    *(undefined4 *)(&DAT_0000658c + param_1) = 0;
  }
  if (*(int *)(param_1 + 0xc288) != 0) {
    FUN_100ec110(*(int *)(param_1 + 0xc288));
    *(undefined4 *)(param_1 + 0xc288) = 0;
  }
  if (*(int *)(param_1 + 0xc28c) != 0) {
    FUN_100eb670(*(int *)(param_1 + 0xc28c));
    *(undefined4 *)(param_1 + 0xc28c) = 0;
  }
  if (*(int *)(param_1 + 0xc284) != 0) {
    uVar6 = (*pcVar5)();
    (*extraout_w11_07)(uVar6,0);
    FUN_100e6f00(*(undefined4 *)(param_1 + 0xc284));
    *(undefined4 *)(param_1 + 0xc284) = 0;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = 0;
  local_80 = 0;
  uVar6 = (*pcVar5)();
  (*extraout_w11_08)(uVar6,4,1,&local_78,&local_88);
  uVar7 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x18 + uVar7 * 4);
    if (iVar1 != 0) {
      FUN_1000b640(param_1,iVar1);
      iVar1 = param_1 + uVar7 * 4;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0xc270) = 0;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    FUN_1000b640(param_1,iVar1);
    *(int *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0xc280) = 0;
  }
  return;
}

