/*
 * FUN_1000ce50 at 1000ce50
 * undefined FUN_1000ce50(void)
 * Address ranges: 1000ce50-1000cf2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1000ce50(int param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = *(int *)(param_1 + 0xad4);
  param_2[1] = 0x100000001;
  *param_2 = 0x100000001;
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xafc) == '\0') {
      *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0xaf4);
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + 0xadc);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xaf8);
      puVar1 = (undefined4 *)(param_1 + 0xae0);
LAB_1000cf20:
      *(undefined4 *)((int)param_2 + 0xc) = *puVar1;
    }
    else if (*(uint *)(param_1 + 0xb34) != 0) {
      uVar6 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0xb30) + uVar6 * 4);
        if (*(char *)(iVar3 + 0xb5) == '\0') {
          iVar5 = *(int *)(param_1 + 0xb2c) * 0x228;
          uVar2 = *(undefined4 *)(&DAT_1013895c + iVar5);
          *(undefined4 *)param_2 = *(undefined4 *)(&DAT_10138958 + iVar5);
          uVar4 = *(undefined4 *)(iVar3 + 0x4c);
          *(undefined4 *)(param_2 + 1) = uVar2;
          *(undefined4 *)((int)param_2 + 4) = uVar4;
          puVar1 = (undefined4 *)(iVar3 + 0x50);
          goto LAB_1000cf20;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0xb34));
    }
  }
  return param_2;
}

