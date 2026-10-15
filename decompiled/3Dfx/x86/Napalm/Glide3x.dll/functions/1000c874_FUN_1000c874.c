/*
 * FUN_1000c874 at 1000c874
 * undefined __thiscall FUN_1000c874(void * this, char param_1)
 * Address ranges: 1000c874-1000c9a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000c874(void *this,char param_1)

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
  
  if (*(char *)((int)this + 0x2db3) != '\0') {
    uVar7 = *(uint *)((int)this + 0x2c18);
    if (param_1 == '\0') {
      uVar7 = (uint)(uVar7 != 0);
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x3688) + 4);
        iVar4 = (**(code **)(*piVar1 + 0x74))
                          (piVar1,*(undefined4 *)((int)this + 0x36b8),local_68,0x58,0);
      } while (iVar4 == 1);
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x3688) + 4);
        iVar4 = (**(code **)(*piVar1 + 0x74))
                          (piVar1,*(undefined4 *)((int)this + 0x36bc),&local_10,8,0);
      } while (iVar4 == 1);
      uVar6 = *(uint *)((int)this + 0x2d58);
      *(uint *)((int)this + 0x2d60) = *(int *)((int)this + 0x2d60) + local_30;
      uVar5 = uVar6 - local_10;
      *(uint *)((int)this + 0x2d64) = *(int *)((int)this + 0x2d64) + local_30;
      *(uint *)((int)this + 0x2d58) = uVar5 + local_30;
      *(uint *)((int)this + 0x2d5c) =
           ((*(int *)((int)this + 0x2d5c) - local_c) - (uint)(uVar6 < local_10)) + local_2c +
           (uint)CARRY4(uVar5,local_30);
      *(int *)((int)this + 0x2d68) = *(int *)((int)this + 0x2d68) + local_60;
      uVar6 = 1;
      *(int *)((int)this + 0x2d48) = *(int *)((int)this + 0x2d48) + local_38;
      uVar2 = *(undefined4 *)((int)this + 0x36bc);
      uVar3 = *(undefined4 *)((int)this + 0x36b8);
      do {
        *(undefined4 *)((int)this + uVar6 * 8 + 14000) =
             *(undefined4 *)((int)this + uVar6 * 8 + 0x36b8);
        *(undefined4 *)((int)this + uVar6 * 8 + 0x36b4) =
             *(undefined4 *)((int)this + uVar6 * 8 + 0x36bc);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x20);
      *(undefined4 *)((int)this + 0x37b0) = uVar3;
      *(undefined4 *)((int)this + 0x37b4) = uVar2;
      *(int *)((int)this + 0x2c18) = *(int *)((int)this + 0x2c18) + -1;
    }
  }
  return;
}

