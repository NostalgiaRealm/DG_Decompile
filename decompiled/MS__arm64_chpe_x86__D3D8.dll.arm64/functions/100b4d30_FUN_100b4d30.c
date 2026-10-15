/*
 * FUN_100b4d30 at 100b4d30
 * undefined FUN_100b4d30(void)
 * Address ranges: 100b4d30-100b4e77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b4d30(int param_1,undefined4 param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar3 == 0) {
      FUN_10006560(0);
    }
  }
  iVar3 = FUN_100bd3f0(param_1 + 0x3c,param_2);
  if (iVar3 == 0) goto LAB_100b4e38;
  if (param_3 == (undefined8 *)0x0) {
LAB_100b4e28:
    uVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(iVar3 + 0x20);
    if (uVar1 << 2 <= *param_4) {
      puVar4 = *(undefined8 **)(iVar3 + 0x24);
      uVar5 = 0;
      if (uVar1 >> 1 != 0) {
        do {
          uVar6 = *puVar4;
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 1;
          *param_3 = uVar6;
          param_3 = param_3 + 1;
        } while (uVar5 < uVar1 >> 1);
      }
      if ((uVar1 & 1) != 0) {
        *(undefined4 *)param_3 = *(undefined4 *)puVar4;
      }
      goto LAB_100b4e28;
    }
  }
  *param_4 = *(uint *)(iVar3 + 0x20) << 2;
LAB_100b4e38:
  if (bVar2) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar7;
}

