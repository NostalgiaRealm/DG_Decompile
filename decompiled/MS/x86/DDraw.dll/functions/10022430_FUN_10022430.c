/*
 * FUN_10022430 at 10022430
 * undefined __thiscall FUN_10022430(void * this, int * param_1)
 * Address ranges: 10022430-100224f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10022430(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = (**(code **)(*param_1 + 0x38))();
  piVar1 = DAT_1006c210;
  if (((((*(uint *)(iVar2 + 0x68) & 0x21040) == 0x1000) &&
       (uVar3 = (**(code **)(*DAT_1006c210 + 0x28))(&DAT_10062330), uVar3 != 0)) &&
      (iVar2 = (**(code **)(*param_1 + 0x38))(), (*(uint *)(iVar2 + 0x68) & 0x2001) == 0)) &&
     (uVar7 = 0, uVar3 != 0)) {
    do {
      piVar4 = (int *)(**(code **)(*piVar1 + 0x2c))(&DAT_10062330,uVar7);
      if (piVar4 != (int *)0x0) {
        uVar6 = -(uint)(this != (void *)0x0) & (int)this + 0x154U;
        if ((*(uint *)(iVar2 + 0x6c) & 0x200) == 0) {
          piVar5 = param_1 + 0x7a;
          if (param_1 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          (**(code **)(*piVar4 + 0xc))(uVar6,piVar5);
        }
        else {
          (**(code **)(*piVar4 + 0x10))(uVar6,param_1 + 0x7a);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return;
}

