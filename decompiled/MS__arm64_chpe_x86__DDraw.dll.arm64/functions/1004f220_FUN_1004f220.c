/*
 * FUN_1004f220 at 1004f220
 * undefined FUN_1004f220(void)
 * Address ranges: 1004f220-1004f42f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004f220(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar5 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar5 == 0) {
    FUN_10001c10(0);
  }
  piVar1 = (int *)(param_1 + 4);
  iVar5 = *piVar1;
  uVar7 = 0x8876024a;
  piVar2 = (int *)(iVar5 + 0x94);
  if (((*piVar2 != 0) && (uVar7 = 0x887601c2, *(char *)(param_1 + 8) == '\0')) &&
     (uVar7 = 0x80070057, param_2 != 0 && param_2 == *piVar2)) {
    (*(code *)PTR_FUN_100ba02c)();
    pbVar3 = (byte *)(iVar5 + 0xad);
    *pbVar3 = 1;
    if (*(int *)(iVar5 + 0x9c) != *(int *)(iVar5 + 0x20)) {
      FUN_10009018(*piVar1);
      *(undefined1 *)(*piVar1 + 0xae) = 0;
      if ((*(uint *)(param_1 + 0x154) >> 0xb & 1) == 0) {
        *(undefined8 *)(*piVar1 + 0x9c) = 0;
      }
    }
    if ((*(uint *)(*piVar1 + 200) >> 7 & 1) == 0) {
      uVar7 = 0x80004005;
      iVar6 = FUN_1004dde8(param_1,0);
      if (iVar6 < 0) goto LAB_1004f400;
      (*(code *)PTR_FUN_100ba058)(*piVar2,*(undefined4 *)(iVar5 + 0x98));
      (*(code *)PTR_FUN_100ba01c)(*piVar2);
      puVar4 = (uint *)(iVar5 + 0x34);
      *piVar2 = 0;
      *pbVar3 = *pbVar3 & ((byte)(*puVar4 >> 2) ^ 0xff) & 1;
      if ((*puVar4 >> 2 & 1) != 0) {
        *puVar4 = *puVar4 & 0xfffffffd;
      }
      iVar5 = *piVar1;
      if ((*(char *)(iVar5 + 0xad) != '\0') && (*(int *)(iVar5 + 0x9c) != 0)) {
        FUN_10007450(iVar5,0,0);
      }
    }
    else {
      FUN_10009018(*piVar1);
      FUN_1004e9d0(param_1);
      (*(code *)PTR_FUN_100ba058)(*piVar2,*(undefined4 *)(iVar5 + 0x98));
      (*(code *)PTR_FUN_100ba01c)(*piVar2);
      *piVar2 = 0;
      *(uint *)(*piVar1 + 200) = *(uint *)(*piVar1 + 200) & 0xffffff7f;
    }
    uVar7 = 0;
  }
LAB_1004f400:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar7;
}

