/*
 * FUN_100185cb at 100185cb
 * undefined __thiscall FUN_100185cb(void * this, char param_1)
 * Address ranges: 100185cb-100186fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100185cb(void *this,char param_1)

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
  
  if (*(char *)((int)this + 0x2bcb) != '\0') {
    uVar7 = *(uint *)((int)this + 0x2a38);
    if (param_1 == '\0') {
      uVar7 = (uint)(uVar7 != 0);
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x3188) + 4);
        iVar4 = (**(code **)(*piVar1 + 0x74))
                          (piVar1,*(undefined4 *)((int)this + 0x31b8),local_68,0x58,0);
      } while (iVar4 == 1);
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x3188) + 4);
        iVar4 = (**(code **)(*piVar1 + 0x74))
                          (piVar1,*(undefined4 *)((int)this + 0x31bc),&local_10,8,0);
      } while (iVar4 == 1);
      uVar6 = *(uint *)((int)this + 0x2b70);
      *(uint *)((int)this + 0x2b78) = *(int *)((int)this + 0x2b78) + local_30;
      uVar5 = uVar6 - local_10;
      *(uint *)((int)this + 0x2b7c) = *(int *)((int)this + 0x2b7c) + local_30;
      *(uint *)((int)this + 0x2b70) = uVar5 + local_30;
      *(uint *)((int)this + 0x2b74) =
           ((*(int *)((int)this + 0x2b74) - local_c) - (uint)(uVar6 < local_10)) + local_2c +
           (uint)CARRY4(uVar5,local_30);
      *(int *)((int)this + 0x2b80) = *(int *)((int)this + 0x2b80) + local_60;
      uVar6 = 1;
      *(int *)((int)this + 0x2b60) = *(int *)((int)this + 0x2b60) + local_38;
      uVar2 = *(undefined4 *)((int)this + 0x31bc);
      uVar3 = *(undefined4 *)((int)this + 0x31b8);
      do {
        *(undefined4 *)((int)this + uVar6 * 8 + 0x31b0) =
             *(undefined4 *)((int)this + uVar6 * 8 + 0x31b8);
        *(undefined4 *)((int)this + uVar6 * 8 + 0x31b4) =
             *(undefined4 *)((int)this + uVar6 * 8 + 0x31bc);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x20);
      *(undefined4 *)((int)this + 0x32b0) = uVar3;
      *(undefined4 *)((int)this + 0x32b4) = uVar2;
      *(int *)((int)this + 0x2a38) = *(int *)((int)this + 0x2a38) + -1;
    }
  }
  return;
}

