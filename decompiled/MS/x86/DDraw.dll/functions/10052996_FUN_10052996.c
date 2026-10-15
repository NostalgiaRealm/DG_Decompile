/*
 * FUN_10052996 at 10052996
 * uint __thiscall FUN_10052996(void * this, char param_1)
 * Address ranges: 10052996-10052b4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10052996(void *this,char param_1)

{
  void *this_00;
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_EAX;
  int *piVar5;
  uint unaff_EBX;
  uint uVar6;
  void *unaff_EDI;
  undefined8 uVar7;
  int iStack_1c;
  undefined4 local_10 [3];
  
  pvVar1 = *(void **)((int)this + 0x8dc);
  uVar6 = in_EAX & 0xffffff00;
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)this + 0x630) == 0)) {
    *(int *)((int)this + 0x624) = *(int *)((int)this + 0x624) + 1;
    uVar6 = 0;
    if (*(int *)((int)this + 0x954) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 0x950) + uVar6 * 4) + 4))();
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)((int)this + 0x954));
    }
    piVar5 = (int *)((int)this + 0x624);
    *piVar5 = *piVar5 + -1;
    local_10[0] = 1;
    if ((*piVar5 == 0) && (*(int *)((int)this + 0x8e8) == 0)) {
      (**(code **)(**(int **)((int)pvVar1 + 8) + 0x38))
                (*(int **)((int)pvVar1 + 8),*(undefined4 *)((int)pvVar1 + 0xc),
                 *(undefined4 *)((int)this + 0x934),*(undefined4 *)((int)this + 0x938));
      FUN_100524fd((int)this + -4);
      unaff_EDI = pvVar1;
    }
    else {
      *(int *)((int)this + 0x95c) = *(int *)((int)this + 0x95c) + 1;
      this_00 = (void *)((int)this + -4);
      FUN_100524c7((int)this_00);
      (**(code **)(**(int **)((int)this + 0x634) + 0x24))(*(int **)((int)this + 0x634));
      local_10[0] = *(undefined4 *)((int)this + 0x634);
      uVar2 = *(undefined4 *)((int)this + 0x934);
      uVar3 = *(undefined4 *)((int)pvVar1 + 0x938);
      (**(code **)(**(int **)(iStack_1c + 8) + 0x28))(*(int **)(iStack_1c + 8),this,local_10);
      (**(code **)(**(int **)((int)unaff_EDI + 8) + 0x38))
                (*(int **)((int)unaff_EDI + 8),*(undefined4 *)((int)unaff_EDI + 0xc),uVar2,uVar3);
      iVar4 = *(int *)((int)this + 0x92c);
      uVar2 = *(undefined4 *)((int)this + 0x938);
      *(undefined4 *)((int)this + iVar4 * 8 + 0x69c) = *(undefined4 *)((int)this + 0x934);
      *(undefined4 *)((int)this + iVar4 * 8 + 0x6a0) = uVar2;
      piVar5 = (int *)FUN_10052602((int)this_00);
      (**(code **)(*piVar5 + 0x20))(piVar5);
      (**(code **)(**(int **)((int)this + 0x634) + 0x28))(*(int **)((int)this + 0x634),piVar5,0);
      *(undefined4 *)((int)this + 0x924) = 0;
      *(undefined4 *)((int)this + 0x620) = 0;
      *(undefined4 *)((int)this + 0x624) = 0;
      FUN_100523c3(this_00,0);
      FUN_100524fd((int)this_00);
    }
    if (param_1 != '\0') {
      FUN_1004dc27(unaff_EDI,*(uint *)((int)this + 0x934),*(uint *)((int)this + 0x938));
    }
    *(undefined4 *)((int)this + 0x93c) = *(undefined4 *)((int)this + 0x934);
    *(undefined4 *)((int)this + 0x940) = *(undefined4 *)((int)this + 0x938);
    uVar7 = FUN_1004dbf3((int)unaff_EDI);
    *(undefined8 *)((int)this + 0x934) = uVar7;
    *(undefined4 *)((int)this + 0x944) = 0;
    uVar6 = unaff_EBX;
  }
  return uVar6;
}

