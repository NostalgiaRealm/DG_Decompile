/*
 * FUN_10067840 at 10067840
 * undefined FUN_10067840(void)
 * Address ranges: 10067840-1006797b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10067840(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  
  uVar3 = 0x80070057;
  if ((param_2 != 0) && (param_3 == 0)) {
    iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
    if (iVar2 == 0) {
      FUN_1004bc70(0);
    }
    uVar3 = 0x8876080e;
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 0x8876080c;
      if (*(char *)(param_1 + 0x134) == '\0') {
        FUN_10066fa0(param_1);
        *(char *)(param_1 + 0x134) = '\x01';
        iVar2 = FUN_10081e90(*(int *)(param_2 + 0xa58) + 0x10,&DAT_1009c470,0x10);
        *(bool *)(param_1 + 0x135) = iVar2 == 0;
        if (*(int *)(param_1 + 300) != 0) {
          uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          cVar1 = (*extraout_w11)(uVar3);
          if ((cVar1 == '\0') && (*(int *)(param_1 + 0x80) == 0)) {
            iVar2 = *(int *)(param_1 + 4);
            if (iVar2 != 0) {
              FUN_10081dd0(*(undefined4 *)(iVar2 + -4));
            }
            *(int *)(param_1 + 4) = 0;
          }
        }
        uVar3 = 0;
      }
    }
    (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  }
  return uVar3;
}

