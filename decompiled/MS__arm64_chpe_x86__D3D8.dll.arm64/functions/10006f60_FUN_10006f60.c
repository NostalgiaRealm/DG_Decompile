/*
 * FUN_10006f60 at 10006f60
 * undefined FUN_10006f60(void)
 * Address ranges: 10006f60-100071fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10006f60(int param_1,uint param_2,int param_3,int param_4,undefined8 param_5,
                undefined1 param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 extraout_x1;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong local_c0;
  undefined4 local_b8;
  undefined1 auStack_b0 [4];
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  int local_94;
  int iStack_90;
  undefined1 local_43;
  
  local_c0 = 0;
  local_b8 = 0;
  iVar6 = 0;
  uVar9 = 0;
  uVar8 = 0;
  do {
    if (param_2 <= uVar8) break;
    local_ac = 0;
    uStack_a4 = 0;
    puVar1 = (undefined4 *)(param_3 + uVar8 * 0x3c);
    local_9c = 0;
    iVar6 = FUN_10006eb0(param_1,*puVar1,puVar1 + 1,0,auStack_b0,0xffffffff);
    if (uVar9 < (uint)(iStack_90 * local_94)) {
      *(undefined8 *)(param_1 + 0xae4) = uStack_a4;
      *(undefined8 *)(param_1 + 0xadc) = local_ac;
      *(undefined8 *)(param_1 + 0xaec) = local_9c;
      *(int *)(param_1 + 0xaf4) = local_94;
      *(int *)(param_1 + 0xaf8) = iStack_90;
      *(undefined1 *)(param_1 + 0xafc) = local_43;
      uVar9 = iStack_90 * local_94;
    }
    if ((-1 < iVar6) && (cVar5 = FUN_1000e9a0(&local_c0,auStack_b0), cVar5 == '\0')) {
      iVar6 = -0x7fffbffb;
    }
    uVar8 = uVar8 + 1;
  } while (-1 < iVar6);
  uVar4 = local_c0;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar3 = (int)local_c0;
  iVar10 = 0;
  if (-1 < iVar6) {
    do {
      if ((int)param_2 <= iVar10) goto LAB_100071d0;
      if (*(int *)(param_1 + 0xb04) == 1) {
        uVar7 = FUN_1001a7d0(iVar10 * 0x70 + iVar3);
        uVar7 = uVar7 & 0xffffffff;
      }
      else {
        uVar7 = 0;
      }
      iVar6 = -0x7789fe84;
      if (uVar7 <= (ulonglong)(&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45]) {
        (*pcVar2)(0x8876017c,iVar10 * 0x70 + iVar3);
        iVar6 = (*extraout_w11)(param_1,extraout_x1,*extraout_w8,uVar7 & 0xffffffff,param_6,0);
      }
      iVar10 = iVar10 + 1;
    } while (-1 < iVar6);
  }
  iVar10 = iVar10 + -1;
  if (0 < iVar10) {
    do {
      puVar1 = (undefined4 *)(param_4 + -4 + iVar10 * 4);
      (*pcVar2)();
      (*extraout_w11_00)(param_1,*puVar1,0);
      iVar10 = iVar10 + -1;
      *puVar1 = 0;
    } while (0 < iVar10);
  }
LAB_100071d0:
  FUN_100fed00(uVar4 & 0xffffffff);
  return iVar6;
}

