/*
 * FUN_10055410 at 10055410
 * undefined FUN_10055410(void)
 * Address ranges: 10055410-1005554b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10055410(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar7;
  
  iVar4 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar4 == 0) {
    FUN_1004bc70(0);
  }
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar5 = 0x80070057;
  if (param_2 != 0) {
    iVar4 = 1;
    uVar7 = 0;
    if (*(uint *)(param_1 + 0xa8c) != 0) {
      do {
        if (iVar4 == 0) break;
        iVar1 = param_1 + uVar7 * 0x6c;
        if ((*(uint *)(iVar1 + 0xadc) & 0xe0006) == 0) {
LAB_100554e8:
          uVar6 = (*pcVar2)(iVar1 + 0xa90);
          iVar4 = (*extraout_w11_00)(uVar6,param_3);
        }
        else {
          uVar5 = (*pcVar2)();
          cVar3 = (*extraout_w11)(uVar5);
          if (cVar3 == '\0') goto LAB_100554e8;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0xa8c));
    }
    uVar5 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar5;
}

