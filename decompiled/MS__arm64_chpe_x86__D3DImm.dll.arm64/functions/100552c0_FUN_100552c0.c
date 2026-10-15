/*
 * FUN_100552c0 at 100552c0
 * undefined FUN_100552c0(void)
 * Address ranges: 100552c0-10055407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100552c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  
  iVar3 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar3 == 0) {
    FUN_1004bc70(0);
  }
  uVar6 = 0x80070057;
  if ((param_2 != 0) && (param_3 != 0)) {
    local_40 = *(undefined4 *)(*(int *)(param_2 + 4) + 0x60);
    local_3c = *(undefined4 *)(*(int *)(param_3 + 4) + 0x60);
    iVar3 = param_1 + 0x17c8;
    piVar4 = (int *)FUN_100594a0(iVar3,&local_40);
    piVar5 = (int *)FUN_100594a0(iVar3,&local_3c);
    if ((piVar4 != (int *)0x0) && (piVar5 != (int *)0x0)) {
      iVar1 = *piVar5;
      iVar2 = *piVar4;
      local_38 = iVar1;
      iStack_34 = iVar2;
      FUN_10059600(iVar3,&local_40,&local_38);
      FUN_10059600(iVar3,&local_3c,&iStack_34);
      FUN_10059830(param_1 + 0x17b8,&local_38,&local_40);
      FUN_10059830(param_1 + 0x17b8,&iStack_34,&local_3c);
      piVar4 = (int *)(param_1 + 0x294);
      if (*piVar4 == iVar1) {
        *piVar4 = iVar2;
      }
      else if (*piVar4 == iVar2) {
        *piVar4 = iVar1;
      }
      uVar6 = 0;
    }
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar6;
}

