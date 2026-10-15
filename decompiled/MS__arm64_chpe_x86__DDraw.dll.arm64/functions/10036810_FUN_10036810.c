/*
 * FUN_10036810 at 10036810
 * undefined FUN_10036810(void)
 * Address ranges: 10036810-1003698b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10036810(int param_1,int param_2,undefined8 *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar4 = 0x88760082;
  if ((*(char *)(param_1 + 0x5c) == '\0') ||
     ((*(int *)(param_1 + 0x54) == 0 && (uVar4 = 0x8876006e, *(int *)(param_1 + 0x4c) == 0))))
  goto LAB_10036964;
  uVar4 = 0x80070057;
  if (param_4 == (uint *)0x0) goto LAB_10036964;
  uVar4 = 0x8007000e;
  iVar1 = FUN_10036738(param_1);
  if (iVar1 == 0) goto LAB_10036964;
  if (param_2 == 0) {
LAB_100368e4:
    uVar3 = (*(code *)PTR_FUN_100ba03c)(iVar1,0,0);
    if (param_3 == (undefined8 *)0x0) {
      *param_4 = uVar3;
    }
    else {
      uVar4 = 0x88760236;
      if (*param_4 < uVar3) goto LAB_10036954;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      *param_3 = 0x100000020;
      (*(code *)PTR_FUN_100ba03c)(iVar1,*param_4,param_3);
    }
    uVar4 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_FUN_100ba018)(param_2);
    if (iVar2 != 0) {
      (*(code *)PTR_FUN_100ba004)(iVar1,iVar1,iVar2,1);
      (*(code *)PTR_FUN_100ba020)(iVar2);
      goto LAB_100368e4;
    }
  }
LAB_10036954:
  (*(code *)PTR_FUN_100ba020)(iVar1);
LAB_10036964:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar4;
}

