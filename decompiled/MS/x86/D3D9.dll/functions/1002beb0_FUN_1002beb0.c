/*
 * FUN_1002beb0 at 1002beb0
 * undefined __thiscall FUN_1002beb0(void * this, char param_1)
 * Address ranges: 1002beb0-1002bf91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002beb0(void *this,char param_1)

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
  iVar1 = DAT_100dea74;
  piVar7 = (int *)(&DAT_100df2e8)[iVar6 * 0x8a];
  if ((iVar5 != 0) && (piVar7 != (int *)0x0)) {
    if (param_1 != '\0') {
      (**(code **)(*piVar7 + 0x68))(iVar5,*(undefined4 *)(DAT_100dea74 + 0x76c));
    }
    piVar7 = (int *)(**(code **)(*piVar7 + 0x30))(iVar5,0,0,4,2,2,0,0,0);
    if (piVar7 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar7 + 0x14))();
      if (cVar2 == '\0') {
        FUN_1002c1ef(this);
      }
      cVar3 = (**(code **)(*piVar7 + 0x20))();
      if (cVar3 != '\0') {
        (**(code **)(*piVar7 + 0x24))();
        cVar3 = (**(code **)(*piVar7 + 0x14))();
        *(bool *)(iVar1 + 0x784) = cVar3 == '\0';
        cVar4 = (**(code **)(*(int *)this + 0x18))();
        FUN_1002c119(this,cVar4,cVar3);
        FUN_100ccdaa(DAT_100dea74);
      }
      (**(code **)(*piVar7 + 0x10))();
      if (cVar2 == '\0') {
        FUN_1002c21b(this);
      }
    }
  }
  return;
}

