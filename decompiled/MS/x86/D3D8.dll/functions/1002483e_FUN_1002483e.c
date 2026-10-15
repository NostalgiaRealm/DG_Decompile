/*
 * FUN_1002483e at 1002483e
 * undefined __thiscall FUN_1002483e(void * this, char param_1)
 * Address ranges: 1002483e-1002491f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002483e(void *this,char param_1)

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
  iVar1 = DAT_100ba2b4;
  piVar7 = (int *)(&DAT_100ba720)[iVar6 * 0x8a];
  if ((iVar5 != 0) && (piVar7 != (int *)0x0)) {
    if (param_1 != '\0') {
      (**(code **)(*piVar7 + 0x68))(iVar5,*(undefined4 *)(DAT_100ba2b4 + 0x76c));
    }
    piVar7 = (int *)(**(code **)(*piVar7 + 0x30))(iVar5,0,0,4,2,2,0,0,0);
    if (piVar7 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar7 + 0x14))();
      if (cVar2 == '\0') {
        FUN_10024b7d(this);
      }
      cVar3 = (**(code **)(*piVar7 + 0x20))();
      if (cVar3 != '\0') {
        (**(code **)(*piVar7 + 0x24))();
        cVar3 = (**(code **)(*piVar7 + 0x14))();
        *(bool *)(iVar1 + 0x784) = cVar3 == '\0';
        cVar4 = (**(code **)(*(int *)this + 0x18))();
        FUN_10024aa7(this,cVar4,cVar3);
        FUN_100aa4db(DAT_100ba2b4);
      }
      (**(code **)(*piVar7 + 0x10))();
      if (cVar2 == '\0') {
        FUN_10024ba9(this);
      }
    }
  }
  return;
}

