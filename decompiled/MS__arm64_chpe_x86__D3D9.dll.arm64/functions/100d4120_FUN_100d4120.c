/*
 * FUN_100d4120 at 100d4120
 * undefined FUN_100d4120(void)
 * Address ranges: 100d4120-100d43b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d4120(int param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  iVar2 = *(int *)(param_2 + 4);
  piVar1 = (int *)(param_3 + 4);
  iVar3 = *piVar1;
  if (((*(int *)(*(int *)(iVar2 + 0x50) + 4) == 2) && (*(int *)(*(int *)(iVar3 + 0x50) + 4) != 2))
     && ((*(uint *)(param_3 + 0x34) & 0xfffffffd) == 0)) {
    FUN_1001d810(param_3);
  }
  FUN_1001d710(param_3,param_2);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(uint *)(param_3 + 0x30) & 1) != 0) {
    local_50 = *(undefined4 *)(*piVar1 + 0x50);
    local_4c = 0;
    local_44 = 0;
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar6,&local_50,0);
  }
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  FUN_100036b0(uVar6);
  FUN_100035f0(uVar6);
  cVar5 = FUN_100405d0(*(undefined4 *)(*piVar1 + 0x50),*(undefined4 *)(*(int *)(param_2 + 4) + 0x50)
                       ,*(undefined4 *)(param_1 + 0xde8),*(undefined4 *)(iVar2 + 0x70),
                       *(undefined4 *)(iVar3 + 0x70),*(undefined4 *)(iVar2 + 0x6c),
                       *(undefined4 *)(iVar3 + 0x6c),1,*(undefined4 *)(param_2 + 0x50));
  uVar6 = 0;
  if (cVar5 == '\0') {
    uVar6 = 0x88760827;
  }
  FUN_1001d7e0(param_3);
  if (cVar5 != '\0') {
    if (((*(int *)(*piVar1 + 0xb0) != 0) && ((*(uint *)(param_3 + 0x30) & 1) != 0)) &&
       ((*(uint *)(param_3 + 0x40) < 5 && (*(uint *)(param_3 + 0x44) < 5)))) {
      uVar7 = (*pcVar4)();
      (*extraout_w11_00)(uVar7,*(undefined4 *)(iVar3 + 0x70),*(undefined4 *)(iVar2 + 0x6c));
    }
    if (*(int *)(param_3 + 0x88) != 0) {
      FUN_10021490(*(int *)(param_3 + 0x88),*(undefined4 *)(param_3 + 0x4c),0,param_5);
    }
  }
  return uVar6;
}

