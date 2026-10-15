/*
 * FUN_1003b520 at 1003b520
 * undefined FUN_1003b520(void)
 * Address ranges: 1003b520-1003b64b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003b520(undefined8 param_1,int param_2,undefined4 param_3)

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
    FUN_1003b878(&local_40,param_2);
    *(undefined8 *)(iVar1 + 0x10171520) = uStack_58;
    *(undefined8 *)(&DAT_10171518 + iVar1) = local_60;
    *(undefined8 *)(&DAT_10171528 + iVar1) = local_50;
    (&DAT_10171504)[param_2 * 0x45] = uStack_38;
    (&DAT_101714fc)[param_2 * 0x45] = CONCAT44(iStack_3c,local_40);
    (&DAT_1017150c)[param_2 * 0x45] = local_30;
    (&DAT_10171514)[param_2 * 0x8a] = 0x2a;
    if (*(int *)(DAT_10170ad0 + 0x7fe) != 0) {
      *(int *)((int)&DAT_1017150c + iVar1 + 4) = *(int *)(DAT_10170ad0 + 0x7fe);
    }
    uVar3 = (*pcVar2)();
    puVar4 = (undefined8 *)(*extraout_w11_00)(uVar3,&local_60,param_3);
    uVar6 = *puVar4;
    uVar5 = 1;
    *(undefined8 *)(iVar1 + 0x10171548) = puVar4[1];
    *(undefined8 *)(&DAT_10171540 + iVar1) = uVar6;
    (&DAT_1017156a)[iVar1] = 0;
  }
  return uVar5;
}

