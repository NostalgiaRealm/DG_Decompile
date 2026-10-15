/*
 * FUN_10007c38 at 10007c38
 * undefined FUN_10007c38(void)
 * Address ranges: 10007c38-10007dcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007c38(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  code *extraout_w11;
  undefined4 local_50;
  undefined4 auStack_4c [3];
  
  uVar4 = (*(code *)PTR_FUN_1009d184)(param_2,0xfffffff0);
  if ((uVar4 >> 0x1c & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x826);
    bVar3 = (uVar4 & 1) == 0;
    iVar1 = 0x40000;
    if (bVar3) {
      iVar1 = 0x40300;
    }
    uVar2 = 0x10000000;
    if (bVar3) {
      uVar2 = 0x10cf0000;
    }
    iVar5 = (*(code *)PTR_FUN_1009d184)(param_2,0xffffffec);
    if (iVar5 != iVar1) {
      (*(code *)PTR_FUN_1009d1f4)(param_2,0xffffffec,iVar1);
    }
    uVar6 = (*(code *)PTR_FUN_1009d184)(param_2,0xfffffff0);
    bVar3 = (uVar6 & 0x10cf0000) != uVar2;
    if (bVar3) {
      (*(code *)PTR_FUN_1009d1f4)(param_2,0xfffffff0,uVar2);
    }
    (*(code *)PTR_FUN_1009d1f8)(param_2,uVar4 >> 1 | 0xfffffffe,0,0,0,0,0x41b);
    if ((bVar3 || iVar5 != iVar1) ||
       ((*(int *)(param_3 + 0xc) == 0 && (*(int *)(param_3 + 0x10) == 0)))) {
      local_50 = 0;
      auStack_4c[0] = 0;
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar8 = (*extraout_w11)(uVar7,auStack_4c,&local_50);
      FUN_10007dd8(uVar8,param_2,param_3,auStack_4c[0],local_50,*(undefined1 *)(param_1 + 0x788));
    }
  }
  return;
}

