/*
 * FUN_1003f420 at 1003f420
 * undefined __thiscall FUN_1003f420(void * this, char param_1)
 * Address ranges: 1003f420-1003f6c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003f420(void *this,char param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  if (*(char *)((int)this + 0xf66b) != '\0') {
    if (*(char *)((int)this + 0x7642) == '\0') {
      if ((*(int **)((int)this + 0xfa90) == (int *)0x0) ||
         (cVar2 = (**(code **)(**(int **)((int)this + 0xfa90) + 0x44))(), cVar2 == '\0')) {
        local_40 = *(int *)((int)this + 0x7c4);
        uStack_3c = *(undefined4 *)((int)this + 0x7c8);
        uStack_38 = *(undefined4 *)((int)this + 0x7cc);
        uStack_34 = *(undefined4 *)((int)this + 2000);
        local_10 = *(undefined4 *)((int)this + 0x7f4);
        local_30 = *(undefined4 *)((int)this + 0x7d4);
        uStack_2c = *(undefined4 *)((int)this + 0x7d8);
        uStack_28 = *(undefined4 *)((int)this + 0x7dc);
        uStack_24 = *(undefined4 *)((int)this + 0x7e0);
        local_20 = *(undefined4 *)((int)this + 0x7e4);
        uStack_1c = *(undefined4 *)((int)this + 0x7e8);
        uStack_18 = *(undefined4 *)((int)this + 0x7ec);
        uStack_14 = *(undefined4 *)((int)this + 0x7f0);
      }
      else if (*(char *)((int)this + 0x764a) == '\0') {
        local_40 = *(int *)((int)this + 0x790);
        uStack_3c = *(undefined4 *)((int)this + 0x794);
        uStack_38 = *(undefined4 *)((int)this + 0x798);
        uStack_34 = *(undefined4 *)((int)this + 0x79c);
        local_10 = *(undefined4 *)((int)this + 0x7c0);
        local_30 = *(undefined4 *)((int)this + 0x7a0);
        uStack_2c = *(undefined4 *)((int)this + 0x7a4);
        uStack_28 = *(undefined4 *)((int)this + 0x7a8);
        uStack_24 = *(undefined4 *)((int)this + 0x7ac);
        local_20 = *(undefined4 *)((int)this + 0x7b0);
        uStack_1c = *(undefined4 *)((int)this + 0x7b4);
        uStack_18 = *(undefined4 *)((int)this + 0x7b8);
        uStack_14 = *(undefined4 *)((int)this + 0x7bc);
      }
      else {
        local_40 = *(int *)((int)this + 0xb60);
        uStack_3c = *(undefined4 *)((int)this + 0xb64);
        uStack_38 = *(undefined4 *)((int)this + 0xb68);
        uStack_34 = *(undefined4 *)((int)this + 0xb6c);
        local_10 = *(undefined4 *)((int)this + 0xb90);
        local_30 = *(undefined4 *)((int)this + 0xb70);
        uStack_2c = *(undefined4 *)((int)this + 0xb74);
        uStack_28 = *(undefined4 *)((int)this + 0xb78);
        uStack_24 = *(undefined4 *)((int)this + 0xb7c);
        local_20 = *(undefined4 *)((int)this + 0xb80);
        uStack_1c = *(undefined4 *)((int)this + 0xb84);
        uStack_18 = *(undefined4 *)((int)this + 0xb88);
        uStack_14 = *(undefined4 *)((int)this + 0xb8c);
      }
      if (*(int *)((int)this + 0xfa90) == 0) {
        local_40 = 0;
      }
    }
    else {
      local_40 = *(int *)((int)this + 0xb94);
      uStack_3c = *(undefined4 *)((int)this + 0xb98);
      uStack_38 = *(undefined4 *)((int)this + 0xb9c);
      uStack_34 = *(undefined4 *)((int)this + 0xba0);
      local_10 = *(undefined4 *)((int)this + 0xbc4);
      local_30 = *(undefined4 *)((int)this + 0xba4);
      uStack_2c = *(undefined4 *)((int)this + 0xba8);
      uStack_28 = *(undefined4 *)((int)this + 0xbac);
      uStack_24 = *(undefined4 *)((int)this + 0xbb0);
      local_20 = *(undefined4 *)((int)this + 0xbb4);
      uStack_1c = *(undefined4 *)((int)this + 3000);
      uStack_18 = *(undefined4 *)((int)this + 0xbbc);
      uStack_14 = *(undefined4 *)((int)this + 0xbc0);
    }
    piVar1 = *(int **)((int)this + 0xf830);
    if ((piVar1 != (int *)0x0) && (*(int **)((int)this + 0xfa90) != (int *)0x0)) {
      if ((*piVar1 == 0) || (piVar1[1] == 0)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      if ((*(int *)((int)this + 0x790) == 0) || (*(int *)((int)this + 0x794) == 0)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      if (cVar2 != cVar3) {
        local_8 = (**(code **)(**(int **)((int)this + 0xfa90) + 0x84))();
        local_c = (int)local_8 >> 0x1f;
        uVar4 = FUN_10043ff0((void *)((int)this + 0xf8f0),local_8,local_c);
        if (((uVar4 == *(uint *)((int)this + 0xf8f8)) ||
            (iVar6 = *(int *)((int)this + 0xf8f4), *(uint *)(iVar6 + uVar4 * 0x18) != local_8)) ||
           (*(uint *)(iVar6 + 4 + uVar4 * 0x18) != local_c)) {
          puVar5 = &DAT_00000007;
        }
        else {
          puVar5 = (undefined1 *)(iVar6 + uVar4 * 0x18 + 0x13);
        }
        *puVar5 = 1;
        *(undefined1 *)((int)this + 0xfd9b) = 1;
      }
      iVar6 = 0xb6c;
      if (*(char *)((int)this + 0x764a) == '\0') {
        iVar6 = 0x79c;
      }
      if ((*(int *)(*(int *)((int)this + 0xf830) + 0xc) != 0) != (*(int *)(iVar6 + (int)this) != 0))
      {
        local_c = (**(code **)(**(int **)((int)this + 0xfa90) + 0x84))();
        local_8 = (int)local_c >> 0x1f;
        uVar4 = FUN_10043ff0((void *)((int)this + 0xf8f0),local_c,local_8);
        if (((uVar4 == *(uint *)((int)this + 0xf8f8)) ||
            (iVar6 = *(int *)((int)this + 0xf8f4), *(uint *)(iVar6 + uVar4 * 0x18) != local_c)) ||
           (*(uint *)(iVar6 + 4 + uVar4 * 0x18) != local_8)) {
          puVar5 = &DAT_00000007;
        }
        else {
          puVar5 = (undefined1 *)(iVar6 + uVar4 * 0x18 + 0x13);
        }
        *puVar5 = 1;
        *(undefined1 *)((int)this + 0xfd9b) = 1;
      }
    }
    uVar7 = FUN_10044780((void *)(*(int *)((int)this + 0xf6b8) + 0x15f0),&local_40);
    *(undefined4 *)((int)this + 0xf830) = uVar7;
    *(undefined1 *)((int)this + 0xfd99) = 1;
    *(undefined1 *)((int)this + 0xf6a4) = 1;
    if (*(char *)((int)this + 0xf66b) != '\0') goto LAB_1003f668;
  }
  if (param_1 == '\0') {
    return;
  }
LAB_1003f668:
  if ((*(int *)((int)this + 0xf830) == 0) || (*(int *)(*(int *)((int)this + 0xf830) + 0xc) != 0)) {
    uVar4 = (uint)*(byte *)((*(char *)((int)this + 0x7642) != '\0') + 0x7580 + (int)this);
    iVar6 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
    if (uVar4 != *(uint *)(iVar6 + 0x61c)) {
      FUN_100ba94f(iVar6);
      (**(code **)(**(int **)(iVar6 + 0x638) + 0x60))(*(int **)(iVar6 + 0x638),uVar4);
      *(uint *)(iVar6 + 0x61c) = uVar4;
    }
  }
  *(undefined1 *)((int)this + 0xf66b) = 0;
  return;
}

