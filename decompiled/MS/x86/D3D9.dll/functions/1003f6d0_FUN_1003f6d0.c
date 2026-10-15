/*
 * FUN_1003f6d0 at 1003f6d0
 * undefined __thiscall FUN_1003f6d0(void * this, char param_1)
 * Address ranges: 1003f6d0-1003f8cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003f6d0(void *this,char param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint local_150 [11];
  undefined1 auStack_124 [288];
  
  if (*(char *)((int)this + 0xf66c) != '\0') {
    FUN_100cfed0((int *)(local_150 + 2),0,0x140);
    local_150[1] = 1;
    local_150[0] = (uint)(*(int *)((int)this + 0xe7c) == 1);
    uVar7 = 0;
    do {
      piVar1 = *(int **)((int)this + uVar7 * 4 + 0xfa80);
      if (piVar1 != (int *)0x0) {
        if (*(char *)((int)this + 0x7649) == '\0') {
          if (*(char *)((int)this + 0x7642) == '\0') {
            cVar2 = (**(code **)(*piVar1 + 0x40))();
            iVar5 = 0xbc8;
            iVar3 = 0xc48;
            goto LAB_1003f77e;
          }
          puVar6 = (uint *)((int)this + 0xdc8);
        }
        else if (*(char *)((int)this + 0x7642) == '\0') {
          cVar2 = (**(code **)(*piVar1 + 0x40))();
          iVar5 = 0xcc8;
          iVar3 = 0xd48;
LAB_1003f77e:
          if (cVar2 == '\0') {
            iVar5 = iVar3;
          }
          puVar6 = (uint *)((int)this + uVar7 * 0x20 + iVar5);
        }
        else {
          puVar6 = (uint *)((int)this + 0xdc8);
        }
        local_150[uVar7 * 10 + 2] = *puVar6;
        local_150[uVar7 * 10 + 4] = puVar6[1];
        local_150[uVar7 * 10 + 5] = puVar6[2];
        local_150[uVar7 * 10 + 6] = puVar6[3];
        local_150[uVar7 * 10 + 7] = puVar6[4];
        local_150[uVar7 * 10 + 8] = puVar6[5];
        local_150[uVar7 * 10 + 9] = puVar6[6];
        auStack_124[uVar7 * 0x28] = (char)puVar6[7];
        *(undefined4 *)(auStack_124 + uVar7 * 0x28 + -4) = 0;
        local_150[uVar7 * 10 + 3] = 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    uVar4 = FUN_100444c0((void *)(*(int *)((int)this + 0xf6b8) + 0x1610),local_150);
    *(undefined4 *)((int)this + 0xf824) = uVar4;
    if (*(uint *)((int)this + 0xe3c) < 2) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)((int)this + 0xe38);
    }
    *(undefined4 *)((int)this + 0xf828) = uVar4;
    *(undefined1 *)((int)this + 0xfd99) = 1;
    if (*(char *)((int)this + 0xf66c) != '\0') goto LAB_1003f84a;
  }
  if (param_1 == '\0') {
    return;
  }
LAB_1003f84a:
  piVar1 = (int *)((int)this + 0xe60);
  iVar5 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
  if ((((*piVar1 != *(int *)(iVar5 + 0x60c)) ||
       (*(int *)((int)this + 0xe64) != *(int *)(iVar5 + 0x610))) ||
      (*(int *)((int)this + 0xe68) != *(int *)(iVar5 + 0x614))) ||
     (*(int *)((int)this + 0xe6c) != *(int *)(iVar5 + 0x618))) {
    *(int *)(iVar5 + 0x60c) = *piVar1;
    *(undefined4 *)(iVar5 + 0x610) = *(undefined4 *)((int)this + 0xe64);
    *(undefined4 *)(iVar5 + 0x614) = *(undefined4 *)((int)this + 0xe68);
    *(undefined4 *)(iVar5 + 0x618) = *(undefined4 *)((int)this + 0xe6c);
    FUN_100ba94f(iVar5);
    (**(code **)(**(int **)(iVar5 + 0x638) + 0x5c))(*(int **)(iVar5 + 0x638),piVar1);
  }
  *(undefined1 *)((int)this + 0xf66c) = 0;
  return;
}

