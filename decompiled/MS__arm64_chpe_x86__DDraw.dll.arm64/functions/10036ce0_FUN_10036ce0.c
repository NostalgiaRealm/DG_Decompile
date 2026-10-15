/*
 * FUN_10036ce0 at 10036ce0
 * undefined FUN_10036ce0(void)
 * Address ranges: 10036ce0-10036def
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10036ce0(int param_1,uint *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  uVar4 = 0x88760082;
  if (((*(char *)(param_1 + 0x5c) == '\0') || (uVar4 = 0x80070057, param_3 != 0)) ||
     (uVar4 = 0x88760237, *(int *)(param_1 + 0x4c) != 0)) goto LAB_10036dc8;
  if (param_2 == (uint *)0x0) {
    FUN_100914d0(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    uVar4 = 0x8876006e;
    if (((*param_2 < 0x20) || (param_2[1] != 1)) || (param_2[2] == 0)) goto LAB_10036dc8;
    piVar1 = (int *)(param_1 + 0x54);
    iVar2 = *param_2 + param_2[2] * 0x10;
    uVar4 = 0x8007000e;
    FUN_100914d0(*piVar1);
    *piVar1 = 0;
    iVar3 = FUN_100914b0(iVar2);
    *piVar1 = iVar3;
    if (iVar3 == 0) goto LAB_10036dc8;
    FUN_100917a0(iVar3,param_2,iVar2);
  }
  uVar4 = 0;
LAB_10036dc8:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar4;
}

