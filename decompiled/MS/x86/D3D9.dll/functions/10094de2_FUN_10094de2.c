/*
 * FUN_10094de2 at 10094de2
 * undefined4 __stdcall FUN_10094de2(int * param_1, uint param_2, int * param_3)
 * Address ranges: 10094de2-10094f7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10094de2(int *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  uVar4 = param_2;
  piVar2 = param_1;
  if (((((0xf < param_2) && (param_2 != 0x100)) && (param_2 != 0x101)) &&
      ((param_2 != 0x102 && (param_2 != 0x103)))) && (param_2 != 0x104)) {
    return 0x8876086c;
  }
  FUN_10003e40((void *)((int)&param_2 + 3),(byte)((uint)param_1[-0x1639] >> 2) & 1);
  piVar8 = param_3;
  piVar6 = (int *)0x0;
  param_1 = (int *)0x0;
  if (param_3 != (int *)0x0) {
    iVar5 = (**(code **)(*param_3 + 0x28))(param_3);
    if (iVar5 == 3) {
LAB_10094e62:
      piVar6 = piVar8 + -0x1e;
    }
    else if (iVar5 == 4) {
      piVar6 = (int *)0x0;
      param_1 = piVar8 + -0x32;
    }
    else {
      if (iVar5 == 5) goto LAB_10094e62;
      piVar6 = (int *)0x0;
    }
  }
  uVar1 = uVar4 - 0x100;
  if (4 < uVar1) {
    FUN_100064b8(piVar2 + -0x19ad,uVar4,piVar6,param_1);
    goto LAB_10094f6c;
  }
  piVar8 = (int *)0x0;
  if (piVar6 == (int *)0x0) {
    if (param_1 != (int *)0x0) {
      param_3 = (int *)param_1[0x2c];
      piVar7 = (int *)(param_1[5] + -0x66b4);
      piVar8 = param_1;
      if (param_1[5] == 0) {
        piVar7 = (int *)0x0;
      }
      goto LAB_10094ed7;
    }
  }
  else {
    param_3 = (int *)piVar6[0x18];
    piVar7 = (int *)(piVar6[5] + -0x66b4);
    piVar8 = piVar6;
    if (piVar6[5] == 0) {
      piVar7 = (int *)0x0;
    }
LAB_10094ed7:
    if ((((param_3 == (int *)0x3) || ((param_3 == (int *)0x2 && (piVar2[-0x163b] != 3)))) ||
        (piVar7 != (int *)0x0)) && (piVar7 != piVar2 + -0x19ad)) goto LAB_10094f6c;
  }
  if ((char)piVar2[-0x18bc] == '\0') {
    FUN_1009245a(piVar2 + -0x19ad,uVar1,(int)piVar8,piVar6,param_1);
  }
  else {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    iVar5 = *(int *)(piVar2[-0x18c0] + piVar2[-0x18bd] * 4);
    piVar2 = *(int **)(iVar5 + 0x4fa0 + uVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(iVar5 + 0x4fa0 + uVar1 * 4) = piVar8;
    pbVar3 = (byte *)(iVar5 + 0xac50 + (uVar1 >> 5) * 4 + ((int)(uVar1 & 0x1f) >> 3));
    *pbVar3 = *pbVar3 | '\x01' << (uVar1 & 7);
  }
LAB_10094f6c:
  FUN_10003e89((char *)((int)&param_2 + 3));
  return 0;
}

