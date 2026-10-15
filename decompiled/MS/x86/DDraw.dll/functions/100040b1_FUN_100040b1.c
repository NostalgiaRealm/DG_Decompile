/*
 * FUN_100040b1 at 100040b1
 * undefined __thiscall FUN_100040b1(void * this, char param_1)
 * Address ranges: 100040b1-10004192
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100040b1(void *this,char param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar5 = (**(code **)(*(int *)this + 0x14))();
  iVar6 = (**(code **)(*(int *)this + 0x10))();
  iVar1 = DAT_1006c210;
  piVar7 = (int *)(&DAT_1006c2b0)[iVar6 * 0x8a];
  if ((iVar5 != 0) && (piVar7 != (int *)0x0)) {
    if (param_1 != '\0') {
      (**(code **)(*piVar7 + 0x68))(iVar5,*(undefined4 *)(DAT_1006c210 + 0x76c));
    }
    piVar7 = (int *)(**(code **)(*piVar7 + 0x30))(iVar5,0,0,4,2,2,0,0,0);
    if (piVar7 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar7 + 0x14))();
      if (cVar2 == '\0') {
        FUN_10004493(this);
      }
      cVar3 = (**(code **)(*piVar7 + 0x20))();
      if (cVar3 != '\0') {
        (**(code **)(*piVar7 + 0x24))();
        cVar3 = (**(code **)(*piVar7 + 0x14))();
        *(bool *)(iVar1 + 0x784) = cVar3 == '\0';
        cVar4 = (**(code **)(*(int *)this + 0x18))();
        FUN_1000431a(this,cVar4,cVar3);
        FUN_1005e2eb(DAT_1006c210);
      }
      (**(code **)(*piVar7 + 0x10))();
      if (cVar2 == '\0') {
        FUN_100044bf(this);
      }
    }
  }
  return;
}

