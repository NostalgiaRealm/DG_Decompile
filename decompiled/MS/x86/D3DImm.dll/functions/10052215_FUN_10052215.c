/*
 * FUN_10052215 at 10052215
 * uint __thiscall FUN_10052215(void * this, char param_1)
 * Address ranges: 10052215-100523d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10052215(void *this,char param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_EAX;
  int *piVar6;
  uint unaff_EBX;
  uint uVar7;
  void *unaff_EDI;
  undefined8 uVar8;
  int iStack_1c;
  undefined4 local_10 [3];
  
  pvVar2 = *(void **)((int)this + 0x8dc);
  uVar7 = in_EAX & 0xffffff00;
  if ((pvVar2 != (void *)0x0) && (*(int *)((int)this + 0x630) == 0)) {
    *(int *)((int)this + 0x624) = *(int *)((int)this + 0x624) + 1;
    uVar7 = 0;
    if (*(int *)((int)this + 0x954) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 0x950) + uVar7 * 4) + 4))();
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)((int)this + 0x954));
    }
    piVar6 = (int *)((int)this + 0x624);
    *piVar6 = *piVar6 + -1;
    local_10[0] = 1;
    if ((*piVar6 == 0) && (*(int *)((int)this + 0x8e8) == 0)) {
      (**(code **)(**(int **)((int)pvVar2 + 8) + 0x38))
                (*(int **)((int)pvVar2 + 8),*(undefined4 *)((int)pvVar2 + 0xc),
                 *(undefined4 *)((int)this + 0x934),*(undefined4 *)((int)this + 0x938));
      FUN_10052011((int)this + -4);
      unaff_EDI = pvVar2;
    }
    else {
      *(int *)((int)this + 0x95c) = *(int *)((int)this + 0x95c) + 1;
      iVar1 = (int)this + -4;
      FUN_10051fdb(iVar1);
      (**(code **)(**(int **)((int)this + 0x634) + 0x24))(*(int **)((int)this + 0x634));
      local_10[0] = *(undefined4 *)((int)this + 0x634);
      uVar3 = *(undefined4 *)((int)this + 0x934);
      uVar4 = *(undefined4 *)((int)pvVar2 + 0x938);
      (**(code **)(**(int **)(iStack_1c + 8) + 0x28))(*(int **)(iStack_1c + 8),this,local_10);
      (**(code **)(**(int **)((int)unaff_EDI + 8) + 0x38))
                (*(int **)((int)unaff_EDI + 8),*(undefined4 *)((int)unaff_EDI + 0xc),uVar3,uVar4);
      iVar5 = *(int *)((int)this + 0x92c);
      uVar3 = *(undefined4 *)((int)this + 0x938);
      *(undefined4 *)((int)this + iVar5 * 8 + 0x69c) = *(undefined4 *)((int)this + 0x934);
      *(undefined4 *)((int)this + iVar5 * 8 + 0x6a0) = uVar3;
      piVar6 = (int *)FUN_10052116(iVar1);
      (**(code **)(*piVar6 + 0x20))(piVar6);
      (**(code **)(**(int **)((int)this + 0x634) + 0x28))(*(int **)((int)this + 0x634),piVar6,0);
      *(undefined4 *)((int)this + 0x924) = 0;
      *(undefined4 *)((int)this + 0x620) = 0;
      *(undefined4 *)((int)this + 0x624) = 0;
      FUN_10051ee1(iVar1);
      FUN_10052011(iVar1);
    }
    if (param_1 != '\0') {
      FUN_10054c79(unaff_EDI,*(uint *)((int)this + 0x934),*(uint *)((int)this + 0x938));
    }
    *(undefined4 *)((int)this + 0x93c) = *(undefined4 *)((int)this + 0x934);
    *(undefined4 *)((int)this + 0x940) = *(undefined4 *)((int)this + 0x938);
    uVar8 = FUN_10054c45((int)unaff_EDI);
    *(undefined8 *)((int)this + 0x934) = uVar8;
    *(undefined4 *)((int)this + 0x944) = 0;
    uVar7 = unaff_EBX;
  }
  return uVar7;
}

