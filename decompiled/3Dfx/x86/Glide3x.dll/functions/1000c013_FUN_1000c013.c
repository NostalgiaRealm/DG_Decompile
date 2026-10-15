/*
 * FUN_1000c013 at 1000c013
 * undefined __thiscall FUN_1000c013(void * this, char param_1)
 * Address ranges: 1000c013-1000c144
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000c013(void *this,char param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_68 [8];
  int local_60;
  int local_38;
  uint local_30;
  int local_2c;
  uint local_10;
  int local_c;
  
  if (*(char *)((int)this + 0x2c6b) != '\0') {
    uVar7 = *(uint *)((int)this + 0x2ad8);
    if (param_1 == '\0') {
      uVar7 = (uint)(uVar7 != 0);
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x3308) + 4);
        iVar4 = (**(code **)(*piVar1 + 0x74))
                          (piVar1,*(undefined4 *)((int)this + 0x3338),local_68,0x58,0);
      } while (iVar4 == 1);
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x3308) + 4);
        iVar4 = (**(code **)(*piVar1 + 0x74))
                          (piVar1,*(undefined4 *)((int)this + 0x333c),&local_10,8,0);
      } while (iVar4 == 1);
      uVar6 = *(uint *)((int)this + 0x2c10);
      *(uint *)((int)this + 0x2c18) = *(int *)((int)this + 0x2c18) + local_30;
      uVar5 = uVar6 - local_10;
      *(uint *)((int)this + 0x2c1c) = *(int *)((int)this + 0x2c1c) + local_30;
      *(uint *)((int)this + 0x2c10) = uVar5 + local_30;
      *(uint *)((int)this + 0x2c14) =
           ((*(int *)((int)this + 0x2c14) - local_c) - (uint)(uVar6 < local_10)) + local_2c +
           (uint)CARRY4(uVar5,local_30);
      *(int *)((int)this + 0x2c20) = *(int *)((int)this + 0x2c20) + local_60;
      uVar6 = 1;
      *(int *)((int)this + 0x2c00) = *(int *)((int)this + 0x2c00) + local_38;
      uVar2 = *(undefined4 *)((int)this + 0x333c);
      uVar3 = *(undefined4 *)((int)this + 0x3338);
      do {
        *(undefined4 *)((int)this + uVar6 * 8 + 0x3330) =
             *(undefined4 *)((int)this + uVar6 * 8 + 0x3338);
        *(undefined4 *)((int)this + uVar6 * 8 + 0x3334) =
             *(undefined4 *)((int)this + uVar6 * 8 + 0x333c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x20);
      *(undefined4 *)((int)this + 0x3430) = uVar3;
      *(undefined4 *)((int)this + 0x3434) = uVar2;
      *(int *)((int)this + 0x2ad8) = *(int *)((int)this + 0x2ad8) + -1;
    }
  }
  return;
}

