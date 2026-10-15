/*
 * FUN_1001f3f0 at 1001f3f0
 * undefined __thiscall FUN_1001f3f0(void * this, char param_1)
 * Address ranges: 1001f3f0-1001f69b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001f3f0(void *this,char param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint uVar9;
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
  
  if (*(char *)((int)this + 0x1d3b) != '\0') {
    if (*(char *)((int)this + 0x1905) == '\0') {
      if ((*(int **)((int)this + 0x1f7c) == (int *)0x0) ||
         (cVar4 = (**(code **)(**(int **)((int)this + 0x1f7c) + 0x44))(), cVar4 == '\0')) {
        local_40 = *(int *)((int)this + 0x294);
        uStack_3c = *(undefined4 *)((int)this + 0x298);
        uStack_38 = *(undefined4 *)((int)this + 0x29c);
        uStack_34 = *(undefined4 *)((int)this + 0x2a0);
        local_10 = *(undefined4 *)((int)this + 0x2c4);
        local_30 = *(undefined4 *)((int)this + 0x2a4);
        uStack_2c = *(undefined4 *)((int)this + 0x2a8);
        uStack_28 = *(undefined4 *)((int)this + 0x2ac);
        uStack_24 = *(undefined4 *)((int)this + 0x2b0);
        local_20 = *(undefined4 *)((int)this + 0x2b4);
        uStack_1c = *(undefined4 *)((int)this + 0x2b8);
        uStack_18 = *(undefined4 *)((int)this + 700);
        uStack_14 = *(undefined4 *)((int)this + 0x2c0);
      }
      else {
        local_40 = *(int *)((int)this + 0x260);
        uStack_3c = *(undefined4 *)((int)this + 0x264);
        uStack_38 = *(undefined4 *)((int)this + 0x268);
        uStack_34 = *(undefined4 *)((int)this + 0x26c);
        local_10 = *(undefined4 *)((int)this + 0x290);
        local_30 = *(undefined4 *)((int)this + 0x270);
        uStack_2c = *(undefined4 *)((int)this + 0x274);
        uStack_28 = *(undefined4 *)((int)this + 0x278);
        uStack_24 = *(undefined4 *)((int)this + 0x27c);
        local_20 = *(undefined4 *)((int)this + 0x280);
        uStack_1c = *(undefined4 *)((int)this + 0x284);
        uStack_18 = *(undefined4 *)((int)this + 0x288);
        uStack_14 = *(undefined4 *)((int)this + 0x28c);
      }
      if (*(int *)((int)this + 0x1f7c) == 0) {
        local_40 = 0;
      }
    }
    else {
      local_40 = *(int *)((int)this + 0x2c8);
      uStack_3c = *(undefined4 *)((int)this + 0x2cc);
      uStack_38 = *(undefined4 *)((int)this + 0x2d0);
      uStack_34 = *(undefined4 *)((int)this + 0x2d4);
      local_10 = *(undefined4 *)((int)this + 0x2f8);
      local_30 = *(undefined4 *)((int)this + 0x2d8);
      uStack_2c = *(undefined4 *)((int)this + 0x2dc);
      uStack_28 = *(undefined4 *)((int)this + 0x2e0);
      uStack_24 = *(undefined4 *)((int)this + 0x2e4);
      local_20 = *(undefined4 *)((int)this + 0x2e8);
      uStack_1c = *(undefined4 *)((int)this + 0x2ec);
      uStack_18 = *(undefined4 *)((int)this + 0x2f0);
      uStack_14 = *(undefined4 *)((int)this + 0x2f4);
    }
    piVar1 = *(int **)((int)this + 0x1e20);
    if ((piVar1 != (int *)0x0) && (*(int **)((int)this + 0x1f7c) != (int *)0x0)) {
      if ((*piVar1 == 0) || (piVar1[1] == 0)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      if ((*(int *)((int)this + 0x260) == 0) || (*(int *)((int)this + 0x264) == 0)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if (cVar4 != cVar5) {
        local_8 = (**(code **)(**(int **)((int)this + 0x1f7c) + 0x84))();
        local_c = (int)local_8 >> 0x1f;
        uVar6 = FUN_10023740((void *)((int)this + 0x1ec0),local_8,local_c);
        if (((uVar6 == *(uint *)((int)this + 0x1ec8)) ||
            (iVar2 = *(int *)((int)this + 0x1ec4), *(uint *)(iVar2 + uVar6 * 0x18) != local_8)) ||
           (*(uint *)(iVar2 + 4 + uVar6 * 0x18) != local_c)) {
          puVar7 = &DAT_00000006;
        }
        else {
          puVar7 = (undefined1 *)(iVar2 + uVar6 * 0x18 + 0x12);
        }
        *puVar7 = 1;
        *(undefined1 *)((int)this + 0x21d3) = 1;
      }
      if ((*(int *)(*(int *)((int)this + 0x1e20) + 0xc) != 0) != (*(int *)((int)this + 0x26c) != 0))
      {
        local_c = (**(code **)(**(int **)((int)this + 0x1f7c) + 0x84))();
        local_8 = (int)local_c >> 0x1f;
        uVar6 = FUN_10023740((void *)((int)this + 0x1ec0),local_c,local_8);
        if (((uVar6 == *(uint *)((int)this + 0x1ec8)) ||
            (iVar2 = *(int *)((int)this + 0x1ec4), *(uint *)(iVar2 + uVar6 * 0x18) != local_c)) ||
           (*(uint *)(iVar2 + 4 + uVar6 * 0x18) != local_8)) {
          puVar7 = &DAT_00000006;
        }
        else {
          puVar7 = (undefined1 *)(iVar2 + uVar6 * 0x18 + 0x12);
        }
        *puVar7 = 1;
        *(undefined1 *)((int)this + 0x21d3) = 1;
      }
    }
    uVar8 = FUN_10023f00((void *)(*(int *)((int)this + 0x1d54) + 0x15f0),&local_40);
    *(undefined4 *)((int)this + 0x1e20) = uVar8;
    *(undefined1 *)((int)this + 0x21d1) = 1;
    *(undefined1 *)((int)this + 0x1d49) = 1;
    if (*(char *)((int)this + 0x1d3b) != '\0') goto LAB_1001f5fa;
  }
  if (param_1 == '\0') {
    return;
  }
LAB_1001f5fa:
  if ((*(int *)((int)this + 0x1e20) == 0) || (*(int *)(*(int *)((int)this + 0x1e20) + 0xc) != 0)) {
    uVar6 = (uint)*(byte *)((*(char *)((int)this + 0x1905) != '\0') + 0x1840 + (int)this);
    iVar2 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
    if (uVar6 != *(uint *)(iVar2 + 0x61c)) {
      iVar3 = *(int *)(iVar2 + 0x628);
      *(int *)(iVar2 + 0x628) = iVar3 + 1;
      if (((iVar3 == 0) && (*(int *)(iVar2 + 0x8e0) != 0)) &&
         (uVar9 = 0, *(int *)(iVar2 + 0x958) != 0)) {
        do {
          (**(code **)**(undefined4 **)(*(int *)(iVar2 + 0x954) + uVar9 * 4))();
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(iVar2 + 0x958));
      }
      (**(code **)(**(int **)(iVar2 + 0x638) + 0x60))(*(int **)(iVar2 + 0x638),uVar6);
      *(uint *)(iVar2 + 0x61c) = uVar6;
    }
  }
  *(undefined1 *)((int)this + 0x1d3b) = 0;
  return;
}

