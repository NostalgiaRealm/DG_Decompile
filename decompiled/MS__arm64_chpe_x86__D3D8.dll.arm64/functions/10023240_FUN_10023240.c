/*
 * FUN_10023240 at 10023240
 * undefined FUN_10023240(void)
 * Address ranges: 10023240-10023387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023240(int param_1,uint param_2,int param_3)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint local_b0 [4];
  undefined1 auStack_a0 [128];
  
  local_b0[0] = param_2;
  if (*(char *)(param_1 + 0x220) == '\0') {
    uVar6 = FUN_10023c88(param_1 + 0x148,local_b0,param_3);
    uVar5 = FUN_10024550(uVar6,auStack_a0,param_3);
    FUN_100239e8(param_1 + 0x158,local_b0,uVar5);
    FUN_10020aa8(param_1,param_2,param_3);
    return;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c) * 4);
  *(undefined1 *)(param_3 + 0x6d) = 1;
  uVar3 = *(uint *)(iVar2 + 0x49a4);
  if (uVar3 != 0) {
    uVar9 = 0;
    uVar7 = uVar3;
    do {
      uVar10 = uVar7 + uVar9 >> 1;
      uVar11 = *(ulonglong *)(*(int *)(iVar2 + 0x49a0) + uVar10 * 0x80);
      uVar4 = uVar10;
      if (uVar11 <= param_2) {
        if (param_2 <= uVar11) break;
        uVar9 = uVar10 + 1;
        uVar10 = uVar9;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar9);
    if (((uVar10 != uVar3) &&
        (puVar1 = (ulonglong *)(*(int *)(iVar2 + 0x49a0) + uVar10 * 0x80),
        *puVar1 == (ulonglong)param_2)) && (puVar1 != (ulonglong *)0xfffffff4)) {
      uVar8 = (undefined1)puVar1[0xf];
      goto LAB_10023320;
    }
  }
  uVar8 = 0;
LAB_10023320:
  *(undefined1 *)(param_3 + 0x6c) = uVar8;
  FUN_10023f38(iVar2 + 0x499c,local_b0,param_3);
  return;
}

