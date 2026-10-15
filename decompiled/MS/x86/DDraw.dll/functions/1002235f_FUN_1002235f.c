/*
 * FUN_1002235f at 1002235f
 * byte __thiscall FUN_1002235f(void * this, int * param_1)
 * Address ranges: 1002235f-1002242f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall FUN_1002235f(void *this,int *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  
  bVar8 = 1;
  iVar3 = (**(code **)(*param_1 + 0x38))();
  piVar1 = DAT_1006c210;
  if (((((*(uint *)(iVar3 + 0x68) & 0x21040) == 0x1000) &&
       (uVar4 = (**(code **)(*DAT_1006c210 + 0x28))(&DAT_10062330), uVar4 != 0)) &&
      (iVar3 = (**(code **)(*param_1 + 0x38))(), (*(uint *)(iVar3 + 0x68) & 0x2001) == 0)) &&
     (uVar9 = 0, uVar4 != 0)) {
    do {
      piVar5 = (int *)(**(code **)(*piVar1 + 0x2c))(&DAT_10062330,uVar9);
      if (piVar5 != (int *)0x0) {
        uVar7 = -(uint)(this != (void *)0x0) & (int)this + 0x154U;
        if ((*(uint *)(iVar3 + 0x6c) & 0x200) == 0) {
          piVar6 = param_1 + 0x7a;
          if (param_1 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          bVar2 = (**(code **)*piVar5)(uVar7,piVar6);
        }
        else {
          bVar2 = (**(code **)(*piVar5 + 4))(uVar7,param_1 + 0x7a);
        }
        bVar8 = bVar8 & bVar2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  return bVar8;
}

