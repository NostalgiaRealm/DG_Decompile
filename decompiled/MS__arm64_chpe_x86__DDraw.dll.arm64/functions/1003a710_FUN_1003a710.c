/*
 * FUN_1003a710 at 1003a710
 * undefined FUN_1003a710(void)
 * Address ranges: 1003a710-1003a8b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003a710(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int local_c0;
  int local_bc;
  int local_ac;
  undefined1 auStack_a8 [136];
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = 0x80070057;
  if ((param_2 == (int *)0x0) || (*param_2 != 0x7c)) goto LAB_1003a890;
  if (*(char *)(param_1 + 0x109) == '\0') {
    if ((&DAT_100be33a)[*(int *)(param_1 + 0x11c) * 0x228] == '\0') {
      FUN_100389c8(param_1,*(undefined4 *)(param_1 + 0x120));
    }
    iVar1 = *(int *)(param_1 + 0x11c) * 0xa4;
    uVar7 = *(undefined8 *)(&DAT_100bbc60 + iVar1);
    uVar6 = *(undefined8 *)(&DAT_100bbc78 + iVar1);
    uVar5 = *(undefined8 *)(&DAT_100bbc70 + iVar1);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(&DAT_100bbc68 + iVar1);
    *(undefined8 *)param_2 = uVar7;
    *(undefined8 *)(param_2 + 6) = uVar6;
    *(undefined8 *)(param_2 + 4) = uVar5;
    uVar7 = *(undefined8 *)(&DAT_100bbc80 + iVar1);
    uVar6 = *(undefined8 *)(iVar1 + 0x100bbc98);
    uVar5 = *(undefined8 *)(&DAT_100bbc90 + iVar1);
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(iVar1 + 0x100bbc88);
    *(undefined8 *)(param_2 + 8) = uVar7;
    *(undefined8 *)(param_2 + 0xe) = uVar6;
    *(undefined8 *)(param_2 + 0xc) = uVar5;
    uVar7 = *(undefined8 *)(&DAT_100bbca0 + iVar1);
    uVar6 = *(undefined8 *)(&DAT_100bbcb8 + iVar1);
    uVar5 = *(undefined8 *)(&DAT_100bbcb0 + iVar1);
    *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(&DAT_100bbca8 + iVar1);
    *(undefined8 *)(param_2 + 0x10) = uVar7;
    *(undefined8 *)(param_2 + 0x16) = uVar6;
    *(undefined8 *)(param_2 + 0x14) = uVar5;
    uVar5 = *(undefined8 *)(&DAT_100bbcc0 + iVar1);
    *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(&DAT_100bbcc8 + iVar1);
    *(undefined8 *)(param_2 + 0x18) = uVar5;
    *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(&DAT_100bbcd0 + iVar1);
    iVar1 = *(int *)(&DAT_100bbcd8 + iVar1);
LAB_1003a888:
    param_2[0x1e] = iVar1;
  }
  else {
    puVar4 = (undefined4 *)(param_1 + 0x120);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,&local_c0,*puVar4);
    if ((((local_c0 != 0) && (local_bc != 0)) && ((local_ac - 8U & 0xffffffe7) == 0)) &&
       (local_ac != 0x18)) {
      puVar3 = (undefined8 *)FUN_100388c8(param_1,auStack_a8,&local_c0);
      uVar7 = *puVar3;
      uVar6 = puVar3[3];
      uVar5 = puVar3[2];
      *(undefined8 *)(param_2 + 2) = puVar3[1];
      *(undefined8 *)param_2 = uVar7;
      *(undefined8 *)(param_2 + 6) = uVar6;
      *(undefined8 *)(param_2 + 4) = uVar5;
      uVar7 = puVar3[4];
      uVar6 = puVar3[7];
      uVar5 = puVar3[6];
      *(undefined8 *)(param_2 + 10) = puVar3[5];
      *(undefined8 *)(param_2 + 8) = uVar7;
      *(undefined8 *)(param_2 + 0xe) = uVar6;
      *(undefined8 *)(param_2 + 0xc) = uVar5;
      uVar7 = puVar3[8];
      uVar6 = puVar3[0xb];
      uVar5 = puVar3[10];
      *(undefined8 *)(param_2 + 0x12) = puVar3[9];
      *(undefined8 *)(param_2 + 0x10) = uVar7;
      *(undefined8 *)(param_2 + 0x16) = uVar6;
      *(undefined8 *)(param_2 + 0x14) = uVar5;
      uVar5 = puVar3[0xc];
      *(undefined8 *)(param_2 + 0x1a) = puVar3[0xd];
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined8 *)(param_2 + 0x1c) = puVar3[0xe];
      iVar1 = *(int *)(puVar3 + 0xf);
      goto LAB_1003a888;
    }
  }
  uVar2 = 0;
LAB_1003a890:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}

