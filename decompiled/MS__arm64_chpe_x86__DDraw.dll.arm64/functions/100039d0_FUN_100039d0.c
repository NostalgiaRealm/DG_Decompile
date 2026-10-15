/*
 * FUN_100039d0 at 100039d0
 * undefined FUN_100039d0(void)
 * Address ranges: 100039d0-10003afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100039d0(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int local_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = param_2 * 0x228;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,&local_40,param_3);
  if ((local_40 == 0) || (iStack_3c == 0)) {
    uVar5 = 0;
  }
  else {
    FUN_10003d40(&local_40,param_2);
    *(undefined8 *)(&DAT_100be2f0 + iVar1) = uStack_58;
    *(undefined8 *)(&DAT_100be2e8 + iVar1) = local_60;
    *(undefined8 *)(&DAT_100be2f8 + iVar1) = local_50;
    (&DAT_100be2d4)[param_2 * 0x45] = uStack_38;
    (&DAT_100be2cc)[param_2 * 0x45] = CONCAT44(iStack_3c,local_40);
    (&DAT_100be2dc)[param_2 * 0x45] = local_30;
    (&DAT_100be2e4)[param_2 * 0x8a] = 0x1c;
    if (*(int *)(DAT_100be0c0 + 0x7fe) != 0) {
      *(int *)((int)&DAT_100be2dc + iVar1 + 4) = *(int *)(DAT_100be0c0 + 0x7fe);
    }
    uVar3 = (*pcVar2)();
    puVar4 = (undefined8 *)(*extraout_w11_00)(uVar3,&local_60,param_3);
    uVar6 = *puVar4;
    uVar5 = 1;
    *(undefined8 *)(iVar1 + 0x100be318) = puVar4[1];
    *(undefined8 *)(&DAT_100be310 + iVar1) = uVar6;
    (&DAT_100be33a)[iVar1] = 0;
  }
  return uVar5;
}

