/*
 * FUN_10044638 at 10044638
 * undefined FUN_10044638(void)
 * Address ranges: 10044638-1004481f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10044638(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined4 uVar7;
  undefined1 auStack_40 [16];
  
  iVar4 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar4 == 0) {
    FUN_10001c10(0);
  }
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar7 = 0x887601c2;
  if (*(char *)(param_1 + 8) == '\0') {
    if (param_2 != 0) {
      uVar7 = 0x80070057;
      if ((((*(uint *)(param_2 + 0x10) >> 10 & 1) != 0) &&
          ((*(uint *)(param_1 + 0x1b8) >> 0xc & 1) == 0)) ||
         ((*(uint *)(param_2 + 0x10) & 0x303) != 0)) goto LAB_100447f8;
    }
    piVar1 = (int *)(param_1 + 0x108);
    uVar7 = 0;
    if (param_2 != *piVar1) {
      if (param_2 == 0) {
        if (*piVar1 != 0) {
          uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11)(uVar5);
          *piVar1 = 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0x1a4) != 8) {
          uVar7 = 0x88760091;
          goto LAB_100447f8;
        }
        *piVar1 = param_2;
        (*pcVar3)();
        (*extraout_w11_00)(param_2);
      }
      FUN_100a9d50(auStack_40);
      puVar2 = (uint *)(*(int *)(param_1 + 4) + 200);
      *puVar2 = *puVar2 | 4;
      *(undefined1 *)(*(int *)(param_1 + 4) + 0xaf) = 1;
      if (*piVar1 == 0) {
        if ((*(uint *)(param_1 + 0x1b8) >> 0xf & 1) != 0) {
          FUN_10037f30(*(undefined4 *)(param_1 + 0xfc),0);
        }
      }
      else {
        FUN_10041288(*piVar1);
      }
      if (DAT_100c291c != 0) {
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc);
        uVar5 = (*pcVar3)();
        (*extraout_w11_01)(uVar5,*puVar6,param_1);
      }
      FUN_100a9ca0(auStack_40);
    }
  }
LAB_100447f8:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar7;
}

