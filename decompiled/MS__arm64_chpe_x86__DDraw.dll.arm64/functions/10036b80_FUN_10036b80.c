/*
 * FUN_10036b80 at 10036b80
 * undefined FUN_10036b80(void)
 * Address ranges: 10036b80-10036ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10036b80(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  uVar5 = 0x88760082;
  if ((*(char *)(param_1 + 0x5c) != '\0') && (uVar5 = 0x80070057, param_2 != (undefined4 *)0x0)) {
    piVar1 = (int *)(param_1 + 0x4c);
    *param_2 = 0;
    uVar5 = 0;
    if (*piVar1 != 0) {
      iVar2 = (*(code *)PTR_FUN_100ba014)(0,0,0,0);
      uVar3 = (*(code *)PTR_FUN_100ba1fc)(*piVar1,0,0x10000);
      (*(code *)PTR_FUN_100ba038)(uVar3,iVar2,4);
      (*(code *)PTR_FUN_100ba290)(*piVar1,uVar3);
      piVar1 = (int *)(param_1 + 0x50);
      if (((iVar2 == 0) || (*piVar1 == 0)) ||
         (iVar4 = (*(code *)PTR_FUN_100ba024)(iVar2,*piVar1), iVar4 == 0)) {
        *param_2 = 1;
      }
      (*(code *)PTR_FUN_100ba020)(*piVar1);
      *piVar1 = iVar2;
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar5;
}

